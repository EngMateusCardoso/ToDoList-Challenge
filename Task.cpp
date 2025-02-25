#include "Task.hpp"

// Constructor
Task::Task(void) {
    this->_title = "Default Title";
    this->_description = "Default Description";
    this->_assignedTo = "Default Assigned To";
    this->_priority = LOW;
    this->_category = PERSONAL;
    this->_isChecked = false;
    return;
}

Task::Task(std::string title,
            std::string description,
            std::string assignedTo,
            Priority priority,
            Category category) {
    this->_title = title;
    this->_description = description;
    this->_assignedTo = assignedTo;
    this->_priority = priority;
    this->_category = category;
    this->_isChecked = false;
    return;
}

// Destructor
Task::~Task(void) {
	return;
}

// Getters
std::string Task::getTitle(void) const {
    return this->_title;
}

std::string Task::getDescription(void) const {
    return this->_description;
}

std::string Task::getAssignedTo(void) const {
    return this->_assignedTo;
}

Priority Task::getPriority(void) const {
    return this->_priority;
}

Category Task::getCategory(void) const {
    return this->_category;
}

bool Task::getIsChecked(void) const {
    return this->_isChecked;
}

// Setters
void    Task::setTitle(std::string title) {
    this->_title = title;
}

void    Task::setDescription(std::string description) {
    this->_description = description;
}

void    Task::setAssignedTo(std::string assignedTo) {
    this->_assignedTo = assignedTo;
}

void    Task::setPriority(Priority priority) {
    this->_priority = priority;
}

void    Task::setCategory(Category category) {
    this->_category = category;
}

void    Task::setIsChecked(bool isChecked) {
    this->_isChecked = isChecked;
}

// Methods
void		Task::displayTask(void) {
    std::string	input;
    bool		on = true;

    std::cout << "----------------------------------------" << std::endl;
    if (this->_isChecked) {
        std::cout << " ✅ ";
    } else {
        std::cout << " ❌ ";
    }
    std::cout << this->_title << std::endl << std::endl;
    std::cout << "Description: " << this->_description << std::endl << std::endl;
    std::cout << "Assigned to: " << this->_assignedTo;
    if (this->_priority == MEDIUM) {
        std::cout << "❗";
    } else if (this->_priority == HIGH) {
        std::cout << "❗❗";
    } else if (this->_priority == CRITICAL){
        std::cout << "⛔";
    }
    std::cout << std::endl << "----------------------------------------" << std::endl;
    std::cout << "Done?";
    while (on) {
        std::cout << " (yes/no): ";
        std::getline(std::cin, input);
        if (input == "yes") {
            this->_isChecked = true;
            on = false;
        } else if (input == "no") {
            this->_isChecked = false;
            on = false;
        } else {
            std::cout << "Invalid command. Try again." << std::endl;
        }
    }
    std::cout << std::endl << "Congratulations! You have completed the task." << std::endl;
    
}
