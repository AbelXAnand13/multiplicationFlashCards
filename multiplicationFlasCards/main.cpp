// Abel Anand

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int main() {
    vector<vector<int>> nums;

    for (int i = 1; i <= 12; i++) {
        vector<int> temp;
        for (int j = 1; j <= 12; j++) {
            temp.push_back(j*i);
        }
        nums.push_back(temp);
    }
    
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums[i].size(); j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
}
