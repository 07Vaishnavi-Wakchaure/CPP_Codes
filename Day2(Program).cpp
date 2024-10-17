//1)For Loop Example (Printing Numbers 1 to 10)
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=10;i++)
    {
        cout<<i<<endl;
    }
    return 0;
}
//2)While Loop Example (Sum of Numbers Until User Enters 0)
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0)
    {
        sum+=n;
        cin>>n;
    }
    cout<<"Sum is: "<<sum<<endl;
    return 0;
}
//3)Do-While Loop Example(Guessing Game)
#include<iostream>
using namespace std;
int main()
{
    int guess,number;
    number=7;
    do{
        cout<<"\nEnter a number between 1 to 10: ";
        cin>>guess;
        if(guess<number)
        {
            cout<<"\nyour guess is less than a number";
        }
        else if(guess>number)
        {
            cout<<"\nYour guess is greater than a number";
        }
    }
    while(guess!=number);
    cout<<"\n.................Congratulations you correctly guessed it..............!!";
    return 0;
}
//4)Nested For Loop Example (Multiplication Table)
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<11;i++)
    {
        for(int j=1;j<11;j++)
        {
            cout<<i*j<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
//5)For Loop with Break and Continue (Skipping Even Numbers)
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=10;i++)
    {
        if(i%2==0){
            continue;
        }
        cout<<i<<" ";
    }
    return 0;

}
//6)For Loop with Break and Continue (Skipping odd Numbers)
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=10;i++)
    {
        if(i%2!=0){
            continue;
        }
        cout<<i<<" ";
    }
    return 0;
}

























