#ifndef JAVACODEFACTORY_H
#define JAVACODEFACTORY_H

#include "Abstract/AbstractCodeFactory.h"
#include "Abstract/AbstractClassUnit.h"
#include "Abstract/AbstractMethodUnit.h"
#include "Abstract/AbstractPrintOperatorUnit.h"

#include "Java/JavaClassUnit.h"
#include "Java/JavaMethodUnit.h"
#include "Java/JavaPrintOperator.h"

class JavaCodeFactory : public AbstractCodeFactory
{
public:
    using Flags = unsigned int;

    JavaCodeFactory() = default;
    virtual ~JavaCodeFactory() = default;

    std::shared_ptr<AbstractClassUnit> createClass(const std::string& name) override;
    std::shared_ptr<AbstractMethodUnit> createMethod(const std::string &name, const std::string &returnType, Flags flags) override;
    std::shared_ptr<AbstractPrintOperatorUnit> createPrintMethod(const std::string &text) override;
};

#endif // JAVACODEFACTORY_H
