Human Pose Estimation OpenVino
==============================

This ROS package provides a node which takes subscribes to an image and uses the Intel Neural Compute Stick 2 to detect 
human poses. These are published and a debug image is provided.

Topics:
-------
Expects Image message on "/camera/image_proc"

Publishes self definded "HumanPoseEstimation" message on "/poses"

Publishes debug image on "/human_pose_debug"


Parameters:
-----------

bool "publish_debug_image": set false to disable debug image (improves performace)

float "score_threshold": poses with a score less than threshold are not published (default is 150)

Installation
------------

You need to install OpenVino and its InferenceEngine. 
Make sure to source the provided "setupvars.sh". 
For more information see section "Build the Demo Applications" here:

https://docs.openvinotoolkit.org/latest/omz_demos_README.html


More Information
----------------
The code is based on the OpenVino model zoo. More information can be found here:

https://github.com/openvinotoolkit/open_model_zoo/tree/master/demos/human_pose_estimation_demo


More information about the model can be found here:

https://docs.openvinotoolkit.org/latest/omz_models_intel_human_pose_estimation_0001_description_human_pose_estimation_0001.html