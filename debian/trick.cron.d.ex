#
# Regular cron jobs for the trick package
#
0 4	* * *	root	[ -x /usr/bin/trick_maintenance ] && /usr/bin/trick_maintenance
