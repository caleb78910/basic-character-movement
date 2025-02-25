#include <iostream>
using namespace std;

int main() {
    int posX = 0, posY = 0; // Character position
    char input;

    cout << "Move using W A S D. Press Q to quit.\n";

    while (true) {
        cout << "> ";
        cin >> input;

        if (input == 'q' || input == 'Q') 
            break;

        switch (input) {
            case 'w': case 'W': posY++; break;
            case 's': case 'S': posY--; break;
            case 'a': case 'A': posX--; break;
            case 'd': case 'D': posX++; break;
            default:
                cout << "Huh? Try W, A, S, or D.\n";
                continue;
        }

        cout << "Now at: " << posX << ", " << posY << "\n";
    }

    cout << "Bye! Final position: " << posX << ", " << posY << "\n";
    return 0;
}
