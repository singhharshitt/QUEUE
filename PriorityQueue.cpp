#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int front = -1;  // Initializing front pointer for the queue (not used directly in this code)
int rear = -1;   // Initializing rear pointer for the queue (not used directly in this code)

// Define a structure to hold patient details
struct Hospital {
    char Pname[50];  // Array to store patient's name (50 characters max)
    int scorePri;    // Integer to store patient's priority score (higher means more severe)
};

// Comparison function used for sorting patients based on severity (scorePri)
bool compare(Hospital a, Hospital b) {
    // The function returns true if `a` has a higher priority score than `b`
    return a.scorePri > b.scorePri;
}

int main() {
    int n;  // Variable to hold the number of patients
    cout << "Enter number of Patients: ";  
    cin >> n;  // Input number of patients

    Hospital arr[20];  // Array of Hospital objects to store information for up to 20 patients

    // Input loop to gather patient names and their priority scores
    for (int i = 0; i < n; i++) {
        // Input patient's name and priority score
        cin >> arr[i].Pname >> arr[i].scorePri;
    }

    // Sort the array of patients based on the priority score in descending order
    sort(arr, arr + n, compare);

    // Output loop to display the treated patients in order of severity
    for (int i = 0; i < n; i++) {
        // Print patient's name and priority score
        cout << "Treating patient: " << arr[i].Pname << "(Severity: " << arr[i].scorePri << ")" << endl;
    }

    return 0;  // End of the program
}
