// user includes
#include "flecsale/mesh/burton/burton_types.h"

namespace flecsale {
namespace mesh {
namespace burton {

// static member initialization
constexpr size_t burton_types_t<2>::index_spaces_t::entity_map[3];
constexpr size_t burton_types_t<2>::index_spaces_t::connectivity_map[3][3];

// static member initialization
constexpr size_t burton_types_t<3>::index_spaces_t::entity_map[4];
constexpr size_t burton_types_t<3>::index_spaces_t::connectivity_map[4][4];

} // namespace
} // namespace
} // namespace 