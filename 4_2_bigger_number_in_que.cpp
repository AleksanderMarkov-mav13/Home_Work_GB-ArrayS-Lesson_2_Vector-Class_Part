#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This program is simulator que of bots, where bot with bigger number erase bots with smoller numbers\n";
    vector<int> que;
    int number = 0;
    cout << "Input your numbers to get in the que, bots\n";
    while (true)
    {
        cin >> number;
        while (que.size() != 0 && que[que.size() - 1] < number)
        {
            que.pop_back();
        }
        que.push_back(number);
        if (number == -1) break;
    }
    for (int i = 0; i < que.size(); i++)
    {
        cout << que[i] << " ";
    }
}