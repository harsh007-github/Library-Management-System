#include<bits/stdc++.h>
using namespace std;

class library
{
	private:
		bool issueBook;
		string bookName;
		vector<string> v;

	public:
		library()
		{
			v.push_back("power of habits");
			v.push_back("atomic habit");
			v.push_back("ikigai");
		}

		void welcomeMsg()
		{
			cout << "Would you like to issue a book ('1' for yes, '0' for no): ";
			cin >> issueBook;
			if (issueBook)
			{
				bookList();
			}
			else
			{
				endMsg();
			}
		}

		void bookList()
		{
			cout << endl << "Here are the books available:" << endl;
			for(int j = 0; j < v.size(); j++)
			{
				cout <<j + 1 <<"." << " "<< v[j] << endl;
			}
			bookIssue();
		}
		
		void bookIssue()
		{
			
			cout << "Which book would you like to issue: ";
			cin.ignore();
			getline(cin, bookName);

			bool bookFound = false;

			for (int i = 0; i < v.size(); i++)
			{
				if (v[i] == bookName)
				{
					cout << bookName << " is issued to you." << endl;
					bookFound = true;
					break;
				}
			}

			if (!bookFound)
			{
				cout << "Sorry, book not found in the library." << endl;
			}
		}
		
		void endMsg()
		{
			cout << "Thank you for visiting." << endl;
		}
};

int main()
{
	library lib;
	cout << "Welcome to Harsh's Library." << endl;
	lib.welcomeMsg();

	return 0;
}

