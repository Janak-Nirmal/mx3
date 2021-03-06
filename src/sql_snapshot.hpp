#pragma once
#include <vector>
#include <string>
#include <CppSQLite/CppSQLite3.h>

namespace mx3 {

// a class that represents a ResultSet from a Sql query at a point in time
class SqlSnapshot final {
  public:
    SqlSnapshot(CppSQLite3Query& query);
    const std::string& at(size_t index);
    size_t size() const { return m_data.size(); }
  private:
    std::vector<std::string> m_data;
};

}
