all: fp

fp: func-ptr.o
	gcc $^ -o $@

func-ptr.o: 

clean:
	@echo "cleaning project"
	rm fp *.o *~
	@echo "clean completed"

.PHONY: clean
