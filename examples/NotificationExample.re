open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  <Section title="Notification">
    <Button
      _type=`primary
      onClick={_ =>
        Notification.success(
          Notification.makeConfigProps(~message="A success message", ()),
        )
      }>
      {str("Open a success notification")}
    </Button>
    <br />
    <br />
    <Button
      _type=`default
      onClick={_ =>
        Notification.info(
          Notification.makeConfigProps(~message="An info message", ()),
        )
      }>
      {str("Open an info notification")}
    </Button>
    <br />
    <br />
    <Button
      _type=`dashed
      onClick={_ =>
        Notification.warning(
          Notification.makeConfigProps(~message="A warning message", ()),
        )
      }>
      {str("Open a warning notification")}
    </Button>
    <br />
    <br />
    <Button
      _type=`danger
      onClick={_ =>
        Notification.error(
          Notification.makeConfigProps(~message="An error message", ()),
        )
      }>
      {str("Open an error notification")}
    </Button>
  </Section>;
};
