#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

/*//in ascending order

int main()
{
    vector<int>v = { 5,4,3,7,2,6,1};
    sort(v.begin(), v.end());

    for (int x :v)
    {
        cout << x << " ";
    }

    // sort(arr, arr + n); //for default ascending order

    cout << endl;
    return 0;
}*/

/*// sorting of specific range
int main()
{
    int arr[] = {10, 9, 4, 6, 3, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr + 1, arr + 6);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}*/

/*// sort in descending order

int main()
{
    int arr[5] = {5, 7, 9, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size, greater<int>());

    for (int x : arr)
        cout << x <<" ";
    cout << endl;

    return 0;
}*/


class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int l = 0;
        int maxlength = 0;
        set<char> c;

        for (int i = 0; i < s.length(); i++)
        {
            while (c.find(s[i]) != c.end())
            {
                c.erase(s[l]);
                l++;
            }

            c.insert(s[i]);

            maxlength = max(maxlength, i - l + 1);
        }

        return maxlength;
    }
};
