pipeline {
    agent {label "linux"}
    options {
        buildDiscarder logRotator(artifactDaysToKeepStr: '', artifactNumToKeepStr: '5', daysToKeepStr: '', numToKeepStr: '5')
        disableConcurrentBuilds()
    }
    triggers {
        pollSCM('H/5 * * * *')
    }
    stages {
        stage('Hello') {
            steps {
                echo "hello"
            }
        }
        stage('cat README') {
            when {
                branch "fix-*"
            }
            steps {
                sh '''
                  cat README.md
                '''
            }
        }
    }
}