// This class does all the command functions like add, delete etc

#include "Headers.h"
#include "Store.h" 

using namespace std;

class Command {
private:
	Store todoList;
	/*enum command {
		ADD, READ, UPDATE, DELETE, SEARCH, CHECK, ERROR
	};*/

public:
	Command();
	~Command();
	//bool userCommnad(string userInput);
	bool Add(Task userTask);
	bool Delete(Task userTask);
	bool Update(Task userTask);
	bool Display();
	bool Search();
	int issueNewTaskID();

};