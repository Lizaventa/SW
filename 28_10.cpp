#include<iostream>
#include<math.h>
using namespace std;
void Fill_Array(int*, int);
void Show_Array(int*, int);
void Serching_index(int*, int, int);
void Less_diference(int*, int);
int Max_length(int*, int);
void Show_Array2(int*, int);
void Fill_Matrix(int**, int);
void Show_Matrix(int**, int);
void Transp_main(int**, int);
void Transp_side(int**, int);
void longesDistanes(int);
int main()
{
	srand(time(NULL));
	int size_of_array, number;
	cout << " enter size of array:";
	cin >> size_of_array;
	cout << "enter number to search the index: ";
	cin >> number;
	int* arr1 = new int[size_of_array];
	int* arr2 = new int[size_of_array];
	Fill_Array(arr1, size_of_array);
	Show_Array(arr1, size_of_array);
	Serching_index(arr1, size_of_array, number);
	Less_diference(arr1, size_of_array);
	cout << endl;
	Show_Array2(arr2, size_of_array);
	cout << "Max=" << Max_length(arr2, size_of_array);
	int rows;
	cout << endl;
	cout << "number_of_rows=";
	cin >> rows;
	int** arr3 = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr3[i] = new int[rows];
	}
	Fill_Matrix(arr3, rows);
	Show_Matrix(arr3, rows);
	cout << endl;
	Transp_main(arr3, rows);
	cout << endl;
	Transp_side(arr3, rows);
	cout << endl;
	int dots;
	cout << "enter amount of points";
	cin >> dots;
	longesDistanes(dots);
	delete[]arr1;
	delete[]arr2;
	for (int i = 0; i < rows; i++)
	{
		delete[i]arr3;
	}
	delete[]arr3;

}
void Fill_Array(int* arr1, int size_of_array)
{
	for (int i = 0; i < size_of_array; i++)
	{
		arr1[i] = rand() % 20 - 10;
	}
}
void Show_Array(int* arr1, int size_of_array)
{

	for (int i = 0; i < size_of_array; i++)
	{
		cout << arr1[i] << "\t";
	}
	cout << endl;
}
void Serching_index(int* arr1, int size_of_array, int number)
{
	bool flag = true;
	for (int i = 0; i < size_of_array; i++)
	{
		if (arr1[i] == number)
		{
			cout << "index = " << i << endl;
			flag = false;
			break;
		}
	}
	if (flag == true)
	{
		cout << "there is no such number" << endl;
	}
}
void Less_diference(int* arr1, int size_of_array)
{
	for (int i = 2; i < size_of_array; i++)
	{
		if (arr1[i] < (arr1[i - 2] - arr1[i - 1]))
		{
			cout << arr1[i] << "\t";
		}
	}
}
int Max_length(int* arr2, int size_of_array)
{
	int n = 1;
	int max = 0;
	for (int i = 0; i < size_of_array - 1; i++)
	{
		if (arr2[i] == arr2[i + 1])
		{
			n++;
		}
		else
		{
			n = 1;
		}
		if (n > max)
		{
			max = n;
		}
	}
	return max;
}
void Show_Array2(int* arr2, int size_of_array)
{
	for (int i = 0; i < size_of_array; i++)
	{
		cout << "arr2[" << i + 1 << "]=";
		cin >> arr2[i];
	}
}
void Fill_Matrix(int** arr3, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			arr3[i][j] = rand() % 20 - 10;
		}
	}
}
void Show_Matrix(int** arr3, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr3[i][j] << "\t";
		}
		cout << endl;
	}
}
void Transp_main(int** arr3, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr3[j][i] << "\t";
		}
		cout << endl;
	}
}
void Transp_side(int** arr3, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr3[rows - 1 - j][rows - 1 - i] << "\t";
		}
		cout << endl;
	}
}
void longesDistanes(int dots)
{
	double dist;
	double maxDIST = 0;
	int* arrayX = new int[dots];
	int* arrayY = new int[dots];
	for (int i = 0; i < dots; i++)
	{
		arrayX[i] = rand() % 21 - 10;
		arrayY[i] = rand() % 21 - 10;
	}
	for (int i = 0; i < dots; i++)
	{
		cout << "(" << arrayX[i] << "," << arrayY[i] << ")" << endl;

	}

	for (int i = 0; i < dots; i++)
	{
		for (int k = 1; k < dots - 1; k++)
		{
			dist = sqrt((arrayX[i] - arrayX[k]) * (arrayX[i] - arrayX[k]) + (arrayY[i] - arrayY[k]) * (arrayY[i] - arrayY[k]));
			if (dist > maxDIST)
			{
				maxDIST = dist;
			}
		}
	}
	cout << "Max dist = " << maxDIST << endl;
	delete[]arrayY;
	delete[]arrayX;
}
