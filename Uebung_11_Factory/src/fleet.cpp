#include "fleet.h"
#include "spaceshipfactory.h"

#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include <assert.h>
#include <cstring>
#include <iostream>


Fleet::Fleet(const std::string& fleetFilename)
{
	const int MAX_CHARS_PER_LINE = 512;
	const int MAX_TOKENS_PER_LINE = 20;
	const char* const DELIMITER = " ";
	// TODO:
	// * Open textfile in "fleetFilename"
	// * Parse line by line:
	// ** Separate in ship name and parameter at the first ' '
	// ** call SpaceShipFactory::getInstance().buildSpaceShip
	// ** push into m_spaceShips if a new ship was successfully created
	
	// create a file-reading object
	std::ifstream fin;
	fin.open("imperialships.txt"); // open a file
	if (!fin.good())
		return; // exit if file not found

	// read each line of the file
	while (!fin.eof())
	{
		// read an entire line into memory
		char buf[MAX_CHARS_PER_LINE];
		fin.getline(buf, MAX_CHARS_PER_LINE);

		// parse the line into blank-delimited tokens
		int n = 0; // a for-loop index

				   // array to store memory addresses of the tokens in buf
		const char* token[MAX_TOKENS_PER_LINE] = {}; // initialize to 0

													 // parse the line
		token[0] = strtok(buf, DELIMITER); // first token
		if (token[0]) // zero if line is blank
		{
			for (n = 1; n < MAX_TOKENS_PER_LINE; n++)
			{
				token[n] = strtok(0, "\n"); // subsequent tokens
				if (!token[n]) break; // no more tokens
			}
		}
		for(int i = 0 ; i < n; i++)
		{
			SpaceShipFactory::getInstance().buildSpaceShip(token[n],token[n+1]);
		}


	}
}