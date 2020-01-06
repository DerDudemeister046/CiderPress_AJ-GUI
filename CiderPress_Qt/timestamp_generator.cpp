#include "timestamp_generator.h"

Timestamp_Generator::Timestamp_Generator()
{

}

uint Timestamp_Generator::getTimestamp()
{
    QDateTime current = QDateTime::currentDateTime();
    uint time = current.toTime_t();
    return time;
}
