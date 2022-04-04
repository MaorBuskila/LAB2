all: hello

hello: addresses.o
	@echo 'Building target: hello'
	@echo 'Invoking: C Linker'
	gcc -g -Wall -o hello  addresses.o
	@echo 'Finished building target: hello'
	@echo ' '

addresses.o: addresses.c
	gcc -g -Wall -c -o addresses.o addresses.c


.PHONY: clean
clean:
	rm -f *.o hello
