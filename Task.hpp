#ifndef TASK_HPP
# define TASK_HPP

#include <string>
#include <iostream>
#include <cctype>

enum Category {
    WORK,
    STUDY,
    PERSONAL
};

enum Priority {
    LOW,
    MEDIUM,
    HIGH, 
    CRITICAL
};

class Task {
	private:
		std::string _title;
		std::string _description;
		std::string _assignedTo;
        Priority _priority;
		Category _category;
        bool _isChecked;

    protected:
        Task(std::string title,
            std::string description,
            std::string assignedTo,
            Priority priority,
            Category category);
        
	public:
        Task(void);
		~Task(void);

        // Getters
		std::string getTitle(void) const;
        std::string getDescription(void) const;
        std::string getAssignedTo(void) const;
        Priority    getPriority(void) const;
        Category    getCategory(void) const;
        bool        getIsChecked(void) const;
        // Setters
        void		setTitle(std::string title);
        void		setDescription(std::string description);
        void		setAssignedTo(std::string assignedTo);
        void		setPriority(Priority priority);
        void		setCategory(Category category);
        void        setIsChecked(bool isChecked);

        // Methods
        virtual void		displayTask(void);
};

#endif
