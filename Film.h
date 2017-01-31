#ifndef _Film_
#define _Film_
#include "Video.h"

class Film : public Video {

  private:
    //attributes
    unsigned int * durationArray = nullptr;
    unsigned int chapterCounter = 0;

  public:
    //constructors
    Film(std::string name = "", std::string fileName = "", unsigned int duration = 0,
    const unsigned int * _durationArray = nullptr, unsigned int _chapterCounter = 0): Video(name, fileName, duration), chapterCounter(_chapterCounter) {
      if (_chapterCounter == 0){
        durationArray = nullptr;
      }
      else {
        durationArray = new unsigned int [_chapterCounter];
        for (unsigned int index = 0; index < _chapterCounter; index++){
          durationArray[index] = _durationArray[index];
        }
      }
    };

    //destructors
    virtual ~Film() {delete [] durationArray;};

    //setters
    virtual void setDurationArray(const unsigned int * _durationArray, unsigned int _durationArrayCounter) {
      delete [] durationArray;
      chapterCounter = _durationArrayCounter;
      durationArray = new unsigned int [_durationArrayCounter];
      for (unsigned int index = 0; index < _durationArrayCounter; index++){
        durationArray[index] = _durationArray[index];
      }
      };

    //getters
    const unsigned int * getDurationArray(unsigned int & _chapterCounter) const {
      _chapterCounter = chapterCounter;
      return durationArray;
    };

    //unsigned int getChapterCounter() const {return chapterCounter;};


    //printing method
    void print(std::ostream & s) const override;
};


#endif
