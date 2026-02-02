// A data processing system classifies even and odd inputs separately. Implement a solution to 
//store 5 elements in an array, compute sum of all even and sum of all odd numbers. 
#include <iostream>
using namespace std;        
int main(){
    const int no_of_elements = 5;
    int numbers[no_of_elements];
    cout << "Enter " << no_of_elements << " elements:" << endl;
    for(int i = 0; i < no_of_elements; i++) {
        cin >> numbers[i];
    }
    int even_sum = 0;
    int odd_sum = 0;
    for(int j = 0; j < no_of_elements; j++) {
        if(numbers[j] % 2 == 0) {
            even_sum += numbers[j];
        } else {
            odd_sum += numbers[j];
        }
    }
    cout << "Sum of even numbers: " << even_sum << endl;
    cout << "Sum of odd numbers: " << odd_sum << endl;    
    return 0;
}