all: exec

exec: t2b.o
	@echo 'Building target: exec'
	@echo 'Invoking: C Linker'
	gcc -g -Wall -o exec  t2b.o
	@echo 'Finished building target: exec'
	@echo ' '

t2b.o: t2b.c
	gcc -g -Wall -c -o t2b.o t2b.c


.PHONY: clean
clean:
	rm -f *.o exec
