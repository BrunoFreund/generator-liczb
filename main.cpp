#include <ctime>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;
int x;
int main()
{

 srand (time(NULL));

cout<< "Podana liczba: ";
x = rand()%33 ;
cout<<x;
return 0;
}
