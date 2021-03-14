//
// Created by Phuoc on 14/03/2021.
//

#ifndef LEARNCPP_TASKTWOW1W2RUNNER_H
#define LEARNCPP_TASKTWOW1W2RUNNER_H

#include <bitset>
using namespace std;

class TaskTwoW1W2Runner {
public:
    static void run(){
        cout <<"First input -";
        string firstInput = getOne8LengthBinaryInput();
        cout <<"Second input -";
        string secondInput = getOne8LengthBinaryInput();
        cout << "First input decimal result:" << convertBinaryToDecimal(firstInput) << endl;
        cout << "Second input decimal result:" << convertBinaryToDecimal(secondInput) << endl;
    }
    static string getOne8LengthBinaryInput(){
        string binaryString;
        cout << "Type a binary number:"; cin >> binaryString;
        while (binaryString.length() > 8) {
            cout << "The length cannot be longer than 8, please type again:";
            cin >> binaryString;
        }
        // stoi()'s meaning: http://www.cplusplus.com/reference/string/stoi/
        // this line means: convert a string with base 2 to a decimal number ( integer )
        return binaryString;
    }
    static int convertBinaryToDecimal(const string& binaryString){
        return stoi(binaryString, nullptr, 2);
    }
};

#endif //LEARNCPP_TASKTWOW1W2RUNNER_H
