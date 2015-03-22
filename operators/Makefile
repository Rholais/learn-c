all: operators

operators: operators.o
	gcc $^ -o $@

operators.o: 

clean:
	@echo "cleaning project"
	rm operators *.o *~
	@echo "clean completed"

.PHONY: clean
