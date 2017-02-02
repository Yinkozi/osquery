/*
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include <string>

#include <osquery/core.h>
#include <osquery/tables.h>

#include "osquery/tables/system/windows/registry.h"

namespace osquery {
namespace tables {

QueryData genShims(QueryContext& context) {
   Row r;
  QueryData results;

  r["output"] = "output :)";
  results.push_back(r);

  return results;
}
}
}
