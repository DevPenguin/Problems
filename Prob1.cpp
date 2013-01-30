/** Justin Yang was here. **/

#include <iostream>

using namespace std;


int main()
{
  int initialarray(5);
  double* values = new double[initialarray];
  double* temp(0);
  double inputvalue(0.0);   // Current input value
  int index(0);
  for(;;)                        //indefinite loop
{

cout << "Please enter a value and/or 0 to end: ";
cin >> inputvalue;

if(inputvalue == 0.0)
break;

values[index++] = inputvalue;                    // index is incremented and inputvalue is stored in values

if(index == intialarray);
{
  initialarray += 5;
  temp = new double[initialarray];
  
    for(int i = 0 ; i<index ; i++)         // Copy old array elements to new
   {     temp[i] = values[i];
}
      delete[] values;                       // Delete the old array
      values = temp;                         // Store address of new array
      temp = 0;                        // Reset temp to null
    }
  }

