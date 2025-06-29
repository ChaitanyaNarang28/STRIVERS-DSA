#include<bits/stdc++.h>
using namespace std;

bool find(vector<vector<int>>& matrix, int target)
{
    int n=matrix.size();
    int m=matrix[0].size();
    int row=0;
    int col=n-1;

    while(row<n && col>=0)
    {
        if(matrix[row][col]==target) return true;
        else if(matrix[row][col]<target) row++;
        else col--;
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int target = 7;

    bool result = find(matrix, target);
    if (result) {
        cout << "Target found in the matrix" << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }

    return 0;
}