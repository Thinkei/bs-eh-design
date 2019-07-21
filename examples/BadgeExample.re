open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  <Section title="Badge">
    <Badge count=10 overflowCount=9> {str("Unread notifications")} </Badge>
  </Section>;
};
