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
        stage('Build') {
            steps {
                sh 'cmake .'
                sh 'make'
            }
        }
        stage('Execute') {
            steps {
                sh './main'
            }
        }
        stage('Test') {
            steps {
                sh 'ctest'
            }
        }
        stage('cat README') {
            when {
                branch "fix-*"
            }
            steps {
                sh 'cat README.md'
            }
        }
        stage ('for the PR') {
            when {
                branch 'PR-*'
            }
            steps {
                echo 'this only runs for the PRs'
            }
        }
        stage ('Clean') {
            steps {
                sh 'make clean'
            }
        }
    }
}