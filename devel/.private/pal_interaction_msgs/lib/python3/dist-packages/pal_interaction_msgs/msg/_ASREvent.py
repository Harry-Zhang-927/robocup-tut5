# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from pal_interaction_msgs/ASREvent.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy
import pal_interaction_msgs.msg

class ASREvent(genpy.Message):
  _md5sum = "e26dacd12290ffb6af0944d5b6ae9ffd"
  _type = "pal_interaction_msgs/ASREvent"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# ASR result messages used by RosRecognizerServer
# This message are published in the ASR event topic.
# The kind of events that are published are the following ones:
## Event types to be published.
int8 EVENT_UNDEFINED          = -1
int8 EVENT_LISTEN_STATE       = 1
int8 EVENT_RECOGNIZED_UTT     = 2
int8 EVENT_ASR_ACTIVATION     = 3
int8 EVENT_FAILED_DECODING    = 4

# 1-> The ASR changed its listening state.
# 2-> The ASR recognized a full uterance and published the result
# 3-> The ASR has been activated/deactivated
# 4-> The ASR tried to regcognise an utterance unsuccesfuly

# These are the possible listening states published when event_id = LISTENING_STATE

## Listen states
int8 LISTEN_UNDEFINED = 20
int8 LISTEN_CALIBRATION = 21
int8 LISTEN_WAITING_FOR_SPEECH = 22
int8 LISTEN_SPEECH_DETECTED = 23
int8 LISTEN_END_OF_SPEECH = 24

# 21-> Audio calibration is taking place
# 22-> Some speech has been detected.
# 23-> The ASR is waiting for someone to start speaking.
# 24-> The end of an utterance has been found, and will start decoding it.

##  Message variables

# The event type published.
int8 event_id

# The listening state of the ASR
int8 listen_state

# The recognized result in case of event_id = EVENT_RECOGNIZED_UTT
# Also it contains a best-guess in case of event_id = EVENT_FAILED_DECODING
asrresult recognized_utterance


# The current state of the recognizer (activated/deactivated)
bool active

================================================================================
MSG: pal_interaction_msgs/asrresult
## Message that containes the recognized utterance.
## Confidence values
int8 CONFIDENCE_UNDEFINED = -1
int8 CONFIDENCE_POOR = 1
int8 CONFIDENCE_LOW  = 2
int8 CONFIDENCE_GOOD = 3
int8 CONFIDENCE_MAX  = 4

# ASR result messages used by RosRecognizerServer

# text recognized
string text

# confidence with values from POOR to MAX
int8 confidence

# start and end of the recognizer uterance.
time start
time end

# list of recognized tags
# key value pairs of strings extracted from the text
# given the action tags placed in the grammar.
actiontag[] tags

================================================================================
MSG: pal_interaction_msgs/actiontag
# Action tag contaings the key/value information genertated by parsing the recognised text with a JSGF grammar 

string key
string value"""
  # Pseudo-constants
  EVENT_UNDEFINED = -1
  EVENT_LISTEN_STATE = 1
  EVENT_RECOGNIZED_UTT = 2
  EVENT_ASR_ACTIVATION = 3
  EVENT_FAILED_DECODING = 4
  LISTEN_UNDEFINED = 20
  LISTEN_CALIBRATION = 21
  LISTEN_WAITING_FOR_SPEECH = 22
  LISTEN_SPEECH_DETECTED = 23
  LISTEN_END_OF_SPEECH = 24

  __slots__ = ['event_id','listen_state','recognized_utterance','active']
  _slot_types = ['int8','int8','pal_interaction_msgs/asrresult','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       event_id,listen_state,recognized_utterance,active

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ASREvent, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.event_id is None:
        self.event_id = 0
      if self.listen_state is None:
        self.listen_state = 0
      if self.recognized_utterance is None:
        self.recognized_utterance = pal_interaction_msgs.msg.asrresult()
      if self.active is None:
        self.active = False
    else:
      self.event_id = 0
      self.listen_state = 0
      self.recognized_utterance = pal_interaction_msgs.msg.asrresult()
      self.active = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2b().pack(_x.event_id, _x.listen_state))
      _x = self.recognized_utterance.text
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_b4I().pack(_x.recognized_utterance.confidence, _x.recognized_utterance.start.secs, _x.recognized_utterance.start.nsecs, _x.recognized_utterance.end.secs, _x.recognized_utterance.end.nsecs))
      length = len(self.recognized_utterance.tags)
      buff.write(_struct_I.pack(length))
      for val1 in self.recognized_utterance.tags:
        _x = val1.key
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.value
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.active
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.recognized_utterance is None:
        self.recognized_utterance = pal_interaction_msgs.msg.asrresult()
      end = 0
      _x = self
      start = end
      end += 2
      (_x.event_id, _x.listen_state,) = _get_struct_2b().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.recognized_utterance.text = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.recognized_utterance.text = str[start:end]
      _x = self
      start = end
      end += 17
      (_x.recognized_utterance.confidence, _x.recognized_utterance.start.secs, _x.recognized_utterance.start.nsecs, _x.recognized_utterance.end.secs, _x.recognized_utterance.end.nsecs,) = _get_struct_b4I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.recognized_utterance.tags = []
      for i in range(0, length):
        val1 = pal_interaction_msgs.msg.actiontag()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.key = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.key = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.value = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.value = str[start:end]
        self.recognized_utterance.tags.append(val1)
      start = end
      end += 1
      (self.active,) = _get_struct_B().unpack(str[start:end])
      self.active = bool(self.active)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2b().pack(_x.event_id, _x.listen_state))
      _x = self.recognized_utterance.text
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_b4I().pack(_x.recognized_utterance.confidence, _x.recognized_utterance.start.secs, _x.recognized_utterance.start.nsecs, _x.recognized_utterance.end.secs, _x.recognized_utterance.end.nsecs))
      length = len(self.recognized_utterance.tags)
      buff.write(_struct_I.pack(length))
      for val1 in self.recognized_utterance.tags:
        _x = val1.key
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.value
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.active
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.recognized_utterance is None:
        self.recognized_utterance = pal_interaction_msgs.msg.asrresult()
      end = 0
      _x = self
      start = end
      end += 2
      (_x.event_id, _x.listen_state,) = _get_struct_2b().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.recognized_utterance.text = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.recognized_utterance.text = str[start:end]
      _x = self
      start = end
      end += 17
      (_x.recognized_utterance.confidence, _x.recognized_utterance.start.secs, _x.recognized_utterance.start.nsecs, _x.recognized_utterance.end.secs, _x.recognized_utterance.end.nsecs,) = _get_struct_b4I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.recognized_utterance.tags = []
      for i in range(0, length):
        val1 = pal_interaction_msgs.msg.actiontag()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.key = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.key = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.value = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.value = str[start:end]
        self.recognized_utterance.tags.append(val1)
      start = end
      end += 1
      (self.active,) = _get_struct_B().unpack(str[start:end])
      self.active = bool(self.active)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2b = None
def _get_struct_2b():
    global _struct_2b
    if _struct_2b is None:
        _struct_2b = struct.Struct("<2b")
    return _struct_2b
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_b4I = None
def _get_struct_b4I():
    global _struct_b4I
    if _struct_b4I is None:
        _struct_b4I = struct.Struct("<b4I")
    return _struct_b4I
