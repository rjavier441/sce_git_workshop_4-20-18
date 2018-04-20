CC=g++
CFLAGS=-o
EXENAME=exe

default:
	$(CC) main.cpp engine/engine.cpp brakes/brakes.cpp power/power.cpp $(CFLAGS) $(EXENAME)

clean:
	rm -f $(EXENAME)
