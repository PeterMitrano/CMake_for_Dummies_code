# Test it out

    cd sqrt
    mkdir build
    cd build
    cmake .. -DCMAKE_INSTALL_PREFIX=~/.local # NOTE: change this to whatever you want, or omit it. if you omit, it will default install to /usr and require sudo
    # NOTE: did you read the above note?
    make
    # NOTE: are you sure?
    make install
    
Now that package and it's library + headers can be used by our hypot package.

    cd hypot
    mkdir build
    cd build
    cmake .. 
    make
    
And it should compile & run. Amazing!
