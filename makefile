my_main: my_main.o my_function.o
	g++ -o my_main  my_main.o my_function.o

my_main.o: my_main.cpp  my_function.h
	g++ -c my_main.cpp

my_function.o: my_function.h  my_function.cpp
	g++ -c my_function.cpp

clean:
	rm my_function.o my_main
	
my_goal_ls:
	ls -l
