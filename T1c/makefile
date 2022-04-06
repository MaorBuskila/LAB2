all: exec

exec: t1c.o
	@echo 'Building target: exec'
	@echo 'Invoking: C Linker'
	gcc -g -Wall -o hello  t1c.o
	@echo 'Finished building target: exec'
	@echo ' '

t1c.o: t1c.c
	gcc -g -Wall -c -o t1c.o t1c.c


.PHONY: clean
clean:
	rm -f *.o exec
