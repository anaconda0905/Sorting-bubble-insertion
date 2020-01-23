
#include <iostream>
using namespace std;
void bubble_sort(long[], long);

int main()
{
	/*22,11,34,-5,3,40,9,16,6*/
	long array[100], n, c, d, swap, t;
	cout << "Enter Elements\n";
	cin >> n;
	cout << "Enter " << n << " integers" << endl;
	
	for (c = 0; c < n; c++)
		cin >> array[c];

	for (c = 1; c <= n - 1; c++)
	{
		d = c;
		while (d > 0 && array[d] < array[d - 1])
		{
			t = array[d];
			array[d] = array[d - 1];
			array[d - 1] = t;
			d--;
		}
		if (c>1){
			cout << "step #" << c-1 << " : [";
			for (int cc = 0; cc < n; cc++)
				cout << array[cc] << ",";
			cout << "]" << endl;
		}

	}

	/*bubble_sort(array, n);*/

	cout << "Sorted list in ascending order:\n";
	cout << "[";
	for (c = 0; c < n; c++)
		cout << array[c] << ",";
	cout << "]"<<endl;
		
	return 0;
}

void bubble_sort(long list[], long n)
{
	long c, d, t;
	for (c = 0; c < (n - 1); c++)
	{
		for (d = 0; d < n - c - 1; d++)
		{
			if (list[d] > list[d + 1])
			{
				/* Swapping */
				t = list[d];
				list[d] = list[d + 1];
				list[d + 1] = t;
			}
		}
		cout <<"step #"<<c+1<< " : [";
		for (int cc = 0; cc < n; cc++)
			cout << list[cc] << ",";
		cout << "]" << endl;

	}
}

