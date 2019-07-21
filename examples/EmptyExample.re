open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  <Section title="Empty">
    <Empty> <Button> {str("Create")} </Button> </Empty>
  </Section>;
};
