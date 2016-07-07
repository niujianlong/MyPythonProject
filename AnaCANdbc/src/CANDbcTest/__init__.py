#/*from distutils.tests.setuptools_build_ext import if_dl*/
from pip._vendor.distlib.compat import raw_input
name = raw_input("what is your name?:")
if name.endswith ("niu"):
    print "hello niu"
elif name.endswith("fang"):
    print "hellow xiao"
else:
    print "hellow"
    