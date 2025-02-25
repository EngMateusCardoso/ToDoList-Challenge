#ifndef STUDYTASK_H
# define STUDYTASK_H

#include "Task.hpp"

#include <string>
#include <iostream>

class StudyTask : public Task {
	public:
        StudyTask(std::string title,
            std::string description,
            std::string assignedTo);
		~StudyTask(void);

        void    displayTask(void);
};

#endif