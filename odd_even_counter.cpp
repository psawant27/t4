#include <iostream>
using namespace std;

int main() {
  for(int i=1; i<=500; i++){
     if(i%2==0){
       cout<<"Even Number: "<<i<<endl;
     }
     else if(i%2!=0){
       cout<<"Odd Number: "<<i<<endl;
     }
  }
  return 0;
}
