#!/bin/bash
i=128
lang=""
#unzip -P 0 turtles128.zip 
#if [  ${?} -eq 0 ]
#then 
#	lang+="0"
#else 
#	unzip -P 1 turtles128.zip
#	lang+="1"
#fi
#echo $lang
while [ $i -gt 0 ]
do 
	unzip -P 0 turtles$i.zip 
	if [ ${?} -eq 0 ]
	then 
		lang+="0"
	else
		unzip -P 1 turtles$i.zip
		lang+="1"
	fi
        i=$(($i - 1))
done 
echo "$lang" 
echo "$lang" > output.txt

