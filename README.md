# Overview

In this assignment, we will write a simple character driver called booga. Note that, you will only be able to test this assignment on a Linux machine where you have root privilege. A VMware-based CentOS 7 (64 bit) VM image is provided. Later on we will refer to this VM as the cs453 VM. (username/password: cs453/cs453, run commands with sudo to gain root privilege). You can also download a CentOS 7 (64 bit) and install it by yourself, and you can also use VirtualBox.

## Explanation

So I tried following what the professor suggested which was basing off the example code given and convert it into the booga driver needed for the assignment. I started with changing names and making sure everything compiles without errors, loads the driver, and is able to be used by the 'test-booga' program. After that I checked if the /proc/driver/booga stats would be shown that the example driver code showed. Once I was able to get a correct proc file output as shown in the example project 3 description. Then came the hard part of figuring out how to track how many phrases are built, handling printing the phrase, and having my code not destroy my VM.

After figuring out how to track all the stats I needed to do with correct counting, I began working on copy_to_user. I ran into endless problems because the amount of different kernel versions and way to go about copy_to_user method and header file associated with it. After finding the correct header file that didn't freeze up my system everytime, I was able to display the correct string when running the read command argument. Then I went ahead and made sure I kept all the semaphore locks provided by the example driver code. Aftwards I worked on making sure that my third device driver was terminating and that was a journey. I went through a couple header files and different variations of methods that sent the SIGTERM signal. After that worked, I ran the given test scripts than the usual test 'c' program nervously and seeing the output and my VM continue to run was a giant relief. I'm not sure if I did this project correctly but I know for a fact I used /dev/random, I kill the booga3 process, I use semaphores (correctly hopefully), and get correct /proc stats. Other than that, this was a fun project to get lost into and learn all that I did.

## Submission

Create a private repository on github and give access permission to this account: jidongbsu (or using the email address: jidongxiao@boisestate.edu). You can use one repository for all 3 projects in this course, so that you only need to grant access permission to Jidong once.

Due Date:  November 19th, 2020. Extended to November 28th, 2020.

## Grading Rubric

- [10 pts] Compiling
  - Each compiler warning will result in a 3 point deduction.
  - You are not allowed to suppress warnings

- [70 pts] Main driver:
  - Supports read properly:    30/30
  - Use of /dev/random:             10/10
  - Writing acts like /dev/null:    10/10
  - Kill process writing to booga3: 10/10
  - Proper use of semaphores:       10/10

- [10 pts] Get Booga Stats from /proc
  - Report on number bytes written/read: 5/5
  - Report on strings :                  5/5

- [10 pts] Documentation:
  - Plan for testing:

