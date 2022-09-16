#pragma once
#include<iostream>
#include<string>

using namespace std;

class AllExceptions
{
public:
	virtual void showWhat() = 0;
};

class IBSNException : public AllExceptions
{
public:
	virtual void showWhat()override
	{
		cout << "\n\tThe IBSN number is set incorrectly,not 0!\n";
	}
};

class DateException : public AllExceptions
{
public:
	virtual void showWhat()override
	{
		cout << "\n\tThe Date  is set incorrectly,can't be in futuche!\n";
	}
};

class Exception : public AllExceptions
{
public:
	virtual void showWhat()override
	{
		cout << "\n\tError!\n";
	}
};
