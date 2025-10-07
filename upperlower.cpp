#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter the character\n";
    cin >> ch;
    int x=(int)ch;
    if(x >=65 && x<=90)
    {
        int l=x+32;
        cout << "lowercase is \n"<< (char)l;
    }
   else {
    int u = x - 32;
    cout << "uppercase is " << (char)u;
}

    return  0;
}