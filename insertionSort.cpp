#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(vector <int>  ar) {
    int key = 0;
    for (int i = 1; i < ar.size() ; i++){
        key = ar[i];
        int j = i-1;
        while(j>=0 && ar[j]>key){
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = key;
        vector<int>::iterator it;
        for(it = ar.begin();it < ar.end(); it++) {
            cout<< *it << " ";
        }
        cout<<endl;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
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
