#include "SettingsObjectWrapper.h"
#include <QSettings>
#include "../dive.h" // TODO: remove copy_string from dive.h


static QString tecDetails = QStringLiteral("TecDetails");

short PartialPressureGasSettings::showPo2() const
{
	return prefs.pp_graphs.po2;
}

short PartialPressureGasSettings::showPn2() const
{
	return prefs.pp_graphs.pn2;
}

short PartialPressureGasSettings::showPhe() const
{
	return prefs.pp_graphs.phe;
}

double PartialPressureGasSettings::po2Threshold() const
{
	return prefs.pp_graphs.po2_threshold;
}

double PartialPressureGasSettings::pn2Threshold() const
{
	return prefs.pp_graphs.pn2_threshold;
}

double PartialPressureGasSettings::pheThreshold() const
{
	return prefs.pp_graphs.phe_threshold;
}

void PartialPressureGasSettings::setShowPo2(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("po2graph", value);
	prefs.pp_graphs.po2 = value;
	emit showPo2Changed(value);
}

void PartialPressureGasSettings::setShowPn2(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("pn2graph", value);
	prefs.pp_graphs.pn2 = value;
	emit showPn2Changed(value);
}

void PartialPressureGasSettings::setShowPhe(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("phegraph", value);
	prefs.pp_graphs.phe = value;
	emit showPheChanged(value);
}

void PartialPressureGasSettings::setPo2Threshold(double value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("po2threshold", value);
	prefs.pp_graphs.po2_threshold = value;
	emit po2ThresholdChanged(value);
}

void PartialPressureGasSettings::setPn2Threshold(double value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("pn2threshold", value);
	prefs.pp_graphs.pn2_threshold = value;
	emit pn2ThresholdChanged(value);
}

void PartialPressureGasSettings::setPheThreshold(double value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("phethreshold", value);
	prefs.pp_graphs.phe_threshold = value;
	emit pheThresholdChanged(value);
}


double TechnicalDetailsSettings:: modp02() const
{
	return prefs.modpO2;
}

short TechnicalDetailsSettings::ead() const
{
	return prefs.ead;
}

short TechnicalDetailsSettings::dcceiling() const
{
	return prefs.dcceiling;
}

short TechnicalDetailsSettings::redceiling() const
{
	return prefs.redceiling;
}

short TechnicalDetailsSettings::calcceiling() const
{
	return prefs.calcceiling;
}

short TechnicalDetailsSettings::calcceiling3m() const
{
	return prefs.calcceiling3m;
}

short TechnicalDetailsSettings::calcalltissues() const
{
	return prefs.calcalltissues;
}

short TechnicalDetailsSettings::calcndltts() const
{
	return prefs.calcndltts;
}

short TechnicalDetailsSettings::gflow() const
{
	return prefs.gflow;
}

short TechnicalDetailsSettings::gfhigh() const
{
	return prefs.gfhigh;
}

short TechnicalDetailsSettings::hrgraph() const
{
	return prefs.hrgraph;
}

short TechnicalDetailsSettings::tankBar() const
{
	return prefs.tankbar;
}

short TechnicalDetailsSettings::percentageGraph() const
{
	return prefs.percentagegraph;
}

short TechnicalDetailsSettings::rulerGraph() const
{
	return prefs.rulergraph;
}

bool TechnicalDetailsSettings::showCCRSetpoint() const
{
	return prefs.show_ccr_setpoint;
}

bool TechnicalDetailsSettings::showCCRSensors() const
{
	return prefs.show_ccr_sensors;
}

short TechnicalDetailsSettings::zoomedPlot() const
{
	return prefs.zoomed_plot;
}

short TechnicalDetailsSettings::showSac() const
{
	return prefs.show_sac;
}

bool TechnicalDetailsSettings::gfLowAtMaxDepth() const
{
	return prefs.gf_low_at_maxdepth;
}

short TechnicalDetailsSettings::displayUnusedTanks() const
{
	return prefs.display_unused_tanks;
}

