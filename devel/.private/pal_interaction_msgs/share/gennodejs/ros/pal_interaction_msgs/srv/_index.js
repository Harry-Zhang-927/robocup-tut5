
"use strict";

let GetSpeechDuration = require('./GetSpeechDuration.js')
let SoundLocalisationService = require('./SoundLocalisationService.js')
let recognizerService = require('./recognizerService.js')
let ASRService = require('./ASRService.js')

module.exports = {
  GetSpeechDuration: GetSpeechDuration,
  SoundLocalisationService: SoundLocalisationService,
  recognizerService: recognizerService,
  ASRService: ASRService,
};
