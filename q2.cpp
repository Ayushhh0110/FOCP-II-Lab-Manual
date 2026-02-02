//An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute 
//the area of a circle. 
#include <iostream>
using namespace std; 
#define PI 3.14  
int main() {    
    float radius, area;    
    cout << "Enter radius of the circle: ";    
    cin >> radius;    
    area = PI *radius*radius;    
    cout << "Area of the circle: " << area << endl;    
    return 0; 
}