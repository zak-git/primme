/*******************************************************************************
 *   PRIMME PReconditioned Iterative MultiMethod Eigensolver
 *   Copyright (C) 2015 College of William & Mary,
 *   James R. McCombs, Eloy Romero Alcalde, Andreas Stathopoulos, Lingfei Wu
 *
 *   This file is part of PRIMME.
 *
 *   PRIMME is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU Lesser General Public
 *   License as published by the Free Software Foundation; either
 *   version 2.1 of the License, or (at your option) any later version.
 *
 *   PRIMME is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *   Lesser General Public License for more details.
 *
 *   You should have received a copy of the GNU Lesser General Public
 *   License along with this library; if not, write to the Free Software
 *   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *******************************************************************************
 *   NOTE: THIS FILE IS AUTOMATICALLY GENERATED. PLEASE DON'T MODIFY
 ******************************************************************************/


#ifndef restart_H
#define restart_H
#if !defined(CHECK_TEMPLATE) && !defined(restart_Sprimme)
#  define restart_Sprimme CONCAT(restart_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(restart_Rprimme)
#  define restart_Rprimme CONCAT(restart_,REAL_SUF)
#endif
int restart_dprimme(double *V, double *W, int64_t nLocal, int basisSize,
       int64_t ldV, double *hVals, double *hSVals, int *flags, int *iev,
       int *ievSize, double *blockNorms, double *evecs, int *evecsPerm,
       double *evals, double *resNorms, double *evecsHat, int64_t ldevecsHat,
       double *M, int ldM, double *UDU, int ldUDU, int *ipivot,
       int *numConverged, int *numLocked, int *numConvergedStored,
       double *previousHVecs, int *numPrevRetained, int ldpreviousHVecs,
       int numGuesses, double *prevRitzVals, int *numPrevRitzVals, double *H,
       int ldH, double *Q, int64_t ldQ, double *R, int ldR, double* QtV,
       int ldQtV, double *hU, int ldhU, int newldhU, double *hVecs,
       int ldhVecs, int newldhVecs, int *restartSizeOutput,
       int *targetShiftIndex, int *numArbitraryVecs, double *hVecsRot,
       int ldhVecsRot, int *restartsSinceReset, int *reset,
       double machEps, double *rwork, size_t *rworkSize, int *iwork,
       int iworkSize, primme_params *primme);
#if !defined(CHECK_TEMPLATE) && !defined(Num_reset_update_VWXR_Sprimme)
#  define Num_reset_update_VWXR_Sprimme CONCAT(Num_reset_update_VWXR_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(Num_reset_update_VWXR_Rprimme)
#  define Num_reset_update_VWXR_Rprimme CONCAT(Num_reset_update_VWXR_,REAL_SUF)
#endif
int Num_reset_update_VWXR_dprimme(double *V, double *W, int64_t mV,
   int nV, int64_t ldV,
   double *h, int nh, int ldh, double *hVals,
   double *X0, int nX0b, int nX0e, int64_t ldX0,
   double *X1, int nX1b, int nX1e, int64_t ldX1,
   double *evecs, int evecsSize, int nX2b, int nX2e, int64_t ldevecs,
   double *Wo, int nWob, int nWoe, int64_t ldWo,
   double *R, int nRb, int nRe, int64_t ldR, double *Rnorms,
   double *rnorms, int nrb, int nre,
   int reset, double machEps, double *rwork, size_t *lrwork,
   primme_params *primme);
#if !defined(CHECK_TEMPLATE) && !defined(retain_previous_coefficients_Sprimme)
#  define retain_previous_coefficients_Sprimme CONCAT(retain_previous_coefficients_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(retain_previous_coefficients_Rprimme)
#  define retain_previous_coefficients_Rprimme CONCAT(retain_previous_coefficients_,REAL_SUF)
#endif
int retain_previous_coefficients_dprimme(double *hVecs, int ldhVecs,
   double *hU, int ldhU, double *previousHVecs, int ldpreviousHVecs,
   int mprevious, int basisSize, int *iev, int blockSize, int *flags,
   int *numPrevRetained, int *iwork, int iworkSize, primme_params *primme);
int restart_zprimme(_Complex double *V, _Complex double *W, int64_t nLocal, int basisSize,
       int64_t ldV, double *hVals, double *hSVals, int *flags, int *iev,
       int *ievSize, double *blockNorms, _Complex double *evecs, int *evecsPerm,
       double *evals, double *resNorms, _Complex double *evecsHat, int64_t ldevecsHat,
       _Complex double *M, int ldM, _Complex double *UDU, int ldUDU, int *ipivot,
       int *numConverged, int *numLocked, int *numConvergedStored,
       _Complex double *previousHVecs, int *numPrevRetained, int ldpreviousHVecs,
       int numGuesses, double *prevRitzVals, int *numPrevRitzVals, _Complex double *H,
       int ldH, _Complex double *Q, int64_t ldQ, _Complex double *R, int ldR, _Complex double* QtV,
       int ldQtV, _Complex double *hU, int ldhU, int newldhU, _Complex double *hVecs,
       int ldhVecs, int newldhVecs, int *restartSizeOutput,
       int *targetShiftIndex, int *numArbitraryVecs, _Complex double *hVecsRot,
       int ldhVecsRot, int *restartsSinceReset, int *reset,
       double machEps, _Complex double *rwork, size_t *rworkSize, int *iwork,
       int iworkSize, primme_params *primme);
