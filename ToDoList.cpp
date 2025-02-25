#include "ToDoList.hpp"

ToDoList::ToDoList(void) {
	this->_index = -1;
	return ;
}

ToDoList::~ToDoList(void) {
	return ;
}

void	ToDoList::addTask(void) {
	std::string input;
	bool		isValidInput;
    //Task Properties
    std::string Title;
    std::string description;
    std::string assignedTo;
    Category category;
    Priority priority;

    // Ensure that the index does not exceed the maximum number of tasks
	this->_index++;
	if (this->_index == 50) {
		this->_index--;
		std::cout << "To Do List is full. The oldest task will be deleted." << std::endl;
		for (int i = 0; i < 49; i++)
			this->_tasks[i] = this->_tasks[i + 1];
	}

    // Get the user input for each field of the task
    // Get Title
	std::cout << "Enter the task title: ";
	do {
		std::getline(std::cin, input);
		isValidInput = true;
		if (input.empty()) {
			std::cout << "Title cannot be empty. Enter the Title: ";
			isValidInput = false;
		} else if (input.length() > 20) {
            std::cout << "Title cannot have more than 20 characters. Enter the Title: ";
            isValidInput = false;
        } else {
			break;
		}
	} while (!isValidInput);
	Title = input;

    // Get Description
    std::cout << "Enter the task description: ";
    do {
        std::getline(std::cin, input);
        isValidInput = true;
        if (input.empty()) {
            std::cout << "Description cannot be empty. Enter the Description: ";
            isValidInput = false;
        } else if (input.length() > 100) {
            std::cout << "Description cannot have more than 100 characters. Enter the Description: ";
            isValidInput = false;
        } else {
            break;
        }
    } while (!isValidInput);
    description = input;

    // Get Assigned To
    std::cout << "Enter the name of the person assigned to the task: ";
    do {
        std::getline(std::cin, input);
        isValidInput = true;
        if (input.empty()) {
            std::cout << "Assigned to cannot be empty. Enter the name of the person assigned to the task: ";
            isValidInput = false;
        } else if (input.length() > 10) {
            std::cout << "Assigned to cannot have more than 10 characters. Enter the name of the person assigned to the task: ";
            isValidInput = false;
        } else {
            break;
        }
    } while (!isValidInput);
    assignedTo = input;

    // Get Category
    std::cout << "Enter the category of the task (WORK, STUDY, PERSONAL): ";
    do {
        std::getline(std::cin, input);
        isValidInput = true;
        if (input.empty()) {
            std::cout << "Category cannot be empty. Enter the category of the task (WORK, STUDY, PERSONAL): ";
            isValidInput = false;
        } else if (input != "WORK" && input != "STUDY" && input != "PERSONAL") {
            std::cout << "Invalid category. Enter the category of the task (WORK, STUDY, PERSONAL): ";
            isValidInput = false;
        } else {
            break;
        }
    } while (!isValidInput);
    category = input == "WORK" ? WORK : input == "STUDY" ? STUDY : PERSONAL;

    // Get Priority
    if (category == PERSONAL) {
        std::cout << "Enter the priority of the task (LOW, MEDIUM, HIGH, CRITICAL): ";
        do {
            std::getline(std::cin, input);
            isValidInput = true;
            if (input.empty()) {
                std::cout << "Priority cannot be empty. Enter the priority of the task (LOW, MEDIUM, HIGH, CRITICAL): ";
                isValidInput = false;
            } else if (input != "LOW" && input != "MEDIUM" && input != "HIGH" && input != "CRITICAL") {
                std::cout << "Invalid priority. Enter the priority of the task (LOW, MEDIUM, HIGH, CRITICAL): ";
                isValidInput = false;
            } else {
                break;
            }
        } while (!isValidInput);
        priority = input == "LOW" ? LOW : input == "MEDIUM" ? MEDIUM : input == "HIGH" ? HIGH : CRITICAL;    
    }

    if (category == WORK) {
        this->_tasks[this->_index] = new WorkTask(Title, description, assignedTo);
    } else if (category == STUDY) {
        this->_tasks[this->_index] = new StudyTask(Title, description, assignedTo);
    } else {
        this->_tasks[this->_index] = new PersonalTask(Title, description, assignedTo, priority);
    }

	std::cout << "Task saved successfully in index " << this->_index << std::endl;
	return ;
}

void	ToDoList::searchTask(void) {
	std::string	index_input;

	if (this->_index == -1) {
		std::cout << "To Do List is empty" << std::endl;
		return ;
	}
	std::cout << "|  |               Title|Category|Priority| Assign To|Index|" << std::endl;
	for (int i = 0; i <= this->_index; i++) {
        if (this->_tasks[i]->getIsChecked()) {
            std::cout << "|✅|";
        } else {
            std::cout << "|❌|";
        }
        std::cout << std::setw(20) << this->_tasks[i]->getTitle() << "|";
        if (this->_tasks[i]->getCategory() == WORK)
            std::cout << "    WORK|";
        else if (this->_tasks[i]->getCategory() == STUDY)
            std::cout << "   STUDY|";
        else
            std::cout << "PERSONAL|";
        if (this->_tasks[i]->getPriority() == LOW)
            std::cout << "     LOW|";
        else if (this->_tasks[i]->getPriority() == MEDIUM)
            std::cout << "  MEDIUM|";
        else if (this->_tasks[i]->getPriority() == HIGH)
            std::cout<< "    HIGH|";
        else
            std::cout << "CRITICAL|";
        std::cout << std::setw(10) << this->_tasks[i]->getAssignedTo() << "|";
        std::cout << std::setw(5) << i << "|" << std::endl;

	}
	std::cout << std::endl << "Enter the index of the task you want to see: ";
	std::getline(std::cin, index_input);
	while (index_input.empty() || index_input.length() > 1 || !std::isdigit(index_input[0]) || index_input[0] - '0' > this->_index) {
		std::cout << "Invalid index. Enter the index of the contact you want to see: ";
		std::getline(std::cin, index_input);
	}
    this->_tasks[index_input[0] - '0']->displayTask();
	return ;
}
