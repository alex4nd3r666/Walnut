#include "Walnut/Application.h"
#include "Walnut/EntryPoint.h"

/*#include "Walnut/Image.h"
#include "Walnut/UI/UI.h"*/
#include <string>
#include <vector>
#include "WN_States_Common.h"
#include "WN_Priority.h"

class WN_Task
{
public:
	WN_Task();
	~WN_Task();

	virtual int work();
	virtual void taskPlaceholder();

private:
	std::string t_name;
	std::vector<std::string> tags;
	PRIORITY t_priority;
	TASK_STATE t_state;

};
int WN_Task::work() {
	taskPlaceholder();
	switch (t_state)
	{
	case STOPPED:

		break;
	case PAUSED:
		break;
	case RUNNING:
		break;
	case STARTING:
		break;
	case ENDING:
		break;
	default:
		break;
	}
}
void WN_Task::taskPlaceholder() {
	
}
WN_Task::WN_Task()
{
}

WN_Task::~WN_Task()
{
}