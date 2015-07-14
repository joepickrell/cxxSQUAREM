/*
 * SquaremControl.cpp
 *
 *  Created on: Jul 13, 2015
 *      Author: jkpickrell
 */

#include "SquaremControl.h"

SquaremControl::SquaremControl(){
	 K=1;
	 method=3;//1,2,3 indicates the types of step length to be used in squarem1,squarem2, 4,5 for "rre" and "mpe" in cyclem1 and cyclem2,  standing for reduced-rank ("rre") or minimal-polynomial ("mpe") extrapolation.
	    // K=1 must go with method=1,2 or 3
	    // K>1 must go with method=4 or 5
	 mstep=4;
	 maxiter=1500;
	 square=true;
	 trace=true;//currently set to be true for debugging purpose
	 stepmin0=1;
	 stepmax0=1;
	 kr=1;
	 objfninc=1;//0 to enforce monotonicity, Inf for non-monotonic scheme, 1 for monotonicity far from solution and allows for non-monotonicity closer to solution
	 tol=1e-7;
}


