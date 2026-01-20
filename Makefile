all: t2

t2: main.o Character.o battle.o
	g++ -o t2 main.o Character.o battle.o

main.o: main.cc Character.h battle.h
	g++ -c main.cc

Character.o: Character.cc Character.h
	g++ -c Character.cc

battle.o: battle.cc battle.h Character.h
	g++ -c battle.cc

clean:
	rm -f t2 *.o
