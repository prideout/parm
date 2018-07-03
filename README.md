[![Build Status](https://travis-ci.org/prideout/parm.svg?branch=master)](https://travis-ci.org/prideout/parm)

This uses CMake even though it is obviously not a cross-platform application.  This allows the build to be expressed as a single text file.

```bash
> brew install cmake
> . env.sh # set up the aliases used below
> init     # invoke cmake to [re]create an Xcode project in _build
> build    # build the app
> run      # launch the app
> debug    # debug the app with lldb
```

See also:

https://github.com/naleksiev/mtlpp