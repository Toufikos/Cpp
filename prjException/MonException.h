#ifndef MONEXCEPTION_H_INCLUDED
#define MONEXCEPTION_H_INCLUDED
#include <iostream>

using namespace std;

class MonException
{
private:
        string message;
        int numeroErr;
public:
        MonException()
        {
           numeroErr = -1;
        }
        MonException(int num)
        {
           numeroErr = num;
        }
        string getMessage()
        {
            switch(this->numeroErr)
            {
            case 1:
                this->message = "Err 1";
                break;
            case 5:
                this->message = "Err 5";
                break;
            default:
                 this->message = "Err non gérée";
                break;
            }

            return message;
        }

};

class MonExceptionDerive: public MonException
{

};


#endif // MONEXCEPTION_H_INCLUDED
