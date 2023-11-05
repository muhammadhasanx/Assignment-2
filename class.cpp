#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Bignum
{
private:
    string num1;
    string num2;
    string num3 = 0;
public:
    Bignum(string num1=0, string num2=0)
    {
        for(int i = 0; i < num1.length();i++)
        {
            if(num1[i]<'0'||num1[i]>'9')
            {
                cout<<"please enter a valid number";
            }

            if(num2[i]<'0'||num2[i]>'9')
            {
                cout<<"please enter a valid number";
            }
        }
    }

    
    
    

};
int main()
{}
