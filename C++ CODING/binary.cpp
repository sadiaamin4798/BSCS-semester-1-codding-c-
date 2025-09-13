
#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter number: " << endl;
  cin >> num;
  int remainder,i=1;
  int binary =0;
  if(num!=0){
  for(int j=0;j<=num;j++){
  remainder =num%2;
  binary=binary +remainder*i;
  num=num/2;
  i=i*10;}
  }
  cout << "Binary of number: " << binary <<endl;
    return 0;
}
    