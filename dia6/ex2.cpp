#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, i;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> seq(n);
        vector<int> newseq;

        for (i = 0; i < n; i++) {
            cin >> seq[i];
        }

        int esq = 0, dir = n - 1;

        while (esq <= dir) {
            newseq.push_back(seq[esq]);
            esq++;
            if (esq <= dir) {
                newseq.push_back(seq[dir]);
                dir--;
            }
        }

        for (i = 0; i < newseq.size(); i++) {
            cout << newseq[i] << " ";
        }
        cout << endl;
    }

    return 0;
}