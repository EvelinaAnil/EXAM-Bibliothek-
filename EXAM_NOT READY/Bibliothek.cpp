#include "Bibliothek.h"

//void Bibliothek::ShowIfRead()
//{
//	bool s1=true;
//	for (list<Archive*>::const_iterator i = ordert.begin(); i != ordert.end(); i++) {
//		if ((*(i))->getRead_Not() == s1) {
//			(*(i))->Show();
//		}
//	}
//}
//
//void Bibliothek::ShowIfNotRead()
//{
//	bool s = false;
//	for (list<Archive*>::const_iterator i = ordert.begin(); i != ordert.end(); i++) {
//		if ((*(i))->getRead_Not() == s) {
//			(*(i))->Show();
//		}
//	}
//}




//list<Archive*>::iterator Bibliothek::findByRead_Not(bool s)
//{
//	
//	for (ordet = ordert.begin(); ordet != ordert.end(); ordet++)
//	{
//		if ((*(ordet))->getRead_Not() == s)
//		{
//			for (list<Archive*>::const_iterator i = ordert.begin(); i != ordert.end(); i++) {
//						
//							(*(i))->Show();
//						
//					}
//		}
//	}
//	return ordet;
//}

//void DayProgram::changeInfo(string name)
//{
//	list<TVProgram*>::iterator tmp = findElementsByName(name);
//
//	if (tmp != programs.end())
//	{
//		cout << "\n\tMENU FOR INFORMATION CHANGING";
//		int menu;
//		Time sometime;
//		string s1 = "", s2 = "";
//		int ival1, ival2 = 0;
//		if ((*(p))->type() == "Movie") //string name, Time timestart, string directbox, int year
//		{
//			do
//			{
//				cout << "\n1) Change name.";
//				cout << "\n2) Change start time.";
//				cout << "\n3) Change direct box.";
//				cout << "\n4) Change year.";
//				cout << "\n5) Change all of this.";
//				cout << "\n0. Turn back.\nChoice: ";
//				cin >> menu;
//				switch (menu)
//				{
//				case 1:
//					cout << "\nInput name: ";
//					cin.ignore();
//					getline(cin, s1);
//
//					(*(p))->setName(s1);
//					cout << "\tName changed succesfully.\n";
//					break;
//
//				case 2:
//					cout << "\nInput time: ";
//					cin >> sometime;
//
//					(*(p))->setTime(sometime);
//					cout << "\tTime changed succesfully.\n";
//					break;
//
//				case 3:
//					cout << "\nInput direct box: ";
//					cin.ignore();
//					getline(cin, s1);
//
//					((Movie*)*p)->setDirectBox(s1);
//					cout << "\tDirect box changed succesfully.\n";
//					break;
//
//				case 4: //string name, Time timestart, string area
//					cout << "\nInput year: ";
//					cin >> ival1;
//
//					((Movie*)*p)->setYear(ival1);
//					cout << "\tYear changed succesfully.\n";
//					break;
//
//				case 5:
//					cout << "\nInput name: ";
//					cin.ignore();
//					getline(cin, s1);
//					(*(p))->setName(s1);
//
//					cout << "Input time: ";
//					cin >> sometime;
//					(*(p))->setTime(sometime);
//
//					cout << "\nInput direct box: ";
//					cin.ignore();
//					getline(cin, s2);
//					((Movie*)*p)->setDirectBox(s2);
//
//					cout << "\nInput year: ";
//					cin >> ival1;
//					((Movie*)*p)->setYear(ival1);
//
//					cout << "\tAll information changed succesfully.\n";
//					break;
//
//				default: if (menu > 5 || menu != 0 || menu < 0) cout << "\tWrong menu item selected.\n"; break;
//				}
//			} while (menu != 0);
//		}
//		else if ((*(p))->type() == "Show") //string name, Time timestart, string theme
//		{
//			do
//			{
//				cout << "\n1) Change name.";
//				cout << "\n2) Change start time.";
//				cout << "\n3) Change theme.";
//				cout << "\n4) Change all of this.";
//				cout << "\n0. Turn back.\nChoice: ";
//				cin >> menu;
//				switch (menu)
//				{
//				case 1:
//					cout << "\nInput name: ";
//					cin.ignore();
//					getline(cin, s1);
//
//					(*(p))->setName(s1);
//					cout << "\tName changed succesfully.\n";
//					break;
//
//				case 2:
//					cout << "\nInput time: ";
//					cin >> sometime;
//
//					(*(p))->setTime(sometime);
//					cout << "\tTime changed succesfully.\n";
//					break;
//
//				case 3:
//					cout << "\nInput theme: ";
//					cin.ignore();
//					getline(cin, s1);
//
//					((Show*)*p)->setTheme(s1);
//					cout << "\tTheme changed succesfully.\n";
//					break;
//
//				case 4:
//					cout << "\nInput name: ";
//					cin.ignore();
//					getline(cin, s1);
//					(*(p))->setName(s1);
//
//					cout << "Input time: ";
//					cin >> sometime;
//					(*(p))->setTime(sometime);
//
//					cout << "Input theme: ";
//					cin.ignore();
//					getline(cin, s2);
//					((Show*)*p)->setTheme(s2);
//
//					cout << "\tAll information changed succesfully.\n";
//					break;
//
//				default: if (menu > 4 || menu != 0 || menu < 0) cout << "\tWrong menu item selected.\n"; break;
//				}
//			} while (menu != 0);
//		}
//		else if ((*(p))->type() == "Children") //string name, Time timestart, int minage, int maxage
//		{
//			do
//			{
//				cout << "\n1) Change name.";
//				cout << "\n2) Change start time.";
//				cout << "\n3) Change minimal age.";
//				cout << "\n4) Change maximal age.";
//				cout << "\n5) Change all of this.";
//				cout << "\n0. Turn back.\nChoice: ";
//				cin >> menu;
//				switch (menu)
//				{
//				case 1:
//					cout << "\nInput name: ";
//					cin.ignore();
//					getline(cin, s1);
//
//					(*(p))->setName(s1);
//					cout << "\tName changed succesfully.\n";
//					break;
//
//				case 2:
//					cout << "\nInput time: ";
//					cin >> sometime;
//
//					(*(p))->setTime(sometime);
//					cout << "\tTime changed succesfully.\n";
//					break;
//
//				case 3:
//					cout << "\nInput minimal age: ";
//					cin >> ival1;
//
//					((Children*)*p)->setMinAge(ival1);
//					cout << "\tMinimal age changed succesfully.\n";
//					break;
//
//				case 4:
//					cout << "\nInput maximal age: ";
//					cin >> ival1;
//
//					((Children*)*p)->setMaxAge(ival1);
//					cout << "\tMaximal age box changed succesfully.\n";
//					break;
//
//				case 5:
//					cout << "\nInput name: ";
//					cin.ignore();
//					getline(cin, s1);
//					(*(p))->setName(s1);
//
//					cout << "Input time: ";
//					cin >> sometime;
//					(*(p))->setTime(sometime);
//
//					cout << "\nInput minimal age: ";
//					cin >> ival1;
//					((Children*)*p)->setMinAge(ival1);
//
//					cout << "\nInput maximal age: ";
//					cin >> ival2;
//					((Children*)*p)->setMaxAge(ival2);
//
//					cout << "\tAll information changed succesfully.\n";
//					break;
//
//				default: if (menu > 5 || menu != 0 || menu < 0) cout << "\tWrong menu item selected.\n"; break;
//				}
//			} while (menu != 0);
//		}
//		else if ((*(p))->type() == "Education") //string name, Time timestart, string area
//		{
//			do
//			{
//				cout << "\n1) Change name.";
//				cout << "\n2) Change start time.";
//				cout << "\n3) Change area.";
//				cout << "\n4) Change all of this.";
//				cout << "\n0. Turn back.\nChoice: ";
//				cin >> menu;
//				switch (menu)
//				{
//				case 1:
//					cout << "\nInput name: ";
//					cin.ignore();
//					getline(cin, s1);
//
//					(*(p))->setName(s1);
//					cout << "\tName changed succesfully.\n";
//					break;
//
//				case 2:
//					cout << "\nInput time: ";
//					cin >> sometime;
//
//					(*(p))->setTime(sometime);
//					cout << "\tTime changed succesfully.\n";
//					break;
//
//				case 3:
//					cout << "\nInput area: ";
//					cin.ignore();
//					getline(cin, s1);
//
//					((Education*)*p)->setArea(s1);
//					cout << "\tArea changed succesfully.\n";
//					break;
//
//				case 4:
//					cout << "\nInput name: ";
//					cin.ignore();
//					getline(cin, s1);
//					(*(p))->setName(s1);
//
//					cout << "Input time: ";
//					cin >> sometime;
//					(*(p))->setTime(sometime);
//
//					cout << "Input area: ";
//					cin.ignore();
//					getline(cin, s2);
//					((Education*)*p)->setArea(s2);
//
//					cout << "\tAll information changed succesfully.\n";
//					break;
//
//				default: if (menu > 4 || menu != 0 || menu < 0) cout << "\tWrong menu item selected.\n"; break;
//				}
//			} while (menu != 0);
//		}
//	}
//	else
//	{
//		cout << "\tThe program [" << name << "] wasn't found. Please, check the information you enter.\n";
//	}
//}
list<Archive*>::iterator Bibliothek::findElementByIBSN(int IBSN)
{
	for (ordet = ordert.begin(); ordet != ordert.end(); ordet++)
	{
		if ((*(ordet))->getIBSN() == IBSN)
		{
			break;
		}
	}
	return ordet;
}

