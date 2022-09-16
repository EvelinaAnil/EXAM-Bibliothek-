#include "Comics.h"

Comics::Comics()
{
    name_com = "";
    publish_house_com = "";
        date_com = Date(0, 0, 0);
}

Comics::Comics(int IBSN, bool read_not, string name_com, string publish_house_com, Date date_com)
    :Archive(IBSN, read_not)
{
    this->name_com = name_com;
    this->publish_house_com = publish_house_com;
    this->date_com = date_com;
}

Comics::~Comics()
{
}

string Comics::getName_Com() const
{
    return name_com;
}

string Comics::getPubl_House_Com() const
{
    return publish_house_com;
}

Date Comics::getDate_come() const
{
    return date_com;
}

void Comics::setName_Com(string name_com)
{
    this->name_com = name_com;
}

void Comics::setPubl_House_Com(string publish_house_com)
{
    this->publish_house_com = publish_house_com;
}

void Comics::setDate_come(Date date_com)
{
    if (date_com > Date()) { throw new DateException(); }
    else { this->date_com = date_com; }
}

void Comics::Show() const
{
    cout << "\n" << this->IBSN;
    cout << "\n++++++++++++++++++++++++\n";
    cout << "Read or not:" << this->read_not;
    cout << "\n++++++++++++++++++++++++";
    cout << "\n--------------------\n";
    cout << "Name of comics:" << this->name_com;
    cout << "\n Publish house comics:" << this->publish_house_com;
    cout << "\nComics release date:" << this->date_com;

    cout << "\n--------------------\n";
}

string Comics::Type() const
{
    return "Comics";
}

string Comics::ToString() const
{
    return "\Comics " + to_string(IBSN) + " " + to_string(read_not) + " " + name_com + " " + publish_house_com +
        " " + to_string(date_com.getYear()) + ":" + to_string(date_com.getMonth()) + ":" + to_string(date_com.getDay())
        + "\n";
}

void Comics::Save(ofstream& file)
{
    file << Type() << endl << IBSN << endl << read_not << endl << name_com << endl
        << publish_house_com << endl << date_com << endl;
}

void Comics::Load(ifstream& file)
{
    string tmp;
    
   /* int IBSN;
        bool	read_not, 
        string name_com;
        string    publish_house_com;
        Date   date_com;*/
   
    file >> IBSN;
    file >> read_not;
    char a = file.get();
    file >> name_com;
    file >> publish_house_com;
    file >> tmp;
    date_com.setDay(atoi(tmp.c_str()));
    tmp.erase(0, tmp.find("-") + 1);



    date_com.setMonth(atoi(tmp.c_str()));
    tmp.erase(0, tmp.find("-") + 1);



    date_com.setYear(atoi(tmp.c_str()));
    tmp.erase(0, tmp.find("-") + 1);
}
