#include <iostream>
#include "middle_list.h"
#include <vector>
#include <string>

using namespace std;

int main()
{
    char k;
    int n;
    string str, les;
    /*vector <char> vec;
    cout << "Enter sep: ";
    getline(cin, sep);
    cout << "How many elements of vector do you need?\n";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << endl << "Enter " << i + 1 << " element of vector: ";
        cin >> k;
        vec.push_back(k);
    }

    str = itc_join(vec, sep);*/
    getline(cin, str);
    getline(cin, les);
    str = itc_rmstrchar(str, les);
    cout << str;
    return 0;
}
