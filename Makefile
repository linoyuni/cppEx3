# Variables
CXX = g++
CXXFLAGS = -Wall -std=c++11
DEPS = Board.h BuildingCard.h DevelopmentCard.h Dice.h Player.h Vertex.h Square.h
OBJ = Board.o BuildingCard.o DevelopmentCard.o Dice.o Player.o Vertex.o Square.o Demo.o

# Rule to create object files
%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Rule to link object files and create the executable
catan: $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to clean up generated files
.PHONY: clean
clean:
	rm -f *.o catan

# Additional rule to run the game
.PHONY: run
run: catan
	./catan
