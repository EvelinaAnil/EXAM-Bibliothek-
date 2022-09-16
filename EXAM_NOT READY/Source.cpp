#include "Archive.h"
#include "Bibliothek.h"
#include "Book.h"
#include "Comics.h"
#include "Date.h"
#include "Magazine.h"
#include "Newspaper.h"
#include "AllExeptions.h"

int main() {
	
	int year, month, day;
	int hour, minutes, seconds;
	int menu,menu1,menu2,menu3,menu4;
	Bibliothek p;
	Date date;
	int id;
	int men;
	string c;
	int d;
	string co,cc,cr;
	double a;
	int IBSN;
	bool read_not;
int i;
	//bool s_1 = true;
	//bool s_2 = false;
	
	do
	{
		cout << "\n 1. Enter";
		cout << "\n 0. Exit";
		cin >> menu4;
		switch (menu4)
		{ case 1:
		
	do
	{
		cout << "\n 1. Admin";
		cout << "\n 2. User";
		cout << "\n 0. Exit";
		cin >> menu;
		switch (menu)
		{
		case 1:
			do
			{
		cout << "\n 1. Add";
		cout << "\n 2. Dell";
		cout << "\n 3. Soort";
		cout << "\n 4. Show all";
		cout << "\n 5. Find by IBSN";
		cout << "\n 6. Show by Type";
		cout << "\n 7. Save";
		cout << "\n 8. Load";
		cout << "\n 9. Cahnge info";
		
		cout << "\n 0. Exit";
		cin >> menu1;

		switch (menu1)
		{
		case 1:

			cout << "\n 1. Book \n 2. Comics \n 3. Magazine \n 4. Newspaper \n";
			cin >> men;
			if (men == 1) {
				cout << "\n Input IBSN:"; cin >> IBSN;
				cout << "\n 1. Read  \n 2. Not Read"; cin >> i;
				if (i == 1) {
					read_not = true;
				}
				if (i == 2) {
					read_not = false;
				}
				cout << "\n Name:"; cin.ignore(); getline(cin,c );
				cout << "\n Author:"; getline(cin, co);
				cout << "\n Publish House:"; getline(cin, cc);
				
				cout << "\n Input date\tYear-Month-Day \n"; cin >> year >> month >> day;
	
				try
				{
					p.add(new Book(IBSN, read_not,c,co,cc, Date(year, month,day )));
				}
				catch (AllExceptions* obj)
				{
					obj->showWhat();
				}
				
			}
			if (men == 2) {
				cout << "\n Input IBSN:"; cin >> IBSN;
				cout << "\n 1. Read  \n 2. Not Read"; cin >> i;
				if (i == 1) {
					read_not = true;
				}
				if (i == 2) {
					read_not = false;
				}
				cout << "\n Name:"; cin.ignore(); getline(cin, c);
				cout << "\n Publish House:"; getline(cin, cc);
				cout << "\n Input date\tYear-Month-Day"; cin >> year >> month >> day;
			

				try
				{
					p.add(new Comics(IBSN,read_not,c,cc,Date(year, month, day)));
				}
				catch (AllExceptions* obj)
				{
					obj->showWhat();
				}
				

			}
			if (men == 3) {
				cout << "\n Input IBSN:"; cin >> IBSN;
				cout << "\n 1. Read  \n 2. Not Read"; cin >> i;
				if (i == 1) {
					read_not = true;
				}
				if (i == 2) {
					read_not = false;
				}
				cout << "\n Name:"; cin.ignore(); getline(cin, c);
				cout << "\n Input date\tYear-Month-Day"; cin >> year >> month >> day;
						cout << "\n Input number"; cin >> id;
				
						try
						{
							p.add(new Magazine(IBSN,read_not,id,c,Date(year, month, day)));
						}
						catch (AllExceptions* obj)
						{
							obj->showWhat();
						}
				

			}
			if (men == 4) {
				cout << "\n Input IBSN:"; cin >> IBSN;
				cout << "\n 1. Read  \n 2. Not Read"; cin >> i;
				if (i == 1) {
					read_not = true;
				}
				if (i == 2) {
					read_not = false;
				}
				cout << "\n Name:"; cin.ignore(); getline(cin, c);
				cout << "\n Input date\tYear-Month-Day"; cin >> year >> month >> day;
					cout << "\n Input number"; cin >> id;
				
					try
					{
						p.add(new Newspaper(IBSN,read_not,c,id,Date(year, month, day)));
					}
					catch (AllExceptions* obj)
					{
						obj->showWhat();
					}
				

			}

			break;
		case 2:
			cout << "\n Input id"; cin >> id;
			p.dell(id);
			break;
		case 3:
			p.Sooort();
			break;
		case 4:
			p.SHow();
			break;
		case 5:
			p.ShowByIBSN();
			break;
		case 6:
			p.ShowByType();
			break;
		case 7:
			p.Save();
			break;
		case 8:
			p.Load();
			break;
		case 9:
			cout << "\n Input IBSN:"; cin >> IBSN;
			try
			{
				p.Change_info(IBSN);
			}
			catch (AllExceptions* obj)
			{
				obj->showWhat();
			}
			
			break;
		
		
		default:
			break;
		}
} while (menu1 != 0);
			break;
		case 2:
			do
			{
				/*p.add(new Book(34, false, "Magic", "Cristofer.Y.T", "PP Reatar Book Online ", Date(2006, 12, 34)));
				p.add(new Comics(56, true, "Manga", "OP Cimics Rest", Date(1995, 11, 43)));
				p.add(new Newspaper(123, true, "Design your face", 12, Date(2005, 9, 10)));
				p.add(new Magazine(304, false, 43, "Haircat", Date(2009, 8, 23)));*/
			cout << "\n 1. Soort";
			cout << "\n 2. Show all";
			cout << "\n 3. Find by IBSN";
			cout << "\n 4. Show by Type";
			cout << "\n 5. Save";
			cout << "\n 6. Load";//???
			/*cout << "\n 7. Show if read";*/
			/*cout << "\n 8. Show if not read";*/
			cout << "\n 7. Cahnge info";
			cout << "\n 0. Exit";
			cin >> menu2;
			switch (menu2)
			{
			case 1:p.Sooort();
				break;
			case 2:p.SHow();
				break;
			case 3:p.ShowByIBSN();
				break;
			case 4:p.ShowByType();
				break;
			case 5:p.Save();
				break;
			case 6: p.Load();
				break;
			/*case 7:
				break;*/
			/*case 8:
				break;*/

			case 7:
				cout << "\n Input IBSN:"; cin >> IBSN;
				p.Change_info(IBSN);

				break;
			
		

			default:
				break;
			}
			} while (menu2 != 0);
			break;
		default:
			break;
		}
		
	} while (menu != 0);default:
			break;
		}
	} while (menu4 != 0);

}