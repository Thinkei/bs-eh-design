[%bs.raw {|require("@ehrocks/eh-ant-design/styles/eh-antd.css")|}];

module Styles = {
  open Css;
  let wrapper = [20 |> px |> margin, 20 |> px |> padding] |> style;
};

let str = ReasonReact.string;

module App = {
  [@react.component]
  let make = () =>
    <div className=Styles.wrapper>
      <h1> {str("Examples")} </h1>
      <Section title="Badge">
        <Ehd.Badge count=10 overflowCount=9>
          {str("Unread notifications")}
        </Ehd.Badge>
      </Section>
      <Section title="Buttons">
        <Ehd.Button
          loading={Ehd.Button.LoadingProp.Bool(true)} _type=`primary>
          {str("Button 1")}
        </Ehd.Button>
        <Ehd.Button
          onClick={_ => Js.log("you are at danger")}
          _type=`danger
          size=`large>
          {str("Button 2")}
        </Ehd.Button>
        <Ehd.Button _type=`link size=`xlarge icon=`search>
          {str("Button 3")}
        </Ehd.Button>
      </Section>
    </div>;
};

ReactDOMRe.renderToElementWithId(<App />, "root");
