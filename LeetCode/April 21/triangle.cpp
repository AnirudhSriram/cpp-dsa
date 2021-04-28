#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>

using namespace std;

int findSum(vector<vector<int>> & triangle, int level, int val){
    return 0;
}

int findLeastSum(vector<vector<int>> & triangle, int level, map<int,int> & m, int val){
    if(level >= triangle.size()) return 0;
    vector<int> currLevel = triangle[level];
    for(vector<int>::iterator it = currLevel.begin(); it != currLevel.end(); it++){
        if(m.find(*it) != m.end()){
            return m.at(*it);
        }
        else{
            m[*it] = findSum( triangle, level, val);
        }
    }
}

int minimumTotal(vector<vector<int>> &triangle)
{
    map<int, int> m;
    return findLeastSum(triangle, 0, m, triangle[0][0]);
}