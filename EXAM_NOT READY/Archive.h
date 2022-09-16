#pragma once
#include <iostream>
#include <String>
#include <fstream>
#include "Date.h"
#include "AllExeptions.h"
using namespace std;
class Archive
{
protected:
	int IBSN;
	bool	read_not;
public:
	Archive();
	Archive(int IBSN,
	bool read_not);
		~Archive();


		int getIBSN()const;
		bool getRead_Not()const;
		void setIBSN(int IBSN);
		void setRead_Not(bool read_not);


		virtual string Type()const = 0;
		virtual void Show()const = 0;
		virtual string ToString()const = 0;
		virtual void Save(ofstream& file)=0;//in queue not must need mache all const methods
		virtual void Load(ifstream& file)=0;
};

