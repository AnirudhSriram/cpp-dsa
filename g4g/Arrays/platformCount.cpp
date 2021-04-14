
#include <iostream>
#include <iterator>
#include <map>
#include <stdio.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
    map<int, char> m;
    for (int i = 0; i < n; i++)
    {
        m.insert(pair<int, char>(arr[i], 'a'));
    }
    for (int i = 0; i < n; i++)
    {
        m.insert(pair<int, char>(dep[i], 'd'));
    }

    int maxCount = 0;
    int count = 0;
    for(auto i : m){
        if(i.second == 'a'){
            count++;
        }else{
            count--;
        }
        if(count > maxCount){
            maxCount = count;
        }
    }
    return maxCount;
}

int main()
{

    int n = 6;
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};

    cout << findPlatform(arr,dep,n);
}