short TechnicalDetailsSettings::showAverageDepth() const
{
	return prefs.show_average_depth;
}

short int TechnicalDetailsSettings::mod() const
{
	return prefs.mod;
}

void TechnicalDetailsSettings::setModpO2(double value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("modpO2", value);
	prefs.modpO2 = value;
	emit modpO2Changed(value);
}

void TechnicalDetailsSettings::setEad(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("ead", value);
	prefs.ead = value;
	emit eadChanged(value);
}

void TechnicalDetailsSettings::setMod(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("mod", value);
	prefs.mod = value;
	emit modChanged(value);
}

void TechnicalDetailsSettings::setDcceiling(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("dcceiling", value);
	prefs.dcceiling = value;
	emit dcceilingChanged(value);
}

void TechnicalDetailsSettings::setRedceiling(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("redceiling", value);
	prefs.redceiling = value;
	emit redceilingChanged(value);
}

void TechnicalDetailsSettings::setCalcceiling(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("calcceiling", value);
	prefs.calcceiling = value;
	emit calcceilingChanged(value);
}

void TechnicalDetailsSettings::setCalcceiling3m(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("calcceiling3m", value);
	prefs.calcceiling3m = value;
	emit calcceiling3mChanged(value);
}

void TechnicalDetailsSettings::setCalcalltissues(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("calcalltissues", value);
	prefs.calcalltissues = value;
	emit calcalltissuesChanged(value);
}

void TechnicalDetailsSettings::setCalcndltts(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("calcndltts", value);
	prefs.calcndltts = value;
	emit calcndlttsChanged(value);
}

void TechnicalDetailsSettings::setGflow(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("gflow", value);
	prefs.gflow = value;
	set_gf(prefs.gflow, prefs.gfhigh, prefs.gf_low_at_maxdepth);
	emit gflowChanged(value);
}

void TechnicalDetailsSettings::setGfhigh(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("gfhigh", value);
	prefs.gfhigh = value;
	set_gf(prefs.gflow, prefs.gfhigh, prefs.gf_low_at_maxdepth);
	emit gfhighChanged(value);
}

void TechnicalDetailsSettings::setHRgraph(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("hrgraph", value);
	prefs.hrgraph = value;
	emit hrgraphChanged(value);
}

void TechnicalDetailsSettings::setTankBar(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("tankbar", value);
	prefs.tankbar = value;
	emit tankBarChanged(value);
}

void TechnicalDetailsSettings::setPercentageGraph(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("percentagegraph", value);
	prefs.percentagegraph = value;
	emit percentageGraphChanged(value);
}

void TechnicalDetailsSettings::setRulerGraph(short value)
{
	/* TODO: search for the QSettings of the RulerBar */
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("RulerBar", value);
	prefs.pp_graphs.phe_threshold = value;
	emit rulerGraphChanged(value);
}

void TechnicalDetailsSettings::setShowCCRSetpoint(bool value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("show_ccr_setpoint", value);
	prefs.show_ccr_setpoint = value;
	emit showCCRSetpointChanged(value);
}

void TechnicalDetailsSettings::setShowCCRSensors(bool value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("show_ccr_sensors", value);
	prefs.show_ccr_sensors = value;
	emit showCCRSensorsChanged(value);
}

void TechnicalDetailsSettings::setZoomedPlot(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("zoomed_plot", value);
	prefs.zoomed_plot = value;
	emit zoomedPlotChanged(value);
}

void TechnicalDetailsSettings::setShowSac(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("show_sac", value);
	prefs.show_sac = value;
	emit showSacChanged(value);
}

void TechnicalDetailsSettings::setGfLowAtMaxDepth(bool value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("gf_low_at_maxdepth", value);
	prefs.gf_low_at_maxdepth = value;
	set_gf(prefs.gflow, prefs.gfhigh, prefs.gf_low_at_maxdepth);
	emit gfLowAtMaxDepthChanged(value);
}

void TechnicalDetailsSettings::setDisplayUnusedTanks(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("display_unused_tanks", value);
	prefs.display_unused_tanks = value;
	emit displayUnusedTanksChanged(value);
}

