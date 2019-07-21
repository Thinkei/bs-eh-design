open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  <Section title="Card">
    <Card
      title="Default size card"
      extra={<a href="#"> {str("More")} </a>}
      style={ReactDOMRe.Style.make(~width="300px", ())}>
      <p> {str("Card content 1")} </p>
      <p> {str("Card content 2")} </p>
      <p> {str("Card content 3")} </p>
    </Card>
  </Section>;
};
