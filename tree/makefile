CC=g++
CFLAGS=-I.

DEPDS= tree_api.h
OBJ= tree_algo.o tree_api.o

%.o: %.c $(DEPDS)
	$(CC) -c -o $@ $< $(CFLAGS) 

tree_algo: $(OBJ)  
	g++ -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o
