my_main: my_main.o  my_function.o  myFunction.o
	g++  -o my_main  my_main.o  my_function.o  myFunction.o

my_main.o: my_main.cpp  my_function.h  myFunction.h
	g++  -c my_main.cpp

my_function.o: my_function.h  my_function.cpp
	g++  -c my_function.cpp

myFunction.o: myFunction.h  my_function.h  myFunction.cpp
	g++  -c myFunction.cpp

clean:
	rm  my_function.o  myFunction.o  my_main
	
my_goal_ls:
	ls -l
