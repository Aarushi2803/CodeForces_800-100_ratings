#include <iostream>
#include <string>
using namespace std;
int main(){
    
    string word;
    cin >> word;

int count = 0;
bool unique_char;
for(int i=0;i<word.length();i++){
    unique_char = true;
    for(int j=0;j<i;j++){
     if(word[i] == word[j]){
       unique_char = false;
       break; 
     }     
  }
  if(unique_char) count++;
} 
  cout << ( count%2==0?"CHAT WITH HER!":"IGNORE HIM!" ) <<endl;
    return 0;
} 