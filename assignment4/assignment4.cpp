#include <iostream>
using namespace std;
int main() 
{
    int *ptr = new int(10); // Allocate memory for an int
    cout << "Value: " << *ptr << endl; // Prints 10
    delete ptr; // Free the memory
    return 0;
}
