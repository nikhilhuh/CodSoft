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
    char operation;
    do{
    cout<<"Enter the operation to be performed \n+ ->Addition \n- ->Subtraction \n* ->Multiplication \n/ ->Division \ne ->Exit"<<endl;
    cin>>operation;
    if(operation=='+' || operation=='-' || operation=='*' || operation=='/'){
    cout<<"Enter your first number"<<endl;
    cin>>a;
    cout<<"Enter your second number"<<endl;
    cin>>b;
    }
    operations obj(a,b);
    switch (operation)
    {
    case '+':
     obj.addition();
    break;
    
    case '-':
     obj.subtraction();
    break;
    
    case '*':
     obj.multiplication();
    break;
     
    case '/':
     if(b!=0)
     obj.division();
     else
     cout<<"Division by 0 is not possible"<<endl;
    break;
    
    case 'e':
    case 'E':
     cout<<"Exiting the calculator\n";
     break;

    default:
     cout<<"Invalid operation entered"<<endl;
    break;
    }
    } while(operation!='E' &&  operation!='e');
    return 0;
}