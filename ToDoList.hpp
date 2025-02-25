#ifndef TODOLIST_HPP
# define TODOLIST_HPP

#include <iomanip>
#include "Task.hpp"
#include "WorkTask.hpp"
#include "StudyTask.hpp"
#include "PersonalTask.hpp"

class ToDoList {
	private:
		Task*   _tasks[50];
		int		_index;

	public:
		ToDoList(void);
		~ToDoList(void);

		void	addTask(void);
		void	searchTask(void);
};

#endif
