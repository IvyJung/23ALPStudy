#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s[100] = { 0, };
	scanf("%s", s);
	char abc[26] = { 0, }; //���ĺ� 26�ڸ�
	
	for (int a = 0; a < strlen(s); a++) { //strlen() ���ڿ������Լ�
		for (int i = 0; i < 26; i++) {
			if (s[a] - 'a' == i) //�ƽ�Ű ���� ã�ƺ���
				abc[i]++;
		}
	}
	for (int a = 0; a < 26; a++) {
		printf("%d ", abc[a]);
	}
	return 0;
}

/*
#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
	int arr[26] = { 0 };
	char str[MAX];

	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++) {
		arr[str[i] - 'a']++; 
	}

	for (int j = 0; j < 26; j++) {
		printf("%d ", arr[j]);
	}

	return 0;
}
*/