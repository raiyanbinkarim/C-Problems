#include <iostream>
#include <cstdio>
#include<algorithm>
using namespace std;
void rA(int N[],int a)
{
    reverse(N,N + a);
}
int main() {
    int a,i;
    cin>> a;
    int N[1000];
    for(int i = 0;i<a;i++)
    {
        cin>> N[i];
    }
    rA(N,a);
    for(int i = 0;i<a;i++)
    {
        cout<<N[i];
    }

}
