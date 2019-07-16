open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  let (value, setValue) = React.useState(() => "A");
  <Section title="Radios">
    <Radio.Group
      defaultValue="A"
      name="test"
      value
      onChange={e => setValue(_ => e->ReactEvent.Form.target##value)}>
      <Radio value="A"> {str("Option A")} </Radio>
      <Radio value="B"> {str("Option B")} </Radio>
      <Radio value="C"> {str("Option C")} </Radio>
      <Radio value="D" disabled=true> {str("Option D: disabled")} </Radio>
    </Radio.Group>
    <br />
    <Radio.Group
      defaultValue="A"
      name="test"
      value
      onChange={e => setValue(_ => e->ReactEvent.Form.target##value)}>
      <Radio.Button value="A"> {str("Option A")} </Radio.Button>
      <Radio.Button value="B"> {str("Option B")} </Radio.Button>
      <Radio.Button value="C"> {str("Option C")} </Radio.Button>
      <Radio.Button value="D" disabled=true>
        {str("Option D: disabled")}
      </Radio.Button>
    </Radio.Group>
  </Section>;
};
