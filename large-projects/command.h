/**
 * @file command.h
 * @author your name (you@domain.com)
 * @brief An abstract command object.
 * @version 0.1
 * @date 2024-11-08
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef COMMAND_H
#define COMMAND_H
class Command 
{
    /**
     * @brief Pure virtual execute function.
     * 
     */
    virtual void execute() = 0;

    virtual ~Command() {}
};
#endif