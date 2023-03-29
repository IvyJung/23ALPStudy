#include <iostream>
using namespace std;
   
// main�ȿ� �� �迭���� �����ϸ� stack overflow����. ���������� heap�� �����ؾ� overflow�� ���� �ʴ´�.
int arr[1000005] = {};            // ���� ����
 bool arr_num[2000005];              // �Էµ� ���� �����ϴ� boolŸ�� �迭
//int arr_num[2000005] = { 0 };       // int�� �غ��� �ߴµ� �ʹ� ũ��


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    int result = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int sum;
    cin >> sum;

    for (int i = 0; i < N; i++)
    {
        if (sum-arr[i] > 0 && arr_num[sum-arr[i]])
            result++;
        arr_num[arr[i]] = true;
    }
    //for (int i = 0; i < N; i++)
    //{
    //    for (int j = i+1; j < N; j++)       // O(N^2)���� Ǯ�� ������ O(N)���� Ǯ��� ���� �����ε�
    //    {
    //        if ((arr[i] + arr[j]) == sum)
    //            result++;
    //    }
    //}
    cout << result << endl;
    return 0;
}