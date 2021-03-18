#include <iostream>
#include "w1-w2_tut/TaskOneW1W2Runner.h"
#include "w1-w2_tut/TaskTwoW1W2Runner.h"
#include <cstdlib>

using namespace std;

// Main functions:
void introduce();
void runMenu(int argc, char *argv[]);
void runExercise3(int argc, char *argv[]);

// Main Program:
int main(int argc, char *argv[]) {
    introduce();
    runMenu(argc,argv);
return 0;
}

// Function details:
void introduce() {
    cout << "Hello, welcome to my first project with C++," << endl
    << "Could you help me to build this project, Nhung, Nguyet and Jack ?" << endl
    << "--------------------------------------------------------------------" << endl;
}

void runMenu(int argc, char *argv[]) {
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
        case 3:
            runExercise3(argc,argv);
            break;
    }
    cout << "Thank you for using this, have a nice day !!";
}

bool is_num(string str) {
    int i = 0;
    (str[i] == '-' || str[i] == '+')? (i ++) : (i = 0);
    while (str[i] != '\0') {
        if (!isdigit(str[i])) {
            return false;
        }
        i ++;
    }
    return true;
}
bool check_arg(int argc, char **argv) {
    if (argc <= 1 || argc > 11) {
        cout << "Invalid number of args \n";
        return false;
    }

    //check if inputs are integer
    for (int i = 1; i < argc; i ++) {
        if (!is_num(argv[i])) {
            cout << "There is at least 1 input which is not valid integer \n";
            return false;
        }
    }
    return true;
}
void cre_int_arr(int argc, int *parr, char **argv) {
    for (int i = 0; i < (argc - 1); i ++) {
        *(parr + i) = stoi(argv[i + 1]);
    }
}
void out_arr(int argc, const int *parr) {
    cout <<"The array: \n";
    for (int i = 0; i < argc - 1; i ++) {
        cout << *(parr + i) << "\t";
    }
}
void runExercise3(int argc, char *argv[]) {
    int *parr = new int[argc];
    if (!check_arg(argc, argv))
        exit(1);
    cre_int_arr(argc, parr, argv);
    out_arr(argc, parr);
    free(parr);
}
