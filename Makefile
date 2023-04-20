EXEC = main 
CC = gcc 
#SRC = All .c files 
SRC = $(wildcard *.c) 
#OBJ = All .o files 
OBJ = $(SRC:.c=.o) 

all : $(EXEC) 

%.o : %.c 
	$(CC) -o $@ -c $<  

$(EXEC) : $(OBJ) 
	$(CC) -o $@ $^ 

#Create an image of the graph 

vis : 
	cat graph.txt | dot -Tpng > vis.png

#clean all .o files 

clean : 
	rm *.o 

# $^ : All dependencies 
# $< : The first dependency