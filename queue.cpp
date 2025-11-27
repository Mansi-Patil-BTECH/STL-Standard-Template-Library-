#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{
    queue <int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "the first element is = " << q.front() << endl;
    q.pop();

    cout << "the first element after deletion = " << q.front() << endl;

    cout <<" ";
    cout << endl;

    return 0;
}