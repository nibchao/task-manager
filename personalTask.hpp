#ifndef __PERSONALTASK_HPP__
#define __PERSONALTASK_HPP_

#include "generalTask.hpp"

class PersonalTask : public generalTask{
private:
	string date;
public:
        PersonalTask(string title1, string des, string classif, string date1): generalTask(title1, des, classif), date(date1){};
	~PersonalTask()
	{
		date.clear();
	}

	void setDate(string);

	string getDate();
};

#endif
