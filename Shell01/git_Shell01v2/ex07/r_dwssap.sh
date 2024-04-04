cat /etc/passwd | cut -d : -f 1 | sed -n 2~2p | rev | sort -r | tail -n +$FT_LINE1 | head -n $FT_LINE2-$FT_LiNE1 | tr "\n" ", " | sed 's/,$/./; s/,/, /g'
