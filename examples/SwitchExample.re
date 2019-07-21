open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  <Section title="Switch">
    <Switch
      checkedChildren={str("Yes")}
      unCheckedChildren={str("No")}
      defaultChecked=true
    />
    <br />
    <br />
    <Switch
      size=`small
      checkedChildren={str("1")}
      unCheckedChildren={str("0")}
      defaultChecked=true
    />
  </Section>;
};
