#include <stdio.h>
#include <locale.h>

int countSequences(int n) {
    int dp[n + 1];
    dp[0] = 1; // ������� �����������
    dp[1] = 2;
    dp[2] = 3;

    // ���������� ������� ���������� �������������
    for (int i = 3; i <= n; i++) {
    dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 12345;
    }

    return dp[n];
}

int main() {
system("chcp 1251"); // ��� ����
system("cls");
    int n;
    printf("������ ������� ����������� n: ");
    scanf("%d", &n);

    int result = countSequences(n);
    printf("ʳ������ ���������� �������������: %d\n", result);

    return 0;
}
