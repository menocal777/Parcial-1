#include <iostream>

using namespace std;

int k,i,a;

int main()
{

    for(k=1;k<=100;k++)
    {
        a=0;

        for(i=1;i<=k;i++)
        {
            if(k%i==0)
                a++;
        }

            if(a==2)
            cout<<"numero primo "<<k<<"\n";

        }

}
