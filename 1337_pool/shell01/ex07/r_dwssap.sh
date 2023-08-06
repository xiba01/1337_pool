#!/bin/sh

cat /etc/passwd | sed '/^#/d; n; d' | cut -d ':' -f 1 | rev | sort -r | sed -n "/^$(echo $FT_LINE1 | sed 's/[]\/$*.^|[]/\\&/g'),/ ,/^$(echo $FT_LINE2 | sed 's/[]\/$*.^|[]/\\&/g')/p" | paste -s -d ', ' - | sed 's/$/./'

