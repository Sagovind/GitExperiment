# CI/CD C++ Demo

A minimal C++ app with unit tests, GitHub Actions CI, and Jenkins pipeline.

## Local build

```powershell
mkdir build
cd build
cmake ..
cmake --build . --config Release
ctest --output-on-failure
```

## GitHub Actions
- `.github/workflows/ci.yml`

## Jenkins
- `Jenkinsfile`

## Usage

```powershell
build\ci_cd_cpp_demo add 4 5
build\ci_cd_cpp_demo sub 7 2
```
