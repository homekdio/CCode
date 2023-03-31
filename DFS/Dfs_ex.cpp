#include<iostream>

using namespace std;

int n, r, ans;  //r个数进行全排列  ans为排列个数 
int book[510]; //标记是否被访问
int a[510]; //记录每次的排列数据

void DFS(int cur){ //从{1,2,...,n}中取r个数构成的排列
	if(cur == r){ //已经去够r个数 
		for(int i = 0; i < cur; i++){ //循环输出 
			cout << a[i] << ' ';
		}
		cout << endl;
		ans++;  //数量加1 
		return ;
	}
	
	for(int i = 1; i <= n; i++){  //循环遍历保证不漏 
		if(!book[i]){ //若没访问过 
			book[i] = 1; //标记已访问
			a[cur] = i; //i符合条件加入
			DFS(cur + 1); //寻找一个数字 
			book[i] = 0; //回溯：清除标记
		}
	} 
} 

int main(){
	cin >> n >> r;
	DFS(0);
	
	cout << ans << endl;
	return 0; 
}
