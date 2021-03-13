#include <iostream>

using namespace std;
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);

    }
}


int main()
{
    while(1)
    {
        cout<<"\n\nHit 1 to quit or Hit 0 to Continue"<<endl;
        int c;
        cin>>c;
        if(c==0)
        {
            cout<<"Fibonacci Series"<<endl;
            cout<<"Enter the number of terms you want to see"<<endl;
            int a;
            cin>>a;
            cout<<"\nResult is: "<<fib(a)<<endl;

        }
        else
        {
            break;
        }

    }


}
