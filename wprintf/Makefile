all: wprintf

wprintf: wprintf.o
	gcc $^ -o $@

wprintf.o: 

clean:
	@echo "cleaning project"
	rm wprintf *.o *~
	@echo "clean completed"

.PHONY: clean
