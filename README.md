# ROS-Tasks
    this repo for ROS tasks in Robotics Corner ROS Course 

## ROS-Course Tasks

#### bash scripts Tasks
##### Task 0
    Inside your workspace (~/catkin_ws/src/), create a new folder named linux_exam.
##### Task 1
    Inside the linux_exam folder, create a new bash script named task1.sh, that does the following:
    
        a) First, it moves inside the linux_exam folder.
    ########################################        
        b) Once it is there, it generates a folder structure like the following one: this->is->my->linux->exam
    #########################################        
        c) Inside the final folder, named exam, it creates a new file named my_file.py
    #########################################        
        d) Finally, it prints to the screen the following string:
        This bash script has finished!


##### Task 2
    Given the following ROS commands:
    To make the Turtlebot robot 
    # perform a small square movement:
        rosrun linux_exam small_square.py
        To make the Turtlebot robot 
    # perform a medium square movement:
        rosrun linux_exam medium_square.py
        To make the Turtlebot robot
    # perform a big square movement:
        rosrun linux_exam big_square.py
    #######################################
    Inside the linux_exam folder, create a new bash script, named task2.sh, that does the following:
        It receives one parameter, which can 
        contain one of the following 
        values:
            small_square
            medium_square
            big_square




##### Task 3 
    
    Inside the linux_exam folder, create a new bash script, named task3.sh, that does the following:

a) First, it goes to the folder named exam, which you created in Task 1.

b) Once there, it removes any existing file, and it creates 3 new ones, named
like this: exam1.py, exam2.py and exam3.py.

c) Finally, it assigns to each file the following permissions:

###### exam1.py
    Owner: Read, Write and Execute

    Group: Read and Execute

    All others: Read

###### exam2.py
    Owner: Read and Execute
    
    Group: None

    All others: Execute

###### exam3.py
    Owner: Write

    Group: Read
    
    All others: Execute

# Note 
    exam3.py permission wroge because I had to make it excutable to be able to upload the repo to GITHUB.
    