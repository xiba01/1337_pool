#!/bin/sh

FT_NBR1='\'?"\"'\'
FT_NBR2='rcrdmddd'

lawl=$(echo "$FT_NBR1" | tr -d "'" | tr '\\\"?\!' '01234' | bc -l -q)
tani=$(echo "$FT_NBR2" | tr 'mrdoc' '01234' | bc -l -q)
sum=$(echo "$lawl + $tani" | bc -l -q | tr -d '\' | tr -d '\n' | tr '0123456789ABC' 'gtaio luSnemf' | sed 's/.../& /g' | sed 's/ $//')

echo "$sum"
