#include "idsequence.h"
#include <ctime>

IdSequence::IdSequence() {}

long int IdSequence::createTaskId()
{
    qDebug()<<"in IdSequence:: createTaskId()";
    long int t = static_cast<long int>(time(0));
    return t;

}
