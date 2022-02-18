// DICY_X :: A SIMPLE DICE ROLLER PROGRAM;

// AUTHOR :: Vera Lo.
// DATE :: 27/01/2022.
// TIME :: 04:14AM CET.

#include "main.h"

#define PROGRAMNAME "Dicy-x"
#define VERSION "v.0.0-1a"

int main(int argc, char *argv[]) {

    // functions
    void usage();

    if (argc>1) {
        std::cout << "Error. You've entered too many parameters!" << std::endl;
        std::cout << std::endl;
        usage();
        exit(1);
    }

    // seed the random number generator
    srand(time(NULL));

    // variables
    int eyes=6;
    int tosses=1;
    int x; 
    int y;
    int z;
    
    // number of dices
    std::cout << "nr. of dices?: ";

    cin >> x;
    
    // nr. of eyes
    std::cout << "nr. of eyes on the dice?: ";

    cin >> y;
    eyes=y;

    // tosses
    std::cout << "How many tosses?: ";
    cin >> z;
    tosses = z;

    int counter = 0;
    const int xl = x;
    int dice[xl];

    const int numbersLimit = tosses * xl;
    int numbers[numbersLimit];

    for (int i=0; i<tosses; i++) {
        std::cout << std::endl;
        std::cout << "--- Round (" << (i+1) << ") ---" << std::endl;
        std::cout << std::endl;
        
        for (int j=0; j<xl; j++) {
            dice[j] = rand() % eyes + 1;
            if (j%3==0) {
                sleep(1);
            }
            numbers[counter] = dice[j];
            counter++;

            std::cout << std::setw(10) << "- Dice (" << (j+1) << ") --> " << dice[j] << std::endl;
        }
    }

    int counter2=0;
    int roundCount=1;

    std::cout << std::endl << "Here are all your numbers:" << std::endl;

    for (int i=0; i<tosses; i++) {
        std::cout << std::endl << "Round (" << roundCount++ << ") -> { ";
        for (int j=0; j<xl; j++) {
            if (counter2 < numbersLimit) {
                std::cout << numbers[counter2++];
            }
            if (j < numbersLimit && (j<(numbersLimit/tosses) - 1)) {
                std::cout << ",";
            }
        }
        std::cout << " }. ";
    }
    // std::cout << "\b." << std::endl;
return 0;
}

void usage() {
    void title();
    std::cout << std::endl;
    title();
    std::cout << "No arguments for the program parameters, please!" << std::endl;
    std::cout << std::endl;
exit(1);
};

void title() {
    std::cout << PROGRAMNAME << " " << VERSION << std::endl;
    std::cout << "This program was made for Lotto! (Among other things)." << std::endl;
    std::cout << std::endl;
}
// eof