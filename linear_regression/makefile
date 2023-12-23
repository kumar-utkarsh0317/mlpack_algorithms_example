# Setting the variables
CXX = g++
HEADER_PATH = -I/home/kumar/Desktop/mlpack_source_code_and_build/mlpack/build/installdir/include
LIB_DEPENDENCIES = -larmadillo
CSV_DATA_PATH = "/home/kumar/Desktop/mlpack_function_practice/datasets/Folds5x2_pp.csv"

# The all target is used to specify the default target that should be built when you run make without specifying a target.
all: ordinary_lr rough_executable

# Target for building the executable 'ordinary_lr'
# her we define how targets should be made
ordinary_lr: ordinary_lr.cpp
	$(CXX) $(HEADER_PATH) ordinary_lr.cpp -o ordinary_lr $(LIB_DEPENDENCIES)

rough_executable: rough.cpp
	$(CXX) $(HEADER_PATH) rough.cpp -o rough_executable $(LIB_DEPENDENCIES) -lutklearn

# Target for running the executable
# If you run make run, it will check whether the ordinary_lr executable is up-to-date. If the ordinary_lr executable is not up-to-date (either it doesn't exist or the source file ordinary_lr.cpp has been modified), it will first build the ordinary_lr target and then execute the 
# make run will first make the executable and then run it
run: ordinary_lr rough_executable
	./ordinary_lr $(CSV_DATA_PATH)
	./rough_executable $(CSV_DATA_PATH)

# Target for cleaning up generated files
clean:
	rm -f ordinary_lr
