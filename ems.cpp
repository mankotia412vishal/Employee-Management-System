#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;
ofstream fout;
ifstream fin;
class ValueGet
{
public:
	int data;
	ValueGet()
	{
		data = 0;
	}
};
struct node
{
	int id;
	char name[50];
	char qua[30];
	char addrs[50];
	char city[30];
	char jobtitle[30];
	int salary;
	char date[30];
	node *prev, *next;
};

void login()
{
p:
	// system("color 5A");
	system("cls");
	char ch;
	string user, pass;
	cout << "\n\n\n\n\n";
	cout << "\t\t\t==============================";
	cout << "\n\n\t\t\t\tLogin Process";
	cout << "\n\n\t\t\t==============================";
	cout << "\n\n\n Enter User Name : ";
	cin >> user;
	cout << "\n\n Enter Password : ";
	for (int i = 1; i <= 6; i++)
	{
		ch = getch();
		pass += ch;
		cout << "*";
	}
	if (user == "user" && pass == "group9")
	{
		cout << "\n\n\n\t\t\tCongratulations Login Successfully...";
		cout << "\n\n\n\t\t\t\t\tLoading";
		for (int i = 1; i <= 6; i++)
		{
			Sleep(500);
			cout << ".";
		}
	}
	else if (user != "user" && pass == "group9")
	{
		cout << "\n\n\n Your User Name is Wrong....";
		getch();
		goto p;
	}
	else if (user == "user" && pass != "group9")
	{
		cout << "\n\n\n Your Password is Wrong....";
		getch();
		goto p;
	}
	else
	{
		cout << "\n\n\n User Name & Password Both are Wrong....";
		getch();
		exit(0);
	}
}
void intro()
{
	// system("color 8A");
	system("cls");
	cout << "\n\n\n\n\n";
	cout << "\t\t\t==============================";
	cout << "\n\t\t\t\tGroup Members";
	cout << "\n\t\t\t==============================";

	cout << "\n\n\t\t\t\t 51.Rohant Narang";
	cout << "\n\n\t\t\t\t 64.Vedika Jumbad";
	cout << "\n\n\t\t\t\t 65.Vishal Singh";
	cout << "\n\n\t\t\t\t 66.Pallavi Wasade ";
	cout << "\n\n\t\t\t\t 68.Sakshi Zod";
	cout << "\n\n\t\t\t==============================";
	cout << "\n\t\t\t==============================";
	getch();
	// system("color 8A");
	system("cls");
	cout << "\n\n\n\n\n\n\n";
	cout << "\t\t\t===================================================";
	cout << "\n\t\t\t===================================================";
	cout << "\n\n\t\t\t  Employee Management System Using Linked list";
	cout << "\n\n\n\t\t\t\t\tVersion : 1.1";
	cout << "\n\t\t\t===================================================";
	cout << "\n\t\t\t===================================================";
	getch();
	// system("color A");
	system("cls");
	cout << "\n\n\n";
	cout << "\n\n\t\t\t==============================================";
	cout << "\n\t\t\t==============================================";
	cout << "\n\n\t\t\t\t    Our Guide Introduction ";
	cout << "\n\n\t\t\t==============================================";
	cout << "\n\t\t\t==============================================";
	// cout<<"\n\n\t\t\t Name :		Group9";
	// cout<<"\n\t\t\t Class :	SY-IT-A";
	// cout<<"\n\t\t\t Section :	IT-A";
	// cout<<"\n\t\t\t Roll No. :	12010252";
	cout << "\n\t\t\t Teacher :	Prof.DONGRE SHITAL PARAG";
	cout << "\n\t\t\t Institute :	Vishwakarma University";
	cout << "\n\n\t\t\t==============================================";
	cout << "\n\t\t\t==============================================";
	cout << "\n\n";
	getch();
}

int main_exit;
class employ
{
private:
	node *head;
	char ch;

public:
	employ()
	{
		head = NULL;
	}

