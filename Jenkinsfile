pipeline {
    agent {label "linux"}
    options {
        buildDiscarder logRotator(artifactDaysToKeepStr: '', artifactNumtoKeepStr: '5', daysToKeepStr: '', numToKeepStr: '5')
        disableConcurrentBuilds()
    }
    stages {
        stage('Hello') {
            steps {
                echo "hello"
            }
        }
    }
}