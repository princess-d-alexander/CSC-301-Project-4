/*
 * CSC-301
 * kruskal.hpp
 * Spring 2025
 *
 * Partner 1: Princess Alexander
 * Partner 2: Livia Stein Freitas
 * Date: 04/23/25
 */

#ifndef KRUSKAL_HPP_
#define KRUSKAL_HPP_

#include "Vertex.hpp"
#include "Edge.hpp"

/*
 * find
 */
int find(int v, std::vector<int> &pi);

/*
 * union_by_rank
 */
void union_by_rank(int u, int v, std::vector<int> &rank, std::vector<int> &pi);

/*
 * kruskal
 */
std::vector<Edge> kruskal(std::vector<Vertex> &adjList, 
                          std::vector<Edge> &edgeList);

#endif  // KRUSKAL_HPP_