#include "CppCodeFactory.h"

std::shared_ptr<AbstractClassUnit> CppCodeFactory::createClass(const std::string &name)
{
    return std::make_shared<ClassUnit>(name);
}

std::shared_ptr<AbstractMethodUnit> CppCodeFactory::createMethod(const std::string &name, const std::string &returnType, Flags flags)
{
    return std::make_shared<MethodUnit>(name, returnType, flags);
}

std::shared_ptr<Unit> CppCodeFactory::createPrintMethod(const std::string &text)
{
    return std::make_shared<PrintOperatorUnit>(text);
}
