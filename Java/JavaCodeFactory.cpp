#include "JavaCodeFactory.h"


std::shared_ptr<AbstractClassUnit> JavaCodeFactory::createClass(const std::string &name)
{
    return std::make_shared<JavaClassUnit>(name);
}

std::shared_ptr<AbstractMethodUnit> JavaCodeFactory::createMethod(const std::string &name, const std::string &returnType, Flags flags)
{
    return std::make_shared<JavaMethodUnit>(name, returnType, flags);
}

std::shared_ptr<AbstractPrintOperatorUnit> JavaCodeFactory::createPrintMethod(const std::string &text)
{
    return std::make_shared<JavaPrintOperator>(text);
}

