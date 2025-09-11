#include <iostream>
#include <string>
using namespace std;

int find(string text, string pattern) {
    int n = text.length();     // length of text
    int m = pattern.length();  // length of pattern

    // Empty pattern edge case
    if (m == 0) {
        return 0;
    }

    // Loop through every starting position in text
    for (int i = 0; i <= n - m; i++) {
        int j;

        // Comparing pattern with substring of text
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break; 
            }
        }

        if (j == m) {
            return i; // found pattern at index i
        }
    }
    // Pattern not found
    return -1;
}
#ifdef RUN_MAIN
int main() {
    string text, pattern;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the pattern: ";
    getline(cin, pattern);

    int result = find(text, pattern);

    if (result == -1) {
        cout << "Pattern not found." << endl;
    } else {
        cout << "Pattern found at index: " << result << endl;
    }
    return 0;
}
#endif
