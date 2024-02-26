#include<bits/stdc++.h>
using namespace std;

class Calculate
{
public:

   float conversion()
   {

    float f;
    cout<<"Enter farenheight value:";
    cin>>f;
    float Cels = (5.0/9.0)*(f-32.0);
    cout<<"The celsius value is:"<<Cels;
   }


};

int main()
{
    Calculate celsius;
    celsius.conversion();

    return 0;
}
