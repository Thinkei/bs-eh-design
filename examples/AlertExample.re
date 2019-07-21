open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  <Section title="Alert">
    <Alert
      style={ReactDOMRe.Style.make(~width="200px", ())}
      message={str("You shall not pass")}
      _type=`warning
      closable=true
      onClose={_ => Js.log("Close")}
    />
    <Alert
      style={ReactDOMRe.Style.make(~width="200px", ())}
      message={str("You shall pass")}
      _type=`success
    />
  </Section>;
};
