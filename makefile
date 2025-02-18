clean: 
	rm *.o
	rm game
run: heap
	./heap
debug: heap
	gdb heap
git:
	git status
	git add .
