#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{
	clsString String1;
	clsString String2("Amr");

	String1.Value = "Tamer Nabih";

	cout << "String1 = " << String1.Value << endl;
	cout << "String2 = " << String2.Value << endl;
	clsString::PrintFirstLetterOfEachWord("Amr Tamer");
	String1.PrintFirstLetterOfEachWord();

	//Upper First Letter Of Each Word by class name static
	cout << clsString::UpperFirstLetterOfEachWord("hello world!");

	clsString String3;
	String3.Value = "amr tamer";

	//Upper First Letter Of Each Word by object
	String3.UpperFirstLetterOfEachWord();
	cout << String3.Value << endl;

	//-----------------------------------
	//Trim Left 
	String3.Value = "      Amr Tamer  ";
	String3.TrimLeft();
	cout << "Trim Left:" << String3.Value << endl;

	//Trim Right
	String3.Value = "  Amr Tamer    ";
	String3.TrimRight();
	cout << "Trim Left:" << String3.Value << endl;

	//Trim Right
	String3.Value = "   Amr Tamer     ";
	String3.Trim();
	cout << "Trim :" << String3.Value << endl;

	//-------------------------------------------
	clsString String4;
	String4.Value = "Hello, How are you Welcome To My Country";

	//Print string stored in this object
	cout << "string stored in this object: " << String4.Value << endl;

	//Capital Letter Count
	cout << "Capital Letter Count: " << String4.CountUpperCaseLetters() << endl;

	//Small Letters Count
	cout << "Small Letters Count: " << String4.CountLowerCaseLetters() << endl;

	//Vowel Letters Count
	cout << "Vowel Letters Count: " << String4.CountVowels() << endl;


	//Letter Check is Vowel without object by name of class
	char Letter = 'a';
	cout << "is '" << Letter << "' vowel " << (clsString::IsVowel(Letter) ? "Yes" : "No") << endl;

	//Word Count in string
	cout << "Number of Words in String : " << String4.CountWords() << endl;

	//Invert All Letter Case Small to Upper and Upper to Small
	String4.InvertAllStringLettersCase();
	cout << "Invert All Letter case: " << String4.Value << endl;

	//---------------------
	vector <string> vStrings;

	//Spilt String in Vector
	vStrings = String4.Split(" ");

	//Size of string vector 
	cout << "Size of string vector: " << vStrings.size() << endl;

	//Print every string in vector 
	for (string& S : vStrings)
	{
		cout << S << endl;
	}

	//Join String
	vector <string> vString1 = { "you", "should", "Practice", "Programming" };

	//Join String from vector to object string4
	String4.Value = clsString::JoinString(vString1, " ");

	cout << "Value in String4 : " << String4.Value << endl;

	system("pause > 0");
	return 0;
}