	void menu()
	{

		// system("color 8A");
		// cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		// cout << "\t\t\t Welcome to the Employee Record Management system" << endl;
		// cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		cout << "\n\t\t\t -------------------------------------------";
		cout << "\n\t\t\t||  WELCOME TO EMPLOYEE MANAGEMENT SYSTEM  ||";
		cout << "\n\t\t\t -------------------------------------------";
		cout << "\n\t\t\t\t 1- Add a record:" << endl;
		cout << "\n\t\t\t\t 2- Search a record:" << endl;
		cout << "\n\t\t\t\t 3- Display a record:" << endl;
		cout << "\n\t\t\t\t 4- View a record from a Database:" << endl;
		cout << "\n\t\t\t\t 5- Delete the Database:" << endl;
        cout << "\n\t\t\t\t 6- delete a record:" << endl;
		cout << "\n\t\t\t\t 0- Exit:" << endl;
		return;
	}
	void add_first()
	{

		FILE *ptr;

		ptr = fopen("record.dat", "a+");
		// account_no:
		// system("color 8A");
		system("cls");
		// system("color 7A");
		node *newer = new node;
		cout << "\n\t\t Enter the employee id:";
		cin >> newer->id;
		fflush(stdin);
		cout << "\n\t\t Enter the full name of employee:";
		cin.getline(newer->name, 50);
		fflush(stdin);
		cout << "\n\t\t Enter the qualification of employee:";
		cin.getline(newer->qua, 30);
		fflush(stdin);
		cout << "\n\t\t Enter the address:";
		cin.getline(newer->addrs, 50);
		fflush(stdin);
		cout << "\n\t\t enter the city:";
		cin.getline(newer->city, 30);
		fflush(stdin);
		cout << "\n\t\t Enter the job title:";
		cin.getline(newer->jobtitle, 30);
		fflush(stdin);
		cout << "\n\t\t Enter the salary:";
		cin >> newer->salary;
		fflush(stdin);
		cout << "\n\t\t Enter the start date:";
		cin.getline(newer->date, 30);
		fflush(stdin);
		newer->next = head;
		newer->prev = NULL;
		if (head != NULL)
		{
			head->prev = newer;
		}
		head = newer;

		// cout<<"Newer id "<<newer->id;

		fprintf(ptr, "ID: %d, Name: %s, Qualification: %s, Address: %s, City: %s, JobTitle :%s, Salary: %d, Date: %s \n", newer->id, newer->name, newer->qua, newer->addrs, newer->city, newer->jobtitle, newer->salary, newer->date);
		// fprintf(ptr,"%d","%s","%s","%s","%s","%s","%s","%s",newer->id,newer->name,newer->qua,newer->addrs,newer->city,newer->jobtitle,newer->salary,newer->date);
		// fprintf(ptr,"ID: %d, Name: %s Qualification: %s, Address: %s, City: %s, JobTitle :%s, Salary: %s, Date: %s \n",newer->id,newer->name,newer->qua,newer->addres);
		fclose(ptr);
		cout << "\n\t \t Record inserted successfully:" << endl;
	}

	int viewRecord(void)
	{

		ValueGet vg;
		ifstream file;
		file.open("record.dat", fstream::binary | fstream::out); // Opens a file in binary mode for input operations i.e., getting data from file.
		if (!file)
			cout << "File Not Found." << endl;
		else
		{
			file.seekg(0);							   // To make sure that the data is read from the starting position of the file.
			while (file.read((char *)&vg, sizeof(vg))) // Iterates through the file till the pointer reads the last line of the file.
				printf("%s", &vg.data);
		}
		return 0;
	}

	void del()

