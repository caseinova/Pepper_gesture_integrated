#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to social_robot_interfaces__msg__TspCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TspCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub waypoints: Vec<i64>,

}



impl Default for TspCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TspCommand::default())
  }
}

impl rosidl_runtime_rs::Message for TspCommand {
  type RmwMsg = super::msg::rmw::TspCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        waypoints: msg.waypoints.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        waypoints: msg.waypoints.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      waypoints: msg.waypoints
          .into_iter()
          .collect(),
    }
  }
}


