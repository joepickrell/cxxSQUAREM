/*
 * SquaremOutput.h
 *
 *  Created on: Jul 13, 2015
 *      Author: jkpickrell
 */

#ifndef SRC_SQUAREMOUTPUT_H_
#define SRC_SQUAREMOUTPUT_H_

#include <vector>
using std::vector;

class SquaremOutput{
public:
	SquaremOutput();
    vector<double> par;
    double valueobjfn;
    int iter;
    int pfevals;
    int objfevals;
    bool convergence;
};

#endif /* SRC_SQUAREMOUTPUT_H_ */
