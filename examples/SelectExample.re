open Ehd;

let str = ReasonReact.string;

module Option = Select.Option;
module OptGroup = Select.OptGroup;

[@react.component]
let make = () => {
  <Section title="Select">
    <Select
      style={ReactDOMRe.Style.make(~width="100%", ())}
      mode=`tags
      onChange={selected => Js.log(selected)}>
      <Option key="1"> {str("Option 1")} </Option>
      <Option key="2"> {str("Option 2")} </Option>
      <Option key="3"> {str("Option 3")} </Option>
      <Option key="4"> {str("Option 4")} </Option>
      <Option key="5"> {str("Option 5")} </Option>
    </Select>
    <br />
    <br />
    <Select
      defaultValue="lucy"
      style={ReactDOMRe.Style.make(~width="200px", ())}
      onChange={selected => Js.log(selected)}>
      <Option value="jack"> {str("Jack")} </Option>
      <Option value="lucy"> {str("Lucy")} </Option>
      <Option value="Yiminghe"> {str("yiminghe")} </Option>
    </Select>
  </Section>;
};
