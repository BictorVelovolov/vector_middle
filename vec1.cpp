#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector <char> itc_strlist(string str){
    vector <char> strok;
    for (int i = 0; i < str.size(); i++)
        strok.push_back(str[i]);
    return strok;
}
