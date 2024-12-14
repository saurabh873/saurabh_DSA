#include <iostream>
#include <vector>
using namespace std;

int mis(vector<int>& arr, int a) {
    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < arr.size(); i++) {
        xor1 ^= arr[i];
    }

  
    for (int i = 1; i <= a; i++) {
        xor2 ^= i;
    }

    
    return xor1 ^ xor2;
}

int main() {
    int a;
    cin >> a; 
    vector<int> arr;

    cout << "Enter " << a - 1 << " elements:\n";
    for (int i = 0; i < a - 1; i++) { 
        int temp;
        cin >> temp;
        arr.push_back(temp); 
    }

    int c = mis(arr, a);
    cout << "The missing number is: " << c << endl;

    return 0;
}
