#include<cmath>
#include<iostream>
#include<Eigen/Core>

using namespace std;
using namespace Eigen;

int main()
{
	//Example of vector
	cout << " Example of vector \n";
	// vector definition
	Vector3f v(1.0f ,2.0f ,3.0f);
	Vector3f w(1.0f ,0.0f ,0.0f);
	// vector output
	cout << " Example of output \n";
	cout << v << endl;
	// vector add
	cout << " Example of add \n";
	cout << v + w << endl;
	// vector scalar multiply
	cout << " Example of scalar multiply \n";
	cout << v * 3.0f << endl;
	cout << 2.0f * v << endl;
	// Example of matrix
	cout << " Example of matrix \n";
	//matrix definition
	Matrix3f i,j;
	i << 1.0 , 2.0 , 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
	j << 2.0 , 3.0 , 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
	// matrix output
	cout << " Example of output \n";
	cout << i << endl;
	cout << j << endl;
	// matrix add i + j
	cout << "Example of add \n";
	cout << i+j << endl;
	// matrix scalar multiply i * 2.0
	cout << "Example of scalar multiply \n";
	cout << i * 2.0f << endl;
	// matrix multiply i * j
	cout << "Example of  matrix multiply \n";
	cout << i * j << endl;
	// matrix multiply vector i * v
	cout << "matrix multiply vector" << endl;
	cout << i * v << endl;
}
