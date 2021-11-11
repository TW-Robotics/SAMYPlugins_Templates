CI workflows:

Generic: https://github.com/cirrus-actions/rebase -> executes the jobs on posting the comment "/rebase"

SAMYControl (create new repository)

Actions:
Action for testing the controllers
Action for "building" (it will depend on the language) a fake controller that uses the tests skills of the SAMYCore
Action for running the test controller
Workflow:
codeAnalysis -> run a tool for code analysis * *
build -> build the component with different compilers on Linux (we could also include windows???)
* *
tests -> tests the component * *
dockerization -> creates docker image of the component: needs build and tests * *
SAMYCore

Actions:
Action for building the SAMYCore (and the testsServer and testsClient)
Action for creating the docker image of the SAMYCore (and the testsServer and testsClient)
Action for running the testsServer and testsClient and a checking whether the tests were succesfully pass
Action for running the SAMYCore with a "default" information model for tests purposes (include a test skill with all the commands and default robot or something like that)
Workflow:
codeAnalysis -> run a tool for code analysis * *
build -> build the component with different compilers on Linux (we could also include windows???) * *
tests -> tests the component: needs build * *
dockerization -> creates docker image of the component: needs build and tests * *
SAMYPluginTemplate

Actions:
Action for building the CPP template (which includes a dummy test plugin)
Action for creating docker of the CPP template
Action for creating docker of the Python template
Action for running the dummy test plugin in CPP
Action for running the dummy test plugin in Python
Workflow (jobs):
codeAnalysis -> run a tool for code analysis * *
build -> build the component with different compilers on Linux (we could also include windows???) * *
tests -> tests the component: needs build * *
dockerization -> creates docker image of the component: needs build and tests * *
debian packaging???
SAMYPlugins

Actions:
Action for "building" (it will depend on the language) of the plugin
Action for creating a docker image of the SAMYPlugin
Action for running a test mode of the plugin
Workflow:
codeAnalysis -> run a tool for code analysis * *
build -> build the component with different compilers on Linux (we could also include windows???) * *
tests -> tests the component: needs build * *
dockerization -> creates docker image of the component: needs build and tests * *
debian packaging???

