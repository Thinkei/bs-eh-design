open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  <Section title="Spin">
    <Spin size=`small spinning=true />
    <br />
    <br />
    <Spin delay=1000 size=`default spinning=true />
    <br />
    <br />
    <Spin size=`large spinning=true tip="loading..." />
  </Section>;
};
