

#include<iostream>

using namespace std;


class Matrix2D 
{
	int** Matrix;
	int rows;
	int cols;
public:

	Matrix2D(int rows,int columns) :rows(rows),cols(columns)
	{
		Matrix = new int* [rows];
		for (int i = 0; i < this->rows; i++)
		{
			 Matrix[i] = new int[cols];
			
		}
	


		for (int i = 0; i < this->rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				Matrix[i][j] = 0;
			}
		}
	}


	void input() 
	{
		cout << "Enter the values you want to Enter\n";
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cin >> Matrix[i][j];
			}
		}
	
	
	}


	void output() 
	{
		cout << "Matrix is :\n";
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout << Matrix[i][j] << "\t";
			}
			cout << endl;
		}
	
	
	}


	Matrix2D operator*(Matrix2D M) 
	{
		Matrix2D product(rows,M.cols);

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				for (int k = 0; k < M.cols; k++)
				{
						product.Matrix[i][j] += this->Matrix[i][k] * M.Matrix[k][j];
					
				}
			}
		}
		return product;
	
	}
};

int main() 
{
	Matrix2D M1(2, 2), M2(2, 2),M3(2,2);

	M1.input();
	M1.output();

	/////////////////
	M2.input();
	M2.output();

	M3=(M1 * M2);

	M3.output();
	
	return 0;
}