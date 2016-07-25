#include <iostream>

using namespace std;



int main()
{
	const int students = 5;
	int grades[students] = { 70, 80, 85, 60, 95 };
	int total = grades[0] + grades[1] + grades[2] + grades[3] + grades[4];
	int average = total / students;
	cout << "The average of the class was: " << average << endl;
	system("pause");
	return 0;
}

