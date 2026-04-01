 # 🕹️ Tic-Tac-Toe (C++)

A lightweight, interactive command-line implementation of the classic Tic-Tac-Toe game built using **C++**. This project demonstrates fundamental programming concepts such as 2D arrays, functions, control flow, and game state management.

---

##  Features

* **Two-Player Gameplay:** Play against a friend locally in the terminal.
* **Custom Marker Selection:** Player 1 can choose between 'X' and 'O'.
* **Input Validation:** Prevents players from choosing occupied slots or entering invalid coordinates.
* **Real-time Board Updates:** The board redraws after every valid move.
* **Win/Tie Detection:** Automatically detects horizontal, vertical, and diagonal wins, as well as draw scenarios.

---

##  Technical Implementation

The game logic is built using several core C++ architectural patterns:

### 1. Grid Logic
A **2D Array** (a 3x3 character array) represents the game board. To keep the user interface simple, the game uses **Mathematical Mapping** to convert a single integer slot (1-9) into specific `[row][column]` coordinates:

* $row = (slot - 1) / 3$
* $column = (slot - 1) \% 3$

### 2. Modular Programming
The code is divided into distinct functions for better readability and maintenance:
* `drawboard()`: Handles UI rendering.
* `placemarker()`: Validates and updates the board state.
* `winner()`: Contains the conditional logic to check for 8 possible winning combinations.
* `swapplayerandmarker()`: Manages turn-based mechanics.

---

##  How to Run

Follow these steps to set up the game on your local machine:

### **1. Clone the repository**
*Open your terminal and run:*
```bash
git clone [https://github.com/chaitijain593-prog/tic-tac-toe-cpp.git]
g++ tic_tac_toe.cpp -o tictactoe
./tictactoe
```
---

##  How to Play
* `Grid Layout`: The board slots are numbered 1 to 9.
* `Marker Selection`: Player 1 chooses their marker ('X' or 'O').
* `Turns`: Players take turns entering the slot number where they wish to place their marker.
* `Victory Condition`: The first player to get three markers in a row (horizontally, vertically, or diagonally) wins!
