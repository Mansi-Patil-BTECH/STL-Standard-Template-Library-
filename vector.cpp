#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    vector<int> a(5, 1);

    // printing a

    cout << endl;

    for (int i : a)
    {
        cout << i << " ";
    }

    cout << endl;

    // How to copy one vector element to another

    vector<int> last(a);

    cout << endl;

    for (int i : last)
    {
        cout << i << " ";
    }

    cout << endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << "Capacity => " << v.capacity() << endl;
    cout << "Size => " << v.size() << endl;

    cout << "The Element at 2nd Index -> " << v.at(2) << endl;

    cout << "Front ->" << v.front() << endl;
    cout << "Back ->" << v.back() << endl;

    cout << "Before Pop Back" << endl;
    for (int i : v)
        cout << i << " ";
    cout << endl;

    v.pop_back();

    cout << "After Pop Back" << endl;
    for (int i : v)
        cout << i << " ";
    cout << endl;

    // Clear or Empty a Vector but capacity remain same

    cout << "Before Clear Size ->" << v.size() << endl;
    v.clear();
    cout << "After Clear Size ->" << v.size() << endl;

    return 0;
}