all: func

func: func.o
	gcc $^ -o $@

func.o: 

clean:
	@echo "cleaning project"
	rm func *.o *~
	@echo "clean completed"

.PHONY: clean
