#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

double Pi(const int n);


int main()
{

	int n;
  cout << "Number of throws (accuracy increases with bigger N): ";
  cin >> n;
  
  cout << endl << Pi(n);
	return 0;
}


double Pi(const int n)
{
srand(time(0));

int count = 0;

for(int i = 0; i < n; i++)
{	
	
double x = rand() / (double) RAND_MAX;
double y = rand() / (double) RAND_MAX;
	
	if (sqrt(x*x + y*y) < 1){
		++count;}
}
return count / (double)n * 4;

}
