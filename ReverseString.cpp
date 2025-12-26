#include <iostream>
#include <string>
using namespace std;
void Myreverse(string str);
int main(){
    string str="uiqhvv"; int ind=str.size()-1; 
    Myreverse(str);
    return 0;
}

void  Myreverse(string str){
  //basse cases
  if(str.size()==0)return ;
  //hypotheis
  cout<<str[str.size()-1];
  str.pop_back();
  Myreverse(str);
}