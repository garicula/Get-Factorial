// Garrick Morley
// CPSC 200 Project 6 A
// This program uses recursion to find a factorial

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <cmath>
#include <fstream>
#include <cassert>
using namespace std;

//recursive function to get a factorial
int fact(int n)
{
	if(n > 1)
        return n * fact(n - 1);		//call the function within itself for recursion
   	else
       	return 1;
}

//test the above function in main
main()
{
	int n = 0;
	
	//get an integer from the user
	cout << "Enter an integer: " << endl;
	cin >> n;
	
	//print the result of the above function
	cout << "The factorial of " << n << " is: " << fact(n) << endl;
}


