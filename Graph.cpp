#include "Graph.h"

void Graph::std_out_write() {
	boost::dynamic_properties dp;
	dp.property("node_name",get(&NodeProp::name,g));
	dp.property("node_id",get(&NodeProp::id,g));
	dp.property("link_name",get(&LinkProp::name,g));
	dp.property("link_id",get(&LinkProp::id,g));
	write_graphml(std::cout, g, dp);
}

