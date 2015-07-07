#include <stdio.h>

void count_Even_Odd(int x[5]);
void selection_Sort();
void bubble_Sort();
void insertion_Sort();

int main() {
	/*int arr[5],i,n;
	int count = 0;
	int c = 0;
	for(i = 0; i < 5; i++) {
		printf("Enter %dth element of the array\n", count);
		scanf("%d", &arr[i]);
		count++;
	}
	printf("Array created is:\n");
	for(i = 0; i < 5; i++)
		printf("%d,", arr[i]);
	/****printf("\nEnter number to searched..\n");
	scanf("%d", &n);
	for(i = 0; i < 5; i++) {
		if(arr[i] == n)
			c = c + 1;
	}
	printf("NUmber exists %d times in the array\n", c);****/
	//count_Even_Odd(arr[5]);
	//selection_Sort();
	bubble_Sort();
	//insertion_Sort();
	return 0;
}

void count_Even_Odd(int a[5]) {
	int i, even = 0, odd = 0;
	for(i = 0; i < 5; i++) {
		if(a[i]%2 == 0)
			even++;
		else 
			odd++;
	}
	printf("There are %d even numbers and %d odd numbers present in the array.\n",even,odd);
}

void selection_Sort() {
  int arr[5];
  int i,j, temp;
  printf("enter 5 element of the array..\n");
  for(i = 0; i < 5; i++){
    scanf("%d", &arr[i]);
  }
  printf("Sorted array is: \n");
  for(i = 0; i < 5; i++) {
  	for(j = i+1; j <5; j++) {
  		if(arr[i] > arr[j]) {
  			temp = arr[j];
  			arr[j] = arr[i];
  			arr[i] = temp;
  		}

  	}
  }
  for(i = 0; i < 5; i++) {
  	printf("%d\n", arr[i]);
  }
}

void bubble_Sort() {
	int arr[5];
	int i,j = 0, temp;
	printf("enter 5 elements of array\n");
	for(i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	printf("sorted array is: \n");
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5-i; j++) {
			if(arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(i = 0; i < 5; i++) {
		printf("%d\n",arr[i]);
	}
}

void insertion_Sort() {
	int arr[5],i,j,temp;
	printf("enter 5 elements of the array:\n");
	for(i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	for(i = 1; i < 5; i++) {
		j = i;
		while(j > 0 && arr[j] < arr[j-1]) {
			temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
		}
	}
	printf("sorted array is:\n");
	for(i = 0; i < 5; i++)
		printf("%d\n", arr[i]); 
	}

