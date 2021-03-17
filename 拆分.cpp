
#include<stdio.h> 
# define MAX_SIZE 100

int items[MAX_SIZE];//保存每一项的数值
int count;			//当前输出式子个数 
int N;				//分解的整数


void f(int remain_value, int start, int num) {
	//remain_value: 表示剩余需要分解的数字
	// start：表示分解项的第一项
	//num:表示已经分解了多少项

	if (remain_value != 0) {

		//还没分解完
		for (int i = start; i >=1; i--) {
			items[num] = i;
			f(remain_value - i, remain_value<i?remain_value:i, num + 1);
		}
	}
	else {
		//remain==0,分解完毕
		//开始打印当前式子 
		count++;


		printf("%d=%d", N, items[0]);//打印式子头部 
		for (int j = 1; j < num; j++) {
			printf("+%d", items[j]);
		}
		printf("\n");
	}
}

int main() {
	//题目：分解N 
	//思路：递归求解 	
	count = 0;
	N = 7;
	// scanf("%d", &N);
	f(N, N-1, 0);
	return 0;

}
