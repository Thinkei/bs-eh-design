open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  let (disabled, setDisabled) = React.useState(() => true);
  <Section title="InputNumber">
    <InputNumber min=1. max=10. disabled defaultValue=3. />
    <div style={ReactDOMRe.Style.make(~marginTop="20px", ())}>
      <Button onClick={_ => setDisabled(disabled => !disabled)} _type=`primary>
        {str("Toggle disabled")}
      </Button>
    </div>
  </Section>;
};
