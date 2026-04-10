import matplotlib
matplotlib.use('Cocoa')

import numpy as np
from numpy import newaxis
import scipy as sp
import scipy.linalg as la
import scipy.stats
import ezplot
import cPickle as pkl
from Foundation import *
from AppKit import *
import acqui.analysis as an
import acqui.textmate
import pdb
import os.path
import matplotlib.pyplot as plt
from matplotlib.pyplot import plot, show, errorbar, xlabel, ylabel, legend

tmrun=lambda : acqui.textmate.tmrun(globals())
tmdb=lambda : acqui.textmate.tmdb(globals())