int Num_reset_update_VWXR_zprimme(_Complex double *V, _Complex double *W, int64_t mV,
   int nV, int64_t ldV,
   _Complex double *h, int nh, int ldh, double *hVals,
   _Complex double *X0, int nX0b, int nX0e, int64_t ldX0,
   _Complex double *X1, int nX1b, int nX1e, int64_t ldX1,
   _Complex double *evecs, int evecsSize, int nX2b, int nX2e, int64_t ldevecs,
   _Complex double *Wo, int nWob, int nWoe, int64_t ldWo,
   _Complex double *R, int nRb, int nRe, int64_t ldR, double *Rnorms,
   double *rnorms, int nrb, int nre,
   int reset, double machEps, _Complex double *rwork, size_t *lrwork,
   primme_params *primme);
int retain_previous_coefficients_zprimme(_Complex double *hVecs, int ldhVecs,
   _Complex double *hU, int ldhU, _Complex double *previousHVecs, int ldpreviousHVecs,
   int mprevious, int basisSize, int *iev, int blockSize, int *flags,
   int *numPrevRetained, int *iwork, int iworkSize, primme_params *primme);
int restart_sprimme(float *V, float *W, int64_t nLocal, int basisSize,
       int64_t ldV, float *hVals, float *hSVals, int *flags, int *iev,
       int *ievSize, float *blockNorms, float *evecs, int *evecsPerm,
       float *evals, float *resNorms, float *evecsHat, int64_t ldevecsHat,
       float *M, int ldM, float *UDU, int ldUDU, int *ipivot,
       int *numConverged, int *numLocked, int *numConvergedStored,
       float *previousHVecs, int *numPrevRetained, int ldpreviousHVecs,
       int numGuesses, float *prevRitzVals, int *numPrevRitzVals, float *H,
       int ldH, float *Q, int64_t ldQ, float *R, int ldR, float* QtV,
       int ldQtV, float *hU, int ldhU, int newldhU, float *hVecs,
       int ldhVecs, int newldhVecs, int *restartSizeOutput,
       int *targetShiftIndex, int *numArbitraryVecs, float *hVecsRot,
       int ldhVecsRot, int *restartsSinceReset, int *reset,
       double machEps, float *rwork, size_t *rworkSize, int *iwork,
       int iworkSize, primme_params *primme);
int Num_reset_update_VWXR_sprimme(float *V, float *W, int64_t mV,
   int nV, int64_t ldV,
   float *h, int nh, int ldh, float *hVals,
   float *X0, int nX0b, int nX0e, int64_t ldX0,
   float *X1, int nX1b, int nX1e, int64_t ldX1,
   float *evecs, int evecsSize, int nX2b, int nX2e, int64_t ldevecs,
   float *Wo, int nWob, int nWoe, int64_t ldWo,
   float *R, int nRb, int nRe, int64_t ldR, float *Rnorms,
   float *rnorms, int nrb, int nre,
   int reset, double machEps, float *rwork, size_t *lrwork,
   primme_params *primme);
int retain_previous_coefficients_sprimme(float *hVecs, int ldhVecs,
   float *hU, int ldhU, float *previousHVecs, int ldpreviousHVecs,
   int mprevious, int basisSize, int *iev, int blockSize, int *flags,
   int *numPrevRetained, int *iwork, int iworkSize, primme_params *primme);
int restart_cprimme(_Complex float *V, _Complex float *W, int64_t nLocal, int basisSize,
       int64_t ldV, float *hVals, float *hSVals, int *flags, int *iev,
       int *ievSize, float *blockNorms, _Complex float *evecs, int *evecsPerm,
       float *evals, float *resNorms, _Complex float *evecsHat, int64_t ldevecsHat,
       _Complex float *M, int ldM, _Complex float *UDU, int ldUDU, int *ipivot,
       int *numConverged, int *numLocked, int *numConvergedStored,
       _Complex float *previousHVecs, int *numPrevRetained, int ldpreviousHVecs,
       int numGuesses, float *prevRitzVals, int *numPrevRitzVals, _Complex float *H,
       int ldH, _Complex float *Q, int64_t ldQ, _Complex float *R, int ldR, _Complex float* QtV,
       int ldQtV, _Complex float *hU, int ldhU, int newldhU, _Complex float *hVecs,
       int ldhVecs, int newldhVecs, int *restartSizeOutput,
       int *targetShiftIndex, int *numArbitraryVecs, _Complex float *hVecsRot,
       int ldhVecsRot, int *restartsSinceReset, int *reset,
       double machEps, _Complex float *rwork, size_t *rworkSize, int *iwork,
       int iworkSize, primme_params *primme);
int Num_reset_update_VWXR_cprimme(_Complex float *V, _Complex float *W, int64_t mV,
   int nV, int64_t ldV,
   _Complex float *h, int nh, int ldh, float *hVals,
   _Complex float *X0, int nX0b, int nX0e, int64_t ldX0,
   _Complex float *X1, int nX1b, int nX1e, int64_t ldX1,
   _Complex float *evecs, int evecsSize, int nX2b, int nX2e, int64_t ldevecs,
   _Complex float *Wo, int nWob, int nWoe, int64_t ldWo,
   _Complex float *R, int nRb, int nRe, int64_t ldR, float *Rnorms,
   float *rnorms, int nrb, int nre,
   int reset, double machEps, _Complex float *rwork, size_t *lrwork,
   primme_params *primme);
int retain_previous_coefficients_cprimme(_Complex float *hVecs, int ldhVecs,
   _Complex float *hU, int ldhU, _Complex float *previousHVecs, int ldpreviousHVecs,
   int mprevious, int basisSize, int *iev, int blockSize, int *flags,
   int *numPrevRetained, int *iwork, int iworkSize, primme_params *primme);
#endif
