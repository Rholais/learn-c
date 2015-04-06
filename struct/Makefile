all: struct

struct: user-defined-types-and-structs.o
	gcc $^ -o $@

user-defined-types-and-structs.o: 

clean:
	@echo "cleaning project"
	rm struct *.o *~
	@echo "clean completed"

.PHONY: clean
