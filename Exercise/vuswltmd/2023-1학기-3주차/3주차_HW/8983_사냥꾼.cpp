#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
using namespace std;

int M, N, L;
int x[100'005];
int y[100'005];
int launch[100'005];

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> M >> N >> L;

    for (int i = 0; i < M; i++) {
        cin >> launch[i];
    }
    sort(launch, launch + M); //����� ��ġ�� �����ϰ� ����

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }  // ������ ��ġ�� ���� 

    int ans = 0;

    for (int i = 0; i < N; i++) {
        int st = 0;
        int en = M - 1;
        
        while (st <= en) {
            int mid = (st + en) / 2;

            if (abs(launch[mid] - x[i]) + y[i] <= L) {
                //������ ���´�� ������ ���� ������ �������� �ϳ��� ���κ��� �����Ÿ��ȿ� �ִٸ� +1 ���ְ� �Ѿ��  
                ans++;
                break;
            }

            if (x[i] > launch[mid]) {

                //���� ������ x��ǥ�� mid �ε����� ���� ��뺸�� �� ũ�ٸ� ��ġ�� �����Ѵ�. 
                st = mid + 1;
                //( �ٽ� mid�� �����ϰ� �ش� �ε����� ���� ���� �Ѿ��)
            }
            else {
                en = mid - 1;
            }

        }
    }

    cout << ans;
}

