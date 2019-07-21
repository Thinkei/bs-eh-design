open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  <Section title="Tag">
    <h4 style={ReactDOMRe.Style.make(~marginBottom="16px", ())}>
      {str("Presets:")}
    </h4>
    <div>
      <Tag color="magenta"> {str("magenta")} </Tag>
      <Tag color="red"> {str("red")} </Tag>
      <Tag color="volcano"> {str("volcano")} </Tag>
      <Tag color="orange"> {str("orange")} </Tag>
      <Tag color="gold"> {str("gold")} </Tag>
      <Tag color="lime"> {str("lime")} </Tag>
      <Tag color="green"> {str("green")} </Tag>
      <Tag color="cyan"> {str("cyan")} </Tag>
      <Tag color="blue"> {str("blue")} </Tag>
      <Tag color="geekblue"> {str("geekblue")} </Tag>
      <Tag color="purple"> {str("purple")} </Tag>
    </div>
    <h4 style={ReactDOMRe.Style.make(~marginBottom="16px", ())}>
      {str("Custom:")}
    </h4>
    <div>
      <Tag color="#f50"> {str("#f50")} </Tag>
      <Tag color="#2db7f5"> {str("#2db7f5")} </Tag>
      <Tag color="#87d0f8"> {str("#87d0f8")} </Tag>
      <Tag color="#108ee9"> {str("#108ee9")} </Tag>
    </div>
  </Section>;
};
