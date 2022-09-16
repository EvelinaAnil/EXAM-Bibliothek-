#pragma once
#include "Archive.h"
class Newspaper :
    public Archive
{
protected:
    string  name_n;
    int   number_news;
    Date     date_news;
public:
    Newspaper();
    Newspaper(int IBSN,
        bool	read_not, string  name_n,
    int   number_news,
    Date     date_news);
    ~Newspaper();
   
    string getName_News()const;
    int getNumber_News()const;
    Date getDate_News()const;

    void setName_News(string name_n);
    void setNumber_News(int number_news);
    void setDate_NEWS(Date date_mag);
        
    void Show()const override;
    string Type()const override;
    string ToString()const override;

    void Save(ofstream& file)override;
    void Load(ifstream& file)override;
   

};

