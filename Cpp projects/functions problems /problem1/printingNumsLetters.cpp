#include<iostream>

using namespace std;

int max(int a,int b, int c, int d);

int main(){
    int x,y,z,f,m;

    cin>>x>>y>>z>>f;

    m= max(x,y,z,f);

    cout<<m<<endl;

   
 
    return 0;
}

int max(int a,int b, int c, int d)
{
    if(a>b && a>c && a>d)
    {
        return a;
    }else if(b>a && b>c && b>d)
    {
        return b;
    }else if(c>a && c>b && c>d)
    {
        return c;
    }else{
        return d;
    }
}