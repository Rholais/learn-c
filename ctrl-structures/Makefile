all: ctrl

ctrl: ctrl-structures.o
	gcc $^ -o $@

ctrl-structures.o: 

clean:
	@echo "cleaning project"
	rm ctrl *.o *~
	@echo "clean completed"

.PHONY: clean
