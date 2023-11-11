SUM=0
for((i=0;i<=$1;i++))
do
	SUM=$[$SUM+$i]
done
echo sum=$SUM