void Bibliothek::Change_info(int IBSN)

{int year, month, day;
ordet = findElementByIBSN(IBSN);
	string s;
	int y,men,m;
	bool p=true,p1=false;
	int menu;
	cout << "\n1 Change all of Book.";
	cout << "\n2 Change all of Comics.";
	cout << "\n3 Change all of Magazine.";
	cout << "\n4 Change all of Newspaper.";
	cout << "\n5 Change read or not.";
	cout << "\n0. Turn back.\nChoice: ";
	cin >> menu;
	switch (menu)
	{
	case 1:

		cout << "\nInput name: ";
		cin.ignore();
		getline(cin, s);

		((Book*)*ordet)->setName_Book(s);
		cout << "\nInput author: ";
		getline(cin, s);
		((Book*)*ordet)->setAthor(s);
		cout << "\nInput publ house: ";
		getline(cin, s);
		((Book*)*ordet)->setPublish_House(s);
		cout << "\n Input date\tYear-Month-Day \n"; cin >> year >> month >> day;
		if (Date(year,month,day) > Date()) { throw new DateException(); }
		else{
		((Book*)*ordet)->setDate_b(Date(year, month, day));
}
		cout << "\tName changed succesfully.\n";
		break;

	case 2:
		
		cout << "\nInput name: ";
		cin.ignore();
		getline(cin, s);
		((Comics*)*ordet)->setName_Com(s);
		cout << "\nInput publ house: ";
		getline(cin, s);
		((Comics*)*ordet)->setPubl_House_Com(s);
		cout << "\n Input date\tYear-Month-Day \n"; cin >> year >> month >> day;
		if (Date(year, month, day) > Date()) { throw new DateException(); }
		else {
		((Comics*)*ordet)->setDate_come(Date(year, month, day));}
		cout << "\tTime changed succesfully.\n";
		break;

	case 3:
		cout << "\nInput name: ";
		cin.ignore();
		getline(cin, s);

		((Magazine*)*ordet)->setName_Magaz(s);
		cout << "\nInput number: ";
		cin >> y;
		((Magazine*)*ordet)->setNumber(y);
		cout << "\n Input date\tYear-Month-Day \n"; cin >> year >> month >> day;
		if (Date(year, month, day) > Date()) { throw new DateException(); }
		else {
		((Magazine*)*ordet)->setDate_Magaz(Date(year, month, day));}
		cout << "\tDirect box changed succesfully.\n";
		break;

	case 4: 
		cout << "\nInput name: ";
		cin.ignore();
		getline(cin, s);

		((Newspaper*)*ordet)->setName_News(s);
		cout << "\nInput number: ";
		cin >> y;
		((Newspaper*)*ordet)->setNumber_News(y);
		cout << "\n Input date\tYear-Month-Day \n"; cin >> year >> month >> day;
		if (Date(year, month, day) > Date()) { throw new DateException(); }
		else {
		((Newspaper*)*ordet)->setDate_NEWS(Date(year, month, day));}
		cout << "\tYear changed succesfully.\n";
		break;

	case 5:
		cout << "\n 1. Book \n 2. Comics \n 3. Magazine \n 4. Newspaper \n";
		cin >> men;
		if (men == 1) {
			cout << "\nRead \n not Read \n";
			cin >> m;
			if (m == 1) {
				((Book*)*ordet)->setRead_Not(p1);
			}
			if (m == 2) {
				((Book*)*ordet)->setRead_Not(p);
			}
		}
		if (men == 2) {
			cout << "\nRead \n not Read \n";
			cin >> m;
			if (m == 1) {
				((Comics*)*ordet)->setRead_Not(p1);
			}
			if (m == 2) {
				((Comics*)*ordet)->setRead_Not(p);
			}
		}
		if (men == 3) {
			cout << "\nRead \n not Read \n";
			cin >> m;
			if (m == 1) {
				((Magazine*)*ordet)->setRead_Not(p1);
			}
			if (m == 2) {
				((Magazine*)*ordet)->setRead_Not(p);
			}
		}
		if (men == 4) {
			cout << "\nRead \n not Read \n";
			cin >> m;
			if (m == 1) {
				((Newspaper*)*ordet)->setRead_Not(p1);
			}
			if (m == 2) {
				((Newspaper*)*ordet)->setRead_Not(p);
			}
		}

		cout << "\tAll information changed succesfully.\n";
		break;
	default:
		break;
		}
};

