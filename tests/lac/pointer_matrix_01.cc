// ---------------------------------------------------------------------
//
// Copyright (C) 2006 - 2018 by the deal.II authors
//
// This file is part of the deal.II library.
//
// The deal.II library is free software; you can use it, redistribute
// it, and/or modify it under the terms of the GNU Lesser General
// Public License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full text of the license can be found in the file LICENSE.md at
// the top level directory of deal.II.
//
// ---------------------------------------------------------------------

// check PointerMatrix:checkConstructor1

#include <deal.II/lac/full_matrix.h>
#include <deal.II/lac/pointer_matrix.h>
#include <deal.II/lac/vector.h>

#include "../tests.h"

template <typename number>
void
checkConstructor1()
{
  deallog << "Init with empty matrix" << std::endl;
  PointerMatrix<FullMatrix<number>, Vector<number>> P;
  deallog << "Is matrix empty:" << P.empty() << std::endl;
}

int
main()
{
  std::ofstream logfile("output");
  deallog << std::fixed;
  deallog << std::setprecision(4);
  deallog.attach(logfile);

  checkConstructor1<double>();
}
