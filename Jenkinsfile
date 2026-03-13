pipeline {
  agent any

  stages {
    stage('Checkout') {
      steps {
        checkout scm
      }
    }
    stage('Build') {
      steps {
        script {
          if (isUnix()) {
            sh 'mkdir -p build && cd build && cmake .. && cmake --build . --config Release'
          } else {
            bat 'mkdir build'
            bat 'cd build && cmake .. && cmake --build . --config Release'
          }
        }
      }
    }
    stage('Test') {
      steps {
        script {
          if (isUnix()) {
            sh 'cd build && ctest --output-on-failure'
          } else {
            bat 'cd build && ctest --output-on-failure'
          }
        }
      }
    }
    stage('Archive') {
      steps {
        archiveArtifacts artifacts: 'build/**', fingerprint: true
      }
    }
  }
}
