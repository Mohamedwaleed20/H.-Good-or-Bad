#include <iostream>
#include<bits/stdc++.h>

using namespace std ;

int main()
{
   int t ;
   cin >> t ;
   while(t--)
   {
       string a ;
       cin >> a ;
       bool cnt = false ;
       for(int i = 0 ; i < a.size() ; i++ )
       {
            if((a[i]=='0'&&a[i+1]=='1'&&a[i+2]=='0')||(a[i]=='1'&&a[i+1]=='0'&&a[i+2]=='1'))
            {
                cnt = true;
            }
       }
       if(cnt)
       {
           cout << "Good" << endl ;
       }
       else
       {
           cout << "Bad" << endl;
       }
   }

    return 0;
}
