all: hello

hello: hello.o
	gcc $^ -o $@

hello.o: 

clean:
	@echo "cleaning project"
	rm hello *.o *~
	@echo "clean completed"

.PHONY: clean
