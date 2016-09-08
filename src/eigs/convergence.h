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


#ifndef convergence_H
#define convergence_H
#if !defined(CHECK_TEMPLATE) && !defined(check_convergence_Sprimme)
#  define check_convergence_Sprimme CONCAT(check_convergence_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(check_convergence_Rprimme)
#  define check_convergence_Rprimme CONCAT(check_convergence_,REAL_SUF)
#endif
int check_convergence_dprimme(double *X, int64_t nLocal, int64_t ldX,
      double *R, int64_t ldR, double *evecs, int numLocked,
      int64_t ldevecs, int left, int right, int *flags, double *blockNorms,
      double *hVals, int *reset, double machEps, double *rwork,
      size_t *rworkSize, int *iwork, int iworkSize, primme_params *primme);
int check_convergence_zprimme(_Complex double *X, int64_t nLocal, int64_t ldX,
      _Complex double *R, int64_t ldR, _Complex double *evecs, int numLocked,
      int64_t ldevecs, int left, int right, int *flags, double *blockNorms,
      double *hVals, int *reset, double machEps, _Complex double *rwork,
      size_t *rworkSize, int *iwork, int iworkSize, primme_params *primme);
int check_convergence_sprimme(float *X, int64_t nLocal, int64_t ldX,
      float *R, int64_t ldR, float *evecs, int numLocked,
      int64_t ldevecs, int left, int right, int *flags, float *blockNorms,
      float *hVals, int *reset, double machEps, float *rwork,
      size_t *rworkSize, int *iwork, int iworkSize, primme_params *primme);
int check_convergence_cprimme(_Complex float *X, int64_t nLocal, int64_t ldX,
      _Complex float *R, int64_t ldR, _Complex float *evecs, int numLocked,
      int64_t ldevecs, int left, int right, int *flags, float *blockNorms,
      float *hVals, int *reset, double machEps, _Complex float *rwork,
      size_t *rworkSize, int *iwork, int iworkSize, primme_params *primme);
#endif
