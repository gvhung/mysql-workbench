/*
 * Copyright (c) 2007, 2017, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; version 2 of the
 * License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301  USA
 */

#include "grt.h"

namespace grt {
  namespace helper {
    void MYSQLGRT_PUBLIC generate_struct_code(const std::string &file, const std::string &outpath,
                                              const std::string &imploutpath,
                                              const std::multimap<std::string, std::string> &requires);

    void MYSQLGRT_PUBLIC generate_module_wrappers(const std::string &outpath, const std::vector<Module *> &modules);
  };
};
