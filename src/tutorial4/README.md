
# Tutorial 4


launch the empty world and robot:

$ roslaunch object_detection_world tiago.launch

## Task 1
To make the robot head tilt, use the following command:

$ rostopic pub -1 /head_controller/command trajectory_msgs/JointTrajectory "{
  joint_names: ['head_1_joint', 'head_2_joint'],
  points: [{
    positions: [-0.3, -0.7],
    velocities: [0, 0],
    accelerations: [0, 0],
    effort: [0, 0],
    time_from_start: {secs: 2, nsecs: 0}
  }]
}"


## Task 2

Lanuch the YOLO detection use the following command:

$ roslaunch object_detection object_detection.launch


## Task 3
Lanuch the plane segmentation of cloud points use the following command:

$ roslaunch plane_segmentation plane_segmentation_tiago.launch

check in the rviz to change different topic names to launch the cloud points of objects and table_plane seperately


## Task 4

Lanuch the object labeling of cloud points use the following command:

$ roslaunch object_labeling object_labeling.launch

tips: remember to add the MarkerArray in rviz to view the labels



