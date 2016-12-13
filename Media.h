#ifndef _Media_
#define _Media_
#include <string>
#include <iostream>

class Media {

  private:
    std::string name, fileName;

  public:
    Media() : name(""), fileName("") {}
    Media(std::string name, std::string fileName) : name(name), fileName(fileName) {}
    virtual ~Media() {};
    virtual void setName (std::string name) { this->name=name; };
    virtual void setFileName (std::string fileName) { this->fileName=fileName; };
    std::string getName() const { return name; };
    std::string getFileName() const { return fileName; };
    virtual void printMedia(std::ostream & s) const;

};

#endif
