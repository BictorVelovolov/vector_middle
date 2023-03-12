#include <iostream>
#include <string>
#include <vector>
#include "middle_list.h"
using namespace std;

long itc_sum_even_lst(const vector <int> &lst){
    long sum;
    for (int i = 1; i < lst.size(); i += 2)
        sum += lst[i];
    return sum;
}

long itc_sum_even_part_lst(const vector <int> &lst){
    long sum;
    for (int i = 0; i < lst.size(); i++)
        if(lst[i] % 2 == 0)
            sum += lst[i];
    return sum;
}

long itc_sum_not_even_part_lst(const vector <int> &lst){
    long sum;
    for (int i = 0; i < lst.size(); i++)
        if(lst[i] % 2 != 0)
            sum += lst[i];
    return sum;
}

void itc_pos_neg_separator_lst(const vector <int> lst, vector <int> lst1, vector <int> lst2, vector <int> lst3){
    int ch;
    for (int i = 0; i < lst.size(); i++){
        ch = lst[i];
        if (ch < 0)
            lst1.push_back(ch);
        if (ch > 0)
            lst2.push_back(ch);
        if (ch == 0)
            lst3.push_back(ch);
    }
}

void itc_odd_even_analysis_lst(const vector <int> lst){
    int max2, max1, min2, min1, ek, nek;
    ek = 0;
    nek = 0;
    max2 = -2147483648;
    min2 = 2147483647;
    max1 = max2;
    min1 = min2;
    for (int i = 0; i < lst.size(); i++){
        if(lst[i] % 2 == 0){
            ek++;
            if (lst[i] > max2)
                max2 = lst[i];
            if (lst[i] < min2)
                min2 = lst[i];
        }
       if(lst[i] % 2 == 1 || lst[i] % 2 == -1){
            nek++;
            if (lst[i] > max1)
                max1 = lst[i];
            if (lst[i] < min1)
                min1 = lst[i];
        }
    }
    cout << "[" << lst[0];
    for(int i = 1; i < lst.size(); i++)
        cout << "," << lst[i];
    cout << "] --> \nvector analysis: \neven parts kolichestvo:" << ek << endl << "maximum even: " << max2 << endl << "minimum even: " << min2 << endl << "summa of even:" << itc_sum_even_part_lst(lst);
    cout << endl << "\nnot even parts kolichestvo:" << nek << endl << "maximum not even: " << max1 << endl << "minimum  not even: " << min1 << endl << "summa of not even:" << itc_sum_not_even_part_lst(lst);
}
