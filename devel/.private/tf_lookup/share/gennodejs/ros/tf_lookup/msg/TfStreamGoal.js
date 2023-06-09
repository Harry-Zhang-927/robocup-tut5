// Auto-generated. Do not edit!

// (in-package tf_lookup.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let Subscription = require('./Subscription.js');

//-----------------------------------------------------------

class TfStreamGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.transforms = null;
      this.subscription_id = null;
      this.update = null;
    }
    else {
      if (initObj.hasOwnProperty('transforms')) {
        this.transforms = initObj.transforms
      }
      else {
        this.transforms = [];
      }
      if (initObj.hasOwnProperty('subscription_id')) {
        this.subscription_id = initObj.subscription_id
      }
      else {
        this.subscription_id = '';
      }
      if (initObj.hasOwnProperty('update')) {
        this.update = initObj.update
      }
      else {
        this.update = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TfStreamGoal
    // Serialize message field [transforms]
    // Serialize the length for message field [transforms]
    bufferOffset = _serializer.uint32(obj.transforms.length, buffer, bufferOffset);
    obj.transforms.forEach((val) => {
      bufferOffset = Subscription.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [subscription_id]
    bufferOffset = _serializer.string(obj.subscription_id, buffer, bufferOffset);
    // Serialize message field [update]
    bufferOffset = _serializer.bool(obj.update, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TfStreamGoal
    let len;
    let data = new TfStreamGoal(null);
    // Deserialize message field [transforms]
    // Deserialize array length for message field [transforms]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.transforms = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.transforms[i] = Subscription.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [subscription_id]
    data.subscription_id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [update]
    data.update = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.transforms.forEach((val) => {
      length += Subscription.getMessageSize(val);
    });
    length += _getByteLength(object.subscription_id);
    return length + 9;
  }

  static datatype() {
    // Returns string type for a message object
    return 'tf_lookup/TfStreamGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'e00b5ec9adf5765d948ec802ab721a4a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Define the goal
    Subscription[] transforms
    string subscription_id
    bool update
    
    ================================================================================
    MSG: tf_lookup/Subscription
    string target
    string source
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new TfStreamGoal(null);
    if (msg.transforms !== undefined) {
      resolved.transforms = new Array(msg.transforms.length);
      for (let i = 0; i < resolved.transforms.length; ++i) {
        resolved.transforms[i] = Subscription.Resolve(msg.transforms[i]);
      }
    }
    else {
      resolved.transforms = []
    }

    if (msg.subscription_id !== undefined) {
      resolved.subscription_id = msg.subscription_id;
    }
    else {
      resolved.subscription_id = ''
    }

    if (msg.update !== undefined) {
      resolved.update = msg.update;
    }
    else {
      resolved.update = false
    }

    return resolved;
    }
};

module.exports = TfStreamGoal;
