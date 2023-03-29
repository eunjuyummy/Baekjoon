#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector < vector <int> > v(100,vector <int>(100,0));
	
	int N, X, Y;
	int count = 0;
	
	cin >> N;
	
	for (int i = 0; i < N; i++) 
	{
		cin >> X >> Y;
		
		for (int j = 0; j < 10; j++) 
		{
			for (int k = 0; k < 10; k++) 
			{
				v[X+j][Y+k] = 1;
			}
		}	
	}
	
	for (int i = 0; i < 100; i++) 
	{
		for (int j = 0; j < 100; j++) 
		{
			if(v[i][j] == 1)
			{
				count++;
			}
		}
	}
	
	cout << count;
	
	return 0;
}
