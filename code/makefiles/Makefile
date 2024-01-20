# Makefiles build only what is necessary
# Modification times of the files involved are checked and necessary commands are executed to bring the target up to date based on the dependencies

# lifecycle: code.cpp -> output.o -> executable.exe

# Before colon is 'target rule' (output:, main.o: etc) - typically a file or an action that needs to be performed. The rules under each target specify how to build that target
# After colon there is a list of dependencies (files or targets) that the current target depends on. If any of the dependencies are newer than the target or do not exist, the associated commands are executed
# The lines following each target and its dependencies are the commands to be executed if the target needs to be updated. These commands are indented with tabs.

# target rule: dependencies list
# 	tab indented commands

# Builds output file (executable) named 'output'. Command depends on main and Vector output files
# output.exe is included as an example of a 2nd command - which here runs the output file
output: main.o Vector.o
	g++ main.o Vector.o -o output
	output.exe

# Compiles main output file. Depends on main source file
main.o: main.cpp
	g++ -c main.cpp

# Compiles Vector output file. Depends on Vector source file
vector.o: Vector.cpp
	g++ -c Vector.cpp

# Rule for cleaning project. Note this is not called automatically and must be called with 'make clean' (though could add to output rule above as another line 'make clean' - however bad practice, Makefiles are desined to only run what is needed.)
# To run this on Linux, 'del' needs to be replaced with 'rm'
# This could be achieved if else and using automatic variables along with checking operating system
clean:
	del *.o output

#.PHONY target in a Makefile is used to declare a target that is not associated with a file. It tells Make that the target is not meant to represent an actual file or directory and helps prevent conflicts
.PHONY: clean