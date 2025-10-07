#include <iostream>
using namespace std;
 int main()
 {
    int n;
    cout << "enter the number ";
    cin >> n;
    int count=1;
    int sum =0;
    while(count<=n)
    {
      sum=sum + count ;
      count+=2;
    }
    cout << "sum is =" << sum;
    return  0;
 }
 