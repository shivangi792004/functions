#include <iostream>
using namespace std;
void sum1Ton(int n){
    int x=0;
    for(int i=1; i<=n;i++){
        x+=i;
    }    
    cout<<x<<endl;

}
int main(){
    sum1Ton(10);
    return 0;
}