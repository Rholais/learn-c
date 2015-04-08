all: rand

rand: rand.o
	gcc $^ -o $@

rand.o: 

clean:
	@echo "cleaning project"
	rm rand *.o *~
	@echo "clean completed"

.PHONY: clean
