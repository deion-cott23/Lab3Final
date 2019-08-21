/*
 * Data.h
 *
 *  Created on: Jul 15, 2019
 *      Author: ddizz
 */

#ifndef DATA_H_
#define DATA_H_

#include <stdlib.h>
#include <iostream>


class DoubleData {
private:
    double* data;

public:
    DoubleData();
    DoubleData(double a);
    ~DoubleData() = default;

    // accessors -------------------------------
    double getData() const ;
    double compare(DoubleData& other) const;
    friend std::ostream& operator<<(std::ostream& os, const DoubleData& dd);

    // mutators --------------------------------
    void setData(double _data);
};




#endif /* DATA_H_ */