void Bibliothek::add(Archive* obj)
{
	ordert.push_back(obj);
}

void Bibliothek::SHow()
{
	for (list<Archive*>::const_iterator i = ordert.begin(); i != ordert.end(); i++) {
		(*(i))->Show();
	}
}

void Bibliothek::dell(int s)
{
	for (list<Archive*>::const_iterator i = ordert.begin(); i != ordert.end(); i++) {
		if ((*(i))->getIBSN() == s) {
			ordert.erase(i);
		}
	}
}

void Bibliothek::ShowByType()
{
	int menu;
	do
	{
		cout << "\n1.Newspaper";
		cout << "\n2.Magazine";
		cout << "\n3.Comics";
		cout << "\n4.Book";
		cin >> menu;
		switch (menu)
		{
		case 1:
			for (list<Archive*>::const_iterator i = ordert.begin(); i != ordert.end(); i++) {
				if ((*(i))->Type() == "Newspaper") {
					(*(i))->Show();
				}
			}
			break;
		case 2:
			for (list<Archive*>::const_iterator i = ordert.begin(); i != ordert.end(); i++) {
				if ((*(i))->Type() == "Magazine") {
					(*(i))->Show();
				}
			}
			break;
		case 3:

			for (list<Archive*>::const_iterator i = ordert.begin(); i != ordert.end(); i++) {
				if ((*(i))->Type() == "Comics") {
					(*(i))->Show();
				}
			}
			break;
		case 4:

			for (list<Archive*>::const_iterator i = ordert.begin(); i != ordert.end(); i++) {
				if ((*(i))->Type() == "Book") {
					(*(i))->Show();
				}
			}
			break;
		default:
			break;
		}
	} while (menu != 0);

}

