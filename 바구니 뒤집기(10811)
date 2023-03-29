#include <iostream>
using namespace std;

int main()
{
	int N, M, X, Y;
	int start_num, end_num;
	cin >> N >> M;
	
	int bucket[N+100];
	int semi_bucket[N+100];
	
	for (int i = 1; i < N+1; i++) 
	{
		bucket[i] = i;
	}
	
	for (int i = 1; i < M+1; i++) 
	{
		cin >> X >> Y;

		start_num = X;
		end_num = Y;
		
		if(start_num != end_num)
		{
			for (int j = 0; j < (end_num-start_num+1); j++)
			{
				semi_bucket[start_num + j] = bucket[start_num + j];
			}
		
			for (int j = 0; j < (end_num-start_num+1); j++)
			{
				bucket[end_num - j] = semi_bucket[start_num + j];
			}
		}
    }
	

	for (int i = 1; i < N+1; i++)
	{
		cout << bucket[i] << " ";
	}
	return 0;
}
