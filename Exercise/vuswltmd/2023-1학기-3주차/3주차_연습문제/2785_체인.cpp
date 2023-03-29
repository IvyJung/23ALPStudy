#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <deque>
#include <stack>
using namespace std;

int N;
int chain[500005];
deque<int> dq;
int ans = 0;

int main() {
    
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> chain[i];
    }

    sort(chain, chain + N);

    for (int i = 0; i < N; i++) {
        dq.push_back(chain[i]);
    }
    int key = dq.front(); dq.pop_front();
    
    while (dq.size() != 1) {
        if (key == 0) {
            key = dq.front(); dq.pop_front();
        }
        
        key--;
        ans++;

        for (int i = 0; i < 1; i++) {
            if (!dq.empty()) {
                dq.pop_back();
            }
        }
    }

    if (key != 0) {
        cout << ans + 1;
    }
    else {
        cout << ans;
    }
}

// (ü���� ���̰� ���� �ͺ��� (�ڵ忡���� �ش� ü���� ���̸� key��� ��) ) �ϳ��� Ǯ� �ٸ� �� ü���� �����ϴµ� ����Ѵ�.
// �����ϴٰ� key ü���� �� ������� ���� ü���� ����Ѵ�
// key ü���� �� ������� �ʾҴµ��� �������� �� �����ϴµ� �����ߴٸ� key�� ���������� ���δ�.

