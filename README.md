# libasm

build assembly program

      nasm -f macho64 -o hello.o hello.s
      
      
link

      ld hello.o -o hello -macosx_version_min 10.13 -lSystem -no_pie
      
run

      ./hello
