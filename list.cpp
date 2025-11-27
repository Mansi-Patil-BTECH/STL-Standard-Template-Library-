#include <bits/stdc++.h>
#include <list>

using namespace std;

int main()
{
    list<int>l;

    cout << "Copy a new list Start " << endl;
    list<int> n(1);

    for ( int i: n)
    {
        cout << i << " " << endl;;
    }
    cout << "Copy a new list End " << endl;

    l.push_back(1);
    l.push_back(2);

    for( int i: l)
    {
        cout << i << " ";
    }
    cout << endl;
    

    //erase element
    l.erase(l.begin());
    cout << "After erase of element : " << endl;
    for (int i : l)
    {
        cout<< i << " ";
    }
    cout<< endl;

    list<int> z(4,100);

    for(int i : z)
    {
        cout << i << " ";
    }
    
    return 0;
}