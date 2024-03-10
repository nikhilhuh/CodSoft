// simple calculator
#include<iostream>
using namespace std;

class operations{
    private:
    double a,b;
    public:
    operations(double m,double n){
        a=m;
        b=n;
    }
    void addition(){
        cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    }
    void subtraction(){
        cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
    }
    void multiplication(){
        cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
    }
    void division(){
        cout<<"Division of "<<a<<" by "<<b<<" is "<<a/b<<endl;
    }
};

int main(){
    double a,b;
    int operation;
    cout<<"Enter your first number"<<endl;
    cin>>a;
    cout<<"Enter your second number"<<endl;
    cin>>b;
    operations obj(a,b);
    cout<<"Enter the operation to be performed 1-Addition 2-Subtraction 3-Multiplication 4-Division"<<endl;
    cin>>operation;
    switch (operation)
    {
    case 1:
     obj.addition();
    break;
    
    case 2:
     obj.subtraction();
    break;
    
    case 3:
     obj.multiplication();
    break;
     
    case 4:
     if(b!=0)
     obj.division();
     else
     cout<<"Division by 0 is not possible"<<endl;
    break;
    
    default:
     cout<<"Invalid operation entered"<<endl;
    break;
    }
    return 0;
}