#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "social_robot_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__social_robot_interfaces__msg__TspCommand() -> *const std::ffi::c_void;
}

#[link(name = "social_robot_interfaces__rosidl_generator_c")]
extern "C" {
    fn social_robot_interfaces__msg__TspCommand__init(msg: *mut TspCommand) -> bool;
    fn social_robot_interfaces__msg__TspCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TspCommand>, size: usize) -> bool;
    fn social_robot_interfaces__msg__TspCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TspCommand>);
    fn social_robot_interfaces__msg__TspCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TspCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<TspCommand>) -> bool;
}

// Corresponds to social_robot_interfaces__msg__TspCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TspCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub waypoints: rosidl_runtime_rs::Sequence<i64>,

}



impl Default for TspCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !social_robot_interfaces__msg__TspCommand__init(&mut msg as *mut _) {
        panic!("Call to social_robot_interfaces__msg__TspCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TspCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { social_robot_interfaces__msg__TspCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { social_robot_interfaces__msg__TspCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { social_robot_interfaces__msg__TspCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TspCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TspCommand where Self: Sized {
  const TYPE_NAME: &'static str = "social_robot_interfaces/msg/TspCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__social_robot_interfaces__msg__TspCommand() }
  }
}


