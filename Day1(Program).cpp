//Write a program that takes two numbers as input from the user and prints their sum, difference, product, and quotient.
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"\nEnter first number: ";
    cin>>num1;
    cout<<"\nEnter second number: ";
    cin>>num2;
    cout<<"\nSum is: "<<num1+num2;
    cout<<"\nDifference is: "<<num1-num2;
    cout<<"\nProduct is: "<<num1*num2;
    cout<<"\nQuotient is: "<<num1/num2;
    return 0;
}

//Write a C++ program that accepts two integers from the user and swaps their values without using a third variable.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"\nEnter number: ";
    cin>>a;
    cout<<"\nEnter number: ";
    cin>>b;
    cout<<"\nNumbers before swapping a= "<<a<<",b= "<<b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"\nNumbers after swapping a= "<<a<<",b= "<<b;
    return 0;
}
//Write a program that takes a string input from the user and prints the length of the string.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"\n Enter a string: ";
    cin>>str;

    cout<<"\nLength of string is: "<<str.length();
    return 0;
}
