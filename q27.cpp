 //A supermarket software maintains item price lists. Implement a solution to store the prices of 10 
//items in an array and display the maximum price.
#include <iostream>
using namespace std;    
int main(){
    const int no_of_items = 10;
    int prices[no_of_items];
    cout << "Enter the prices of " << no_of_items << " items:" << endl;
    for(int i = 0; i < no_of_items; i++) {
        cin >> prices[i];
    }
    int max=prices[0];
    for(int j=1; j < no_of_items; j++) {
        if(prices[j] > max) {
            max = prices[j];
        }
    }
    cout << "Maximum price is: " << max << endl;    return 0;
}