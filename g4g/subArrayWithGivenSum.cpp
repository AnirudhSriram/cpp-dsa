#include <iostream>
#include <vector>

using namespace std;

vector<int> subarraySum(int arr[], int n, int s)
{
    int sum = *(arr);
    int a = 0;
    int b = 0;
    int temp = 0;
    for (int i = 1; i < n; i++)
    {
        if (sum + arr[i] <= s)
        {
            b = i;
            sum += arr[i];

            if(sum == s){
                break;
            }
        }
        else
        {
            temp = sum + arr[i];
            int j = a;
            b += 1;
            while (j < b && temp > s)
            {
                temp = temp - arr[j];
                j += 1;
                a = j;
            }
            if (temp == s)
            {
                sum = temp;
                break;
            }
            else
            {
                sum = temp;
            }
        }
        
    }
    vector<int> r;
    if (sum != s)
    {
        r.push_back(-1);
    }
    else
    {
        r.push_back(a + 1);
        r.push_back(b + 1);
    }

    return r;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> g1 = subarraySum(arr, 10, 15);



}
