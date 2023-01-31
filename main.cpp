#include <iostream>

using namespace std;

int main()
{
    int n;
    int v[100];
    int index;
    cout<<"n=";
    cin>>n;
    for(int index=0; index<n; index++)
    {
        cout<<"v["<<index<<"]=";
        cin>>v[index];
    }

    for(int index=0; index<n; index++)
    {
        cout<<"v["<<index<<"]=";
        cout << v[index] << " ";
    }
    return 0;
}
