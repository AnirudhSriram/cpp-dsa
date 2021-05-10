#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

void rotate(vector< vector<int> > &matrix)
{
    
}

int main()
{
    vector< vector<int> > x { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < x[i].size(); j++)
        {
            cout << x[i][j] << " ";
        }   
        cout << endl;
    }
    // rotate(x)

    // for(vector<vector<int>>::iterator it = x.begin(); it != x.end(); it++){
    //     cout << *it;
    // }
}