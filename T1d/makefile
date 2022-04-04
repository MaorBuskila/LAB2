all: hello

hello: t1d.o
	@echo 'Building target: hello'
	@echo 'Invoking: C Linker'
	gcc -g -Wall -o hello  t1d.o
	@echo 'Finished building target: hello'
	@echo ' '

t1d.o: t1d.c
	gcc -g -Wall -c -o t1d.o t1d.c


.PHONY: clean
clean:
	rm -f *.o hello
