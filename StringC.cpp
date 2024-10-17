#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2, result;

    // loop to take input 3 times w/ varying string lengths
    for (int i = 1; i <= 3; i++) {
        cout << "Iteration " << i << " - Enter first string: ";
        getline(cin, str1);  // Get the first string input

        cout << "Iteration " << i << " - Enter second string: ";
        getline(cin, str2);  // get second string input

        // Concatenate the two strings
        result = str1 + " " + str2;

        // Print concatenated result
        cout << "Concatenated Result: " << result << endl << endl;
    }

    return 0;
}
