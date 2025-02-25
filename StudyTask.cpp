#include "StudyTask.hpp"

StudyTask::StudyTask(std::string title,
    std::string description,
    std::string assignedTo) : Task(title, description, assignedTo, HIGH, STUDY) {
    return;
}

StudyTask::~StudyTask(void) {
    return;
}

void	StudyTask::displayTask(void) {
    std::cout << std::endl << "📚📖📕✏️📚📖📕✏️📚📖📕✏️📚📖📕✏️📚📖📕✏️" << std::endl;
    Task::displayTask();
}
