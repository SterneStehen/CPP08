#include <iostream>
#include <cstddef>


int * sort_arr(int arr[], int size){
	int tmp = 0;
	int flag = 0;
	int i = 0;
	int j = 0;
	while (flag != 1){
		flag = 1;
		i = 0;
		j = 0;
		while(i < size){
			j = 0;
			while(j < size){
				if(j <= i){
					j++;
					continue;
				}
				else if(arr[i] > arr[j]){
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
					flag = 0;
				}
				j++;
			}
			i++;
		}
	}
	return arr;
}






int main(){
	int arr[] = {  5, 2,7, 11, 12, 3};
	size_t s = sizeof(arr)/ sizeof(arr[0]);
	std::cout << s << std::endl;
	int *res = sort_arr(arr, s);
	for(int i = 0; i < s; i++){
		std::cout << res[i] << std::endl;
	}
}