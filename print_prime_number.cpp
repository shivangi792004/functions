#include <iostream>
using namespace std;
    bool printPrime(int n){
        for(int i=2; i<n; i++){
            bool isPrime =true;
            for(int j=2; j<=i/2; j++){
                if(i%j==0){
                    isPrime=false;
                    break;
                }
            }
            if(isPrime){
                cout<<i<<" ";
            }

    }
    return true;
    }

    int main(){
        int n;
        cout<<"Enter n: ";
        cin>>n;
        printPrime(n);
    return 0;
}