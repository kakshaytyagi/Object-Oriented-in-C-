// palindrome.cpp
// Write a program to check number palindrome and string palindrome.

#include <iostream>
#include <conio.h>  // console input output
#include <iomanip>  // using manipulators i.e. endl & setw()
void npalindrome(); // number palindrome function declaration
//void spalindrome(); // sting palindrome function declaration
using namespace std;

int main()
{
    int n, i;
    char s[100], ch;

    cout << "If you want to perform number palindrome then press  \"N\" " << endl; //
    cout << "OR" << endl;                                                          //  NOTICE
    cout << "If you want to perform string palindrome then press  \"S\" " << endl; //

    cout << endl
         << "Enter your choice : ";
    
    ch = getche();  // input N || S from user

    switch (ch)
    {
    case 'N':
        npalindrome();  // function call
        break;
    //case 'S':
    //    spalindrome();  // function call for string
     //   break;

    default:
        cout << "You Entered Wrong key" << endl;
        break;
    }
    return 0;
}
//===========================================================================

//---------------------------------------------------------------------------
void npalindrome()
{
    int i, num, rnum, lastdig, rev;
    cout << "Enter a number : ";
    cin >> num;

    rnum = num;
    rev = 0;
    while(num > 0)
    {
        lastdig = num % 10;
        rnum = num/10;
        rev = (rev*10) + lastdig;
    }
    if (rev == num)
    {
        cout << rev << "is the palindrome of" << num << endl;
    }
    else{
        cout << rev << "is not the palindrome of" << num << endl;
    }
}