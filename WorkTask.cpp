#include "WorkTask.hpp"

WorkTask::WorkTask(std::string title,
    std::string description,
    std::string assignedTo) : Task(title, description, assignedTo, HIGH, WORK) {
    return;
}

WorkTask::~WorkTask(void) {
    return;
}

void	WorkTask::displayTask(void) {
    std::cout << std::endl << "👨‍💻🖥️⌨️🖱️👨‍💻🖥️⌨️🖱️👨‍💻🖥️⌨️🖱️👨‍💻🖥️⌨️🖱️👨‍💻🖥️⌨️🖱️" << std::endl;
    Task::displayTask();
}
