// using functions print sum of even numbers
#include <iostream>
using namespace std;
void sumOfEvenNumbers(int n){
    int sum=0;
    for(int i=0; i<=n; i=i+2){
            sum+=i;
        
    }
    cout<<sum<<endl;
}
int main(){
    int n;
    cout<<"Enter num: ";
    cin>>n;
    sumOfEvenNumbers(n);
    return 0;
}