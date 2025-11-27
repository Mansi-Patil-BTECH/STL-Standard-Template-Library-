#include <bits/stdc++.h>
#include<deque>
using namespace std;

int main()
{
    deque <int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i:d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "First Index element = " << d.at(1)<< endl;

    cout << "Front element = " <<d.front() << endl;
    cout << "End element = " <<d.back() << endl;

    cout << "Is the dqueue empty? " <<d.empty() << endl;

    cout << "Erase element = " << d.size() << endl;

    d.erase(d.begin(), d.begin()+ 1);
    
    cout << "After erase = " << d.size() << endl;

    return 0;
}

