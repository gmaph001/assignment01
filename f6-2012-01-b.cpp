#include <iostream>
using namespace std;

bool checkprime(int n){
     if(n==1 || n==0){
          return false;
     }
     else{
          for(int i=2; i<=n/2; ++i){
               if(n%i==0){
                    return false;
               }
          }
          return true;
     }
}

int main(){

     cout<<"Welcome to my program which will enable you as user to choose either \n";
     cout<<"1. Even numbers.\n2. Odd numbers. \n3. Prime numbers\n";
     cout<<"Now choose the option You want: ";
     int choice, low, high, result;
     cin>>choice;
     cout<<endl<<endl;

     switch (choice)
     {
     case 1:
          system("cls");
          system("PAUSE");

          cout<<"You have chosen even numbers.\n";
          cout<<"Now please enter the range of your numbers!\n";
          cout<<"Lowest: ";
          cin>>low;
          cout<<endl;
          cout<<"Highest: ";
          cin>>high;
          cout<<endl;
          cout<<endl;

          for(int i=low; i<high; i++){
               if(i%2==0){
                    result = i;
               }
          }

          cout<<"Your highest even number from "<<low<<" to "<<high<<" is: "<<result;
          cout<<endl;

          break;
     case 2:
          system("cls");
          system("PAUSE");

          cout<<"You have chosen odd numbers.\n";
          cout<<"Now please enter the range of your numbers!\n";
          cout<<"Lowest: ";
          cin>>low;
          cout<<endl;
          cout<<"Highest: ";
          cin>>high;
          cout<<endl;
          cout<<endl;

          for(int i=low; i<high; i++){
               if(i%2!=0){
                    result = i;
               }
          }

          cout<<"Your highest odd number from "<<low<<" to "<<high<<" is: "<<result;
          cout<<endl;
          
          break;
     case 3:
          system("cls");
          system("PAUSE");

          cout<<"You have chosen prime numbers.\n";
          cout<<"Now please enter the range of your numbers!\n";
          cout<<"Lowest: ";
          cin>>low;
          cout<<endl;
          cout<<"Highest: ";
          cin>>high;
          cout<<endl;
          cout<<endl;

          for(int i=low; i<high; i++){
               if(checkprime(i)){
                    result = i;
               }
          }

          cout<<"Your highest prime number from "<<low<<" to "<<high<<" is: "<<result;
          cout<<endl;
          break;

     default:
          break;
     }

     return 0;
}