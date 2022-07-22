#include <iostream>
#include <vector>
#include <cctype>
#include <bits/stdc++.h>
using namespace std;


vector<int> elements {};

void displayElements() {
    if (elements.size() == 0) {
        cout << "\n[] - the list is empty." << endl;
        } else {
           cout << "\n[ ";
            for (auto i : elements) {
                cout << i << ' ';
                }
           cout << "] ";     
        }
    }
    
void addElement() {
    int number;
    cout << "\nEnter a number to add to the list: ";
    cin >> number;
    elements.push_back(number);
    cout << "\n"<< number << " has been added to the list." << endl;
}

void calculateMean() {
    int sum {0}, mean;
    if (elements.size() == 0) {
        cout << "\nUnable to calculate mean - list is empty." << endl;
    } else {
    for (unsigned int i = 0; i <= elements.size() - 1; ++i) {
        sum += elements.at(i);
        }
    mean = sum / elements.size();
    cout << "\nThe mean is " << mean << endl;   
    }
}

void smallestNumber() {
    if (elements.size() == 0) {
            cout << "\nCannot retrieve smallest number - list is empty." << endl;
    } else {
        cout << "\nThe smallest number is: " << *min_element(elements.begin(), elements.end()) << endl; 
    }
     
}

void largestNumber() {
    if (elements.size() == 0) {
            cout << "\nCannot retrieve largest number - list is empty." << endl;
    } else {
        cout << "\nThe largest number is: " << *max_element(elements.begin(), elements.end()) << endl; 
    }
     
}

void showMenu() {
        cout << endl;
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        
    
}

int main(){
    
    char choice;
    cout << "\nNumbers list (Section 9 challenge)" << endl;
    while (true) {
        showMenu();
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch(tolower(choice)) {
            case 'p':
                displayElements();
                break;
            case 'a':
                addElement();
                break;
            case 'm':
                calculateMean();
                break;
            case 's':
                smallestNumber();
                break;
            case 'l':
                largestNumber();
                break;
            case 'q':
                cout << "Goodbye!";
                return 0;
            default:
                cout << "Invalid choice - please try again." << endl;
        }
    }
    
    
    
    return 0;
}
