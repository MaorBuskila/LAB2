all: hello

hello: t1c.o
	@echo 'Building target: hello'
	@echo 'Invoking: C Linker'
	gcc -g -Wall -o hello  t1c.o
	@echo 'Finished building target: hello'
	@echo ' '

t1c.o: t1c.c
	gcc -g -Wall -c -o t1c.o t1c.c


.PHONY: clean
clean:
	rm -f *.o hello
