all: exec

exec: menu.o
	@echo 'Building target: exec'
	@echo 'Invoking: C Linker'
	gcc -g -Wall -o exec  menu.o
	@echo 'Finished building target: exec'
	@echo ' '

menu.o: menu.c
	gcc -g -Wall -c -o menu.o menu.c


.PHONY: clean
clean:
	rm -f *.o exec
