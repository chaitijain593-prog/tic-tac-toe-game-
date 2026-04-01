#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char currentmarker;
int currentplayer;

void drawboard()
{
    cout << "\n";
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "\n";
    cout << "---|---|---\n";
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "\n";
    cout << "---|---|---\n";
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";
    cout << "\n";
}

bool placemarker(int slot)
{
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O')
    {
        board[row][col] = currentmarker;
        return true;
    }
    else
    {
        return false;
    }
}

int winner()
{
    // Check Rows and Columns
    for (int i = 0; i < 3; i++)
    {
        // Horizontal check
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return currentplayer;
        // Vertical check
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return currentplayer;
    }
    // Diagonal checks
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return currentplayer;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return currentplayer;

    return 0;
}

void swapplayerandmarker()
{
    if (currentmarker == 'X')
        currentmarker = 'O';
    else
        currentmarker = 'X';

    if (currentplayer == 1)
        currentplayer = 2;
    else
        currentplayer = 1;
}

void game()
{
    cout << "Player 1, choose your marker (X or O): ";
    char markerp1;
    cin >> markerp1;

    currentplayer = 1;
    currentmarker = markerp1;

    drawboard();

    int playerwon = 0;

    for (int i = 0; i < 9; i++)
    {
        cout << "It's player " << currentplayer << "'s turn. Enter your slot: ";
        int slot;
        cin >> slot;

        if (slot < 1 || slot > 9)
        {
            cout << "Invalid slot! Try again.\n";
            i--;
            continue;
        }

        if (!placemarker(slot))
        {
            cout << "Slot occupied! Try again.\n";
            i--;
            continue;
        }

        drawboard();
        playerwon = winner();

        if (playerwon == 1)
        {
            cout << "Player 1 wins! Congratulations!\n";
            return;
        }
        if (playerwon == 2)
        {
            cout << "Player 2 wins! Congratulations!\n";
            return;
        }

        swapplayerandmarker();
    }

    if (playerwon == 0)
    {
        cout << "It's a tie!\n";
    }
}

int main()
{
    game();
    return 0;
}
