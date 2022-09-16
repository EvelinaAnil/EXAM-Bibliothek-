#pragma once
#include "Archive.h"
class Magazine :
    public Archive
{
protected:
    int number;
    string    name_magazine;
    Date     date_mag;
public:
    Magazine();
    Magazine(int IBSN,
        bool	read_not, int number,
    string    name_magazine,
    Date     date_mag);
    ~Magazine();

    int getNumber()const;
    string getName_Magaz()const;
    Date getDate_Magaz()const;

    void setNumber(int number);
    void setName_Magaz(string name_magazine);
    void setDate_Magaz(Date date_mag);


    void Show()const override;
    string Type()const override;
    string ToString()const override;

    void Save(ofstream& file)override;
    void Load(ifstream& file)override;
};