	{
		if (head == NULL)
		{
			cout << "\n\t\t List is empty:" << endl;
			cout << "\n\t\t add a new record\n\t Press Y to proceed or N to exit:";
			cin >> ch;
			if (ch == 'Y' || ch == 'y')
			{
				add_first();
				return;
			}
			else
			{
				exit(1);
			}
		}
		else
		{
			int val;
			cout << "\n\t\t Enter the employee id which do you want to delete a record:";
			cin >> val;
			node *temp = head;
			bool flag = false;
			if (temp->id == val)
			{
				head = temp->next;
				head->prev = NULL;
				flag = true;
				delete temp;
				if (flag == true)
				{
					cout << "Record has been deleted successfully" << endl;
				}
			}
			else
			{
				while (temp != NULL)
				{
					if (temp->id == val)
					{
						node *p, *q;
						if (temp->next == NULL)
						{
							p = temp->prev;
							p->next = NULL;
							flag = true;
							delete temp;
						}

						else
						{
							p = temp->prev;
							q = temp->next;
							p->next = q;
							q->prev = p;
							flag = true;
							delete temp;
						}
					}
					temp = temp->next;
				}
				if (flag == false)
				{
					cout << "\n\t Value is not found:" << endl;
				}
			}
		}
	}
	


    	void show()
	{
		if (head == NULL)
		{
			cout << "\n\t\t List is empty:" << endl;
			cout << "\n\t\t Add a new record \n\t Press Y to proceed or N to exit:";
			cin >> ch;
			if (ch == 'Y' || ch == 'y')
			{
				add_first();
				return;
			}
			else
			{
				exit(1);
			}
		}
		else
		{
			node*temp = head;
			while (temp != NULL)
			{
				cout << "\n\t\t Information of employee:" << endl;
				cout << "\n\t\t ID:" << "\t\t\t" << temp->id << endl;
				cout << "\n\t\t name:" << "\t\t\t" << temp->name << endl;
				cout << "\n\t\t Qualification:" << "\t\t" << temp->qua << endl;
				cout << "\n\t\t Address:" << "\t\t" << temp->addrs << endl;
				cout << "\n\t\t city:" << "\t\t\t" << temp->city << endl;
				cout << "\n\t\t job title:""\t\t" << temp->jobtitle << endl;
				cout << "\n\t\t salary:" << "\t\t" << temp->salary << endl;
				cout << "\n\t\t starting date:" << "\t\t" << temp->date << endl;
				cout << "_______________________________________________________" << endl;
				temp = temp->next;
			}

		}
	}
	void search()

	// account_no:
	// system("cls");
	{
		if (head == NULL)
		{
			cout << "\n\t\t List is empty:" << endl;
			cout << "\n\t\t Add a new record \n\t Press Y to proceed or N to exit:";
			cin >> ch;
			if (ch == 'Y' || ch == 'y')
			{
				add_first();
				return;
			}
			else
			{
				exit(1);
			}
		}
		else
		{
			int val;
			cout << "\n\t\t Enter employee id which you want to search:";
			cin >> val;
			node *temp = head;
			bool flag = false;
			while (temp != NULL)
			{

				if (temp->id == val)
				{
					cout << "\n\t\t Information of employee:" << endl;
					cout << "\n\t\t ID:"
						 << "\t\t\t" << temp->id << endl;
					cout << "\n\t\t name:"
						 << "\t\t\t" << temp->name << endl;
					cout << "\n\t\t Qualification:"
						 << "\t\t" << temp->qua << endl;
					cout << "\n\t\t Address:"
						 << "\t\t" << temp->addrs << endl;
					cout << "\n\t\t city:"
						 << "\t\t\t" << temp->city << endl;
					cout << "\n\t\t job title:"
							"\t\t"
						 << temp->jobtitle << endl;
					cout << "\n\t\t salary:"
						 << "\t\t" << temp->salary << endl;
					cout << "\n\t\t starting date:"
						 << "\t\t" << temp->date << endl;
					cout << "_______" << endl;
					return;
				}
				temp = temp->next;
			}
		}
	}
	
	
};

