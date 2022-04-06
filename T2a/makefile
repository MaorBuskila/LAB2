all: exec

exec: t2a.o
	@echo 'Building target: exec'
	@echo 'Invoking: C Linker'
	gcc -g -Wall -o exec  t2a.o
	@echo 'Finished building target: exec'
	@echo ' '

t2a.o: t2a.c
	gcc -g -Wall -c -o t2a.o t2a.c


.PHONY: clean
clean:
	rm -f *.o exec
