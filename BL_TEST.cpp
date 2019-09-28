#include <iostream>
using namespace std;

/*
Select a problem from the following list and solve it.
its okay if you want to solve a question that has already been solved.
Create a user defined funtion and call it inside the main funtion.
Happy coding!

Q9 ) Write a program in C++ to check if string is palindrome.
	Start your code here (where this comment ends).
	for ease comment your name email 
*/


#include <iostream>

using namespace std;

void pallindrome()
{
   int n, num, digit, rev = 0;
     cout << "Enter a positive number: ";
     cin >> num;
     n = num;
     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
     cout << " The reverse of the number is: " << rev << endl;
     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";
   
}
int main()
{
    
    pallindrome();
    
}