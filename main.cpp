#include <iostream>
#include "w1-w2_tut/TaskOneW1W2Runner.h"
#include "w1-w2_tut/TaskTwoW1W2Runner.h"
using namespace std;

// Main functions:
void introduce();
void runMenu();
// Main Program:
int main() {
    introduce();
    runMenu();
return 0;
}

// Function details:
void introduce() {
    cout << "Hello, welcome to my first project with C++," << endl
    << "Could you help me to build this project, Nhung, Nguyet and Jack ?" << endl
    << "--------------------------------------------------------------------" << endl;
}

void runMenu() {
    int choice;
    cout << "Choose option to run excercises:" << endl
         << "   Press 1 to run Task 1 in Week 1 / Week 2" << endl
         << "   Press 2 to run Task 2 in Week 1 / Week 2" << endl
         << "Choice:";
    cin >> choice;
    switch (choice) {
        case 1:
            TaskOneW1W2Runner::run();
            break;
        case 2:
            TaskTwoW1W2Runner::run();
            break;
    }
}
