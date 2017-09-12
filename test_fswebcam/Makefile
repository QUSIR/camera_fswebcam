Targe=test_fswebca
HomeDir=./
Objects=$(HomeDir)main.o

CC=g++
CFLAGS  = -g -O2 -DHAVE_CONFIG_H
LIB=-Wall -L./ -lfswebcam -lgd

main:$(Objects)
	$(CC) -lstdc++ $(Objects) $(LIB) -o $(Targe)

.cpp.o:
	${CC} ${CFLAGS} -c $< -o $@ 

clean:
	rm $(Objects)