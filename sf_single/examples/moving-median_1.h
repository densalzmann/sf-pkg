/**
 * @file 
 * @author Denise Ratasich
 * @date 03.09.2013
 *
 * @brief Example configuration header.
 *
 * Contains the defines which are used to create a special estimator.
 * According to the estimation method, chosen with the macro METHOD,
 * specific additional parameters have to be set. Strings have to be
 * set in quotes.
 *
 * Possible parameters for each method can be found in the
 * documentation of each method:
 * - \ref movingaverage
 * - \ref movingmedian
 * - \ref kalmanfilter
 */

#ifndef __CONFIG_H__
#define __CONFIG_H__

#include "configuration/methods.h"

// -----------------------------------------
// input
// -----------------------------------------

#define TOPIC_NAME	"signal"
#define TOPIC_TYPE	std_msgs::Float64
#define TOPIC_INCLUDE	<std_msgs/Float64.h>
#define TOPIC_FIELD	data

// -----------------------------------------
// method and its parameters
// -----------------------------------------

#define METHOD			MOVING_MEDIAN
#define WINDOW_SIZE		5

#endif