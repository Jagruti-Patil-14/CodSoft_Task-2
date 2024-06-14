#include<iostream>
using namespace std;
int main()
{
    char op;
    float num1,num2;
    cout<<"Choose a opeartor: +,-,*,/:-\n";
    cin>>op;
    cout<<"Enter first number:-\n";
    cin>>num1;
    cout<<"Enter second number:-\n";
    cin>>num2;
    switch(op)
    {
        case '+':
        cout<<"Addition of "<<num1<<" and "<<num2<<" is="<<num1+num2;
        break;
        case '-':
        cout<<"Substraction of "<<num1<<" and "<<num2<<" is="<<num1-num2;
        break;
        case '*':
        cout<<"Multiplication of "<<num1<<" and "<<num2<<" is="<<num1*num2;
        break;
        case '/':
        cout<<"Division of "<<num1<<" and "<<num2<<" is="<<num1/num2;
        break;
        default:
        cout<<"Operator is not present!!";
        break;
    }
    return 0;
}