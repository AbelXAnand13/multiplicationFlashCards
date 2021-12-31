// Abel Anand

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int main() {
    vector<int> nums;
    for (int i = 1; i <= 12; i++) {
        nums.push_back(i);
    }
    // populating the vector
    
    srand(time(0));
    bool quit = false;
    int answer;
    int correct = 0;
    int wrong = 0;
    cout << "This is a multiplication quiz with the tables from 1 to 12 randomly\nWhen you are done, enter 0\n";
    
    while (!quit) {
    int num1 = (rand()%12)+1; //first number
    int num2 = (rand()%12)+1; //second number
        
    
        cout << nums.at(num1 - 1) << " x " << nums.at(num2 - 1) << endl;
        cin >> answer;
        
        if (nums.at(num1-1) * nums.at(num2-1) == answer) {
            correct ++;
        }
        else if (answer == 0) {
            cout << "Correct answers = " << correct << endl << "Wrong Answers = " << wrong << endl;
            quit = true;
        }
        else {
            wrong ++;
        }
    }
}
