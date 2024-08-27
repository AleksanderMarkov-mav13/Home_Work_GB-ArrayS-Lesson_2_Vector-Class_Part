#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This program takes several numbers from the user and finds the second maximum element\n";
    cout << "How many elements will be contain your array?\n";
    int n, max = 0, submax = 0;
    // cin >> n;
    n = 7;
    vector<int> array(n);
    cout << "Input elements\n";
    array = {5, 4, 6, 7, 8, 12, 16}; //
    for (int i = 0; i < n; i++)
    {
        // cin >> array[i];
        if (array[i] > max)
        {
            submax = max;
            max = array[i];
        }
        if (array[i] < max & array[i] > submax)
        {
            submax = array[i];
        }
    }
    cout << "The second maximal element of array is " << submax << "\n";
}
