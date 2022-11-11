#include<iostream>
using namespace std;
#define ll long long int
int main()
{
    ll x, y, z, a;
    char op, comp;
    cin>>x>>op>>y>>comp>>z;

    switch(op)
    {
    case '+':
        a = x + y;
        break;
    case '-':
        a = x - y;
        break;
    case '*':
        a = x * y;
        break;
    }

    switch(comp)
    {
    case '>':
        if(a>z)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        break;
    case '<':
        if(a<z)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        break;
    case '=':
        if(a==z)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        break;
    }
}
