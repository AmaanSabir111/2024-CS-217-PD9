#include <iostream>
using namespace std;
main(){
    string apples;
    int sum=0;
    cout<<"Enter a string :";
    cin>>apples;
    for(int i=0;apples[i]!='\0';i++){
        sum++;
    }
      if(sum%2==0){
        cout<<"true";
      }
      else{
        cout<<"false";
      }
}