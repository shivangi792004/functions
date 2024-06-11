// 1 to 20 odd num ka sum using funtions 
// #include <iostream>
// using namespace std;
// void sumOfOddNumbers(int n){
//     int sum=0;
//     for(int i=1; i<=n;i++){
//         if(i%2!=0){
//             sum+=i;
//         }
//     }
//     cout<<"Sum of odd numbers is: "<<sum<<endl;
// }
// int main(){
//     sumOfOddNumbers(20);
//     return 0;
// }


#include <iostream>
using namespace std;
void sumOfOddNumbers(int n){
    int sum=0;
    for(int i=1;i<=n;i=i+2){
        sum+=i;
    }
    cout<<"Sum of odd numbers is: "<<sum<<endl;
}
int main(){
    int n;
    cout<<"Enter num: ";
    cin>>n;
    sumOfOddNumbers(n);
    return 0;
}
