# include<iostream>
using namespace std;
int main()
{
    int i, even=0, odd=0;
    for(i=0;i<=50;i++)
    {
        if(i%2==0)
        even=even+i;
        else
        odd=odd+i;
    }
    cout<<"sum of even no.= "<<even<<endl;
    cout<<"sum of odd no.= "<<odd<<endl;
    return 0;
}