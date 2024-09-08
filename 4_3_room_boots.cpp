#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "\033[2J\033[1;1H";
    // cout << "This program is simulator que of bots, where bot with bigger number erase bots with smoller numbers\n";
    vector<int> que;
    int number = 0;
    cout << "Input your numbers to get in the que, bots\n";
    que.reserve (10);
    while (true)
    {
        cin >> number;
        if (number == -1) break;
        que.push_back(number);
        cout << "capacity " << que.capacity() << "size " << que.size() << "\n";
        if (que.capacity() - que.size() <= 2) {
            cout << "Warning! Free space in the room is running out!\n";
        }
    }
    for (int i = 0; i < que.size(); i++)
    {
        cout << que[i] << " ";
    }
}