# Overview

In this assignment, we will write a simple character driver called booga. Note that, you will only be able to test this assignment on a Linux machine where you have root privilege. A VMware-based CentOS 7 (64 bit) VM image is provided. Later on we will refer to this VM as the cs453 VM. (username/password: cs453/cs453, run commands with sudo to gain root privilege). You can also download a CentOS 7 (64 bit) and install it by yourself, and you can also use VirtualBox.

## Explanation

So I tried following what the professor suggested which was basing off the example code given and convert it into the booga driver needed for the assignment. I started with changing names and making sure everything compiles without errors, loads the driver, and is able to be used by the 'test-booga' program. After that I checked if the /proc/driver/booga stats would be shown that the example driver code showed, and once that came out correctly I got hard stuck on what to do.

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

