all: exec

exec: addresses.o
	@echo 'Building target: exec'
	@echo 'Invoking: C Linker'
	gcc -g -Wall -o hello  addresses.o
	@echo 'Finished building target: exec'
	@echo ' '

addresses.o: addresses.c
	gcc -g -Wall -c -o addresses.o addresses.c


.PHONY: clean
clean:
	rm -f *.o exec
