#include "Book.h"

Book::Book()
{
    name_book = "";
    author = "unknown";
        publish_house = "";
        date_b = Date(0, 0, 0);
}

Book::Book(int IBSN,
    bool	read_not,string name_book, string author, string publish_house, Date date_b)
    :Archive(IBSN, read_not)
{
    this->name_book = name_book;
    this->author = author;
    this->publish_house = publish_house;
    this->date_b = date_b;
}

Book::~Book()
{
}

string Book::getName_Book() const
{
    return name_book;
}

string Book::getAthor() const
{
    return author;
}

string Book::getPublish_House() const
{
    return publish_house;
}

Date Book::getDate_b() const
{
    return date_b;
}

void Book::setName_Book(string name_book)
{
    this->name_book = name_book;
}

void Book::setAthor(string author)
{
    this->author = author;
}

void Book::setPublish_House(string publish_house)
{
    this->publish_house = publish_house;
}

void Book::setDate_b(Date date_b)
{
    if(date_b>Date()){ throw new DateException(); }
    this->date_b = date_b;
}

void Book::Show() const
{       cout << "\n" << this->IBSN;
    cout << "\n^)^)^)^)^)^)^)^)^)^)^)^)^)^)^)^)^)^)^)^)\n";
    cout << "Read or not:" << this->read_not;
    cout << "\n^)^)^)^)^)^)^)^)^)^)^)^)^)^)^)^)^)^)^)^)";
    cout << "\n--------------------\n";
    cout << "Name of Book:" << this->name_book;
    cout << "\nAuthor:" << this->author;
    cout << "\nPublish House:" << this->publish_house;
    cout << "\nBook release date:" << this->date_b;
    cout << "\n--------------------\n";
}

string Book::Type() const
{
    return "Book";
}

string Book::ToString() const
{
     return "\nBook "  + to_string(IBSN)+" "+ to_string(read_not)+" " + name_book + " " + author + " " + publish_house +
        " " + to_string(date_b.getYear()) + ":" + to_string(date_b.getMonth()) + ":" + to_string(date_b.getDay())
        + "\n";
}

void Book::Save(ofstream& file)
{
    file <<Type() << endl <<this->IBSN << endl << this->read_not << endl << this->name_book << endl <<this->author << endl << this->publish_house << endl << this->date_b << endl;
}

void Book::Load(ifstream& file)
{
   
    //string name_book;
    //string	author;
    //string	publish_house;
    //Date	date_b;
    string tmp;
   
    /* int IBSN;
         bool	read_not,
         string name_com;
         string    publish_house_com;
         Date   date_com;*/

    file >> IBSN;
    file >> read_not;
    char a = file.get();
    file >> name_book;
    file >> author;
    file >> publish_house;
    file >> tmp;
    date_b.setDay(atoi(tmp.c_str()));
    tmp.erase(0, tmp.find("-") + 1);



    date_b.setMonth(atoi(tmp.c_str()));
    tmp.erase(0, tmp.find("-") + 1);



    date_b.setYear(atoi(tmp.c_str()));
    tmp.erase(0, tmp.find("-") + 1);
}
