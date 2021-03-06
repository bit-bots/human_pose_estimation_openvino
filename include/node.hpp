#pragma once

#include <vector>
#include <vector>
#include <inference_engine.hpp>
#include <ocv_common.hpp>

#include "human_pose_estimator.hpp"

#include <ros/ros.h>
#include <image_transport/image_transport.h>

#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <sensor_msgs/Image.h>
#include <std_msgs/Header.h>

#include <opencv2/core/core.hpp>
#include "human_pose_estimation_openvino/HumanPoseEstimation.h"
#include "human_pose_estimation_openvino/HumanPoseArray.h"
#include <ros/package.h>

namespace human_pose_estimation {
class HumanPoseEstimatorNode {
 public:
  HumanPoseEstimatorNode();

 private:
  void imageCb(const sensor_msgs::ImageConstPtr& msg);

  cv_bridge::CvImagePtr cv_ptr_;
  std_msgs::Header img_header_;
  bool new_image;
};
}  // namespace human_pose_estimation
