
#include<stdio.h> 
# define MAX_SIZE 100

int items[MAX_SIZE];//����ÿһ�����ֵ
int count;			//��ǰ���ʽ�Ӹ��� 
int N;				//�ֽ������


void f(int remain_value, int start, int num) {
	//remain_value: ��ʾʣ����Ҫ�ֽ������
	// start����ʾ�ֽ���ĵ�һ��
	//num:��ʾ�Ѿ��ֽ��˶�����

	if (remain_value != 0) {

		//��û�ֽ���
		for (int i = start; i >=1; i--) {
			items[num] = i;
			f(remain_value - i, remain_value<i?remain_value:i, num + 1);
		}
	}
	else {
		//remain==0,�ֽ����
		//��ʼ��ӡ��ǰʽ�� 
		count++;


		printf("%d=%d", N, items[0]);//��ӡʽ��ͷ�� 
		for (int j = 1; j < num; j++) {
			printf("+%d", items[j]);
		}
		printf("\n");
	}
}

int main() {
	//��Ŀ���ֽ�N 
	//˼·���ݹ���� 	
	count = 0;
	N = 7;
	// scanf("%d", &N);
	f(N, N-1, 0);
	return 0;

}
