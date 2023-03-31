#include <iostream>
using namespace std;

int main()
{
	int i;
	int X;
	int line = 1;
	int num;
	int deno, nume = 0;
	
	cin >> X;
	num = X; 

	for (int i = 1; i < X+1; i++)
	{
		num -= i;
		
		if(num > 0)
		{
			line++;
		}
		else
		{
			num += i;
			break;
		}
	}
    
	
	if(line % 2 == 0)
	{
		deno = line - (num-1);
		nume = num;
	}
	else 
	{
		nume = line - (num-1);
		deno = num;
	}	
	

	cout << nume << "/" << deno;
	
	return 0;
}
