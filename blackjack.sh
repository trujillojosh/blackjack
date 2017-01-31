clear
cd src > /dev/null
make re > /dev/null
make clean > /dev/null
cat intro.txt
read input
echo "$input"
if [ "$input" = "1" ] ; then
	clear
	cat credits.txt
else
	./blackjack
fi
