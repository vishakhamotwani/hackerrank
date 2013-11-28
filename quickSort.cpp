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

//Divide and Conquer

//Using partition() method from the previous quicksort sort
//Creates two lists, one less than the pivot and one greater than the pivot
//Pivot in this case will always be the first element of the array
void partition(vector <int>  &ar, int start, int end) {
    if(start>=end)
        return;
    
    int key = ar[start];
    vector <int>  ar1;
    vector <int>  ar2;
    for(int i=start+1; i<=end; i++){
        if(ar[i]<key){
            ar1.push_back(ar[i]);
        } else if(ar[i]>key) {
            ar2.push_back(ar[i]);
        }
    }
    
    int helper = start + ar1.size();
    ar1.push_back(key);
    ar1.insert(ar1.end(), ar2.begin(), ar2.end());
    
    for (int i = start; i <= end; i++)
        ar[i] = ar1[i - start];
    
    partition(ar, start, helper-1);
    partition(ar, helper+1, end);
    
    for(int i = start; i <= end; i++) {
        cout<< ar[i];
        if (i + 1 <= end)
            cout << " ";
        else
            cout << endl;
    }
}
/* Head ends here */
void quickSort(vector <int>  ar, int ar_size) {
    partition(ar, 0, ar.size()-1);

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

quickSort(_ar, _ar_size);
   
   return 0;
}
