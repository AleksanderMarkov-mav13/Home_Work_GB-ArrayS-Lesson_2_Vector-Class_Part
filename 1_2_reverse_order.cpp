#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This program takes some numbers from user and get them back in reverse order\n";
    cout << "How many elements will be contain your array?\n";
    int n;
    cin >> n;
    vector<float> array(n);
    cout << "Input elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Putting the array in reverse order\n";
for (int i = 0; i < n; i++)
    {
        cout << array[n - i -1] << "\n";
    }
}
