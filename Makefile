q2.o: q2.c
	gcc q2.c -o output


clean:
	rm -f *.o output
	clear