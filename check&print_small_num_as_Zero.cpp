#include <iostream>
using namespace std;
void printNum(int &num1, int &num2){
    if(num1<num2){
        num1=0;
    }
    else{
        num2=0;
    }

}

int main(){
    int num1;
    cout<<"Enter first number: ";
    cin>>num1;
    int num2;
    cout<<"Enter second number: ";
    cin>>num2;
    printNum(num1,num2);
    cout<<"First number is: "<<num1<<endl;
    cout<<"Second number is: "<<num2<<endl;
    
    return 0;
}