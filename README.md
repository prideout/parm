parm
====

An example of a CMake-based OS X Metal application.

[![Build Status](https://travis-ci.org/prideout/parm.png?branch=master)](https://travis-ci.org/prideout/parm)

Yes, this uses CMake even though it is obviously not a cross-platform application.

Why?  Because CMake allows the build process to be expressed as a single text file.

### Usage
```bash
> brew install cmake
> . env.sh # set up three aliases: create, build, run
> create # [re]create an Xcode project in _build
> build  # build the Xcode project to produce an app
> run # run the app that you just built
```
