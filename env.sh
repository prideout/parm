alias init="cmake -H. -B_build -GXcode"
alias build="cmake --build _build"
alias run="open _build/Debug/parm.app"
alias debug="lldb _build/Debug/parm.app/Contents/MacOS/parm -o run"
