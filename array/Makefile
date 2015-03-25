all: array

array: array.o
	gcc $^ -o $@

array.o: 

clean:
	@echo "cleaning project"
	rm array *.o *~
	@echo "clean completed"

.PHONY: clean
