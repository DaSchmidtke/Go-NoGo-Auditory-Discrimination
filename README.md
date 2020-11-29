# Sensory Island Task (SIT)

This repository provides Jupyter notebooks for the Sensory Island Task, a behavioral experiment described in detail in Ferreiro et al. 2020 (doi: 10.3389/fnbeh.2020.576154), and the pre-processing of the resulting output data for subsequent analysis in MATLAB. For a tutorial on how to use the script to run an experiment visit [my blog](https://cognitive-ethology.netlify.app/post/2020-10-13-sit).

### Installation

This project was developed and tested on different Windows (Win7 and Win10) computers. I recommend using Anaconda to run the project notebooks.

To install Anaconda, download the Anaconda installer with Python 3 (tested with Anaconda3-2019.10, bundled with Python 3.7) and follow the instructions on the download page.

After installation, I recommend creating an Anaconda environment from which Jupyter Notebook will be started to run the provided notebooks. You can create new environments using Anaconda's navigator or from an Anaconda prompt using:

    conda create --name myenv

Once created, activate the environment and make sure it has both, Python 3 and R installed. Usually, you will also have to install an R-Kernel for Jupyter Notebook. To do so, open an Anaconda promt and go to the environment you created:

    activate myenv

Once the environment has been activated, install R, its essentials, and the kernel via:

    conda install r-base
    conda install r-essentials 
    conda install -c r r-irkernel

Finally, for the notebooks to run, you will have to install additional python modules and R libraries and their dependencies to your environment. Notebooks may not run smoothly, if the wrong versions of the modules are installed. Especially having the wrong versions of openCV can cause trouble. The Jupyter notebooks provided here run on Python 3 with openCV 3.4.2. The code below will install the latest version of the modules/libraries to your environment. Version numbers in brackets are the latest module/library versions the notebooks were tested with (27th of May, 2020).

**Python modules:** numpy (1.18.1), openCV (3.4.2), tkinter (8.6.8), xlxswriter (1.2.7), scipy (1.3.2), sounddevice (0.3.14), pyfirmata (1.1.0)

    conda install numpy
    conda install opencv
    conda install tk
    conda install xlsxwriter
    conda install scipy
    conda install pandas
    conda install -c conda-forge python-sounddevice
    conda install -c conda-forge pyfirmata

**R libraries:** R.matlab (3.6.2), xlsx (0.6.1)

    conda install -c r r-R.matlab
    conda install -c r r-xlsx

Once you have installed the modules and libraries, run Juypter Notebook from your environment

    jupyter notebook

To work with the different notebooks, select the folder to which you downloaded the files of this repository in the Jupyter browser and follow the instruction provided in the respective notebook.

## Authors

* **Daniel Schmidtke** 

## License

This project is licensed under the MIT License (see the license file for details). 

If you use the code for scientific purposes without modification, please cite this repository and/or our methods paper (Ferreiro et al. 2020; doi: 10.3389/fnbeh.2020.576154)

## Acknowledgments

* The implemented tracking algorithm was inspired by **colinlaney**'s animal-tracking at: https://github.com/colinlaney/animal-tracking
