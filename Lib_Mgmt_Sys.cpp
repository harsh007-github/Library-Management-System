#include<bits/stdc++.h>
using namespace std;
class library
{
	private:
		bool issueBook = false;
		string bookName;
		vector<string>v;
		v.push_back("power of habits");
		v.push_back("atomic habit");
		v.push_back("ikigai");
	public:
		void welcomeMsg()
		{
				cout << "Would you like to issue a book('1' for yes '0' for no):";
				cin >> issueBook;
				if(issueBook == true)
				{
					bookIssue();
				}
				else
				{
					endMsg();
				}
		}
		void endMsg()
		{
			cout << "Thank you for visiting";
		}
		void bookIssue()
		{
			cout << "Which Book Would You Like to Issue:";
			getline(cin,bookName);
			for(int i =0; i < v.size();i++)
			{
				if(v[i] == bookName)
				{
					cout << bookName <<"is issued to you";
					return;
				}
			}
			cout << "Book not found";
		}
};
int main()
{
	library lib;
	cout << "Welcome to Harsh's Library:" << endl;
	lib.welcomeMsg();
}
