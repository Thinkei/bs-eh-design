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
      <BadgeExample />
      <ButtonExample />
      <IconExample />
      <RadioExample />
      <ProgressExample />
      <TooltipExample />
      <TypographyExample />
      <CardExample />
      <AlertExample />
      <MessageExample />
      <InputExample />
      <EmptyExample />
      <CheckboxExample />
      <SwitchExample />
      <TagExample />
      <TabsExample />
      <br />
      <br />
      <SelectExample />
      <NotificationExample />
      <InputNumberExample />
      <LayoutExample />
      <RowAndColExample />
      <ModalExample />
    </div>;
};

ReactDOMRe.renderToElementWithId(<App />, "root");
