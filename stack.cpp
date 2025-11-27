#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{
    stack <string> s;

    s.push("Mansi");
    s.push("Aryan");
    s.push("Kritika");

    cout << "top element " <<s.top() <<endl;
    s.pop();
    cout << "top element " <<s.top() <<endl;

    cout << "Size of stack " <<s.size()<<endl;

    cout << "Empty or not ?" <<s.empty () <<endl;

    return 0;
}