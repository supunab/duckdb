//===----------------------------------------------------------------------===//
//
//                         DuckDB
//
// parser/statement/drop_schema_statement.hpp
//
// Author: Mark Raasveldt
//
//===----------------------------------------------------------------------===//
#pragma once

#include "parser/parsed_data.hpp"
#include "parser/sql_statement.hpp"

namespace duckdb {

class DropSchemaStatement : public SQLStatement {
  public:
	DropSchemaStatement()
	    : SQLStatement(StatementType::DROP_SCHEMA),
	      info(make_unique<DropSchemaInformation>()){};
	virtual ~DropSchemaStatement() {}

	virtual std::string ToString() const { return "DROP SCHEMA"; }
	virtual void Accept(SQLNodeVisitor *v) { v->Visit(*this); }

	std::unique_ptr<DropSchemaInformation> info;
};

} // namespace duckdb