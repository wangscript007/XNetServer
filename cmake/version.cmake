set(PROJECT_VERSION_MAJOR 1)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 0)
set(PROJECT_VERSION "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

configure_file(
    ${PROJECT_SOURCE_DIR}/cmake/version.h.in
    ${PROJECT_SOURCE_DIR}/cmake/version.h
)