int main()
{
	int n;
	char ch;
	employ en;
	login();
	// en.menu();
	intro();
Label2:

	en.menu();
	cout << "\n\t\t\t Enter your choice:";
	cin >> n;
	if (n == 1)
	{
	Label1:
		// system("color 7A");
		cout << "_________" << endl;
		// cout << "\n\t\t Where you want to add record? " << endl;
		cout << "\t\t\t" << endl;
		cout << "\n\t\t 1- Add the Employee " << endl;
		// cout << "\n\t\t 2- insert at very last place " << endl;
		// cout << "\n\t\t 3- insert after recently added record(pointer pointing at this) " << endl;
		// cout << "\n\t\t 4- insert before record " << endl;
		cout << "\n\t\t Enter Choice? " << endl;
		cin >> n;
		if (n == 1)
		{
			en.add_first();
			cout << "\n\t\t do you want to go to main menu?" << endl;
			cin >> ch;
			fflush(stdin);
			if (ch == 'Y' || ch == 'y')
			{
				goto Label2;
			}
			else
			{
				exit(1);
			}
		}
		else if (n == 2)
		{
			// en.add_last();
			cout << "\n\t\t do you want to go to main menu:" << endl;
			cin >> ch;
			if (ch == 'Y' || ch == 'y')
			{
				goto Label2;
			}
			else
			{
				exit(1);
			}
		}
		else if (n == 9)
		{

			// en.add_after();
			cout << "\n\t\t do you want to go to main menu:" << endl;
			cin >> ch;
			if (ch == 'Y' || ch == 'y')
			{
				goto Label2;
			}
			else
			{

				exit(1);
			}
		}
		else if (n == 11)
		{
			// en.add_before();
			cout << "\n\t\t Do you want to go to main menu?" << endl;
			cin >> ch;
			if (ch == 'Y' || ch == 'y')
			{
				goto Label2;
			}
			else
			{
				exit(1);
			}
		}
		else
		{
			cout << "\n\t\t Choose Correct Answer:" << endl;
			goto Label1;
		}
	}

	else if (n == 2)
	{
		en.search();
		cout << "\n\t\t Do you want to go to main menu:" << endl;
		cin >> ch;
		if (ch == 'Y' || ch == 'y')
		{
			goto Label2;
		}
		else
		{
			exit(1);
		}
	}
	else if (n == 8)
	{
		// en.update();
		// update();
		cout << "\n\t\t Do you want to go to main menu:" << endl;
		cin >> ch;
		if (ch == 'Y' || ch == 'y')
		{
			goto Label2;
		}
		else
		{
			exit(1);
		}
	}
	else if (n ==6 )
	{
		en.del();
		cout << "\n\t\t Do you want to go to main menu" << endl;
		cin >> ch;
		if (ch == 'Y' || ch == 'y')
		{
			goto Label2;
		}
		else
		{
			exit(0);
		}
	}

	else if (n == 3)
	{
		en.show();
		cout << "\n\t\t Do you want to go to main menu" << endl;
		cin >> ch;
		if (ch == 'Y' || ch == 'y')
		{
			goto Label2;
		}
		else
		{
			exit(1);
		}
	}
	else if (n == 4)
	{
		en.viewRecord();
		cout << "\n\t\t Do you want to go to main menu" << endl;
		cin >> ch;
		if (ch == 'Y' || ch == 'y')
		{
			goto Label2;
		}
		else
		{
			exit(1);
		}
	}
	else if (n == 5)
	{
		remove("record.dat");
		fout.open("record.dat", ios::in | ios::out | ios::app);
		fout.close();

		cout << "Content deleted successfully!" << endl;
		cout << "\n\t\t Do you want to go to main menu" << endl;
		cin >> ch;
		if (ch == 'Y' || ch == 'y')
		{
			goto Label2;
		}
		else
		{
			exit(1);
		}
	}
	else if (n == 0)
	{
		exit(1);
	}
	else
	{
		cout << "\n\t\t Choose correct answer" << endl;
		goto Label2;
	}
	system("pause");
}