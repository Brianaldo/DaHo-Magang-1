#include "sort.hpp"
using namespace std;

int main()
{
    vector<tuple<string, int>> tupList;
    int n, year;
    string name;
    cout << "Input: " << endl;
    cin >> n;
    try {
        for (int i = 0; i < n; i++)
        {
            cin >> name >> year;
            if (year < 0) {
                throw "Negative Age!";
            }
            tupList.push_back(make_tuple(name, year));
        }
    } catch(const char* msg) {
        cerr << "Error: " << msg << endl;
    }

    sort(tupList.begin(), tupList.end(), sortTuple);
    cout << endl;
    printTuple(tupList);
    return 0;
}