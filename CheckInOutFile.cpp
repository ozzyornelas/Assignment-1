/*****************************************************
 *AUTHOR         :  The Oz
 *CLASS          :  CS 1B
 *SECTION        :  TTh:  8am - 11:50am
 *DUE DATE       :  3/19/15
 *****************************************************/

#include "myHeader.h"

/***********************************************************
 *FUNCTION CheckInOutFile
 *__________________________________________________________
 * This function Checks the Input and the output file name and
 * decides the most proper file to use. If the user inputs
 * d, the file is the default, if it enters its own, it uses
 * that one. If it does not have suffix .txt, it prompts again
 * for a correct name.
 * _________________________________________________________
 *
 * PRE-CONDITIONS
 * 	fileType        : File type name (input or output)
 * 	fileName        : File to be used in the program
 *
 *POST-CONDITIONS
 *
 *	NONE - filename is passed by reference.
 ***********************************************************/

void CheckInOutFile(string fileType, //IN       - File type name
		                             //           (input or output)
					string& fileName)//IN & OUT - File to be used
									 //           in the program
{
	string nameF;         //CALC - file suffix
	bool invalidExtention;//CALC - valid file input condition
	int prompt;			  //OUT  - prompt message

	prompt = 55;
	do
	{
		cout << left;
		if(fileType == "input")
		{
			prompt = 56;

		}

		cout << "Which " << fileType << setw(prompt)
			 << " file would you like to use(type d for default file)?  ";
				getline(cin, fileName);

		//determines length of string
		if(fileName.length() > 4)
		{
			invalidExtention = (fileName.substr(fileName.length()-4,
								fileName.length()) != ".txt");
		}
		else if(fileName.length() == 1)
		{
			fileName = toupper(fileName[0]);
			invalidExtention = false;

		}

		//if the case is input and default was selected
		if(fileType == "input" && fileName == "D" && !invalidExtention)

		{
			fileName = "defaultInFile.txt";
		}
		else if(fileType == "output" && fileName == "D" && !invalidExtention)
		{
			fileName = "defaultOutFile.txt";
		}

		//in case inputed invalid data
		if(invalidExtention && fileName != "D")
		{

			cout << "\n**** Wrong File format Type. Use the extension \".txt\" "
					"or d for default ****\n\n";
		}

	}while(invalidExtention);

}
