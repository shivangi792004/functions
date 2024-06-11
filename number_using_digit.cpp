#include <iostream>
using namespace std;
int numberUsingDigit(int n){
    int num=0;
    for(int i=0; i<n; i++){
        int digit;
        cout<<"Enter digit: "<<endl;
        cin>>digit;
        num=num*10+digit;
    }
    return num;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int answer = numberUsingDigit(n);
    cout<<"Number created by your digits: "<<answer;
    return 0;
}