#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int furthestBuilding(vector<int> &heights, int bricks, int ladders)
{
    int lad[ladders] ;
    for(unsigned int i = 0; i < heights.size() - 1; i++){
        cout << heights[i] << endl;
    }
    return 0;
}


int main(){
    vector<int> x{4,12,2,7,3,18,20,3,19};
    int ladders = 2;
    int bricks = 10;
    cout << furthestBuilding(x,bricks, ladders);
}