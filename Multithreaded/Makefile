CC=gcc
LIB=-pthread

project1: project1.out 
	./$<	

%.out : %.c
	$(CC) $(LIB) -o $@ $^

clean:
	rm -f *.out 
