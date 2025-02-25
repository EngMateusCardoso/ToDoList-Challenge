#ifndef PERSONALTASK_H
# define PERSONALTASK_H

#include "Task.hpp"

#include <string>
#include <iostream>

class PersonalTask : public Task {
	public:
        PersonalTask(std::string title,
            std::string description,
            std::string assignedTo,
            Priority priority);
		~PersonalTask(void);
};

#endif
