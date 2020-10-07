build: battleship.c
	gcc -g -Wall -o battleship battleship.c -lncurses
run: battleship
	./battleship harta.txt
clean: battleship
	rm -f battleship	
