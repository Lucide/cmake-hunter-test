```txt
"C:\Program Files\CMake\bin\cmake.exe" -DCMAKE_BUILD_TYPE=Debug -G "CodeBlocks - NMake Makefiles" D:\Users\Nemo\Desktop\cmake-hunter-test
-- [hunter *** DEBUG *** 2021-01-04T18:54:37] HUNTER_ROOT detected by cmake variable
-- [hunter *** DEBUG *** 2021-01-04T18:54:37] HUNTER_ROOT: D:/Users/Nemo/Desktop/cmake-hunter-test/cmake-build-debug/hunter-root
-- [hunter *** DEBUG *** 2021-01-04T18:54:37] Locking directory: D:/Users/Nemo/Desktop/cmake-hunter-test/cmake-build-debug/hunter-root/_Base/Download/Hunter/0.23.289/7d73237
-- [hunter *** DEBUG *** 2021-01-04T18:54:37] Lock done
-- [hunter *** DEBUG *** 2021-01-04T18:54:37] Run generate
-- Configuring done
-- Generating done
-- Build files have been written to: D:/Users/Nemo/Desktop/cmake-hunter-test/cmake-build-debug/hunter-root/_Base/Download/Hunter/0.23.289/7d73237/Build
-- [hunter] Initializing Hunter workspace (7d7323704780200a1575fc089d26f8a8a393a1fa)
-- [hunter]   file://D:/Users/Nemo/Desktop/cmake-hunter-test/cmake-build-debug/hunter-v0.23.289.tar.gz
-- [hunter]   -> D:/Users/Nemo/Desktop/cmake-hunter-test/cmake-build-debug/hunter-root/_Base/Download/Hunter/0.23.289/7d73237
Scanning dependencies of target Hunter
[ 12%] Creating directories for 'Hunter'
[ 25%] Performing download step (verify and extract) for 'Hunter'
-- verifying file...
     file='D:/Users/Nemo/Desktop/cmake-hunter-test/cmake-build-debug/hunter-v0.23.289.tar.gz'
-- verifying file... done
-- extracting...
     src='D:/Users/Nemo/Desktop/cmake-hunter-test/cmake-build-debug/hunter-v0.23.289.tar.gz'
     dst='D:/Users/Nemo/Desktop/cmake-hunter-test/cmake-build-debug/hunter-root/_Base/Download/Hunter/0.23.289/7d73237/Unpacked'
-- extracting... [tar xfz]
-- extracting... [analysis]
-- extracting... [rename]
-- extracting... [clean up]
-- extracting... done
[ 37%] No update step for 'Hunter'
[ 50%] No patch step for 'Hunter'
[ 62%] No configure step for 'Hunter'
[ 75%] No build step for 'Hunter'
[ 87%] No install step for 'Hunter'
[100%] Completed 'Hunter'
[100%] Built target Hunter
-- [hunter *** DEBUG *** 2021-01-04T18:54:46] Finished
-- [hunter *** DEBUG *** 2021-01-04T18:54:46] Settings (initialize):
-- [hunter *** DEBUG *** 2021-01-04T18:54:46]   HunterGate done (NO)
-- [hunter *** DEBUG *** 2021-01-04T18:54:46]   Cache init (YES)
-- [hunter *** DEBUG *** 2021-01-04T18:54:46] HUNTER_ROOT changed:
-- [hunter *** DEBUG *** 2021-01-04T18:54:46]   
-- [hunter *** DEBUG *** 2021-01-04T18:54:46]   D:/Users/Nemo/Desktop/cmake-hunter-test/cmake-build-debug/hunter-root
-- [hunter *** DEBUG *** 2021-01-04T18:54:46] HUNTER_VERSION changed:
-- [hunter *** DEBUG *** 2021-01-04T18:54:46]   
-- [hunter *** DEBUG *** 2021-01-04T18:54:46]   0.23.289
-- [hunter *** DEBUG *** 2021-01-04T18:54:46] HUNTER_CONFIGURATION_TYPES changed:
-- [hunter *** DEBUG *** 2021-01-04T18:54:46]   
-- [hunter *** DEBUG *** 2021-01-04T18:54:46]   Debug
-- [hunter *** DEBUG *** 2021-01-04T18:54:46] Flushing cache
-- [hunter *** DEBUG *** 2021-01-04T18:54:46] Removing variable from cache:
-- [hunter *** DEBUG *** 2021-01-04T18:54:46]   Name = 'FETCHCONTENT_BASE_DIR'
-- [hunter *** DEBUG *** 2021-01-04T18:54:46]   Value = 'D:/Users/Nemo/Desktop/cmake-hunter-test/cmake-build-debug/_deps'
-- The C compiler identification is MSVC 19.28.29334.0
-- The CXX compiler identification is MSVC 19.28.29334.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.28.29333/bin/Hostx64/x64/cl.exe - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.28.29333/bin/Hostx64/x64/cl.exe - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- [hunter *** DEBUG *** 2021-01-04T18:54:50] Single-configuration generator
-- [hunter *** DEBUG *** 2021-01-04T18:54:50] Using default cache server
-- [hunter *** DEBUG *** 2021-01-04T18:54:50] List of cache servers:
-- [hunter *** DEBUG *** 2021-01-04T18:54:50]   * https://github.com/cpp-pm/hunter-cache
-- [hunter *** DEBUG *** 2021-01-04T18:54:50] Settings (finalize):
-- [hunter *** DEBUG *** 2021-01-04T18:54:50]   HunterGate done (NO)
-- [hunter *** DEBUG *** 2021-01-04T18:54:50]   Cache init (NO)
-- [hunter *** DEBUG *** 2021-01-04T18:54:50] Variables from HunterGate:
-- [hunter *** DEBUG *** 2021-01-04T18:54:50]   HUNTER_GATE_ROOT: 
-- [hunter *** DEBUG *** 2021-01-04T18:54:50]   HUNTER_GATE_VERSION: 
-- [hunter *** DEBUG *** 2021-01-04T18:54:50]   HUNTER_GATE_SHA1: 

[hunter ** INTERNAL **] Unexpected empty string
[hunter ** INTERNAL **] [Directory:D:/Users/Nemo/Desktop/cmake-hunter-test]

------------------------------ ERROR -----------------------------
    /error.internal.html
------------------------------------------------------------------

CMake Error at cmake-build-debug/hunter-root/_Base/Download/Hunter/0.23.289/7d73237/Unpacked/cmake/modules/hunter_error_page.cmake:12 (message):
Call Stack (most recent call first):
  cmake-build-debug/hunter-root/_Base/Download/Hunter/0.23.289/7d73237/Unpacked/cmake/modules/hunter_internal_error.cmake:13 (hunter_error_page)
  cmake-build-debug/hunter-root/_Base/Download/Hunter/0.23.289/7d73237/Unpacked/cmake/modules/hunter_assert_not_empty_string.cmake:9 (hunter_internal_error)
  cmake-build-debug/hunter-root/_Base/Download/Hunter/0.23.289/7d73237/Unpacked/cmake/modules/hunter_calculate_self.cmake:10 (hunter_assert_not_empty_string)
  cmake-build-debug/hunter-root/_Base/Download/Hunter/0.23.289/7d73237/Unpacked/cmake/modules/hunter_apply_gate_settings.cmake:79 (hunter_calculate_self)
  cmake-build-debug/hunter-root/_Base/Download/Hunter/0.23.289/7d73237/Unpacked/cmake/modules/hunter_finalize.cmake:73 (hunter_apply_gate_settings)
  cmake-build-debug/hunter-root/_Base/Download/Hunter/0.23.289/7d73237/Unpacked/cmake/modules/hunter_add_package.cmake:23 (hunter_finalize)
  CMakeLists.txt:19 (hunter_add_package)


-- Configuring incomplete, errors occurred!
See also "D:/Users/Nemo/Desktop/cmake-hunter-test/cmake-build-debug/CMakeFiles/CMakeOutput.log".

[Finished]
```