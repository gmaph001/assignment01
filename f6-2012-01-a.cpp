#include <iostream>
using namespace std;

int main(){

     int n;

     cout<<"Enter the number to find its factorial!"<<endl;

     cin>>n;

     int factorial=0;    

     for(int i=n; i>1; i--){
          
         n*=(i-1);

     }

     cout<<"The factorial of your number is: "<<n<<endl;
}