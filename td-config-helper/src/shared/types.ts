// 계산 함수 설명
export interface CalcDescription { 
  formula:string;
  refUrls:Array<string>;
  calcurator: Function;
}

// 프린트 프리셋 아이템
export interface PrintPresetItem {
  NAME: string;
  NOZZLE_DIAMETER: number;
  LAYER_HEIGHT: number;
  NOZZLE_FLAT_SIZE: number;
}