#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int j, N;
    double S;

    cout << "N = "; cin >> N;

    // 1. ���������� �� ��������� while
    S = 0;
    j = 2;
    while (j <= N) {
        S += (j * (N - j)) / (pow(j, 2) + pow(N - j, 2));
        j++;
    }
    cout << S << endl;

    // 2. ���������� �� ��������� do-while
    S = 0;
    j = 2;
    do {
        S += (j * (N - j)) / (pow(j, 2) + pow(N - j, 2));
        j++;
    } while (j <= N);
    cout  << S << endl;

    // 3. ���������� �� ��������� for � �����������
    S = 0;
    for (j = 2; j <= N; j++) {
        S += (j * (N - j)) / (pow(j, 2) + pow(N - j, 2));
    }
    cout  << S << endl;

    // 4. ���������� �� ��������� for � ����������
    S = 0;
    for (j = N; j >= 2; j--) {
        S += (j * (N - j)) / (pow(j, 2) + pow(N - j, 2));
    }
    cout << S << endl;

    return 0;
}
