open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  <Section title="Input">
    <Input
      style={ReactDOMRe.Style.make(~height="28px", ())}
      placeholder="Simple input"
    />
    <br />
    <br />
    <Input.TextArea
      style={ReactDOMRe.Style.make(~height="100px", ())}
      placeholder="Text area"
    />
    <Input.Password
      style={ReactDOMRe.Style.make(~height="28px", ())}
      placeholder="Password"
    />
  </Section>;
};
