#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 100;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int *ar = new int[100](); //intializes all the elements to 0
    long int n; //Number of cases
    int temp = 0; //Number in the list
    cin >> n;
    for(long int i=0; i<n; i++){
        cin>>temp;
        ar[temp]++;
    }
    for(long int i=0; i<MAX; i++)
        cout<<ar[i]<< " ";
    return 0;
}
