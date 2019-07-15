[%bs.raw {|require("@ehrocks/eh-ant-design/styles/eh-antd.css")|}];

module Styles = {
  open Css;
  let wrapper = [20 |> px |> margin] |> style;
};

module App = {
  [@react.component]
  let make = () =>
    <div className=Styles.wrapper>
      <Ehd.Badge count=10 overflowCount=8>
        {ReasonReact.string("haha1 ")}
      </Ehd.Badge>
    </div>;
};

ReactDOMRe.renderToElementWithId(<App />, "root");
