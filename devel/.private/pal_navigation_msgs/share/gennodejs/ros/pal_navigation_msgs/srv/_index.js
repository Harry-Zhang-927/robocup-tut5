
"use strict";

let ChangeMap = require('./ChangeMap.js')
let GetNodes = require('./GetNodes.js')
let ListMaps = require('./ListMaps.js')
let SaveMap = require('./SaveMap.js')
let SafetyZone = require('./SafetyZone.js')
let DisableEmergency = require('./DisableEmergency.js')
let VisualLocRecognize = require('./VisualLocRecognize.js')
let SetSubMapFloor = require('./SetSubMapFloor.js')
let GetSubMap = require('./GetSubMap.js')
let ChangeSyncMap = require('./ChangeSyncMap.js')
let Acknowledgment = require('./Acknowledgment.js')
let GetPOI = require('./GetPOI.js')
let RegisterSync = require('./RegisterSync.js')
let SetMapConfiguration = require('./SetMapConfiguration.js')
let GetMapConfiguration = require('./GetMapConfiguration.js')
let ChangeBuilding = require('./ChangeBuilding.js')
let SetPOI = require('./SetPOI.js')
let FinalApproachPose = require('./FinalApproachPose.js')
let RenameMap = require('./RenameMap.js')

module.exports = {
  ChangeMap: ChangeMap,
  GetNodes: GetNodes,
  ListMaps: ListMaps,
  SaveMap: SaveMap,
  SafetyZone: SafetyZone,
  DisableEmergency: DisableEmergency,
  VisualLocRecognize: VisualLocRecognize,
  SetSubMapFloor: SetSubMapFloor,
  GetSubMap: GetSubMap,
  ChangeSyncMap: ChangeSyncMap,
  Acknowledgment: Acknowledgment,
  GetPOI: GetPOI,
  RegisterSync: RegisterSync,
  SetMapConfiguration: SetMapConfiguration,
  GetMapConfiguration: GetMapConfiguration,
  ChangeBuilding: ChangeBuilding,
  SetPOI: SetPOI,
  FinalApproachPose: FinalApproachPose,
  RenameMap: RenameMap,
};
