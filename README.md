
<!-- README.md is generated from README.Rmd. Please edit that file -->

# streamFind

<!-- badges: start -->

[![Lifecycle:
experimental](https://img.shields.io/badge/lifecycle-experimental-orange.svg)](https://lifecycle.r-lib.org/articles/stages.html#experimental)
<!-- badges: end -->

The streamFind package is a backend (code based) and frontend
([shiny](https://shiny.rstudio.com/) app) platform for assembly of
modular workflows to support spectrometric and spectroscopic data
processing. The major focus of streamFind is data processing for
environmental and quality studies. The streamFind package aims to
stimulate the use of advanced data analysis (e.g., non-target screening,
statistical analysis, etc.) in routine studies, promoting
standardization of data processing and structure and easing the
retrospective evaluation of data. The streamFind package can be used by
academics but also by technicians due to the comprehensive documentation
and well categorized set of integrated functionalities (modules). This
handbook focuses on describing and demonstrating the backend of the
streamFind package.

## Installation

For installation of the streamFind package, it is recommended to firstly
ensure that the dependencies are currently installed. Several existing R
packages and external functionalities are used in streamFind for various
processing steps. A major dependency of streamFind is the
[patRoon](https://github.com/rickhelmus/patRoon) R package. The patRoon
package combines several functionalities for basic and advanced data
processing and can be used interchangeably with streamFind, see
@ref(patroon-interchangeability) for more information. Most of the tools
that patRoon depends on are equally used in streamFind. In the next
sub-chapter, the mandatory and optional dependencies are described with
installation instructions. For a standalone and self-contained usage
option, the streamFind docker image is recommended (see
@ref(docker-image)), avoiding the need to installing all required
dependencies.

### Install dependencies

#### R and RTools

[R](https://cran.r-project.org/) and
[RTools](https://cran.r-project.org/bin/windows/Rtools/) are essential
dependencies. The R version 4.2.0 (2022-04-22 ucrt) can be obtained in
<https://cran.r-project.org/>. The RTools can be downloaded in
<https://cran.r-project.org/bin/windows/Rtools/>. Make sure to download
the right version for the R version installed. Installation instructions
are given in both sources.

#### Third party software

The external third party dependencies recommended are listed in the
section [other
dependencies](https://rickhelmus.github.io/patRoon/handbook_bd/manual-installation.html#other-dependencies)
from the patRoon
[handbook](https://rickhelmus.github.io/patRoon/handbook_bd/manual-installation.html#r-prerequisites).
Below we list the mandatory and really recommended software and
resources.

-   [ProteoWizard](https://proteowizard.sourceforge.io/), required for
    conversion of vendor MS formats to mzML/mzXML;  
-   [Java JDK](https://www.oracle.com/java/technologies/downloads/),
    mandatory for patRoon when plotting structure using MetFrag;  
-   [OpenMS](https://www.openms.de/downloads/); esternal tool for peak
    picking, grouping and alignment;  
-   [MetFrag
    CL](http://ipb-halle.github.io/MetFrag/projects/metfragcl/), used
    for formula annotation in patRoon;  
-   [PubChemLite](https://zenodo.org/record/6503754#.YtqxE3bP1hE),
    database used with MetFrag in patRoon;  
-   [SIRIUS](https://bio.informatik.uni-jena.de/software/sirius/), tool
    for peak picking and formula annotation in patRoon;  
-   [BioTransformer](https://bitbucket.org/djoumbou/biotransformer/downloads/),
    used for prediction of transformation products in patRoon;  
-   [SAFD](https://bitbucket.org/SSamanipour/safd.jl/src/master/), tool
    for peak picking with data in profile mode;  
-   [Open Babel](http://openbabel.org/wiki/Main_Page), used in patRoon
    for validation of chemicals properties (e.g., InChI and formulae);

#### R packages

The following code lines are adapted from the patRoon
[handbook](https://rickhelmus.github.io/patRoon/handbook_bd/manual-installation.html#r-prerequisites)
to ensure that both patRoon and other mutual R dependencies are
installed properly.

``` r
install.packages(c("BiocManager", "remotes"))

BiocManager::install(c("mzR", "xcms","CAMERA"))

remotes::install_github("blosloos/enviPick")

BiocManager::install("ropls")
remotes::install_github("rickhelmus/KPIC2") 

BiocManager::install("InterpretMSSpectrum")
remotes::install_github("cbroeckl/RAMClustR")

remotes::install_github("blosloos/nontargetData")
remotes::install_github("blosloos/nontarget")

remotes::install_github("rickhelmus/cliqueMS")

# only needed for Bruker DataAnalysis integration
remotes::install_github("BSchamberger/RDCOMClient")

BiocManager::install(c("BiocStyle", "Rgraphviz")) 
remotes::install_github("KelseyChetnik/MetaClean")

remotes::install_github("rickhelmus/patRoon", upgrade = "never", dependencies = TRUE)
```

After installation of the patRoon R package, the location of each third
party software should be given in an `.Rprofile` file as suggested in
section [other
dependencies](https://rickhelmus.github.io/patRoon/handbook_bd/manual-installation.html#other-dependencies)
the patRoon
[handbook](https://rickhelmus.github.io/patRoon/handbook_bd/manual-installation.html#r-prerequisites).
For facilitation the same code lines are given below. The function
`patRoon::verifyDependencies()` from patRoon can be used to verify if
all dependencies are found.

``` r
options(patRoon.path.pwiz = "C:/ProteoWizard") # location of ProteoWizard installation folder
options(patRoon.path.SIRIUS = "C:/sirius-win64-3.5.1") # location where SIRIUS was extracted
options(patRoon.path.OpenMS = "/usr/local/bin") # directory with the OpenMS binaries
options(patRoon.path.pngquant = "~/pngquant") # directory containing pngquant binary
options(patRoon.path.MetFragCL = "~/MetFragCommandLine-2.4.8.jar") # full location to the jar file
options(patRoon.path.MetFragCompTox = "C:/CompTox_17March2019_SelectMetaData.csv") # full location to desired CompTox CSV file
options(patRoon.path.MetFragPubChemLite = "~/PubChemLite_exposomics_20220429.csv") # full location to desired PubChemLite CSV file
options(patRoon.path.BioTransformer = "~/biotransformer/biotransformer-3.0.1.jar")
options(patRoon.path.obabel = "C:/Program Files/OpenBabel-3.0.0") # directory with Open Babel binaries
```

### Install streamFind

The streamFind package can be installed from the GitHub repository
<https://github.com/ricardobachertdacunha/streamFind> with the following
code line.

``` r
remotes::install_github("ricardobachertdacunha/streamFind", dependencies = TRUE)
```

## Docker image

Not yet available.

## Backend usage

Consult the Handbook_backend_streamFind.Rmd in the handbooks folder for
detailed backend structure and usage documentation.
