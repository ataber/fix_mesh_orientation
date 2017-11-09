#include <Eigen/Core>
#include <igl/readPLY.h>
#include <igl/writePLY.h>
#include <igl/bfs_orient.h>
// #include <igl/embree/reorient_facets_raycast.h>

int main(int argc, char** argv) {
  Eigen::MatrixXd mesh_vertex;
  Eigen::MatrixXi mesh_face;
  igl::readPLY(argv[1], mesh_vertex, mesh_face);

  Eigen::MatrixXi oriented_mesh_face, C;
  igl::bfs_orient(mesh_face, oriented_mesh_face, C);
  // igl::embree::reorient_facets_raycast(mesh_vertex, mesh_face, oriented_mesh_face, C);

  igl::writePLY(argv[1], mesh_vertex, oriented_mesh_face, true);
}
