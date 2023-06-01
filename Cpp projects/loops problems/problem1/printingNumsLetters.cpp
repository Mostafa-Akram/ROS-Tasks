#include<iostream>

using namespace std;

int main(){
    int x,y,i;

    cin>>x>>y;
    string nums[11] = { "one","two","three", "four","five","six","seven","eight","nine","even","odd"};


    for(i=x ; i<=y ; i++)
    {
        if(i>9 && i%2==1)
        {
            cout<<nums[10]<<endl;
        }else if(i>9 && i%2==0)
        {
            cout<<nums[9]<<endl;
        }else
        {
            cout<<nums[i-1]<<endl;
        }
    }
 
    return 0;
}