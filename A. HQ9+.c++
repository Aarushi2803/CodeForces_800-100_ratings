#include <iostream>
using namespace std;
int main(){
    
    string word;
    cin >> word;

for(char c: word){
    if(c=='H' || c=='Q' || c =='9' ){
    cout << "YES";
    return 0;
   }
} 
 cout << "NO";
    return 0;
}