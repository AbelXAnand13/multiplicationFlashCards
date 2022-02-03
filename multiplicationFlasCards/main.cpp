// Abel Anand

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int main() {
    vector<vector<int>> nums;
    srand(time(0));
    for (int i = 1; i <= 12; i++) {
        vector<int> temp;
        for (int j = 1; j <= 12; j++) {
            temp.push_back(j*i);
        }
        nums.push_back(temp);
    }
    bool quit = false;
    int correct = 0;
    int wrong = 0;
    cout << "Just enter 0 when you done\n";
    while (!quit) {
        int randRow = rand() % 12;
        //num 1
        int randCol = rand() % 12;
        //num 2
        int ans;
        cout << nums[0][randCol] << " x " << nums[randRow][0] << endl;
        cin >> ans;
        if (ans == (nums[0][randCol] * nums[randRow][0])) {
            correct++;
        }
        else if (ans == 0) {
            quit = true;
            cout << "Correct = " << correct << "\nWrong = " << wrong << endl;
        }
        else {
            wrong++;
        }
    }
    
}
