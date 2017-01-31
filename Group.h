#ifndef _Group_
#define _Group_
#include <list>
#include "Media.h"


typedef std::list<Media*> MediaList;

class Group : public MediaList {

  private:
    //attributes
    std::string name = "";

  public:
    //constructor
    Group(std::string name = "") : name(name)  {};


    //destructor
    virtual ~Group() {};

    //getters
    std::string getName() const {return name;};


    //display method
    void print(std::ostream & s) const;


};




#endif
