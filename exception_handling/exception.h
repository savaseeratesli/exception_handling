#include <iostream>
#include<exception>

using namespace std;

class divisionByZero
{
private:
	string message;

public:
	divisionByZero()
	{
		message = "what Payda 0 Olamaz!";
	}

	string what()//Hata mesajýný döndür
	{
		return message;
	}

};

class zeroNumber :public exception
{
private:
	string message;

public:
	zeroNumber(string x = "")
	{
		message = x + " 0 Olamaz! what";
	}

	string what()
	{
		return message;
	}



};





