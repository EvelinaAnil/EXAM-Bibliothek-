#pragma once
#include <list>
#include <fstream>
#include "Date.h"
#include <queue>
#include "Archive.h"
#include "Book.h"
#include "Comics.h"
#include  "Magazine.h"
#include "Newspaper.h"
#include <iostream>
using namespace std;
class Bibliothek
{
public:
	list<Archive*> ordert;
	list<Archive*> ::iterator ordet;
	queue<Archive*>pp;


public:

	//void ShowIfRead();//++
	//void ShowIfNotRead();//++
	
	
	//void FindByName(); in source!!
	void Change_info(int IBSN);//!!!
	

	void add(Archive* obj); 
	void SHow();//+
	list<Archive*>::iterator findElementByIBSN(int IBSN);
	void dell(int s);//+
	void ShowByType();//+
	void ShowByIBSN();//+

	void Sooort();//+

	void Save( );//+
	void Load( );//+
};

