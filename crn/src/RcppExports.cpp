// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rn_init
void rn_init(List input, int lsp, bool verbose);
RcppExport SEXP _rn_rn_init(SEXP inputSEXP, SEXP lspSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type input(inputSEXP);
    Rcpp::traits::input_parameter< int >::type lsp(lspSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rn_init(input, lsp, verbose);
    return R_NilValue;
END_RCPP
}
// rn_run_cs_gen
void rn_run_cs_gen(int n);
RcppExport SEXP _rn_rn_run_cs_gen(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rn_run_cs_gen(n);
    return R_NilValue;
END_RCPP
}
// rn_run_c_cs_gen
void rn_run_c_cs_gen();
RcppExport SEXP _rn_rn_run_c_cs_gen() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    rn_run_c_cs_gen();
    return R_NilValue;
END_RCPP
}
// rn_run_c_sso_gen
void rn_run_c_sso_gen();
RcppExport SEXP _rn_rn_run_c_sso_gen() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    rn_run_c_sso_gen();
    return R_NilValue;
END_RCPP
}
// rn_run_sp2p
NumericVector rn_run_sp2p(const NumericVector sp);
RcppExport SEXP _rn_rn_run_sp2p(SEXP spSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type sp(spSEXP);
    rcpp_result_gen = Rcpp::wrap(rn_run_sp2p(sp));
    return rcpp_result_gen;
END_RCPP
}
// rn_run_p2sp
NumericVector rn_run_p2sp(const NumericVector p);
RcppExport SEXP _rn_rn_run_p2sp(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(rn_run_p2sp(p));
    return rcpp_result_gen;
END_RCPP
}
// rn_run_closure
NumericVector rn_run_closure(const NumericVector p);
RcppExport SEXP _rn_rn_run_closure(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(rn_run_closure(p));
    return rcpp_result_gen;
END_RCPP
}
// rn_run_is_sep
bool rn_run_is_sep(const NumericVector p, bool conn);
RcppExport SEXP _rn_rn_run_is_sep(SEXP pSEXP, SEXP connSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type conn(connSEXP);
    rcpp_result_gen = Rcpp::wrap(rn_run_is_sep(p, conn));
    return rcpp_result_gen;
END_RCPP
}
// rn_run_all_syn
void rn_run_all_syn(bool no_bass);
RcppExport SEXP _rn_rn_run_all_syn(SEXP no_bassSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type no_bass(no_bassSEXP);
    rn_run_all_syn(no_bass);
    return R_NilValue;
END_RCPP
}
// rn_run_cont_sep
void rn_run_cont_sep(bool conn);
RcppExport SEXP _rn_rn_run_cont_sep(SEXP connSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type conn(connSEXP);
    rn_run_cont_sep(conn);
    return R_NilValue;
END_RCPP
}
// rn_get
List rn_get();
RcppExport SEXP _rn_rn_get() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rn_get());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rn_rn_init", (DL_FUNC) &_rn_rn_init, 3},
    {"_rn_rn_run_cs_gen", (DL_FUNC) &_rn_rn_run_cs_gen, 1},
    {"_rn_rn_run_c_cs_gen", (DL_FUNC) &_rn_rn_run_c_cs_gen, 0},
    {"_rn_rn_run_c_sso_gen", (DL_FUNC) &_rn_rn_run_c_sso_gen, 0},
    {"_rn_rn_run_sp2p", (DL_FUNC) &_rn_rn_run_sp2p, 1},
    {"_rn_rn_run_p2sp", (DL_FUNC) &_rn_rn_run_p2sp, 1},
    {"_rn_rn_run_closure", (DL_FUNC) &_rn_rn_run_closure, 1},
    {"_rn_rn_run_is_sep", (DL_FUNC) &_rn_rn_run_is_sep, 2},
    {"_rn_rn_run_all_syn", (DL_FUNC) &_rn_rn_run_all_syn, 1},
    {"_rn_rn_run_cont_sep", (DL_FUNC) &_rn_rn_run_cont_sep, 1},
    {"_rn_rn_get", (DL_FUNC) &_rn_rn_get, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_rn(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
