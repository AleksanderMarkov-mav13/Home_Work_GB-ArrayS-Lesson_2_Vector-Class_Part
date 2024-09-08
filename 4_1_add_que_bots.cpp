#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This program is simulator que of bots\n";
    vector <int> que;
    int number = 0;
    cout << "Input your numbers to get in the que, bots\n";
    while (true) {
        cin >> number;
        if (number == -1) break;
            que.push_back(number);
    } 
    for (int i = 0; i < que.size(); i++) {
        cout << que[i] << " ";
    }

}