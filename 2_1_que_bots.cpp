#include <iostream>
#include <vector>
using namespace std;
vector <int> add_vec (vector <int> vec, int n){
    vector <int> newvec(vec.size()+1);
    for (int i = 0; i < vec.size(); i++)
    {
        newvec[i] = vec[i];
    }
    newvec[vec.size()] = n;
    return newvec;
}
int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This program is designed to get, memorize and print a list of bots\n";
    vector <int> vec = {12};
    int num = 0;
    // int count = 1;
    while (num != -1) {
        cout << "Input your number, bot  ";
        cin >> num;
        vec = add_vec(vec, num);
    }

    cout << "\n We have got such array of bots numbers: \n";
    for (int i = 0; i < vec.size (); i++)
    {
        cout << vec[i] << " ";
    }
}