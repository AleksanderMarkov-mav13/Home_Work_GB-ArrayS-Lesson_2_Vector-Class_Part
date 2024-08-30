#include <iostream>
#include <vector>
using namespace std;
vector<int> add_patient(vector<int> ages, int n) {
    vector<int> new_array (ages.size() + 1);
    for (int i = 0; i < ages.size(); ++i) {
        new_array[i] = ages [i];
    }
    new_array[ages.size()] = n;
    return new_array;
} 
int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This program is designed to get and analize a list of patients\n";
    vector <int> ages = {0};
    int age = 0;
    do {
        cout << "Please, Input your age  ";
        cin >> age;
        if (age > 0) {
            ages = add_patient(ages, age);
        } 
    } while (age != -1);
    int sum = 0;
    cout << "\n";
    for (int i = 0; i < ages.size(); ++i)
    {
        sum += ages [i];
        cout << ages[i] << " ";
    }
    cout << "\n" << sum << " " << ages.size() << "\n";
    float average = (float)sum / (ages.size() - 1);
    cout << "There are " << ages.size() - 1 << " patients in the que. \n";
    cout << "Their average age is " << average << " years";
}