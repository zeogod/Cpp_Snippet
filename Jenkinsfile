node('azurebuilder1') {
    stage('Preparation') { // for display purposes
        // Get some code
        //getCode(git_url)
		checkout csm
    }
    stage('Build') {
        // Run the main build here
        bat('dir')
		dir('01-Basic\\001-Hello World') {
			bat """
				dir
				call 'C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Professional\\VC\\Auxiliary\\Build\\vcvars64.bat'
				msbuild
			"""
		}

    }
    stage('Results') {
        dir('01-Basic\\001-Hello World') {
			bat('dir')
		}
    }
}








def getCode(git_url) {
    checkout([$class: 'GitSCM', branches: [[name: '*/master']], extensions: [[$class: 'GitLFSPull']], userRemoteConfigs: [[url: git_url]]])
}