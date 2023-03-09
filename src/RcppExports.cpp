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

static const R_CallMethodDef CallEntries[] = {
    {"_streamFind_rcpp_ms_cluster_ms2", (DL_FUNC) &_streamFind_rcpp_ms_cluster_ms2, 3},
    {"_streamFind_rcpp_ms_cluster_spectra", (DL_FUNC) &_streamFind_rcpp_ms_cluster_spectra, 3},
    {"_streamFind_rcpp_ms_feature_groups_correspondence", (DL_FUNC) &_streamFind_rcpp_ms_feature_groups_correspondence, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_streamFind(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
