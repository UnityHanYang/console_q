#include <iostream>
#include <Windows.h>
#include<algorithm>
#include <string>
#include <map>
#include <vector>

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}

int main() {
    map<int, int> fMap;
    srand(time(NULL));

    for (int i = 0; i < 100000; i++) {
        int num = rand() % 1000;
        fMap[num]++;
    }

    vector<pair<int, int>> vec(fMap.begin(), fMap.end());

    sort(vec.begin(), vec.end(), compare);

    for (auto& it : vec) {
        cout << it.first << "ÀÇ °³¼ö: " << it.second << endl;
    }

    return 0;
}

