/* Eliminating useless chain rules.

   Copyright (C) 2019 Free Software Foundation, Inc.

   This file is part of Bison, the GNU Compiler Compiler.

   This program is free software: you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation, either version 3 of the
   License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see
   <http://www.gnu.org/licenses/>.  */

/**
 * \file chain.h
 * \brief Eliminating useless chain rules.
 */

#ifndef CHAIN_H_
# define CHAIN_H_

# include "bitsetv.h"

# include "symtab.h" /* symbol_number.  */

extern bitsetv descendants;

void chain_compute_ancestors (void);

size_t chain_ancestors_count (symbol_number s);

bool is_leaf (symbol_number s);

  void chain_free (void);

#endif /* !CHAIN_H_ */
