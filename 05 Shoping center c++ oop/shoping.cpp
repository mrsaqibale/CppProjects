#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
class file
{
	string name;
	int age;
public:
	void getdata()
	{
		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter your Age: ";
		cin >> age;
		fstream obj;
		obj.open("File.dat", ios::in | ios::out | ios::app);
		obj.write((char*)this, sizeof(*this));
	}
	void showdata()
	{
		fstream obj;
		obj.seekg(0);
		obj.open("File.dat", ios::in | ios::out | ios::app);
		obj.read((char*)this, sizeof(*this));
		while (!obj.eof())
		{
			cout << setw(10) << name << setw(8) << age << endl;
			obj.read((char*)this, sizeof(*this));
		}
	}
};
class shoping
{
public:
	void main_menu() {
		cout << " **********************   Welcome to Mega Mart ************************ " << endl << endl;
		cout << "                        Press 1 for Cutomer menu: " << endl;
		cout << "                        Press 2 for Owner menu: " << endl;
		cout << "                        Press 3 to Exit the store:" << endl;
		cout << "                            Enter Options : ";
	}

	void cutomer_menu() {
		cout << "\n\n ******************   Welcome to Cutomer menu ********************************* " << endl << endl;
		cout << "                        Press B to buy items: " << endl;
		cout << "                        Press D to delete items: " << endl;
		cout << "                        Press V to View your buying:" << endl;
		cout << "                        Press M for bill/money:" << endl;
		cout << "                        Press R to return to Main menu:" << endl;
		cout << "                                 Enter Options : ";
	}

	void owner_menu() {
		cout << "\n\n *******************   Welcome to Owner menu ********************************* " << endl << endl;
		cout << "                        Press A to Add items: " << endl;
		cout << "                        Press D to Delete items: " << endl;
		cout << "                        Press V to Display items: " << endl;
		cout << "                        Press S to View Total sales: " << endl;
		cout << "                        Press p to Show list of customer :" << endl;
		cout << "                        Press R to return to Main menu:" << endl;
		cout << "                                 Enter Options : ";
	}

	void buy_items() {
		cout << "\n\n ******************    Buy Items   ********************************* " << endl << endl;
		cout << "                        Press S to Buy Shirts: " << endl;
		cout << "                        Press P to Buy Pants: " << endl;
		cout << "                        Press J to Buy Jackets: " << endl;
		cout << "                        Press R to return to Cutomer menu:" << endl;
		cout << "                               Enter Options : ";
	}

	void delete_items() {
		cout << "\n\n ********************  Buy Items ********************************* " << endl << endl;
		cout << "                        Press S to Delete Shirts: " << endl;
		cout << "                        Press P to Delete Pants: " << endl;
		cout << "                        Press J to Delete Jackets: " << endl;
		cout << "                        Press R to return to Cutomer menu:" << endl;
		cout << "                               Enter Options : ";
	}

	void add_items() {
		cout << "\n\n *********************  Add Items ********************************* " << endl << endl;
		cout << "                        Press S to Add Shirts: " << endl;
		cout << "                        Press P to Add Pants: " << endl;
		cout << "                        Press J to Add Jackets: " << endl;
		cout << "                        Press R to return to Owner menu:" << endl;
		cout << "                                 Enter Options : ";
	}

};


