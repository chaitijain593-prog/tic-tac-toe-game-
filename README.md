 # 🕹️ Tic-Tac-Toe (C++)

I built this as a way to get more comfortable with 2D arrays and game logic in C++. It's a simple terminal-based Tic-Tac-Toe — nothing fancy, but it works well and taught me a lot. This project demonstrates fundamental programming concepts such as 2D arrays, functions, control flow, and game state management.

---
##  Why i built this?
Wanted a fun little project to put on my GitHub while I'm still in college. Tic-Tac-Toe felt like the right size — not too simple, but not overwhelming either. Hit a couple of small bugs along the way but got there.
The trickiest part was handling the win detection cleanly without repeating code. I ended up checking all 8 combinations in a single function which kept things readable.

##  Features

- Two players on the same machine
- Player 1 picks their marker at the start (X or O)
- Won't let you pick an already taken slot
- Board updates after every move
- Detects wins, losses and draws automatically

---

##  Technical Implementation

Here's how the code is structured under the hood:

### 1. Grid Logic
A 2D Array (a 3x3 character array) represents the game board. To keep the user interface simple, the game uses Mathematical Mapping to convert a single integer slot (1-9) into specific [row][column] coordinates:

 $row = (slot - 1) / 3$ and column = (slot - 1) \% 3

### 2. Modular Programming
The code is divided into distinct functions for better readability and maintenance:
drawboard(): Handles UI rendering.
placemarker(): Validates and updates the board state.
winner(): Contains the conditional logic to check for 8 possible winning combinations.
swapplayerandmarker(): Manages turn-based mechanics.

---

##  How to Run

Clone the repo and compile — that's it, no dependencies needed.

### **1. Clone the repository**
*Open your terminal and run:*
```bash
git clone [https://github.com/chaitijain593-prog/tic-tac-toe-cpp.git]
g++ tic_tac_toe.cpp -o tictactoe
./tictactoe
```
---

##  How to Play
Slots are numbered 1–9.

`````
 1 | 2 | 3
-----------
 4 | 5 | 6
-----------
 7 | 8 | 9
`````

Player 1 picks X or O at the start. 
Take turns entering a slot number — first to get three in a row wins.
 

