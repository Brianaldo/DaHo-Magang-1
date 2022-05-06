#include "sort.hpp"

bool sortTuple(const tuple<string, int> &a, const tuple<string, int> &b)
{
    // Sort by year                  // Same year, sort by name 
    return (get<1>(a) > get<1>(b) || get<1>(a) == get<1>(b) && get<0>(a) < get<0>(b));
}

void printTuple(const vector<tuple<string, int>> tupList)
{
    for (int i = 0; i < tupList.size(); i++)
    {
        cout << get<0>(tupList[i]) << " " << get<1>(tupList[i]) << endl;
    }
}