#include <iostream>
#include <vector>
using namespace std;
vector<int> erase_bot(vector<int> vec, vector<int> bot_sell, int val_less)
{
    vector<int> newvec(vec.size() - val_less);
    
}
int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This program is simulator shop of bots\n";
    cout << "How many bots have we on our showcase?\n";
    int val_bot, val_less;
    cin >> val_bot;
    vector<int> bot_list(val_bot);
    for (int i = 0; i < val_bot; ++i) {
        cout << "Input serial number of bot № " << i<< " for showcase\n";
        cin >> bot_list[i];
    }
    cout << "How many bots are we going to cell?\n";
    cin >> val_less;
    vector <int> bot_sell(val_less);
    for (int i = 0; i < val_less; ++i)
    {
        cout << "Input the index of bot, that we are celling\n";
        cin >> bot_sell[i];
    }

}