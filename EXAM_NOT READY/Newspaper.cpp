#include "Newspaper.h"

Newspaper::Newspaper()
{
    name_n = "";
    number_news = 0;
    date_news = Date(0, 0, 0);
}

Newspaper::Newspaper(int IBSN, bool read_not, string name_n, int number_news, Date date_news)
:Archive(IBSN, read_not)
{
    this->name_n = name_n;
    this->number_news = number_news;
    this->date_news = date_news;
}

Newspaper::~Newspaper()
{
}

string Newspaper::getName_News() const
{
    return name_n;
}

int Newspaper::getNumber_News() const
{
    return number_news;
}

Date Newspaper::getDate_News() const
{
    return date_news;
}

void Newspaper::setName_News(string name_n) 
{
    this->name_n = name_n;
}

void Newspaper::setNumber_News(int number_news) 
{
    this->number_news = number_news;
}

void Newspaper::setDate_NEWS(Date date_mag)
{
    if (date_mag > Date()) { throw new DateException(); }
    this->date_news = date_mag;
}





void Newspaper::Show() const
{
    cout << "\n" << this->IBSN;
    cout << "\n=-==--=---=--=-=--=--=---=\n";
    cout << "Read or not:" << this->read_not;
    cout << "\n=-==--=---=--=-=--=--=---=";
    cout << "\n--------------------\n";
    cout << "Number:" << this->name_n;
    cout << "\n Name of Magazine:" << this->number_news;
    cout << "\nMagazine release date:" << this->date_news;

    cout << "\n--------------------\n";
}

string Newspaper::Type() const
{
    return "Newspaper";
}

string Newspaper::ToString() const
{
    return "\Newspaper " + to_string(IBSN) + " " + to_string(read_not) + " " + name_n + " " + to_string(number_news) +
        " " + to_string(date_news.getYear()) + ":" + to_string(date_news.getMonth()) + ":" + to_string(date_news.getDay())
        + "\n";
}

void Newspaper::Save(ofstream& file)
{
    file << Type() << endl << IBSN << endl << read_not << endl << number_news << endl<< name_n 
         << endl << date_news << endl;
}

void Newspaper::Load(ifstream& file)
{
    string tmp;
    
   /* string  name_n;
    int   number_news;
    Date     date_news;*/

    file >> IBSN;
    file >> read_not;
    file >> number_news;
    char a = file.get();
    file >> name_n;

    file >> tmp;
    date_news.setDay(atoi(tmp.c_str()));
    tmp.erase(0, tmp.find("-") + 1);



    date_news.setMonth(atoi(tmp.c_str()));
    tmp.erase(0, tmp.find("-") + 1);



    date_news.setYear(atoi(tmp.c_str()));
    tmp.erase(0, tmp.find("-") + 1);
}
