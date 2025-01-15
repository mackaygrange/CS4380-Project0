==== Work Log ==== 
01/06/2025 - Monday - 2 hours: Prepared enviornment and began working on the necessary functions, setting up gtest and cmake.
01/08/2025 - Wednesday - 2 hours: Set up github repository to track my local git repo. Configured part 1's branch.
01/09/2025 - Friday - 3 hours: Spent some time debugging stupid issues with gtest and cmake. Unbungled some git issues I created for myself.
01/11/2025 - Sunday - 2 hours: Started refactoring for part 2 changes, fixed stupid issues caused by me forgetting how to manage CMake inclusions and implementing it wrong.
01/12/2025 - Monday - 1 hour: Spent some time checking previous branches to ensure that qualifiations are followed stricly when stipulated in the requirements.
01/13/2025 - Tuesday - 3 hours: Fumbled through some more git headaches and polished part 2 branch changes, finished part 3 pretty quickly due to already having set up CMake and gtest at the start. 

==== Commentary - Part 1 ====

For the first part of the assignment I quickly got myself in trouble by not strictly following the provided requirements, however with some tedious but brief refactoring I was able to rectify the majority of the issues that I caused for myself.

I set up gtest and cmake from the start, as well as the accompanying repository structure typically used with those tools. It didn't stipulate in the requirements that CMake could not be utilized in the earlier iterations in the requirements so hopefully that does not get me in trouble. If it does I can delete the necessary files from those branches. I did however shoot myself in the foot trying to set up gtest for a single main.cpp file project. After attempting for a while to get it to work, I sought clarification in class and decided to just exclude any automated testing for the first portion of the assignment. Despite this however I did test as thoroughly as I could through less official trial and error testing for common errors like boundary value errors.  

==== Commentary - Part 2 ====

For part two of the project, I followed the directions and sepperated out into the various required files. I was under the impression that we would be using CMake for all 3 parts of the project, and was doing so by default as I am already rather familiar with CMake. However to fulfill the requirements I also added an option to compile using the provided Makefile. The cmake method should also function correctly.

This part ended up taking longer than I had anticipated because I initially began the project implementing everything with my own creative liberties, but once I found out in class that we should be following the instructions as if they were spec requirements I removed all of my extraneous fluff.

Besides some minor Makefile troubleshooting and git branch management pains the process was not too bad. 

==== Commentary - Part 3 ====

The third and final part of the project was finnished rather quickly due to having habitually set them up from the get go. Most of the time spent working on this part when into polishing, writting documentation, annotating source code, and writing the test functions. Made some addaptations to naming conventions in order to comply with requirements. 
