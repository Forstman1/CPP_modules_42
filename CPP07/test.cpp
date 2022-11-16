

#include <vector>
#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    set<int> students;
    vector<int> friends;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        students.insert(number);
    }
    for (int i = 0; i < m; i++)
    {
        int number;
        cin >> number;
        friends.push_back(number);
    }
    for (vector<int>::iterator it=friends.begin(); it!=friends.end(); it++)
	{
        set<int>::iterator ptr;
        ptr = find(students.begin(), students.end(), int(*it));
        if (ptr != students.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

// 14 -1 24 38 11 2 25 4 334

// #include <vector>
// #include <iostream>
// #include <bits/stdc++.h>
 
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n;
//     cin >> m;
//     vector<int> students;
//     vector<int> friends;
//     for (int i = 0; i < n; i++)
//     {
//         int number;
//         cin >> number;
//         students.push_back(number);
//     }
//     for (int i = 0; i < m; i++)
//     {
//         int number;
//         cin >> number;
//         friends.push_back(number);
//     }
//     for (int i = 0; i < m; i++)
//     {
//         vector<int>::iterator it;
//         it = find(students.begin(), students.end(), friends[i]);
//         if (it == students.end())
//             cout << "NO" << endl;
//         else
//             cout << "YES" << endl;
//     }
//     return 0;
// }

// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
    
//     set<int> students;
//     set<int> fri;
//     for (int i = 0; i < n; i++)
//     {
//         int number;
//         cin >> number;
//         tab.insert(number);
//     }
//     int total = 0;
//     for (std::set<int>::iterator it=tab.begin(); it!=tab.end(); ++it)
// 	    	total++;
//     std::cout << total << std::endl;
//     return 0;
// }