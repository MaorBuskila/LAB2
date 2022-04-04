all: hello

hello: count-words.o
	@echo 'Building target: hello'
	@echo 'Invoking: C Linker'
	gcc -g -Wall -o hello  count-words.o
	@echo 'Finished building target: hello'
	@echo ' '

count-words.o: count-words.c
	gcc -g -Wall -c -o count-words.o count-words.c


.PHONY: clean
clean:
	rm -f *.o hello