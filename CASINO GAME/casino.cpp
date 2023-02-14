#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class CasinoGame {
    private:
        int answer;
        int guess;
        int numGuesses;
        bool isWin;
    
    public:
        CasinoGame() {
            srand(time(NULL));
            answer = rand() % 100 + 1;
            guess = 0;
            numGuesses = 0;
            isWin = false;
        }

        void play() {
            while (numGuesses < 5 && !isWin) {
                cout << "Enter your guess (1-100): ";
                cin >> guess;
                numGuesses++;
                if (guess == answer) {
                    isWin = true;
                    cout << "You win!" << endl;
                } else if (guess < answer) {
                    cout << "Too low!" << endl;
                } else {
                    cout << "Too high!" << endl;
                }
            }
            if (!isWin) {
                cout << "You lose. The answer was " << answer << endl;
            }
        }
};

int main() {
    CasinoGame game;
    game.play();
    return 0;
}



/*In this implementation, the CasinoGame class encapsulates the logic and state of the game, including the answer, the current guess, the number of guesses made, and whether the player has won. The constructor initializes the game by generating a random answer, and the play method prompts the player for guesses and provides feedback until the player either guesses correctly or runs out of guesses. Finally, the main function creates an instance of CasinoGame and calls the play method to start the game.*/