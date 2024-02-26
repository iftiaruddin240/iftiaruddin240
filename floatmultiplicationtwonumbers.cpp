#include<bits/stdc++.h>
using namespace std;

class Calculate
{
public:

      float num1 = 5.8;
      float num2 = 3.5;

      float multiplication()
      {
          float result = num1 * num2;
          cout<<"Multiplication of two numbers:"<< result <<endl;

      }
};
int main()
{
    Calculate mul;
    mul.multiplication();

    return 0;
}
