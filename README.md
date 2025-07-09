# tic-tac-toe-game
Tic-Tac-Toe Console Game in C++

Welcome to the timeless arena of X's and O's—Tic-Tac-Toe, reimagined in elegant and straightforward C++ code. This project features a terminal-based, two-player game that challenges your wits, strategy, and patience in a face-off against a friend. No AI involvement—just a pure human versus human clash.

Features
- A 3x3 grid displayed in the console
- Two players: 'X' and 'O' alternate turns
- Input validation to prevent moves in occupied or invalid spots
- Real-time board updates following each move
- Winner detection across rows, columns, and diagonals
- Draw detection when there are no empty spaces left
- Clear, user-friendly prompts and error messages

How to Run
1. Clone the repository or copy the `tic_tac_toe.cpp` file.
2. Compile it using your preferred C++ compiler:
   ```bash
   g++ tic_tac_toe.cpp -o tic_tac_toe
   ```
3. Run the executable:
   ```bash
   ./tic_tac_toe
   ```
4. Follow the on-screen instructions to enter row and column numbers (0 to 2).

Code Breakdown
- `Board()`: Displays the current state of the board with clear separators.
- `checkWinner()`: Evaluates all rows, columns, and diagonals to identify a winner.
- `isDraw()`: Determines if the board is full without any winner.
- `Main()`: Manages the game loop, player input, validation, turn switching, and announces the game results.

Why This Matters
Engaging with this project enhances your understanding of:
- Multidimensional arrays for board representation
- Conditional logic and loops for controlling game flow
- Input validation, which is crucial for robust software design
- Breaking problems into modular functions
- Fundamental concepts of turn-based game programming

This simple game is your starting point to grasp more complex software challenges. Master this, and you’ll be well-prepared to tackle AI, GUI design, or networking in the future. 
