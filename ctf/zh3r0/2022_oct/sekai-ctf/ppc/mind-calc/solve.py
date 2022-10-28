from websocket import create_connection
import os
import speech_recognition as sr
from string import ascii_letters

ws=create_connection("ws://mind-calculator.ctf.sekai.team/echo")
ws.send("start")
ws.recv()
dataset = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'

def get_data(ws):
    for _ in range(120):
        a=[]
        b=b""
        a.append(ws.recv_frame().data)
        while len(a[-1])==720:
            a.append(ws.recv_frame().data)
            b+=a[-1]
        ws.recv()
        with open("aaaa.mp3","wb") as f:
            f.write(b)
        filename ="song.wav"
        os.system("rm "+filename)
        os.system("ffmpeg -i aaaa.mp3 -filter:a 'atempo=0.8' -acodec pcm_s16le -ar 24000 -ac 1 "+filename+" 2>/dev/null")
        r = sr.Recognizer()
        with sr.AudioFile(filename) as source:
            audio_data = r.record(source)
            text = r.recognize_google(audio_data)
        print(text)
        text=text.replace("negative","-").replace("what is ","").replace("plus","+").replace("minus","-").replace("class","+")
        # for i in ascii_letters:
        #     text=text.replace(i,"+")
        print(text)
        lest = []
        for word in text.strip().split(" "):
            check = True
            for char in word:
                if char in dataset:
                    check = False
                    break

            if check == False:
                lest.append('+')
            else:
                lest.append(word)

        print(lest)
        x = eval("".join(i for i in lest))
        print(x)
        ws.send(str(x))
        print(ws.recv())

print(get_data(ws))