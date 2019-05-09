blackjack: blackjack.o Twenty1.o Die.o
	g++ -o blackjack blackjack.o Twenty1.o Die.o
Twenty1.o: Twenty1.cpp
	g++ -c Twenty1.cpp
Die.o: Die.cpp
	g++ -c Die.cpp
