#include <iostream>
#include "middle_list.h"
#include <vector>
#include <string>

using namespace std;

int main()
{
    char k;
    long hui;
    int n, l;
    string str, les;
    vector <int> vec;
    /*cout << "Enter sep: ";
    getline(cin, sep);*/
    cout << "How many elements of vector do you need?\n";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << endl << "Enter " << i + 1 << " element of vector: ";
        cin >> l;
        vec.push_back(l);
    }
    /*str = itc_join(vec, sep);
    getline(cin, str);
    getline(cin, les);
    str = itc_rmstrchar(str, les);*/
    itc_odd_even_analysis_lst(vec);
    return 0;
}
