// merge
// This function accepts a range of elements to sort. Used as a part of the
// merge sort function to merge subsections of the array.
//
//   arr is the array being sorted by the merge operation
//   p is the first index to start merging and sorting from
//   q is the index between p and r
//   r is the last index to merge and sort through
//
//   indices p, q, r, are guaranteed to have these values: p ≤ q < r
//     p is less than or equal to q
//     q is less than r
#include<iostream>
void MergeSort(int * arr, size_t p, size_t r);
void Merge(int * arr, size_t p, size_t q, size_t r);
int sortarr[8]{3,7,4,2,5,6,8,3 };
int *arr = sortarr;
int main() {
	for (int i = 0; i < 8; i++) {
		std::cout << "Original:" << arr[i] << std::endl;
	}
	MergeSort(arr, 0,8-1);
	for (int i = 0; i < 8; i++) {
		std::cout << "Stored:" << arr[i] << std::endl;
	}
	return 0;
}
void Merge(int * arr, size_t p, size_t q, size_t r)
{
	size_t leftEnd = q - p + 1;
	size_t rightEnd = r - q;
	int * L = new int [leftEnd];
	int * R = new int[leftEnd];
	for (int i = 0; i <= leftEnd; i++) {
		L[i] = arr[p + i];
	}
	for (int i = 0; i <= rightEnd; i++) {
		R[i] = arr[q + r + 1];
	}
	int i = 0;
	int j = 0;
	for (int k = p; k <= r; p++) {
		if (j >= rightEnd || i < leftEnd and L[i] <= R[j]) {
 			arr[k] == L[i];
			i++;
			
		}
		else {
			arr[k] == R[j];
			j++;
			
		}
		
	}
	delete[] L;
	delete[] R;

}
void MergeSort(int * arr, size_t p, size_t r)
{
	if (p < r)
	{
		size_t q = (p + r) / 2;
		MergeSort(arr, p, q);
		MergeSort(arr, q + 1, r);
		Merge(arr, p, q, r);
	}
}