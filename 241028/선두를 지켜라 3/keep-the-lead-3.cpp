#include <iostream>
using namespace std;

int n, m;
int pos_a[1000001];
int pos_b[1000001];
int cntChanged = 0;

int main()
{
    cin >> n >> m;

    int current_time = 1;

    for (int i = 0; i < n; i++)
    {
        int v, t;
        cin >> v >> t;
        for (int j = 0; j < t; j++)
        {
            pos_a[current_time] = pos_a[current_time - 1] + v;
            current_time++;
        }
    }

    current_time = 1;
    for (int i = 0; i < m; i++)
    {
        int v, t;
        cin >> v >> t;
        for (int j = 0; j < t; j++)
        {
            pos_b[current_time] = pos_b[current_time - 1] + v;
            current_time++;
        }
    }

    int prev_leader = 0; // 1: A, 2: B, 0: 같음
    for (int i = 1; i < current_time; i++)
    {
        int current_leader = (pos_a[i] > pos_b[i]) ? 1 : (pos_a[i] < pos_b[i]) ? 2 : 0;

        if (current_leader != prev_leader)
        {
            cntChanged++;
            prev_leader = current_leader;
        }
    }

    cout << cntChanged;
}