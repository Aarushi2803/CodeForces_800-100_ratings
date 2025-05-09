#include <iostream>
#include <vector>
using namespace  std;
int main(){
    int a,b;
    cin >> a>>b;
    vector <int> arr(a);
    vector <int> brr(b);
   
   for(int i=0;i<a;i++){
    cin >> arr[i];
   } 
   for(int i=0;i<b;i++){
    cin >> brr[i];
   }
   for(int i=0;i<a;i++){ 
    for(int j=0;j<b;j++){
      if(arr[i]==brr[j]){ 
        cout<< arr[i] << " ";
      } 
   }
}
}
