#include "Store.h"



string Store::getTaskName(int index) {
	
	string taskName1 = taskList[index].taskName;

	return taskName1;
}

string Store::getStartTime(int index) {
	string startTime1=  taskList[index].startTime;
	
	return startTime1;
}

string Store::getEndTime(int index) {
	string endTime1=  taskList[index].startTime;
	
	return endTime1;
}

string Store::getStartDate(int index) {
	string startDate1 = taskList[index].startDate;
	
	return startDate1;
}

string Store::getEndDate(int index) {
	string getEndDate1 = taskList[index].endDate;
	
	string getEndDate1;
}

int Store::getSize() {
	int sizeoftaskList = taskList.size();

	return sizeoftaskList;
}

Task Store::accessSlot(int slot) {

	return taskList.[slot];
}

vector<Task>::iterator Store::getIteratorBegin() {
	
	iter = taskList.begin(); 

	return iter;
}

vector<Task>::iterator Store::getIteratorEnd() {
	
	iter = taskList.end();
}

bool Store::eraser(vector<Task>::iterator iteratorPassed) {
	
	taskList.erase(iteratorPassed);
	
	return 1;
}
