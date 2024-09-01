#include <iostream>
#include <vector>
using namespace std;
vector<int> erase_bot(vector<int> vec, vector<int> bot_sell, int val_less)
{
    vector<int> newvec(vec.size() - val_less);
    int count_less = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (i == bot_sell [count_less] -1) {
            count_less++;
        }
        else {
            newvec[i - count_less] = vec[i];
        }
    }
    return newvec;
}
int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This program is simulator shop of bots\n";
    cout << "How many bots have we on our showcase?\n";
    int val_bot, val_less;
    cin >> val_bot;
    vector<int> bot_list(val_bot);
    cout << "Input serial number of bot № \n";
     for (int i = 0; i < val_bot; ++i)
    {
        cout << i + 1 << "  - ";
        cin >> bot_list[i];
        cout << "\n";
    }
    cout << "How many bots are we going to cell?\n";
    do {
        cin >> val_less;
        if (val_less <= 0 || val_less > val_bot) cout << "Wrong input!\n";
    } while (val_less <= 0 || val_less > val_bot);
    vector <int> bot_sell(val_less);
    cout << "Input the index of bot, that we are celling\n";
    for (int i = 0; i < val_less; ++i)
    {
        cin >> bot_sell[i];
    }
    bot_list = erase_bot(bot_list, bot_sell, val_less);
    cout << "Now we have on our showcase next list of boots:\n";
    for (int i = 0; i < bot_list.size (); i++)
    {
        cout << "№ " << i + 1 << "  S/N " << bot_list [i] << "\n";
    }
}