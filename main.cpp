#include "ToDoList.hpp"

int main(void) {
	ToDoList 	toDoList;
	std::string	input;
	bool		on = true;

	while (on) {
		std::cout << std::endl;
		std::cout << "------ Welcome My Awesome To Do List ------" << std::endl;
		std::cout << "- ADD (save a new task)" << std::endl;
		std::cout << "- LIST (display tasks)" << std::endl;
		std::cout << "- EXIT (exit the program)" << std::endl;
		std::cout << "-------------------------------------------" << std::endl;
		std::cout << "Enter a command: ";
		std::getline(std::cin, input);
		if (input == "ADD\0")
            toDoList.addTask();
		else if (input == "LIST\0")
            toDoList.searchTask();
		else if (input == "EXIT\0")
			on = false;
		else
			std::cout << "Invalid command. Try again." << std::endl;
	}
	return (0);
}
