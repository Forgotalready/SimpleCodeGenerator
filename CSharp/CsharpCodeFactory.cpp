#include "CsharpCodeFactory.h"

std::shared_ptr<AbstractClassUnit> CsharpCodeFactory::createClass(const std::string &name)
{
    return std::make_shared<CsharpClassUnit>(name);
}

std::shared_ptr<AbstractMethodUnit> CsharpCodeFactory::createMethod(const std::string &name, const std::string &returnType, Flags flags)
{
    return std::make_shared<CsharpMethodUnit>(name, returnType, flags);
}

std::shared_ptr<AbstractPrintOperatorUnit> CsharpCodeFactory::createPrintMethod(const std::string &text)
{
    return std::make_shared<CsharpPrintUnit>(text);
}
