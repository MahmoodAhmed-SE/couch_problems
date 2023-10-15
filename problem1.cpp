// 34 minute
#include <bits/stdc++.h>

using namespace std; 



int main () {
    int counter;
    cout << "Enter counter: ";
    cin >> counter;
    cout << endl;
    
    int arr[counter];

    int num_of_zeros = 0; 
    int index = 0;
    while (index + num_of_zeros < counter) {
        string str_number;
        cin >> str_number;
        int number = stoi(str_number);
        if (number == 0) {
            num_of_zeros++;
            continue;
        }

        arr[index] = number;
        index++;
    }

    while (index < counter) {
        arr[index] = 0;
        index++;
    }

    for (int number : arr) {
        cout << number << ", ";
    }



    return 0;
}