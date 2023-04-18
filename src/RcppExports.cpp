// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_ms_cluster_ms2
List rcpp_ms_cluster_ms2(DataFrame ms2, double mzClust, bool verbose);
RcppExport SEXP _streamFind_rcpp_ms_cluster_ms2(SEXP ms2SEXP, SEXP mzClustSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type ms2(ms2SEXP);
    Rcpp::traits::input_parameter< double >::type mzClust(mzClustSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_ms_cluster_ms2(ms2, mzClust, verbose));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_ms_cluster_spectra
List rcpp_ms_cluster_spectra(DataFrame spectra, double mzClust, bool verbose);
RcppExport SEXP _streamFind_rcpp_ms_cluster_spectra(SEXP spectraSEXP, SEXP mzClustSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type spectra(spectraSEXP);
    Rcpp::traits::input_parameter< double >::type mzClust(mzClustSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_ms_cluster_spectra(spectra, mzClust, verbose));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_ms_feature_groups_correspondence
bool rcpp_ms_feature_groups_correspondence(Rcpp::DataFrame groups, Rcpp::DataFrame features, bool verbose);
RcppExport SEXP _streamFind_rcpp_ms_feature_groups_correspondence(SEXP groupsSEXP, SEXP featuresSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type features(featuresSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_ms_feature_groups_correspondence(groups, features, verbose));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_ms_get_feature_groups_ranges
DataFrame rcpp_ms_get_feature_groups_ranges(StringVector groups, Rcpp::DataFrame features);
RcppExport SEXP _streamFind_rcpp_ms_get_feature_groups_ranges(SEXP groupsSEXP, SEXP featuresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type features(featuresSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_ms_get_feature_groups_ranges(groups, features));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_ms_make_groups_update_features
List rcpp_ms_make_groups_update_features(Rcpp::DataFrame features);
RcppExport SEXP _streamFind_rcpp_ms_make_groups_update_features(SEXP featuresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type features(featuresSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_ms_make_groups_update_features(features));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_ms_update_groups
DataFrame rcpp_ms_update_groups(Rcpp::DataFrame features, Rcpp::StringVector analyses);
RcppExport SEXP _streamFind_rcpp_ms_update_groups(SEXP featuresSEXP, SEXP analysesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type features(featuresSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type analyses(analysesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_ms_update_groups(features, analyses));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_parse_chromatograms_headers
Rcpp::List rcpp_parse_chromatograms_headers(std::string file_path);
RcppExport SEXP _streamFind_rcpp_parse_chromatograms_headers(SEXP file_pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file_path(file_pathSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_parse_chromatograms_headers(file_path));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_parse_msAnalysis
Rcpp::List rcpp_parse_msAnalysis(std::string file_path);
RcppExport SEXP _streamFind_rcpp_parse_msAnalysis(SEXP file_pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file_path(file_pathSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_parse_msAnalysis(file_path));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_parse_msAnalysis_spectra
Rcpp::List rcpp_parse_msAnalysis_spectra(Rcpp::List analysis, Rcpp::IntegerVector which);
RcppExport SEXP _streamFind_rcpp_parse_msAnalysis_spectra(SEXP analysisSEXP, SEXP whichSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type analysis(analysisSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type which(whichSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_parse_msAnalysis_spectra(analysis, which));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_parse_spectra
Rcpp::List rcpp_parse_spectra(std::string file_path, Rcpp::IntegerVector which);
RcppExport SEXP _streamFind_rcpp_parse_spectra(SEXP file_pathSEXP, SEXP whichSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file_path(file_pathSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type which(whichSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_parse_spectra(file_path, which));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_parse_spectra_headers
Rcpp::List rcpp_parse_spectra_headers(std::string file_path);
RcppExport SEXP _streamFind_rcpp_parse_spectra_headers(SEXP file_pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file_path(file_pathSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_parse_spectra_headers(file_path));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_parse_xml
Rcpp::List rcpp_parse_xml(std::string file_path);
RcppExport SEXP _streamFind_rcpp_parse_xml(SEXP file_pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file_path(file_pathSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_parse_xml(file_path));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_streamFind_rcpp_ms_cluster_ms2", (DL_FUNC) &_streamFind_rcpp_ms_cluster_ms2, 3},
    {"_streamFind_rcpp_ms_cluster_spectra", (DL_FUNC) &_streamFind_rcpp_ms_cluster_spectra, 3},
    {"_streamFind_rcpp_ms_feature_groups_correspondence", (DL_FUNC) &_streamFind_rcpp_ms_feature_groups_correspondence, 3},
    {"_streamFind_rcpp_ms_get_feature_groups_ranges", (DL_FUNC) &_streamFind_rcpp_ms_get_feature_groups_ranges, 2},
    {"_streamFind_rcpp_ms_make_groups_update_features", (DL_FUNC) &_streamFind_rcpp_ms_make_groups_update_features, 1},
    {"_streamFind_rcpp_ms_update_groups", (DL_FUNC) &_streamFind_rcpp_ms_update_groups, 2},
    {"_streamFind_rcpp_parse_chromatograms_headers", (DL_FUNC) &_streamFind_rcpp_parse_chromatograms_headers, 1},
    {"_streamFind_rcpp_parse_msAnalysis", (DL_FUNC) &_streamFind_rcpp_parse_msAnalysis, 1},
    {"_streamFind_rcpp_parse_msAnalysis_spectra", (DL_FUNC) &_streamFind_rcpp_parse_msAnalysis_spectra, 2},
    {"_streamFind_rcpp_parse_spectra", (DL_FUNC) &_streamFind_rcpp_parse_spectra, 2},
    {"_streamFind_rcpp_parse_spectra_headers", (DL_FUNC) &_streamFind_rcpp_parse_spectra_headers, 1},
    {"_streamFind_rcpp_parse_xml", (DL_FUNC) &_streamFind_rcpp_parse_xml, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_streamFind(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
