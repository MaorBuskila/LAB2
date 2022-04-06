all: exec

exec: t1d.o
	@echo 'Building target: exec'
	@echo 'Invoking: C Linker'
	gcc -g -Wall -o exec  t1d.o
	@echo 'Finished building target: exec'
	@echo ' '

t1d.o: t1d.c
	gcc -g -Wall -c -o t1d.o t1d.c


.PHONY: clean
clean:
	rm -f *.o exec
