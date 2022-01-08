#!/bin/bash

echo "Enter The Password:"  #enter the pw in user
read password               #read the pw

# check the condition for pw is correct or not
if      [[  $password == "naresh" ]]

then
	        echo -e "correct password\n"

	else
		        echo -e "Invalid Password\n"
fi
