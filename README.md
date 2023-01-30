# conanPackage

example to create a conan package 

## Conan
Install package to Conan cache.

```bash
osal-linux $ conan install . --output-folder=build 
```

## Build

```bash
osal-linux $ cd build
osal-linux $ cmake .. -DCMAKE_PREFIX_PATH=$(pwd)
osal-linux $ cmake --build . 
```

## Git
Delete all ignored/created files.

```bash
osal-linux $ git clean -fxd
```

