/*write a program to find character is vowel or not*/
#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	char c;
	cout<<"enter c character:";
	cin>>c;
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		cout<<c<<"is a vowel";
	}
	else
	{
		cout<<c<<" is a consonant";
	}
	getch();
	return 0;
}