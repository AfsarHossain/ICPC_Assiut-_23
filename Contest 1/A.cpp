#include<iostream>
using namespace std;
#define ll long long int
int main()
{
    ll d, s;
    cin>>d>>s;

    double x, y;

    x = 2*d*1.0/3;
    y = d*1.0/3;

    if(x<=s)
    {
        cout<<"Sunny Day"<<endl;
    }
    else if(y>=s)
    {
        cout<<"Rainy Day"<<endl;
    }
    else
    {
        cout<<"Cloudy Day"<<endl;
    }

    return 0;
}
