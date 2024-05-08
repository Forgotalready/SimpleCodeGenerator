#ifndef CSHARPCODEFACTORY_H
#define CSHARPCODEFACTORY_H

#include "Abstract/AbstractCodeFactory.h"
#include "CsharpClassUnit.h"
#include "CsharpMethodUnit.h"
#include "CsharpPrintUnit.h"

class CsharpCodeFactory : public AbstractCodeFactory
{
public:
    CsharpCodeFactory() = default;
    ~CsharpCodeFactory() = default;

    std::shared_ptr<AbstractClassUnit> createClass(const std::string& name) override;
    std::shared_ptr<AbstractMethodUnit> createMethod(const std::string &name, const std::string &returnType, Flags flags) override;
    std::shared_ptr<AbstractPrintOperatorUnit> createPrintMethod(const std::string &text) override;
};

#endif // CSHARPCODEFACTORY_H
