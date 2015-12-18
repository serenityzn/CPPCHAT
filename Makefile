main: main.c
	gcc -o server main.c
debug: main.c
	gcc -g main.c -o server
clean:
	rm -rf server 
