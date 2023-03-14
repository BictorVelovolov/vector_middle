#include <iostream>
#include <string>
#include <vector>
#include "middle_list.h"
using namespace std;

vector <char> itc_strtlist(string str){
    vector <char> strok;
    for (int i = 0; i < str.size(); i++)
        strok.push_back(str[i]);
    return strok;
}

string itc_join(vector <char> lst, string sep){
    string nstr;
    nstr = "";
    for (int i = 0; i < lst.size(); i++){
        nstr = nstr + lst[i];
        if(i < lst.size() - 1)
            nstr += sep;
    }
    return nstr;
}

string itc_rmstrspc(string str){
    string nstr;
    vector <char> vec;
    for(int i = 0; i < str.size(); i++)
        vec.push_back(str[i]);
    for (int i = 0; i < str.size(); i++)
        if(vec[i] != ' ')
            nstr += vec[i];
    return nstr;
}

string itc_rmstrchar(string str, string les){
    vector <char> zap;
    string nstr;
    int chek;
    for(int i = 0; i < les.size(); i++){
        zap.push_back(les[i]);
    }
    for (int l = 0; l < str.size(); l++){
        chek = 0;
        for(int i = 0; i < zap.size(); i++)
            if (str[l] == zap[i])
                chek++;
        if (chek == 0)
            nstr += str[l];
    }
    return nstr;
}

long itc_sumlst(const vector <int> &lst){
    long sum;
    for (int i = 0; i < lst.size(); i++)
        sum += lst[i];
    return sum;
}
