
#ifndef CoffeeInfo_h
#define CoffeeInfo_h
#include "TLorentzVector.h"
#include <string>
using namespace std;

class CoffeeInfo {
public:

    CoffeeInfo(std::string Position, int Feed, int upperLim, int lowerLimit, int Cont, int Age, string Group = "") :
    pos(Position), feed(Feed), upLimit(upperLim), lowLimit(lowerLimit), cont(Cont), age(Age), group(Group) {
    };

    CoffeeInfo() {
    };

    virtual ~CoffeeInfo() {
    };

    int GetFeed()const {
        return feed;
    };

    int GetUpLim()const {
        return upLimit;
    };
    int GetLowLim()const {
        return lowLimit;
    };

    int GetCont()const {
        return cont;
    };

    int GetAge()const {
        return age;
    };

    std::string GetPosition()const {
        return pos;
    };

    std::string GetGroup()const {
        return group;
    };

    void SetFeed(int in) {
         feed = in;
    };

    void SetUpLim(int in) {
         upLimit = in;
    };
    void SetLowLim(int in) {
         lowLimit = in;
    };

    void SetCont(int in) {
         cont=in;
    };

    void SetAge(int in) {
         age = in;
    };

    void SetPosition(std::string in) {
         pos = in;
    };

    void SetGroup(std::string in) {
         group = in;
    };
private:
    std::string pos;
    int feed; //-1:negative, 0: positive, 1:strongly positive
    int upLimit;
    int lowLimit;
    int cont; //-1: no contribution, 0: coffee, 1: system
    int age; //-1:<=30, 0: 30-35, 1:>=35
    std::string group;
};
#endif
