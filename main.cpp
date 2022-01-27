// DICY_X :: A SIMPLE DICE ROLLER PROGRAM;

// AUTHOR :: Vera Lo.
// DATE :: 27/01/2022.
// TIME :: 04:14AM CET.

#include "main.h"

int main(int argc, char *argv[]) {

    // functions
    void usage();

    // seed the random number generator
    srand(time(NULL));

    int eyes = 6;
    int x; 

    int dice1;
    int dice2;
    int dice3;
    int dice4;
    int dice5;

    dice1 = rand() % eyes + 1;
    dice2 = rand() % eyes + 1;
    dice3 = rand() % eyes + 1;
    dice4 = rand() % eyes + 1;
    dice5 = rand() % eyes + 1;

    std::cout << "nr. of dices? [1-5]: ";
    cin >> x;

    if (x>5 || x<1) {
        usage();
    }

return 0;
}

void usage() {

exit(1);
};