#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    vector<int>::size_type size = nums.size();

    for (unsigned i = 0; i < nums.size(); i++)
        nums.at(nums[i] - 1) = -1;

    vector<int> out;
    for (unsigned i = 0; i < size; i++)
    {
        if (nums.at(i) != 1)
        {
            out.push_back(i + 1);
        }
    }

    return out;
}

int main()
{
    vector<int> a[8];
}