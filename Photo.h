#ifndef _Photo_
#define _Photo_
#include "Media.h"

class Photo : public Media {

  private:
    //attributes
    float latitude = 0.0;
    float longitude = 0.0;

  public:
    //constructors
    //Constructor with default values
    Photo(std::string name = "", std::string fileName = "", float latitude = 0.0, float longitude = 0.0) : Media(name, fileName), latitude(latitude),
    longitude(longitude) {};

    //destructors
    virtual ~Photo() {};

    //setters
    virtual void setLatitude(float latitude) {this->latitude=latitude;};
    virtual void setLongitude(float longitude) {this->longitude=longitude;};

    //getters
    float getLatitude() const {return latitude;};
    float getLongitude() const {return longitude;};

    //print method
    void print(std::ostream & s) const override;

    //playing method
    void play() const override;

};

#endif
