open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  <Section title="Modal"> <Modal visible=true> {str("Modal content")} </Modal> </Section>;
};
