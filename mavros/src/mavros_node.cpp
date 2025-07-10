/**
 * @brief MAVROS Node
 * @file mavros_node.cpp
 * @author Vladimir Ermakov <vooon341@gmail.com>
 */
/*
 * Copyright 2013,2014,2015 Vladimir Ermakov.
 *
 * This file is part of the mavros package and subject to the license terms
 * in the top-level LICENSE file of the mavros repository.
 * https://github.com/mavlink/mavros/tree/master/LICENSE.md
 */

#include <mavros/mavros.h>
#include <pthread.h>

int main(int argc, char *argv[])
{
	pthread_setname_np(pthread_self(), "mavros_ros");
	ros::init(argc, argv, "mavros");

	mavros::MavRos mavros;
	mavros.spin();

	return 0;
}
