#include <stdio.h>
#include <stdlib.h>

int smaller(int i, int j){
	if(i < j)
		return i;
	return j;
}

int main(){
	int i, j, n, m, arr[100][100], total=0, price, x, v, h, v1 = 0, v2 = 0;
	scanf("%d %d",&n,&m);
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &arr[i][j]);
			total += arr[i][j];
		}
  }
	price = total * 6;
	for(i = 0; i < n; i++){
		x = arr[i][0];
		for(j = 1; j < m; j++){
			v1 += smaller(x, arr[i][j]) * 2;
			x = arr[i][j];
		}
	}
	for(j = 0; j < m; j++){
		x = arr[0][j];
		for(i = 1; i < n; i++){
			v2 += smaller(x, arr[i][j]) * 2;
			x = arr[i][j];
		}
	}
	v = v1 + v2;
	h = (total - m * n) * 2;
	price = price - v - h;
	printf("%d", price);
	return 0;
}
