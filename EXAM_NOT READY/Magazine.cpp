#include "Magazine.h"

Magazine::Magazine()
{
    int number = rand() % 10 + rand() % 10+8;
    name_magazine = "none";
    date_mag = Date(0, 0, 0);
}

Magazine::Magazine(int IBSN, bool read_not, int number, string name_magazine, Date date_mag)
    :Archive(IBSN, read_not)
{
    this->number = number;
    this->name_magazine = name_magazine;
    this->date_mag = date_mag;
}

Magazine::~Magazine()
{
}

int Magazine::getNumber() const
{
    return number;
}

string Magazine::getName_Magaz() const
{
    return name_magazine;
}

Date Magazine::getDate_Magaz() const
{
    return date_mag;
}

void Magazine::setNumber(int number)
{
    this->number = number;
}

void Magazine::setName_Magaz(string name_magazine)
{
    this->name_magazine = name_magazine;
}

void Magazine::setDate_Magaz(Date date_mag)
{
    if (date_mag > Date()) { throw new DateException(); }
    this->date_mag = date_mag;
}

void Magazine::Show() const
{
    cout << "\n" << this->IBSN;
    cout << "\n++++++++++++++++++++++++\n";
    cout << "Read or not:" << this->read_not;
    cout << "\n++++++++++++++++++++++++";
    cout << "\n--------------------\n";
    cout << "Number:" << this->number;
    cout << "\n Name of Magazine:" << this->name_magazine;
    cout << "\nMagazine release date:" << this->date_mag;

    cout << "\n--------------------\n";
}

string Magazine::Type() const
{
    return "Magazine";
}

string Magazine::ToString() const
{
    return "\nMagazine " + to_string(IBSN) + " " + to_string(read_not) + " " + to_string(number) + " " + name_magazine  +
        " " + to_string(date_mag.getYear()) + ":" + to_string(date_mag.getMonth()) + ":" + to_string(date_mag.getDay())
        + "\n";
}

void Magazine::Save(ofstream& file)
{
    file << Type() << endl << IBSN << endl << read_not << endl << number << endl
        << name_magazine << endl << date_mag << endl;
}

void Magazine::Load(ifstream& file)
{
    string tmp;
   
  /*  int number;
    string    name_magazine;
    Date     date_mag;*/

    file >> IBSN;
    file >> read_not;
    file >> number;
    char a = file.get();
    file >> name_magazine;

    file >> tmp;
    date_mag.setDay(atoi(tmp.c_str()));
    tmp.erase(0, tmp.find("-") + 1);



    date_mag.setMonth(atoi(tmp.c_str()));
    tmp.erase(0, tmp.find("-") + 1);



    date_mag.setYear(atoi(tmp.c_str()));
    tmp.erase(0, tmp.find("-") + 1);

}
