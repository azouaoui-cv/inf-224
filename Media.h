#ifndef _Media_
#define _Media_
#include <string> //string
#include <iostream> //input and output

class Media {

  private:
    std::string name, fileName;

  public:
    //constructors
    Media(std::string name = "", std::string fileName = "") : name(name), fileName(fileName) {}; //constructor with default empty values

    //destructors
    virtual ~Media() {};

    //setters
    virtual void setName (std::string name) { this->name=name; };
    virtual void setFileName (std::string fileName) { this->fileName=fileName; };

    //getters
    std::string getName() const { return name; };
    std::string getFileName() const { return fileName; };

    //printing method
    virtual void print(std::ostream & s) const;

};

#endif _Media_
