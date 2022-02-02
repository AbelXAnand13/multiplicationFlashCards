// Abel Anand

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int main() {
    vector<vector<int>> nums;
    
    for (int i = 1; i <= 12; i++) {
        nums[i-1].push_back(i);
        for (int j = 0; j < 12; j++) {
            nums[j].push_back(i+i);
        }
    }
    
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums[i].size(); j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
}
