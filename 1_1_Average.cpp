#include <iostream>
#include <vector>
using namespace std;
int main () {
    cout << "\033[2J\033[1;1H";
    cout << "This program calculates the average value of some numbers that the user enters\n";
    cout << "How many elements will be contain your array?\n";
    int n, sum = 0;
    float average;
    cin >> n;
    vector <int> array (n);
    cout << "Input elements\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> array[i];
        sum += array[i];
    }
    average = (float)sum / n;
    cout << "Average of all elements of array is " << average << "\n";
}
