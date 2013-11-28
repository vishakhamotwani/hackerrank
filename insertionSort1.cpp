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
//Inserting an element in a SORTED list
/* Head ends here */
void insertionSort(vector <int>  ar) {
    //As per given in the problem statement this is the key with which other elements are to be compared
    int elem = ar.back();
    for (int i = ar.size()-2; i >= 0 ; i--){
        if(elem < ar[i]){
            ar[i+1] = ar[i];
        } else {
            //Once the element is inserted break out of the loop
            ar[i+1] = elem;
            i = -1;
        } 
        vector<int>::iterator it;
        for(it = ar.begin();it < ar.end(); it++) {
            cout<< *it << " ";
        }
        cout<<endl;
        if(i == 0){
            //cout << "i = " << i;
            ar[i] = elem;
            for(it = ar.begin();it < ar.end(); it++) {
                cout<< *it << " ";
            }
        }
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

insertionSort(_ar);
   
   return 0;
}
