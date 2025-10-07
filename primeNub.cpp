#include <iostream>
using namespace std;
 int main()
 {
    int n;
    cout << "enter the number till which prime number wanted to be printed ";
  cin >> n;
  int count =0;
  for(int i=1; i<=n; i++)
  {
     count = 0;
    for(int j=1; j<=i; j++)
     {
         if(i%j==0)
         count++;
     }
     
     if(count==2){
     cout << i << "\n";
     }
  }
  return 0;
 }