void Bibliothek::ShowByIBSN()
{
	int s;
	cout << "\nInput IBSN:"; cin >> s;
	for (list<Archive*>::const_iterator i = ordert.begin(); i != ordert.end(); i++) {
		if ((*(i))->getIBSN() == s) {
			(*(i))->Show();
		}
	}

}

void Bibliothek::Sooort()
{
	ordert.sort();
}


void Bibliothek::Save()
{
	ofstream fw("Orders.txt");
	if (fw.is_open()) {
		for (Archive* item : ordert) {
			item->Save(fw);
		}
		fw.close();
		cout << "\nAll information is saved succesfully!\n";
	}
	else {
		throw Exception();
	}
}

void Bibliothek::Load()
{
	ifstream fp("Orders.txt");
	Archive* ptr = NULL;

	if (fp.is_open()) {
		string tmp;
		while (!fp.eof())
		{
			getline(fp, tmp);
			if (tmp == "Book") {
				ptr = new Book();
				ptr->Load(fp);
				ordert.push_back(ptr);
			}
			else if (tmp == "Comics") {
				ptr = new Comics();
				ptr->Load(fp);
				ordert.push_back(ptr);
			}
			else if (tmp == "Magazine") {
				ptr = new Magazine();
				ptr->Load(fp);
				ordert.push_back(ptr);
			}
			else if (tmp == "Newspaper") {
				ptr = new Newspaper();
				ptr->Load(fp);
				ordert.push_back(ptr);
			}
		}fp.close();
		cout << "\nSucsess\n";
	}

	else {
		cout << "\nLoad error\n";

	}


	
	

	
}
