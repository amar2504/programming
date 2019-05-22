#include <iostream>

using namespace std;

void reversestring(string &s, int &p, int k)
{
    if(p >= 2)
    {
        cout << p << endl;
        return;
        cout << p << endl;
    }
    cout << p;
    swap(s[p],s[k-p-1]);
    p++;
    cout << s << endl;
    
    reversestring(s,p,k);
    
}

int main()
{
   string s = "amar";
   int a =0;
  
   reversestring(s,a,4);
   
   cout << s;
   
   return 0;
}
