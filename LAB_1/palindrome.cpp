// palindrome.cpp
// Write a program to check number palindrome and string palindrome.

#include <iostream>
#include <conio.h>  // console input output
#include <string.h> //using string file
#include <iomanip>  // using manipulators i.e. endl & setw()
void npalindrome(); // number palindrome function declaration
void spalindrome(); // sting palindrome function declaration
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
    case 'S':
        spalindrome();  // function call for string
        break;

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
    cout << "\nEnter a number : ";
    cin >> num;

    rnum = num;
    rev = 0;
    while(rnum >= 1)
    {
        lastdig = rnum % 10;
        rnum = rnum/10;
        rev = (rev*10) + lastdig;
    }
    if (rev == num)
    {
        cout << endl << rev << " is the palindrome of " << num << endl;
    }
    else{
        cout << endl <<rev << " is not the palindrome of " << num << endl;
    }
}
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
void spalindrome()
{
    char str[200];
    int flag = 0;

    cout << "\n\nEnter a string: ";
    cin >> str;

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << str << " is not a palindrome." << endl;
    }
    else
    {
        cout << str << " is a palindrome." << endl;
    }
}