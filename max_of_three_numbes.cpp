//using function print max of three numbers
#include <iostream>
using namespace std;
    void maxOfThreeNumbers(int a,int b,int c){
        if(a>b&&a>c){
            cout<<a<<endl;
        } else if(b>a&&b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }

    int main(){
        int a,b,c;
        cout<<"Enter a: ";
        cin>>a;
        cout<<"Enter b: ";

        maxOfThreeNumbers(4 , 6, 1);

    return 0;
}