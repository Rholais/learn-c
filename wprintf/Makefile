all: $(main)

main := wprintf

$(main): $(main).o
	gcc $^ -o $@

$(main).o: 

clean:
	@echo "cleaning project"
	rm $(main) *.o *~
	@echo "clean completed"

.PHONY: clean
