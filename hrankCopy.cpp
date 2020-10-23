#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>> n;
    string s1,s2,s3;
    cin>> s1;
    cin>> s2;
    for(int i = 0; i < n; i++)
    {
        s3 = s1[i] + s2[n-i-1];
    }
    cout << s3 << endl;
    return 0;
}
