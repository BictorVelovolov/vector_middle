#include <iostream>
#include <string>
#include <vector>
#include "middle_list.h"
using namespace std;

long itc_sum_even_lst(const vector <int> &lst){
    long sum;
    sum = 0;
    for (int i = 0; i < lst.size(); i += 2)
        sum += lst[i];
    return sum;
}

long itc_sum_even_part_lst(const vector <int> &lst){
    long sum;
    sum = 0;
    for (int i = 0; i < lst.size(); i++)
        if(lst[i] % 2 == 0)
            sum += lst[i];
    return sum;
}

long itc_sum_not_even_part_lst(const vector <int> &lst){
    long sum;
    sum = 0;
    for (int i = 0; i < lst.size(); i++)
        if(lst[i] % 2 != 0)
            sum += lst[i];
    return sum;
}

void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2){
    for(int i = 0; i < lst.size(); i++){
        if(lst[i] % 2 == 0)
            lst1.push_back(lst[i]);
        else
            lst2.push_back(lst[i]);
    }
}


void itc_pos_neg_separator_lst(const vector <int> lst, vector <int> lst1, vector <int> lst2, vector <int> lst3){
    int ch;
    ch = 0;
    for (int i = 0; i < lst.size(); i++){
        ch = lst[i];
        if (ch < 0)
            lst1.push_back(ch);
        if (ch == 0)
            lst2.push_back(ch);
        if (ch > 0)
            lst3.push_back(ch);
    }
}

void itc_odd_even_analysis_lst(const vector <int> lst){
    vector <int> evlst;
    vector <int> nevlst;
    int max2, max1, min2, min1, ek, nek;
    max2 = -2147483648;
    min2 = 2147483647;
    max1 = max2;
    min1 = min2;
    itc_odd_even_separator_lst(lst, evlst, nevlst);
    for(ek = 0; ek < evlst.size(); ek++){
            if(evlst[ek] > max2)
                max2 = evlst[ek];
            if(evlst[ek] < min2)
                min2 = evlst[ek];
        }
    for(nek = 0; nek < nevlst.size(); nek++){
            if(nevlst[nek] > max1)
                max1 = nevlst[nek];
            if(nevlst[nek] < min1)
                min1 = nevlst[nek];
        }
    cout << "[" << lst[0];
    for(int i = 1; i < lst.size(); i++)
        cout << "," << lst[i];
    cout << "] --> \nvector analysis: \neven parts kolichestvo:" << ek << "        not even parts kolichestvo: " << nek << endl << "maximum even: " << max2 << "        maximum not even: " << max1;
    cout << endl << "minimal even: " << min2 << "       minimal not even" << min1 << endl << "summ of even: " << itc_sumlst(evlst) << "        summ of not even: " << itc_sumlst(nevlst);
}
