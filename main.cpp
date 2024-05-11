#include <QCoreApplication>

#include <iostream>
#include "Abstract/AbstractCodeFactory.h"
#include "cpp/CppCodeFactory.h"
#include "CSharp/CsharpCodeFactory.h"
#include "Java/JavaCodeFactory.h"
#include <vector>

std::string generateProgram(std::shared_ptr<AbstractCodeFactory>& factory){
    using std::shared_ptr;

    auto method = factory->createMethod( "testFunc4", "void", AbstractMethodUnit::STATIC );
    method->add(factory->createPrintMethod( R"(Hello, world!\n)" ) );

    shared_ptr<AbstractClassUnit> myClass = factory->createClass("MyClass");
    if(myClass != nullptr){
        myClass->add(
            factory->createMethod("testFunc1", "void", 0),
            AbstractClassUnit::PRIVATE
        );
        myClass->add(
            factory->createMethod("testFunc3", "void", AbstractMethodUnit::STATIC),
            AbstractClassUnit::PRIVATE
        );
        myClass->add(
            factory->createMethod(
                "testFunc3",
                "void",
                AbstractMethodUnit::VIRTUAL | AbstractMethodUnit::CONST
            ),
            AbstractClassUnit::PROTECTED_INTERNAL
        );

        myClass->add( method, AbstractClassUnit::PROTECTED );
        return myClass->compile();
    }
    return "";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::vector<std::shared_ptr<AbstractCodeFactory>> factoryes = {
        std::make_shared<CppCodeFactory>(),
        std::make_shared<CsharpCodeFactory>(),
        std::make_shared<JavaCodeFactory>()
    };

    for(auto& factory : factoryes)
        std::cout << generateProgram(factory) << std::endl;

    return a.exec();
}
