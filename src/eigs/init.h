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


#ifndef init_H
#define init_H
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_Sprimme)
#  define init_basis_Sprimme CONCAT(init_basis_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(init_basis_Rprimme)
#  define init_basis_Rprimme CONCAT(init_basis_,REAL_SUF)
#endif
int init_basis_dprimme(double *V, int64_t nLocal, int64_t ldV,
      double *W, int64_t ldW, double *evecs, int64_t ldevecs,
      double *evecsHat, int64_t ldevecsHat, double *M, int ldM, double *UDU,
      int ldUDU, int *ipivot, double machEps, double *rwork, size_t *rworkSize,
      int *basisSize, int *nextGuess, int *numGuesses, double *timeForMV,
      primme_params *primme);
int init_basis_zprimme(_Complex double *V, int64_t nLocal, int64_t ldV,
      _Complex double *W, int64_t ldW, _Complex double *evecs, int64_t ldevecs,
      _Complex double *evecsHat, int64_t ldevecsHat, _Complex double *M, int ldM, _Complex double *UDU,
      int ldUDU, int *ipivot, double machEps, _Complex double *rwork, size_t *rworkSize,
      int *basisSize, int *nextGuess, int *numGuesses, double *timeForMV,
      primme_params *primme);
int init_basis_sprimme(float *V, int64_t nLocal, int64_t ldV,
      float *W, int64_t ldW, float *evecs, int64_t ldevecs,
      float *evecsHat, int64_t ldevecsHat, float *M, int ldM, float *UDU,
      int ldUDU, int *ipivot, double machEps, float *rwork, size_t *rworkSize,
      int *basisSize, int *nextGuess, int *numGuesses, double *timeForMV,
      primme_params *primme);
int init_basis_cprimme(_Complex float *V, int64_t nLocal, int64_t ldV,
      _Complex float *W, int64_t ldW, _Complex float *evecs, int64_t ldevecs,
      _Complex float *evecsHat, int64_t ldevecsHat, _Complex float *M, int ldM, _Complex float *UDU,
      int ldUDU, int *ipivot, double machEps, _Complex float *rwork, size_t *rworkSize,
      int *basisSize, int *nextGuess, int *numGuesses, double *timeForMV,
      primme_params *primme);
#endif
