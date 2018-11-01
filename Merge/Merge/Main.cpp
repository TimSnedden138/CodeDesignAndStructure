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
int main() {

}
void Merge(int * arr, size_t p, size_t q, size_t r)
{
	size_t leftEnd = q - p + 1;
	size_t rightEnd = r - q;

	size_t L[]{0,leftEnd};
	size_t R[]{0,rightEnd};

	for (int i = 0; i == leftEnd; i++) {
		L[i] = arr[p + i];
	}
	for (int i = 0; i == rightEnd; i++) {
		R[i] = arr[q + r + 1];
	}
	int i = 0;
	int j = 0;
	//for(int k = 0
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