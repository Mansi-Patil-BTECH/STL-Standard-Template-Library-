// #include <iostream>
// #include <map>
// using namespace std;

// [1]
// ordered map

//  int main()
//  {
//      map <int , string> m1;

//     map<int,string>m2 = {{1,"Git"} , {2, "Hub"} , {3, "Repositories"}};

//     for (auto &p : m2)
//     {
//         cout << p.first << " " << p.second << endl;
//     }
//     return 0;
// }

//[2]
// inserting dictionary

// int main()
// {
//     map<int, string> m1;

//     map<int, string> m2 = {{1, "Git"}, {3, "Repositories"}};

//     m2.insert({2, "Hub"});

//     for (auto &p : m2)
//     {
//         cout << p.first << " " << p.second << endl;
//     }
//     return 0;
// }

//[3]
// accessing a element

// int main()
// {
//     map <int,string> m1;

//     map<int,string>m2 = {{1,"Git"} , {2, "Hub"} , {3, "Repositories"}};

//     //accessing
//     cout << m2[2] << " " << endl;
//     cout << m2.at(3) << " " << endl;

//     return 0;
// }

//[4]
// updating value

// int main()
// {

//     map<int, string> m = {{1, "Git"}, {2, "Hub"}, {3, "Repositories"}};

//     //update
//     m[0] = "Friends";
//     m.at(1) ="Name";

//     cout << m[0] << endl;
//     cout << m.at(1) << endl;

//     for (auto &p : m)
//     {
//         cout << p.first << " " << p.second << endl;
//     }

//     return 0;
// }

//[5]
// findinf elements

// int main()
// {
//     map<int, string> m = {{1, "Git"}, {2, "Hub"}, {3, "Repositories"}};
//     auto p = m.find(5);

//     if (p != m.end())
//     {
//         cout << p->first << " " << p->second;
//     }
//     else
//     {
//         cout << "Key not Found";
//     }
//     return 0;
// }

//[6]
// traversing element

// int main()
// {
//     map<int, string> m = {{1, "Git"}, {2, "Hub"}, {3, "Repositories"}};
//     // traversing using iteration
//     for (auto p = m.begin(); p != m.end(); p++)
//     {
//         cout << p->first << " " << p->second << endl;
//     }
//     return 0;
// }

//[7]
//deleting a element 

// int main()
// {
//     map <int , string > m = {{1, "Git"}, {2, "Hub"}, {3, "Repositories"}};
    
//     m.erase(1);         //deleting by key

//     // m.erase(m.begin());       //deleting by iteration
    
//     m.erase(--m.end());
//     for (auto x : m)
//     {
//         cout << x.first << " " <<x.second << endl;
//     }

//     return 0;
// }
