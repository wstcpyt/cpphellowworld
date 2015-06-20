//
// Created by yutong pang on 6/18/15.
//

#ifndef HELLOWORLD_TODO_H
#define HELLOWORLD_TODO_H

#include <string>
#include <vector>

class ToDo
{
public:
    ToDo();
    ~ToDo();

    size_t size() const;

    void addTask(const std::string& task);
    std::string getTask(size_t index) const;

private:
    std::vector< std::string> this_tasks;
};

#endif //HELLOWORLD_TODO_H
