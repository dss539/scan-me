scan-me: scan-me.o
    g++ -o scan-me main.o

main.o: main.cpp
    g++ -c main.cpp
