add_library_unity(
  duckdb_func_date
  OBJECT
  age.cpp
  current.cpp
  epoch.cpp
  date_trunc.cpp
  date_part.cpp
  strftime.cpp
  to_interval.cpp)
set(ALL_OBJECT_FILES
    ${ALL_OBJECT_FILES} $<TARGET_OBJECTS:duckdb_func_date>
    PARENT_SCOPE)
