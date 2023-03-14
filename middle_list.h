#ifndef MIDDLE_LIST_H_INCLUDED
#define MIDDLE_LIST_H_INCLUDED
#include <vector>
#include <string>
using namespace std;

vector <char> itc_strtlist(string str); //Number 1
string itc_join(vector <char> lst, string sep); //Number 2
string itc_rmstrspc(string str); //Number 3
string itc_rmstrchar(string str, string les); //Number 4
long itc_sumlst(const vector <int> &lst); //Number 5
long itc_sum_even_lst(const vector <int> &lst);//Number 6
long itc_sum_even_part_lst(const vector <int> &lst);//Number 7
void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2);//Number 8
void itc_pos_neg_separator_lst(const vector <int> lst, vector <int> lst1, vector <int> lst2, vector <int> lst3);//Number 9
void itc_odd_even_analysis_lst(const vector <int> lst);//Number 10



#endif // MIDDLE_LIST_H_INCLUDED
