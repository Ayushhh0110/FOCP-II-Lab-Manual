//A manufacturing QC system checks defect codes divisible by both 3 and 5. 
//Implement a solution to store 5 elements in an array and count how many numbers are divisible by 3 and 5. 
#include <iostream>
using namespace std;
int main(){
    const int no_of_elements = 5;
    int numbers[no_of_elements];
    cout << "Enter " << no_of_elements << " defect codes:" << endl;
    for(int i = 0; i < no_of_elements; i++) {
        cin >> numbers[i];
    }
    int count = 0;
    for(int j = 0; j < no_of_elements; j++) {
        if(numbers[j] % 3 == 0 && numbers[j] % 5 == 0) {
            count++;
        }
    }
    cout << "Count of defect codes divisible by both 3 and 5: " << count << endl;    
    return 0;
}