#include<iostream>
using namespace std;

int main()
{

int MyArr[5][5];

cout<<"Input Element: ";
for(int x=0;x<5;x++)
{
for(int y=0;y<5;y++)
{
cin>>MyArr[x][y];
}
}
system("cls");
for(int x=0;x<5;x++)
{
for(int y=0;y<5;y++)
{

cout<<MyArr[x][y]<<" ";
}
cout<<"\n";
}
    

system("pause");
return 0;
}