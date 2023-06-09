
"use strict";

let StartEnrollment = require('./StartEnrollment.js')
let SetDatabase = require('./SetDatabase.js')
let Recognizer = require('./Recognizer.js')
let ChangeObjectRecognizerModel = require('./ChangeObjectRecognizerModel.js')
let AddTexturedObject = require('./AddTexturedObject.js')
let StopEnrollment = require('./StopEnrollment.js')
let SelectTexturedObject = require('./SelectTexturedObject.js')

module.exports = {
  StartEnrollment: StartEnrollment,
  SetDatabase: SetDatabase,
  Recognizer: Recognizer,
  ChangeObjectRecognizerModel: ChangeObjectRecognizerModel,
  AddTexturedObject: AddTexturedObject,
  StopEnrollment: StopEnrollment,
  SelectTexturedObject: SelectTexturedObject,
};
