#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This program is simulator shop of bots\n";
    vector <int> que;
    int number = 0;
    while (number != -1) {
        cin >> number;
        que.push_back(number);
    } 
    for (int i = 0; i < que.size(); i++) {
        cout << que[i] << " ";
    }

}