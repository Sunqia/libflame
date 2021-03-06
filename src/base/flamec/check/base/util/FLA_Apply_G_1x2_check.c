/*

    Copyright (C) 2014, The University of Texas at Austin

    This file is part of libflame and is available under the 3-Clause
    BSD license, which can be found in the LICENSE file at the top-level
    directory, or at http://opensource.org/licenses/BSD-3-Clause

*/

#include "FLAME.h"

FLA_Error FLA_Apply_G_1x2_check( FLA_Obj gamma, FLA_Obj sigma, FLA_Obj beta, FLA_Obj epsilon )
{
  FLA_Error e_val;

  e_val = FLA_Check_nonconstant_object( gamma );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_real_object( gamma );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_identical_object_datatype( gamma, sigma );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_identical_object_datatype( gamma, beta );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_identical_object_datatype( gamma, epsilon );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_if_scalar( gamma );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_if_scalar( sigma );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_if_scalar( beta );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_if_scalar( epsilon );
  FLA_Check_error_code( e_val );

  return FLA_SUCCESS;
}

