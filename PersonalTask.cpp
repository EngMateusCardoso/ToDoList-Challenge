#include "PersonalTask.hpp"

PersonalTask::PersonalTask(std::string title,
    std::string description,
    std::string assignedTo,
    Priority priority) : Task(title, description, assignedTo, priority, PERSONAL) {
    return;
}

PersonalTask::~PersonalTask(void) {
    return;
}
