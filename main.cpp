#include <iostream>
#include <string> 
#include "Person.h"
using namespace std;

int main()
{
    PerSon info;
    Employee info2;

    cout << "Information about customers" << endl;

    // Input for PerSon
    cin >> info; // This uses the overloaded input operator
    cout << info; // This uses the overloaded output operator
       // CanMarry function
    if (info.CanMarry())
    {
        cout << "Can Apply for this Position!" << endl;
    }
    else
    {
        cout << "Can't Apply for this Position" << endl;
    }

    cout << endl;

 
 
   cout << "Now enter employment information: Department, National Insurance, Position: " <<endl;
 cin >> info2;  // Read Employee information
  cout << info2; // Display Employee information

    return 0;
}
