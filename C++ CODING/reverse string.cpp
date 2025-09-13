#include<iostream>
#include<string> 
using namespace std;
int main(){
string str="Sadia";
reverse(str.begin(),str.end());
cout << "string in reverse: " << str<<endl;
string str1="1234";
reverse(str1.begin(),str1.end());
cout << "string in reverse: " << str1<<endl;
	return 0;
}