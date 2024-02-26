#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 3, b = 5;
    cout<<"Before swapping value of a = "<< a <<" b = "<<b<<endl;

    int temp;
    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping value of a = "<< a <<" b = "<<b <<endl;

    return 0;
}
