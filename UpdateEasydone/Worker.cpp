/*  Worker cpp

 Implementation for the worker class in which based on the
 command entered by the user, the appropriate function is called to carry
 out the desired operation.

 */
#include "Worker.h"

const string NULL_STRING = "";
const int NULL_DATE = -1;
const string ADDED_SUCCESSFULLY = "has been added successfully";
const string DELETED_SUCCESSFULLY = "has been deleted successfully";
const string UPDATED_SUCCESSFULLY = "has been updated successfully"; 
const string CHECKED = "has been checked off your EasyDone task list";



Worker::Worker() {
	taskIndexIssuer = 0; // retrieve state of issuer pls
}

Worker::~Worker(){
	taskIndexIssuer;	// save the state of issuer pls
}

// todoList functions
string Worker::addTask(string taskName, string startDate, string startTime, string endDate, string endTime, string additionalDetails){

	Task newTask;
	newTask.index = issueNewIndex();
	newTask.taskName = taskName;
	newTask.additionalDetails = additionalDetails;
	newTask.startTime =  atoi(startTime.c_str());
	newTask.startDate = atoi(startDate.c_str());
	newTask.endTime = atoi(endTime.c_str());
	newTask.endDate = atoi(endDate.c_str());

	todoList.push_back(newTask);

	return ADDED_SUCCESSFULLY;

	
}

string Worker::removeTaskWithIndex(int index) {
	/*for (iter = todoList.begin(); iter != todoList.end(); ++iter) {
		if (iter->index == index) {
			todoList.erase(iter);			
			//highly inefficient accord to c++ lib. vector efficient for accessing vector[]. List efficient for insertion/deletion
			return;
		}
		//cout << Error: Task cannot be found.
	}*/

	return DELETED_SUCCESSFULLY;
}

string Worker::updateTaskWithIndex(int index, string taskName, string additionalDetails, string reminder, string duplicate, int startDate, int startTime, int endDate, int endTime) {
	/*int item = searchForTaskWithIndex(index);

	if (taskName != NULL_STRING) {
		todoList[item].taskName = taskName;
	}
	if (additionalDetails != NULL_STRING) {
		todoList[item].additionalDetails = additionalDetails;
	}
	if (reminder != NULL_STRING) {
		todoList[item].reminder = reminder;
	}
	if (duplicate != NULL_STRING) {
		todoList[item].duplciate = duplicate;
	}
	if (startDate != NULL_DATE) {
		todoList[item].startDate = startDate;
	}
	if (startTime != NULL_DATE) {
		todoList[item].startTime = startTime;
	}
	if (endDate != NULL_DATE) {
		todoList[item].endDate = endDate;
	}
	if (endTime != NULL_DATE) {
		todoList[item].endTime = endTime;
	}*/

	return UPDATED_SUCCESSFULLY;
}

string Worker::markDoneTaskWithIndex(int index){
	/*int item = searchForTaskWithIndex(index);
	
	if (todoList[item].isCompleted == false) {
		todoList[item].isCompleted = true;
	}*/

	return CHECKED;
}

int Worker::searchTasks(string keyWord){
	/*int i = 0;
	for (iter = todoList.begin(); iter != todoList.end(); ++iter, ++i) {
		if (iter->index == index) {
			return i;
		}
	}
	return -1;*/

	return 6;
}
	
// support functions
int Worker::issueNewIndex(){
	taskIndexIssuer++;

	return taskIndexIssuer;
}


/*bool Worker::checkListForSlotFor(Task newTask){
	for (iter = todoList.begin(); iter != todoList.end(); ++iter) {
		if (iter->startDate < newTask.startDate && newTask.startDate < iter->endDate) {
			return false;
		}
		if (iter->startTime < newTask.startTime && newTask.startTime < iter->endTime) {
			return false;
		}
		if (iter->startDate < newTask.endDate && newTask.endDate < iter->endDate) {
			return false;
		}
		if (iter->startTime < newTask.endTime && newTask.endTime < iter->endTime) {
			return false;
		}
	}
	return true;
}*/



