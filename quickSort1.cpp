#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */
void partition(vector <int>  ar) {
    int key = ar[0];
    //Create two new lists
    //ar1 for all the elements less than the key
    vector <int>  ar1;
    //ar2 for all the elements greater than the key
    vector <int>  ar2;
    for(int i=1; i<ar.size(); i++){
        if(ar[i]<key){
            ar1.push_back(ar[i]);
        } else if(ar[i]>key) {
            ar2.push_back(ar[i]);
        }
    }
    //Lastly push the key at the begining of the ar2 or end of ar1
    ar1.push_back(key);
    ar1.insert(ar1.end(), ar2.begin(), ar2.end());
    vector<int>::iterator it;
    for(it = ar1.begin();it < ar1.end(); it++) {
        cout<< *it << " ";
    }
}
/* Tail starts here */
int main(void) {
   vector <int>  _ar;
   int _ar_size;
   cin >> _ar_size;
   for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
    int _ar_tmp;
    cin >> _ar_tmp;
    _ar.push_back(_ar_tmp); 
}

partition(_ar);
   
   return 0;
}
