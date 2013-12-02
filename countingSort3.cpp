#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
const unsigned int MAX=100;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int *ar=new int[100](); //intializes all the elements to 0
    long int cases=0;
    int temp;
    int total;
    string tempStr;
    cin>>cases;
    for(unsigned long int i=0; i<cases; i++){
        cin>>temp>>tempStr;
        ar[temp]++;
    }
    for(unsigned int i=0; i<MAX; i++){
       total=0;
       for(unsigned int j=0; j<=i;j++) //All the elements below i
           total+=ar[j];
        cout<<total<<" ";
    }
    return 0;
}
 
