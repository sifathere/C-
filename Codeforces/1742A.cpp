#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b>>c;

        if(a+b == c || b+c == a || c+a == b)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
