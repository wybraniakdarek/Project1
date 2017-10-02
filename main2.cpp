#include <iostream>

using namespace std;

int main()
{
    int b=1;
    int w;
    cout<<" Podaj ile wierszy: "<<endl;
    cin>>w;

    for(int i=0; i<=w; i++)
    {
        for(int j=0; j<w-i; j++)
        {
            cout<<" ";
        }
        for(int k=0; k<b; k++)
        {
            cout<<"x ";
        }
        b++;
        cout<<endl;

    }
    return 0;
}
