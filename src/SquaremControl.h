/*
 * SquaremControl.h
 *
 *  Created on: Jul 13, 2015
 *      Author: jkpickrell
 */

#ifndef SRC_SQUAREMCONTROL_H_
#define SRC_SQUAREMCONTROL_H_


class SquaremControl{
public:
	SquaremControl();
    int K;
    int method;//1,2,3 indicates the types of step length to be used in squarem1,squarem2, 4,5 for "rre" and "mpe" in cyclem1 and cyclem2,  standing for reduced-rank ("rre") or minimal-polynomial ("mpe") extrapolation.
    // K=1 must go with method=1,2 or 3
    // K>1 must go with method=4 or 5
    double mstep;
    int maxiter;
    bool square;
    bool trace;//currently set to be true for debugging purpose
    double stepmin0;
    double stepmax0;
    double kr;
    double objfninc;//0 to enforce monotonicity, Inf for non-monotonic scheme, 1 for monotonicity far from solution and allows for non-monotonicity closer to solution
    double tol;
};


#endif /* SRC_SQUAREMCONTROL_H_ */
