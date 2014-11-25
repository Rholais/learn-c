all: types

types: types.o
	gcc $^ -o $@

types.o: 

clean:
	@echo "cleaning project"
	rm types *.o *~
	@echo "clean completed"

.PHONY: clean
