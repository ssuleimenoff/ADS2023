#include <bits/stdc++.h>
using namespace std;

vector<int> target;
vector<string> answer;

void solution(vector<int>& arr, int index) {
    for (int i = 0; i < target.size(); i++) {
        int found = -1;
        if (target[i] >= arr[arr.size() - 1] && index % 2 == 0) {
            found = lower_bound(arr.begin(), arr.end(), target[i]) - arr.begin();
        }
        if (found != -1) {
            answer[i] = to_string(index) + " " + to_string(found);
        }
    }
}

int main() {
    int toFind;
    cin >> toFind;
    target.resize(toFind);
    answer.resize(toFind, "-1");
    for (int i = 0; i < toFind; i++) {
        cin >> target[i];
    }
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
        solution(arr[i], i);
    }

    for (const string& ans : answer) {
        cout << ans << endl;
    }
    return 0;
}
