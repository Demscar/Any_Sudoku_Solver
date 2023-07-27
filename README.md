# Sudoku Solver in C++

![](https://thumbs.gfycat.com/EntireUnawareAoudad-mobile.mp4)

This is a C++ program that solves Sudoku puzzles using recursion and backtracking. It provides two options: you can either input your own Sudoku puzzle (up to a maximum of 100 rows and columns) or use a default 9x9 Sudoku grid. Simply input '0' to indicate an empty space in the puzzle.

## Table of Contents

- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## Getting Started

### Prerequisites

To run this program, you need to have the following installed:

- C++ Compiler (e.g., g++ for Linux or MinGW for Windows)

### Installation

1. Clone the repository to your local machine:

```
git clone https://github.com/Demscar/Any_Sudoku_Solver.git
```

2. Compile the C++ program:

For Linux:
```
g++ AnySudokuSolver.cpp -o sudoku_solver
```

For Windows (using MinGW):
```
g++ AnySudokuSolver.cpp -o sudoku_solver.exe
```

## Usage

After compiling the program, run it from the terminal or command prompt:

For Linux:
```
./AnySudokuSolver
```

For Windows:
```
AnySudokuSolver.exe
```

Follow the on-screen instructions to choose the Sudoku option and enter the puzzle. The program will then display the solved Sudoku grid.

## Example

Input your Sudoku puzzle (use '0' for empty spaces):

```
Enter the Sudoku puzzle:
5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9
```

Output (Solved Sudoku):

```
Sudoku Solved:
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9
```

## Contributing

Contributions to this project are welcome! Feel free to open issues or submit pull requests for any bug fixes or enhancements.

1. Fork the repository.
2. Create your feature branch (`git checkout -b feature/YourFeature`).
3. Commit your changes (`git commit -m 'Add some feature'`).
4. Push to the branch (`git push origin feature/YourFeature`).
5. Open a pull request.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use and modify the code for your purposes.
