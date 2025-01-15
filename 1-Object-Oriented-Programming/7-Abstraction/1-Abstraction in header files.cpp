
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    vector<int> ans{1, 2, 3, 4, 5, 6};
    sort(ans.begin(), ans.end()); // you dont know the implementation of sort(stored in header file algorithm) , here is abstraction (hiding background details)
    for (auto i : ans)
        cout << i << " ";
    return 0;
}