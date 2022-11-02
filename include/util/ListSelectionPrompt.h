#ifndef CONCRETEABSTRACTS_LISTSELECTIONPROMPT_H
#define CONCRETEABSTRACTS_LISTSELECTIONPROMPT_H

#pragma once

#include <string>
#include <vector>

struct ListSelectionPrompt
{
    std::vector<std::string> options;
    ListSelectionPrompt(std::initializer_list<std::string> init);
    std::string getSelection(const std::string& prompt) const;
};

#endif //CONCRETEABSTRACTS_LISTSELECTIONPROMPT_H