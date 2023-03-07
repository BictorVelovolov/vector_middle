#include <iostream>
#include "middle_list.h"
#include <vector>
#include <string>

using namespace std;

int main()
{
    string str;
    vector <char> vec;
    getline(cin, str);
    vec = itc_strlist(str);
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    return 0;
}
