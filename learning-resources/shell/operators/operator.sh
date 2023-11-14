A=$[(2+3)*4]
echo A=$A
#--------
B=$(((2+3)*4))
echo B=$B
#--------
TEMP=`expr 2 + 3`
RES=`expr $TEMP \* 4`
echo result=$RES
#---
#---
SUM=$[$1+$2]
echo sum=$SUM
