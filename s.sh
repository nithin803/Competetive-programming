for(i =1;i<=100;i++);do
	echo $i
	./gen $i > input.txt
	./c < input.txt > output.txt
	./brute <intput.txt > output2.txt
	diff -w output2 output3 || break
done