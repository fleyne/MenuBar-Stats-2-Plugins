#MenuBar Stats 2, plugins repository

##History
[MenuBar Stats 2](https://www.seense.com/menubarstats) is an Advanced System Monitoring for Mac.   
MenuBar Stats was released for the first time, by Fabrice Leyne, [seense](https://www.seense.com), in 2013.   
[MenuBar Stats 2](https://www.seense.com/menubarstats) has been fully re-coded at the end of 2015 to allow plugins management.  
You can try for free [MenuBar Stats 2](https://www.seense.com/menubarstats).   

##MenuBar Stats 2 Main Architecture
[MenuBar Stats 2](https://www.seense.com/menubarstats), architecture is mainly compose of 2 parts:  

* MBS2 core part which is managing the plugins, windows...   
* The plugins. (As of today, 5 plugins are included in the current version -CPU, Disk, Battery, Network, Memory-, 2 additional plugins can be added -Fans, Temperature- for free).   

With this architecture, it is possible for anyone to build their own plugin.


##MenuBar Stats 2 The Core
The core part mainly handles:   

* Application states.  
* Loading of the plugins.  
* Main preferences menu.  
* Manage the windows.	
* The menu bar items re-ordering.  
* Views re-ordering.  
* The synchronization timer.  
* Few other core functions.  
	
	
##MenuBar Stats 2 The plugins
A plugin has is own architecture, protocol that will be used and managed by MBS2 core. Each module are fully autonomous.  

Each modules must have:

* An icon (prefered format is PDF format) that is used to identify the module in the different windows (MBSBundleIcon in Info.plist).  
* A module name that is used to identify the module in the different windows (MBSBundleDisplayName in Info.plist).  
* A principal class following a specific protocol, which:
	* Will provide to MBS2 core the needed objects (mainly views). (statusbarview, combinedview, standaloneview, preferencesview, notificationsview, optional menu...).    
	* And methods to update the Model and the Views.   
	* An optional menu for the module (as MBS2 Memory module for example).   
	* An optional menu where the items will be used and consolidated by MBS2 core and accessible from the gear button. (Open Disk Utility... for example).  
	

Beside the few mandatory items above, the plugin can be structured as you want.


NB: Important! [MenuBar Stats 2](https://www.seense.com/menubarstats), is and will always be sandboxed for security reasons. So the plugin will automatically inhirit the sandbox constraints. The sandbox of MenuBar Stats 2 is very minimum only outgoing connections HTTPS are authorized, and file user selection is authorized in Read Only mode.	
	
			
Go to the [wiki](https://github.com/fleyne/MenuBar-Stats-2-Plugins/wiki) for more detailed information.
	
	
##Requirements
- Runtime: OS X 10.10 or greater
- Don't forget the sandbox constraints!



	


