/** Justin Yang *//

#include <iostream>
using namespace std;

int main() 
{
    
    int penguin[5];
    int *pointer = &penguin[0];
    int *pointer2 = &penguin[1];
    int *pointer3 = &penguin[2];
    int *pointer4 = &penguin[3];
    
    cout << pointer << endl << endl;
    cout << pointer2 << endl << endl;
    cout << pointer3 << endl << endl;
    cout << pointer4 << endl << endl;
    
  for(int i=0; i < 5 ; i++)
    {pointer += 2;
    
    cout << pointer << endl;
}
    system("PAUSE");
}

