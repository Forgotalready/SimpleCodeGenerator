#ifndef JAVAPRINTOPERATOR_H
#define JAVAPRINTOPERATOR_H

#include "Abstract/AbstractPrintOperatorUnit.h"

class JavaPrintOperator : public AbstractPrintOperatorUnit
{
public:
    JavaPrintOperator(const std::string& text);

    std::string compile(unsigned int level = 0) const override;
};

#endif // JAVAPRINTOPERATOR_H
