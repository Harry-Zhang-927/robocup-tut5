function tmc_wrs_gazebo_worlds_setup {
        local model_path=/home/athome23-5/tiago_public_ws/src/tutorial5/tmc_wrs_gazebo_world/models
    
    if [ -z $GAZEBO_MODEL_PATH ]
    then
        export GAZEBO_MODEL_PATH=$model_path
    else
        export GAZEBO_MODEL_PATH=$model_path:$GAZEBO_MODEL_PATH
    fi
}
tmc_wrs_gazebo_worlds_setup
