#ifndef WORKTASK_H
# define WORKTASK_H

#include "Task.hpp"

#include <string>
#include <iostream>

class WorkTask : public Task {
	public:
        WorkTask(std::string title,
            std::string description,
            std::string assignedTo);
		~WorkTask(void);

        void    displayTask(void);
};

#endif
