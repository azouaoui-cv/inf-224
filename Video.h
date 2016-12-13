#ifndef _Video_
#define _Video_
#include "Media.h"


class Video : public Media {

  private:
    //attributes
    unsigned int duration;

  public:
    //constructors
    Video() : duration(0) {}
    Video(std::string name, std::string fileName, unsigned int duration) : Media(name, fileName), duration(duration) {}

    //destructors
    virtual ~Video() {};

    //setters
    virtual void setDuration(unsigned int duration) {this->duration=duration;};

    //getters
    unsigned int getDuration() const {return duration;};

    //printing method
    void print(std::ostream & s) const override;


};

#endif _Video_
