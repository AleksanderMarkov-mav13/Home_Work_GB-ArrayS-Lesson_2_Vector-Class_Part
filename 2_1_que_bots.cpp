#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This program is designed to get, memorize and print a list of bots\n";
    vector <int> vec = {12};
    int num = 0;
    int count = 1;
    while (num != -1) {
        cout << "Input your number, bot  ";
        cin >> num;
        count ++;
        vector<int> newvec(count);

        for (int i = 0; i < count - 1; i++) {
            newvec[i] = vec[i];
        }
        newvec[count - 1] = num;
        vec = newvec;
    }

    cout << "\n We have got such array of bots numbers: \n";
    for (int i = 0; i < count; i++)
    {
        cout << vec[i] << " ";
    }
}