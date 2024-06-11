#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=2; i<=n; i++){
        fact=fact*i;
    }
    cout<<fact<<endl;
    return fact;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    factorial(n);
    return 0;
}