void TechnicalDetailsSettings::setShowAverageDepth(short value)
{
	QSettings s;
	s.beginGroup(tecDetails);
	s.setValue("show_average_depth", value);
	prefs.show_average_depth = value;
	emit showAverageDepthChanged(value);
}

FacebookSettings::FacebookSettings(QObject *parent) :
	group(QStringLiteral("WebApps")),
	subgroup(QStringLiteral("Facebook"))
{
}

QString FacebookSettings::accessToken() const
{
	return QString(prefs.facebook.access_token);
}

QString FacebookSettings::userId() const
{
	return QString(prefs.facebook.user_id);
}

QString FacebookSettings::albumId() const
{
	return QString(prefs.facebook.album_id);
}

void FacebookSettings::setAccessToken (const QString& value)
{
#if SAVE_FB_CREDENTIALS
	QSettings s;
	s.beginGroup(group);
	s.beginGroup(subgroup);
	s.setValue("ConnectToken", value);
#endif
	prefs.facebook.access_token = copy_string(qPrintable(value));
	emit accessTokenChanged(value);
}

void FacebookSettings::setUserId(const QString& value)
{
#if SAVE_FB_CREDENTIALS
	QSettings s;
	s.beginGroup(group);
	s.beginGroup(subgroup);
	s.setValue("UserId", value);
#endif
	prefs.facebook.user_id = copy_string(qPrintable(value));
	emit userIdChanged(value);
}

void FacebookSettings::setAlbumId(const QString& value)
{
#if SAVE_FB_CREDENTIALS
	QSettings s;
	s.beginGroup(group);
	s.beginGroup(subgroup);
	s.setValue("AlbumId", value);
#endif
	prefs.facebook.album_id = copy_string(qPrintable(value));
	emit albumIdChanged(value);
}


GeocodingPreferences::GeocodingPreferences(QObject *parent) :
	group(QStringLiteral("geocoding"))
{

}

bool GeocodingPreferences::enableGeocoding() const
{
	return prefs.geocoding.enable_geocoding;
}

bool GeocodingPreferences::parseDiveWithoutGps() const
{
	return prefs.geocoding.parse_dive_without_gps;
}

bool GeocodingPreferences::tagExistingDives() const
{
	return prefs.geocoding.tag_existing_dives;
}

taxonomy_category GeocodingPreferences::firstTaxonomyCategory() const
{
	return prefs.geocoding.category[0];
}

taxonomy_category GeocodingPreferences::secondTaxonomyCategory() const
{
	return prefs.geocoding.category[1];
}

taxonomy_category GeocodingPreferences::thirdTaxonomyCategory() const
{
	return prefs.geocoding.category[2];
}

void GeocodingPreferences::setEnableGeocoding(bool value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("enable_geocoding", value);
	prefs.geocoding.enable_geocoding = value;
	emit enableGeocodingChanged(value);
}

void GeocodingPreferences::setParseDiveWithoutGps(bool value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("parse_dives_without_gps", value);
	prefs.geocoding.parse_dive_without_gps = value;
	emit parseDiveWithoutGpsChanged(value);
}

void GeocodingPreferences::setTagExistingDives(bool value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("tag_existing_dives", value);
	prefs.geocoding.tag_existing_dives = value;
	emit tagExistingDivesChanged(value);
}

void GeocodingPreferences::setFirstTaxonomyCategory(taxonomy_category value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("cat0", value);
	prefs.show_average_depth = value;
	emit firstTaxonomyCategoryChanged(value);
}

void GeocodingPreferences::setSecondTaxonomyCategory(taxonomy_category value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("cat1", value);
	prefs.show_average_depth = value;
	emit secondTaxonomyCategoryChanged(value);
}

void GeocodingPreferences::setThirdTaxonomyCategory(taxonomy_category value)
{
	QSettings s;
	s.beginGroup(group);
	s.setValue("cat2", value);
	prefs.show_average_depth = value;
	emit thirdTaxonomyCategoryChanged(value);
}