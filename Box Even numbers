#include <iostream>
#include <string>
#include <cstdlib>
 
using namespace std;
 
int main()
{
    int n;
   
    cout << "Enter number of rows: ";
    cout << endl;
    cin >> n;
   
 
   
   
    int a = 1;
    int b = n;
   
    for(int x=1; x <= n; x++)
    {
     
       for(int y=1; y < n; y++)
       
        {    
             
                   
               
                if(y == a || y==b)
              {  
                 
                  if(x == b-1 && (n%2 == 0))
               {
                   cout << "\\/";
                   y++;
                   continue;
               }
              if(x == b+1 && (n%2 == 0))
              {
                  cout << "/\\";
                  y++;
                  continue;
              }
               
                    cout << "*";
               }
               else
               {
                 if(x==1 || x == n || y==1)
                 {
                         cout << "*";
                         continue;
                         }
                   cout << " ";
               }
        }
       
       if(x == 1 || x == n || x == a)
       {
            cout << "*";
 
       }
       else
       {
           cout << " ";
       }
       cout << endl;
       a++;
       b--;
    }            
   
   
system("PAUSE");
return 0;
}
