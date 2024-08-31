#include <iostream>
#include <vector>
using namespace std;
vector<int> add_vec(vector<int> vec, int n, int pos)
{
    vector<int> newvec(vec.size() + 1);
    for (int i = 0; i < pos; i++)
    {
        newvec[i] = vec[i];
    }
    for (int i = pos; i < vec.size(); i++)
    {
        newvec[i+1] = vec[i];
    }
    newvec[pos] = n;
    return newvec;
}
int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This program is designed to get, memorize and print a list of bots\n";
    cout << "But you should realize, that there is corruption even among the bots";
    vector<int> vec = {0};
    int num = 0, position = 0;
    do {
        cout << "\nSerial number?  ";
        cin >> num;
        cout << "Next free position in the que is " << vec.size() << "\n";
        if (num != -1) {
            cout << "Position?  ";
            cin >> position;
        } else
        { cout << "THE END of QUE! ";}
        if (num > 0 & position > 0 & position < vec.size() + 2) {
            vec = add_vec(vec, num, position);
        }
        cout << "\nNow we have got such que of bots: \n";
        for (int i = 1; i < vec.size(); i++)
        {
            cout << "№ " << i << " S/N " << vec[i] << "\n";
        }
    } while (num != -1);
   

    
}