int main()
{
	shoping obj;
	file f;
	string u_input;
	int value;
	int t_shirt = 50, t_pents = 50, t_jackets = 50;
	int shirt = 0, pents = 0, jackets = 0;
	int t_bill = 0;



movetoTop:
	obj.main_menu();
	cin >> u_input;

	if (u_input == "1")
	{
		f.getdata();
	movetoCM:
		obj.cutomer_menu();
		cin >> u_input;


		if (u_input == "B" || u_input == "b")
		{
		movetoItems:
			obj.buy_items();
			cin >> u_input;
			// Portiobn for buying shirts
			if (u_input == "S" || u_input == "s") {
				cout << "                    How many shirts you want to purchase = ";
				cin >> value;
				shirt = shirt + value;
				t_shirt = t_shirt - shirt;
				goto movetoItems;
			}
			// Portiobn for buying pents
			else if (u_input == "P" || u_input == "p") {
				cout << "                    How many pants you want to purchase = ";
				cin >> value;
				pents = pents + value;
				t_pents = t_pents - pents;
				goto movetoItems;
			}
			// Portiobn for buying Jackets
			else if (u_input == "J" || u_input == "j") {
				cout << "                    How many jackets you want to purchase = ";
				cin >> value;
				jackets = jackets + value;
				t_jackets = t_jackets - jackets;
				goto movetoItems;
			}
			else if (u_input == "R" || u_input == "r") {
				goto movetoCM;
			}
			else {
				cout << "                     You Enter Invalid Option\n\n\n";
				goto movetoItems;
			}
		}


		// Portion for delete items
		else if (u_input == "D" || u_input == "d") {
		moveto_d_Items:
			obj.delete_items();
			cin >> u_input;
			// Portiobn for delete shirts
			if (u_input == "S" || u_input == "s") {
				cout << "                     How many shirts you want to delete = ";
				cin >> value;
				if (shirt != 0 && (shirt - value) >= 0)
				{
					shirt = shirt - value;
					cout << "                     Done ";
				}
				else 
					cout << "                     You Enter Invalid Option\n\n\n";
				goto movetoItems;
			}
			// Portiobn for delete pents
			else if (u_input == "P" || u_input == "p") {
				cout << "                     How many pents you want to delete = ";
				cin >> value;
				if (pents != 0 && (pents - value) >= 0)
				{
					pents = pents - value;
					cout << "                     Done ";
				}
				else 
					cout << "                     You Enter Invalid Option\n\n\n";
				goto movetoItems;
			}
			// Portiobn for delete Jackets
			else if (u_input == "J" || u_input == "j") {
				cout << "                     How many jackets you want to delete = ";
				cin >> value;
				if (jackets != 0 && (jackets - value) >= 0)
				{
					jackets = jackets - value;
					cout << "                     Done ";
				}
				else
					cout << "                     You Enter Invalid Option\n\n\n";
				goto movetoItems;
			}
			else if (u_input == "R" || u_input == "r") {
				goto movetoCM;
			}
			else {
				cout << "                   You Enter Invalid Option\n\n\n";
				goto moveto_d_Items;
			}
		}

		// view portion
		else if (u_input == "V" || u_input == "v") {
			cout << "\n\n\n                            Total shirts = " << shirt << endl;
			cout << "                                  Total pants = " << pents << endl;
			cout << "                                  Total jackets = " << jackets << endl;
			goto movetoCM;
		}


		// billing portion
		else if (u_input == "M" || u_input == "m") {

			// file handling for billing
			ofstream billing("bill.txt");
			billing << "Your Total Bill = " << t_bill;
			billing.close();

			t_bill = (shirt * 100) + (pents * 100) + (jackets * 100);
			cout << "\n\n\n                 Your Total Bill = " << t_bill << endl << endl;
			cout << "              ***** Thanks For Purchasing ******* " << endl << endl;
			cout << "              *****     ALLAH HAFIZ   *********" << endl << endl;

			goto movetoTop;
		}
		else if (u_input == "R" || u_input == "r") {
			goto movetoTop;
		}
		else {
			cout << "                    You Enter Invalid Option\n\n\n";
			goto movetoCM;
		}
	}

	else if (u_input == "2") {
	moveto_owner:
		obj.owner_menu();
		cin >> u_input;

		if (u_input == "A" || u_input == "a") {
		moveto_additems:
			obj.add_items();
			cin >> u_input;

			// Portiobn for adding shirts
			if (u_input == "S" || u_input == "s") {
				cout << "                    How many shirts you want to Add = ";
				cin >> value;
				t_shirt = t_shirt + value;
				goto moveto_additems;
			}
			// Portiobn for adding pents
			else if (u_input == "P" || u_input == "p") {
				cout << "                    How many pants you want to Add = ";
				cin >> value;
				t_pents = t_pents + value;
				goto moveto_additems;
			}
			// Portiobn for adding Jackets
			else if (u_input == "J" || u_input == "j") {
				cout << "                    How many Jackets you want to Add = ";
				cin >> value;
				t_jackets = t_jackets + value;
				goto moveto_additems;
			}
			else if (u_input == "R" || u_input == "r") {
				goto moveto_owner;
			}
			else {
				cout << "                    You Enter Invalid Option\n\n\n";
				goto moveto_additems;
			}

		}

		if (u_input == "D" || u_input == "d") {
		moveto_del:
			obj.delete_items();
			cin >> u_input;

			// Portiobn for deleting shirts
			if (u_input == "S" || u_input == "s") {
				cout << "                    How many shirts you want to delete = ";
				cin >> value;
				t_shirt = t_shirt - value;
				goto moveto_del;
			}
			// Portiobn for deleting pents
			else if (u_input == "P" || u_input == "p") {
				cout << "                    How many pants you want to delete = ";
				cin >> value;
				t_pents = t_pents - value;
				goto moveto_del;
			}
			// Portiobn for deleting Jackets
			else if (u_input == "J" || u_input == "j") {
				cout << "                     How many jackets you want to delete = ";
				cin >> value;
				t_jackets = t_jackets - value;
				goto moveto_del;
			}
			else if (u_input == "R" || u_input == "r") {
				goto moveto_owner;
			}
			else {
				cout << "                    You Enter Invalid Option\n\n\n";
				goto moveto_del;
			}

		}
		else if (u_input == "V" || u_input == "v") {
			cout << "\n\n                        Total Shirts in store = " << t_shirt << endl;
			cout << "                            Total Pants in store = " << t_pents << endl;
			cout << "                            Total Jackets in store = " << t_jackets << endl << endl;
			goto moveto_owner;
		}
		else if (u_input == "S" || u_input == "s") {
			// View sales in file using filehandling 
			ofstream sales("sales.txt");
			sales << "Total Shirts sale today = " << shirt << endl;
			sales << "Total Pants sale today = " << pents << endl;
			sales << " Total Jackets sale today = " << jackets << endl;
			sales << "Total Sales today = " << t_bill << endl << endl;
			sales.close();

			cout << "\n\n                         Total Shirts sale today = " << shirt << endl;
			cout << "                             Total Pants sale today = " << pents << endl;
			cout << "                             Total Jackets sale today = " << jackets << endl;
			cout << "                                         Total Sales today = " << t_bill << endl << endl << endl;
			goto moveto_owner;
		}
		else if (u_input == "R" || u_input == "r") {
			goto movetoTop;
		}
		else {
			goto moveto_owner;
		}
	}
	else if (u_input == "p" || u_input == "P")
	{
		f.getdata();
		goto moveto_owner;
	}
	else if (u_input == "3") {
		cout << "\n\n*************** Thanks For your Visit **************** " << endl;
		cout << "\n ****************** ALLAH HAFIZ ******************" << endl;
		return 0;
	}
	else {
		cout << "                                  You Enter Invalid Option\n\n\n";
		goto movetoTop;
	}


	return 0;
}