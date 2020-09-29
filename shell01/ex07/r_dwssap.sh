#!/bin/bash
cat /etc/passwd | sed '/#/d' | awk 'NR % 2 == 0' | rev | sort -r | cut -d ':' -f7 | awk -v FT_LINE1=15 -v FT_LINE2=25 'NR >=FT_LINE1 && NR <= FT_LINE2'| tr -s '\n' ',' | sed 's/, */, /g' | sed 's/,.$/./' | tr -d '\n'
