#include <iostream>
#include <vector>

using namespace std;

vector<int> reverseInputOrder() {
    vector<int> inputVector;
    int input;

    cout << "Enter numbers (enter -1 to stop):" << endl;

    // Take user inputs and add them to the vector
    for (;;) {
        cin >> input;
        if (input == -1)
            break;
        inputVector.push_back(input);
    }

    // Reverse the vector using for loop
    int n = inputVector.size();
    vector<int> reversedVector(n);
    for (int i = 0; i < n; ++i) {
        reversedVector[i] = inputVector[n - 1 - i];
    }

    return reversedVector;
}

int main() {
    vector<int> reversedInput = reverseInputOrder();

    // Display the reversed vector
    cout << "Reversed input order:" << endl;
    for (int num : reversedInput) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
