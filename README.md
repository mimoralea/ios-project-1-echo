# ios-project-1-echo
echo client/server sample code

## To get it setup follow these steps:
1. Download vagrant binary for your OS at [the downloads section on their website](https://www.vagrantup.com/downloads.html)
2. Run `vagrant up` to download the VM (it will take a long time the first time you get this VM)
3. Run `vagrant ssh` to get into the VM
  1. Inside the VM, go to the shared folder with the project `cd /vagrant`
  2. And then compile the code `make` (`make clean` to delete the binaries)
