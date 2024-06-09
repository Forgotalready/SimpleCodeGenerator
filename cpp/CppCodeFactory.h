#ifndef CPPCODEFACTORY_H
#define CPPCODEFACTORY_H

#include "Abstract/AbstractCodeFactory.h"
#include "Classunit.h"
#include "MethodUnit.h"
#include "PrintOperatorUnit.h"

class CppCodeFactory : public AbstractCodeFactory
{
public:
    CppCodeFactory() = default;
    ~CppCodeFactory() = default;

    std::shared_ptr<AbstractClassUnit> createClass(const std::string& name) override;
    std::shared_ptr<AbstractMethodUnit> createMethod(const std::string &name, const std::string &returnType, Flags flags) override;
    std::shared_ptr<AbstractPrintOperatorUnit> createPrintMethod(const std::string &text) override;
};

#endif // CPPCODEFACTORY_H
