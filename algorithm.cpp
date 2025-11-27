#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(6);
    v.push_back(8);

    for (auto x : v)
    {
        cout << x << " ";
    }

    cout << endl;

    // 1> Binary Search

    cout << "Binary Search " << endl;
    cout << "=============="<<endl;
    cout << "Binary Search = " << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "Lower Bound = " << lower_bound(v.begin(), v.end(), 8) - v.begin() << endl;
    cout << "Upper Bound = " << upper_bound(v.begin(), v.end(), 1) - v.begin() << endl;
    cout << "=============="<<endl;

    // 2> Maximum / Minimum

    int a = 12;
    int b = 7;

    cout << "Maximum / Minimum" <<endl;
    cout << "=============="<<endl;
    cout << "Maximum value= " << max(a,b) << endl;
    cout << "Minimum value= " << min(a,b) << endl;
    cout << "=============="<<endl;



    // 3> Swap

    int c = 10;
    int d = 20;

    cout <<"Swapping " << endl;
    cout << "============"<<endl;
    swap(c,d);
    cout << "first value = " << c << endl;
    cout << "second value = " << d << endl;

    //4> Reverse
    cout << "Reverse"<< endl;
    cout << "============"<<endl;
    string str ="Mansi Patil";
    reverse(str.begin(), str.end());
    cout << str << endl;
    cout << "============"<<endl;

    //Rotate

    rotate(v.begin() , v.begin() + 1 , v.end());

    cout << "Rotation " << endl;
    cout << "==============="<<endl;
    cout << "After rotate = " << endl;
    for(auto r : v)
        cout << r << " " << endl;
        cout << "==============="<<endl;
        cout << endl;
    
    return 0;
}