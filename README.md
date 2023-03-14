# SmartSudoku
Using the "backtracking method," this algorithm has been developed to solve Sudoku puzzles using C++. This method involves trying out different number combinations in the empty squares until a valid solution is found.
Welcome to the Sudoku Solver program - a tool designed to solve NxN Sudoku puzzles. This program is entirely written in C++ from scratch and utilizes advanced concepts such as backtracking and recursion to solve the puzzle efficiently.

To get started, you can download the sudoku.cpp file available in the Sudoku-Solver/ directory. After downloading the file, you can run it using any standard C++ compiler. If you encounter any errors or compatibility issues, please feel free to submit an issue on the git.

Once you have downloaded, compiled, and run the program, it will prompt you to input the Sudoku puzzle in two possible ways:

1)Manually input the values one-by-one while the program is running.
2)Write all the values in a file, separated by white spaces. The file can have any name or extension. When you run the program, it will prompt you to enter the file name (with extension) containing the Sudoku puzzle. You can refer to the sample_test.txt files in the same directory for more examples.

example 1:-
Input:-

9

8 0 0 0 0 7 3 0 0

0 0 0 0 0 0 0 0 0

4 0 0 5 0 0 0 0 1

0 0 0 0 0 2 0 0 6

1 0 0 0 0 3 0 0 8

6 8 0 0 7 0 0 0 5

7 0 0 0 0 4 9 0 0

0 2 6 0 0 0 0 0 0

0 0 4 0 2 0 1 0 0

Output:-

Total possible Ans:1

8 6 5 2 1 7 3 4 9 

2 9 1 4 3 6 5 8 7 

4 7 3 5 8 9 6 2 1 

5 3 9 8 4 2 7 1 6 

1 4 7 6 5 3 2 9 8 

6 8 2 9 7 1 4 3 5 

7 1 8 3 6 4 9 5 2 

3 2 6 1 9 5 8 7 4 

9 5 4 7 2 8 1 6 3


example 2:-
Input:-

4

0 0 0 3

0 4 0 0

0 0 3 2

0 0 0 0

Output:-

Total possible Ans:1

1 2 4 3 

3 4 2 1 

4 1 3 2 

2 3 1 4


This algorithm is designed to solve Sudoku puzzles using the "backtracking method". The process begins by identifying the first empty cell in the puzzle and generating a list of possible valid values that can be filled in that cell. The algorithm then iterates over this list and attempts to place the first value in the required cell. If this value is not valid, the algorithm backtracks to the previous cell and attempts the next value on the list until a valid value is found. This process is repeated until all cells in the puzzle have been filled with valid values, at which point the puzzle is considered solved.

We hope you find this program helpful in solving your Sudoku puzzles. Please let us know if you have any feedback or issues.
