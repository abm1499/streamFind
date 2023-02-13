
<!-- README.md is generated from README.Rmd. Please edit that file -->

# streamFind

<!-- badges: start -->

[![Lifecycle:
experimental](https://img.shields.io/badge/lifecycle-experimental-orange.svg)](https://lifecycle.r-lib.org/articles/stages.html#experimental)
<!-- badges: end -->

The streamFind project entitled “Flexible data analysis and workflow
designer to identify chemicals in the water cycle” is funded by the
[Bundesministerium für Bildung und Forschung
(BMBF)](https://www.bmbf.de) and is a cooperation between the [Institut
für Energie- und Umwelttechnik e. V. (IUTA)](https://www.iuta.de) and
[Forschungszentrum Informatik (FZI)](https://www.fzi.de/). The major
focus of streamFind is data processing for environmental and quality
studies. The streamFind package aims to stimulate the use of advanced
data analysis (e.g., non-target screening, statistical analysis, etc.)
in routine studies, promoting standardization of data processing and
structure and easing the retrospective evaluation of data. The
streamFind package can be used by academics but also by technicians due
to the comprehensive documentation and well categorized set of
integrated functionalities or modules (see handbooks folder for more
information).

<img src="inst/extdata/logo_group.png" width="100%" style="display: block; margin: auto;" />

## Installation

For installation of the streamFind package, it is recommended to firstly
ensure that the dependencies are currently installed. Several existing R
packages and external functionalities are used in streamFind for various
processing steps. A major dependency of streamFind is the
[patRoon](https://github.com/rickhelmus/patRoon) R package. The patRoon
package combines several functionalities for basic and advanced data
processing and can be used interchangeably with streamFind.

### Install dependencies

#### R and RTools

[R](https://cran.r-project.org/) and
[RTools](https://cran.r-project.org/bin/windows/Rtools/) for Windows
users. The R version 4.2.2 (2022-10-31 ucrt) can be obtained in
<https://cran.r-project.org/>. The RTools can be downloaded in
<https://cran.r-project.org/bin/windows/Rtools/>. Make sure to download
the right version for the R version installed. Installation instructions
are given in both sources.

#### patRoon

The patRoon’s
[handbook](https://rickhelmus.github.io/patRoon/handbook_bd/manual-installation.html#r-prerequisites)
offers detailed information on how to install the
[patRoon](https://github.com/rickhelmus/patRoon) R package and the
required
[dependencies](https://rickhelmus.github.io/patRoon/handbook_bd/manual-installation.html#other-dependencies).

### Install streamFind

The [streamFind](https://github.com/ricardobachertdacunha/streamFind) R
package can be installed from the GitHub repository with the following
code line:

``` r
remotes::install_github("ricardobachertdacunha/streamFind", dependencies = TRUE)
```

## Docker image

Not yet available.

## Backend usage

Consult the Handbook_backend_streamFind.Rmd in the handbooks folder for
detailed back-end structure and usage documentation.
