#include<iostream>
#include<string>
using namespace std ;
int main(){
string name1="sadia";
string name2="amin";

string add=name1+name2;
cout << "concatinate: " << add<<endl;
cout << "append: " <<name1.append(name2) <<endl;
cout << "substring." << name1.substr(0,4)<<endl;
cout << "character at location 4: " << name1.at(4)<< endl;
name2.at(0)='s';
cout << "changed character at location 4: " << name2<<endl;
name1.replace(1,3,"asda");
cout << "replaced string: " << name1<<endl;
cout << "first find " << name1.find('s')<<endl;
cout << "last find " << name2.rfind('n')<<endl;
cout << "insert: " << name1.insert(2,"amin")<<endl;
cout << "erase: " <<name2.erase(2)<< endl;
cout << "camppare " <<name1.compare(name1)<< endl;
cout << "empty " <<name1.empty()<< endl;
cout << "length " <<name1.length() <<endl;
cout << "size " << name2.size()<<endl;
cout << "max size " << name1.max_size()<<endl;
cout << "max size " << name2.max_size()<<endl;
}