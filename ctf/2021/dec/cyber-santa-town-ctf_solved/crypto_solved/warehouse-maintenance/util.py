import mysql.connector

def executeScript(script):
  mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    password=""
  )

  mycursor = mydb.cursor()
  lines = script.split(b'\n')

  resp = ''
  for line in lines:
    print(line)
    line = str(line)[2:-1]
    mycursor.execute(line)
    for x in mycursor:

      resp +=str(x)
  mydb.close()
  return resp
