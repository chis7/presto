/*
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "velox/type/Type.h"

#include "presto_cpp/main/types/antlr/TypeSignatureBaseVisitor.h"

namespace facebook::presto {

class TypeParser {
 public:
  velox::TypePtr parse(const std::string& text) const;

 private:
  mutable std::unordered_map<std::string, velox::TypePtr> cache_;
};

} // namespace facebook::presto
