#ifndef PARSER_H
#define PARSER_H

// parser will pass string of commands without the details

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm> 
#include <queue>

#define MAX_SIZE 255
using namespace std; 

class Parser {

private:
	static const string MESSAGE_ADD;
	static const string MESSAGE_READ;
	static const string MESSAGE_UPDATE;
	static const string MESSAGE_DELETE;


public:
	// Task
	string _taskName;
	//Date
	int _startDate;
	int _endDate;
	//Time
	int _startTime;
	int _endTime;
	//Reminder
	string _reminder;
	//Repeat
	string _duplicate;

	enum Choice{
		ADD, READ, UPDATE, DELETE
	};

	Choice Command(string);

	Parser(void);
	~Parser(void);
	void parseCommand(string command); // Parse command like add delete etc
	void parseDetails(string detail); // Parse details
	void getInput(); // gets input from user

};

#endif
/*
public:
	parser(void);
	~parser(void);

	void parseInput(string input);
	void parseCommandz(string input, int &i);
	void receiveUserInput();
	void parseCommand(string input);
	void parseText(string input);
	void parseDueTime(string input);
	void parseDueDate(string input);

	enum Command {ADD, DELETE};

	Command command;
	string _taskName;
	int _startDate; //YYYYMMDD
	int _startTime;	//HHMM
	int _endDate;	//YYYYMMDD
	int _endTime;	//HHMM
	string _recurrence;
	string _reminderInfo;
};
*/