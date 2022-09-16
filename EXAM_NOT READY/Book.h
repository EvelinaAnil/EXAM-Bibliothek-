#pragma once
#include "Archive.h"
class Book
	:public Archive
{
protected:
	string name_book;
	string	author;
	string	publish_house;
	Date	date_b;
public:
	Book();
	Book(int IBSN,
		bool	read_not,string name_book,
	string	author,
	string	publish_house,
	Date	date_b);
	~Book();
	
	string getName_Book()const;
	string getAthor()const;
	string getPublish_House()const;
	Date getDate_b()const;

	void setName_Book(string name_book);
	void setAthor(string	author);
	void setPublish_House(string	publish_house);
	void setDate_b(Date	date_b);



	void Show()const override;
	string Type()const override;
	string ToString()const override;

	void Save(ofstream& file)override;
	void Load(ifstream& file)override;

};

