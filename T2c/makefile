all: exec

exec: t2c.o
	@echo 'Building target: exec'
	@echo 'Invoking: C Linker'
	gcc -g -Wall -o exec  t2c.o
	@echo 'Finished building target: exec'
	@echo ' '

t2c.o: t2c.c
	gcc -g -Wall -c -o t2c.o t2c.c


.PHONY: clean
clean:
	rm -f *.o exec
