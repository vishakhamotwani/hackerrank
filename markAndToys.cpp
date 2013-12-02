#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    //toys = number of toys available
    //rupees = rupees that MArk has
    //total = cost after adding each toy price
    //num = total number of toys Mark can buy
    long int toys, rupees, total, num;
    cin>>toys>>rupees;
    int *ar=new int[toys](); 
    for(long int i=0; i<toys; i++){
        cin>>ar[i];
    }
    sort(ar,ar+toys);
    total =num = 0;
    while(ar[num]<rupees){
        total+=ar[num];
        if(total>rupees)
            break;
        num++;
    }
    cout<<num;
    return 0;
}
