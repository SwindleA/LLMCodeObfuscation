#include <iostream>
#include <string>
using namespace std;
void substring(string str, int start, int length)
{
	int i=start, j;
	string substr;
	for(j = 0; str[i] !='\0' && length > 0; i++, j ++)
		{
			substr[j] = str[i];
			length--;
		}
	substr[j] = '\0';
cout<<"\n";
	for(int k=0;substr[k]!='\0';k++)
	    cout<<substr[k];
}
int main()
{
	string str;
	int start,endlen,len;
	cout<<"Enter a string: ";
	getline(cin,str);
	len=str.length();
	cout<<"\n Enter starting position of substring : ";
	cin>>start ;
	cout<<"\n Enter length of substring: " ;
	cin>>endlen;
	if(start > 0 && start < 30 && endlen<len )
		substring(str,start,endlen);
	else
		cout<<"Values are invalid\n";
	return 0;
}