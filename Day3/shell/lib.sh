#!/bin/bash

#book nammes
books=(a b c d e f )

#array to hold each book count
declare -A books_count

#declaring each book has 6 copies
books_count[0]=6
books_count[1]=6
books_count[2]=6
books_count[3]=6


while [ 1 ]
do
	echo "1.list  2.barrow  3.return 4.exit"
	echo -n "Enter option: "
	read option
	case "$option" in
		"1") count=0
			for i in ${books[@]}
			do
				if [ ${books_count[$count]} -gt 0 ]
				then
					echo $i
				fi
				count=$((count+1))
			done
			;;
		"2") echo -n "Enter book name: "
			read book
			s=0
			count=0
			for i in ${books[@]}
			do

				if [ "$book" = "$i" ] && [ ${books_count[$count]} -gt 0 ]
				then
					echo $i "book is barrowed"
					s=1
					books_count[$count]=$((books_count[$count]-1))
					break;
				fi
				count=$((count+1))
			done
			if [ $s -eq 0 ]
			then
				echo $read "book not found"
			fi
		
			;;
		"3") echo -n "Enter the book name: "
			read name
			count=0
			for i in ${books[@]}
			do
				if [ "$i" = "$name" ]
				then
					books_count[$count]=$((books_count[$count]+1))
					break;
				fi
				count=$((count+1))
			done
			echo $i "book is returned"

		
			;;
		"4") break;;
	esac
done


