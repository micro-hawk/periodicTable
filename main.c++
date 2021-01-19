#include <iostream>
#include "displayMT.h"
#include "elementsDetails.h"
using namespace std;

int main()
{

   cout << "1. Periodic Table Structure: " << endl;
   cout << "2. Periodic elements: " << endl;
   cout << "3. Exit" << endl;
   int n; cout << "Enter your choice: "; cin >> n;
   while (n!=3)
   {
      if (n==2)   elements();
   }
   
   return 0;
}