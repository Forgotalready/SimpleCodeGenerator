#include "JavaClassUnit.h"

const std::vector<std::string> JavaClassUnit::ACCESS_MODIFIERS = {"public", "protected", "private"};

JavaClassUnit::JavaClassUnit(const std::string &name)
    : AbstractClassUnit(name){
    m_fields.resize(ACCESS_MODIFIERS.size());
}

void JavaClassUnit::add(const std::shared_ptr<Unit> &unit, Flags flags)
{
    int accessModifier = PRIVATE;
    if(flags < ACCESS_MODIFIERS.size()){
        accessModifier = flags;
    }else{
        qWarning("Java does not support this modifier");
    }

    m_fields[accessModifier].push_back(unit);
}

std::string JavaClassUnit::compile(unsigned int level) const
{
    std::string result = generateShift(level) + "class " + m_name + " {\n";
    for(size_t i = 0;i < ACCESS_MODIFIERS.size();++i){
        if(m_fields[i].empty()){
            continue;
        }
        result += ACCESS_MODIFIERS[i] + " ";
        for(const auto& f : m_fields[i]){
            result += f->compile(level);
        }
        result += "\n";
    }
    result += generateShift(level) + "}\n";
    return result;
}

