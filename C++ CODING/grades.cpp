#include<iostream>
using namespace std;
int main(){
int m,tm=500,perc;
cout << " Enter marks:" << endl;
cin >> m;
perc=(m/tm)*100;
cout << "percentage :" <<perc<< endl;
switch(perc){
case 90:{
cout << "A grade" << endl;
break;
}
case 80:{
cout << "B grade" << endl;
break ;
}
case 70:{
cout << "C grade" << endl;
break;
}
case 60:{
cout << " D grade" << endl;
break ;
}
default:{
cout << "Fail" << endl;
break ;
}
}
}