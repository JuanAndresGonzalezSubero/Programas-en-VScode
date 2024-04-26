#include <iostream>
using namespace std;
int main() {
    float num1,num2;
    cout<<"inrese el primer número";
    cin>>num1;
    cout<<"ingrese el segundo número";
    cin>>num2;
    
    //operaciones
    float suma=num1+num2;
    float resta= num1-num2;
    float multiplicación= num1*num2;
    float división= num1/num2;
    float modulo= num1 % num2;


    cout<<"Suma:"<<suma<<endl;
    cout<<"resta:"<<resta<<endl;
    cout<<"multiplicación:"<<multiplicación<<endl;
    cout<<"división:"<<división<<endl;
    cout<<"modulo:"<<modulo<<endl;

    return 0;

}