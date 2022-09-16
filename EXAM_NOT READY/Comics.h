#pragma once
#include "Archive.h"
class Comics :
    public Archive
{
protected:
    string name_com;
    string    publish_house_com;
    Date   date_com;
public:
    Comics();
    Comics(int IBSN,
        bool	read_not, string name_com,
    string    publish_house_com,
    Date   date_com );
    ~Comics();

    string getName_Com()const;
    string getPubl_House_Com()const;
    Date getDate_come()const;

    void  setName_Com(string name_com);
    void  setPubl_House_Com(string publish_house_com);
    void  setDate_come(Date date_com);

    void Show()const override;
    string Type()const override;
    string ToString()const override;

    void Save(ofstream& file)override;
    void Load(ifstream& file)override;

};

