import os, sys
import subprocess
#subprocess.call("ifconfig")
ret = subprocess.check_output("ifconfig wlp18s0", shell=True )

print( ret )
