#include<iostream>
using namespace std;


int main()
{
	int x,y;
int count=0;

	char key[10]={'A','B','C','A','B','C','A','B','A','A'};
	char students[5][10]= { {'A','B','C','A','B','C','A','B','C','A'},
							{'B','C','A','B','B','C','A','A','B','B'},
							{'A','B','C','A','B','C','A','B','C','A'},
							{'B','C','A','A','B','C','A','A','B','A'},
							{'A','B','C','A','B','C','A','B','C','A'} };
	cout<<"Students\t\tScores\n";

cout<<"\n";

	for( x=0;x<5;x++)
	{
		count=0;
		cout<<"\n";
		cout<<x+1;
		
		for( y=0;y<10;y++)
			{
				if(key[y]==students[x][y])
				{
	
				count++;
				

				}
			}
		
		cout<<"\t\t\t"<<count;
		
	}
	

cout<<"\n";
system("pause");
return 0;
	}