//
// Created by phuoc on 14/03/2021.
//
#include <iostream>

#ifndef LEARNCPP_TASKONERUNNER_H
#define LEARNCPP_TASKONERUNNER_H

using namespace std;

class TaskOneW1W2Runner {
    public:
        static void run(){
            int hexadecimal_number;
            cout << "Run task 1 of W1/W2 exercises" << endl
                 << "Type a hexadecimal number from 0x00 to 0xFF:";

            // This line means: convert the input from hexadecimal to decimal
            cin >> hex >> hexadecimal_number;

            // 0xFF is 255 in decimal so we will check if the input will be between 0 and 255
            try {
                if (hexadecimal_number > 0 && hexadecimal_number <= 255) {
                    cout << "Your value is valid" << endl;
                }
                else {
                    cout << "Your value is invalid, it will be rejected" << endl;
                }
                cout << "The number is:" << hexadecimal_number << endl;
            }
            catch (...) {
                cout << "Your input is not hexadecimal";
            }
        }
};


#endif //LEARNCPP_TASKONERUNNER_H
