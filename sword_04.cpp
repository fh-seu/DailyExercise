//二维数组中的查找 - 分治法
#include<iostream>
#include<vector>
 
using namespace std;
 
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int rows = array.size();
        int cols = array[0].size();
         
        bool isFind = false;
         
        if (!array.empty() && rows > 0 && cols > 0)
        {
            int row = 0;
            int col = cols - 1;
            while (isFind == false && row < rows && col >= 0)
            {
                if (array[row][col] == target)
                    isFind = true;
                else if (array[row][col] > target)
                    --col;
                else
                    ++row;
            }
        }
         
        return isFind;
    }
};
