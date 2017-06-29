#include<iostream>
#include<string>
using namespace std;


bool isplnd(string);
void main()
{
	string a;
	cout << "enter the string :";
	cin >> a;
	bool b = isplnd(a);
	if (b == true)
		cout << "string is palindrom";
	else 
		cout << "string is not palindrom";
	cin.get();
	cin.get(); 
	cin.get();

}

bool isplnd(string b)
{
	int strlen = b.length();
	int left = 0;
	int right = strlen - 1;


	while (left<right)
	{
		if (b[left]!=b[right])
		{
			break;
		}
		left++;
		right--;

	}

	if (left == strlen/2)
		return true;
	else return false;


}
