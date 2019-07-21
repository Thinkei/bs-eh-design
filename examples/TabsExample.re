open Ehd;

let str = ReasonReact.string;

module TabPane = Tabs.TabPane;

[@react.component]
let make = () => {
  <Section title="Tabs">
    <div style={ReactDOMRe.Style.make(~height="100px", ())}>
      <Tabs tabPosition=`top>
        <TabPane tab="Tab 1" key="1"> {str("Content of tab 1")} </TabPane>
        <TabPane tab="Tab 2" key="2"> {str("Content of tab 2")} </TabPane>
        <TabPane tab="Tab 3" key="3"> {str("Content of tab 3")} </TabPane>
      </Tabs>
    </div>
  </Section>;
};
