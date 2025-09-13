#include <iostream>
using namespace std;
float area(float *radius){
float area;
area=3.14*(*radius)*(*radius);
cout << "Area of circle: " << area<<endl;

}
int main() {

float radius;
cout << "Enter radius:" << endl;
cin>>radius;
area(& radius);

}