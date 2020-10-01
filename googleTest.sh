wget https://github.com/google/googletest/archive/release-1.8.0.tar.gz
tar xf release-1.8.0.tar.gz
cd googletest-release-1.8.0
cmake -DBUILD_SHARED_LIBS=ON .
make
cd googletest
sudo cp -a include/gtest /usr/include
cd ..
cd googlemock
cd gtest
sudo cp -a libgtest_main.so libgtest.so /usr/lib/
cd ..
cd ..
cd ..
rm -rf release-1.8.0.tar.gz
rm -rf googletest-release-1.8.0
