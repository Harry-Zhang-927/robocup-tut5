
"use strict";

let GoToPOIResult = require('./GoToPOIResult.js');
let GoToActionResult = require('./GoToActionResult.js');
let GoToPOIActionFeedback = require('./GoToPOIActionFeedback.js');
let ExecuteParkingActionResult = require('./ExecuteParkingActionResult.js');
let GoToActionGoal = require('./GoToActionGoal.js');
let JoyTurboGoal = require('./JoyTurboGoal.js');
let VisualTrainingActionFeedback = require('./VisualTrainingActionFeedback.js');
let JoyTurboActionResult = require('./JoyTurboActionResult.js');
let GoToPOIActionResult = require('./GoToPOIActionResult.js');
let JoyTurboAction = require('./JoyTurboAction.js');
let VisualTrainingGoal = require('./VisualTrainingGoal.js');
let JoyPriorityActionFeedback = require('./JoyPriorityActionFeedback.js');
let GoToActionFeedback = require('./GoToActionFeedback.js');
let JoyTurboFeedback = require('./JoyTurboFeedback.js');
let JoyPriorityFeedback = require('./JoyPriorityFeedback.js');
let GoToFeedback = require('./GoToFeedback.js');
let GoToPOIGoal = require('./GoToPOIGoal.js');
let GoToPOIAction = require('./GoToPOIAction.js');
let VisualTrainingFeedback = require('./VisualTrainingFeedback.js');
let JoyTurboActionGoal = require('./JoyTurboActionGoal.js');
let GoToPOIActionGoal = require('./GoToPOIActionGoal.js');
let ExecuteParkingActionFeedback = require('./ExecuteParkingActionFeedback.js');
let JoyPriorityAction = require('./JoyPriorityAction.js');
let GoToPOIFeedback = require('./GoToPOIFeedback.js');
let JoyTurboActionFeedback = require('./JoyTurboActionFeedback.js');
let ExecuteParkingGoal = require('./ExecuteParkingGoal.js');
let GoToAction = require('./GoToAction.js');
let VisualTrainingResult = require('./VisualTrainingResult.js');
let JoyPriorityGoal = require('./JoyPriorityGoal.js');
let ExecuteParkingResult = require('./ExecuteParkingResult.js');
let JoyPriorityActionResult = require('./JoyPriorityActionResult.js');
let VisualTrainingActionGoal = require('./VisualTrainingActionGoal.js');
let VisualTrainingActionResult = require('./VisualTrainingActionResult.js');
let VisualTrainingAction = require('./VisualTrainingAction.js');
let GoToResult = require('./GoToResult.js');
let ExecuteParkingActionGoal = require('./ExecuteParkingActionGoal.js');
let JoyPriorityResult = require('./JoyPriorityResult.js');
let ExecuteParkingAction = require('./ExecuteParkingAction.js');
let JoyPriorityActionGoal = require('./JoyPriorityActionGoal.js');
let ExecuteParkingFeedback = require('./ExecuteParkingFeedback.js');
let GoToGoal = require('./GoToGoal.js');
let JoyTurboResult = require('./JoyTurboResult.js');
let Highways = require('./Highways.js');
let POI = require('./POI.js');
let Emergency = require('./Emergency.js');
let AvailableMaps = require('./AvailableMaps.js');
let NiceMapTransformation = require('./NiceMapTransformation.js');
let PolarReading = require('./PolarReading.js');
let MapConfiguration = require('./MapConfiguration.js');
let ServiceStatus = require('./ServiceStatus.js');
let EulerAngles = require('./EulerAngles.js');
let NavigationStatus = require('./NavigationStatus.js');
let EulerAnglesStamped = require('./EulerAnglesStamped.js');
let PolarReadingScan = require('./PolarReadingScan.js');
let VisualLocDB = require('./VisualLocDB.js');
let POIGroup = require('./POIGroup.js');
let LaserImage = require('./LaserImage.js');
let TabletPOI = require('./TabletPOI.js');

module.exports = {
  GoToPOIResult: GoToPOIResult,
  GoToActionResult: GoToActionResult,
  GoToPOIActionFeedback: GoToPOIActionFeedback,
  ExecuteParkingActionResult: ExecuteParkingActionResult,
  GoToActionGoal: GoToActionGoal,
  JoyTurboGoal: JoyTurboGoal,
  VisualTrainingActionFeedback: VisualTrainingActionFeedback,
  JoyTurboActionResult: JoyTurboActionResult,
  GoToPOIActionResult: GoToPOIActionResult,
  JoyTurboAction: JoyTurboAction,
  VisualTrainingGoal: VisualTrainingGoal,
  JoyPriorityActionFeedback: JoyPriorityActionFeedback,
  GoToActionFeedback: GoToActionFeedback,
  JoyTurboFeedback: JoyTurboFeedback,
  JoyPriorityFeedback: JoyPriorityFeedback,
  GoToFeedback: GoToFeedback,
  GoToPOIGoal: GoToPOIGoal,
  GoToPOIAction: GoToPOIAction,
  VisualTrainingFeedback: VisualTrainingFeedback,
  JoyTurboActionGoal: JoyTurboActionGoal,
  GoToPOIActionGoal: GoToPOIActionGoal,
  ExecuteParkingActionFeedback: ExecuteParkingActionFeedback,
  JoyPriorityAction: JoyPriorityAction,
  GoToPOIFeedback: GoToPOIFeedback,
  JoyTurboActionFeedback: JoyTurboActionFeedback,
  ExecuteParkingGoal: ExecuteParkingGoal,
  GoToAction: GoToAction,
  VisualTrainingResult: VisualTrainingResult,
  JoyPriorityGoal: JoyPriorityGoal,
  ExecuteParkingResult: ExecuteParkingResult,
  JoyPriorityActionResult: JoyPriorityActionResult,
  VisualTrainingActionGoal: VisualTrainingActionGoal,
  VisualTrainingActionResult: VisualTrainingActionResult,
  VisualTrainingAction: VisualTrainingAction,
  GoToResult: GoToResult,
  ExecuteParkingActionGoal: ExecuteParkingActionGoal,
  JoyPriorityResult: JoyPriorityResult,
  ExecuteParkingAction: ExecuteParkingAction,
  JoyPriorityActionGoal: JoyPriorityActionGoal,
  ExecuteParkingFeedback: ExecuteParkingFeedback,
  GoToGoal: GoToGoal,
  JoyTurboResult: JoyTurboResult,
  Highways: Highways,
  POI: POI,
  Emergency: Emergency,
  AvailableMaps: AvailableMaps,
  NiceMapTransformation: NiceMapTransformation,
  PolarReading: PolarReading,
  MapConfiguration: MapConfiguration,
  ServiceStatus: ServiceStatus,
  EulerAngles: EulerAngles,
  NavigationStatus: NavigationStatus,
  EulerAnglesStamped: EulerAnglesStamped,
  PolarReadingScan: PolarReadingScan,
  VisualLocDB: VisualLocDB,
  POIGroup: POIGroup,
  LaserImage: LaserImage,
  TabletPOI: TabletPOI,
};
