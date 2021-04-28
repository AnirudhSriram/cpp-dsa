#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

int thirdMax(vector<int> &nums)
{
    if (nums.size() == 1)
    {
        return nums[0];
    }
    if (nums.size() == 2)
    {
        return nums[0] > nums[1] ? nums[0] : nums[1];
    }

    int small = 0, mid = 0, max = 0;
    bool s = false, m = false, ma = false;

    for (vector<int>::iterator i = nums.begin(); i != nums.end(); i++)
    {
        if (*i != max && *i != mid && *i != small)
        {
            if (!ma || *i > max)
            {
                small = mid;
                mid = max;
                max = *i;
                s = m = ma = true;
            }
            else if (!m || *i > mid)
            {
                s = m = true;
                small = mid;
                mid = *i;
            }
            else if (!s || *i > small)
            {
                s = true;
                small = *i;
            }
        }
    }

    return small ? small : max;
};

int main()
{
    // [3,3,4,3,4,3,0,3,3]
    vector<int> x;
    x.push_back(3);
    x.push_back(3);
    x.push_back(4);
    x.push_back(3);
    x.push_back(4);
    x.push_back(3);
    x.push_back(0);
    x.push_back(4);
    x.push_back(3);

    cout << thirdMax(x);
}