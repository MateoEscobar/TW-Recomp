#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025A8C0
// Address: 0x25a8c0 - 0x25ade8
void sub_0025A8C0_0x25a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A8C0_0x25a8c0");
#endif

    switch (ctx->pc) {
        case 0x25a8c0u: goto label_25a8c0;
        case 0x25a8c4u: goto label_25a8c4;
        case 0x25a8c8u: goto label_25a8c8;
        case 0x25a8ccu: goto label_25a8cc;
        case 0x25a8d0u: goto label_25a8d0;
        case 0x25a8d4u: goto label_25a8d4;
        case 0x25a8d8u: goto label_25a8d8;
        case 0x25a8dcu: goto label_25a8dc;
        case 0x25a8e0u: goto label_25a8e0;
        case 0x25a8e4u: goto label_25a8e4;
        case 0x25a8e8u: goto label_25a8e8;
        case 0x25a8ecu: goto label_25a8ec;
        case 0x25a8f0u: goto label_25a8f0;
        case 0x25a8f4u: goto label_25a8f4;
        case 0x25a8f8u: goto label_25a8f8;
        case 0x25a8fcu: goto label_25a8fc;
        case 0x25a900u: goto label_25a900;
        case 0x25a904u: goto label_25a904;
        case 0x25a908u: goto label_25a908;
        case 0x25a90cu: goto label_25a90c;
        case 0x25a910u: goto label_25a910;
        case 0x25a914u: goto label_25a914;
        case 0x25a918u: goto label_25a918;
        case 0x25a91cu: goto label_25a91c;
        case 0x25a920u: goto label_25a920;
        case 0x25a924u: goto label_25a924;
        case 0x25a928u: goto label_25a928;
        case 0x25a92cu: goto label_25a92c;
        case 0x25a930u: goto label_25a930;
        case 0x25a934u: goto label_25a934;
        case 0x25a938u: goto label_25a938;
        case 0x25a93cu: goto label_25a93c;
        case 0x25a940u: goto label_25a940;
        case 0x25a944u: goto label_25a944;
        case 0x25a948u: goto label_25a948;
        case 0x25a94cu: goto label_25a94c;
        case 0x25a950u: goto label_25a950;
        case 0x25a954u: goto label_25a954;
        case 0x25a958u: goto label_25a958;
        case 0x25a95cu: goto label_25a95c;
        case 0x25a960u: goto label_25a960;
        case 0x25a964u: goto label_25a964;
        case 0x25a968u: goto label_25a968;
        case 0x25a96cu: goto label_25a96c;
        case 0x25a970u: goto label_25a970;
        case 0x25a974u: goto label_25a974;
        case 0x25a978u: goto label_25a978;
        case 0x25a97cu: goto label_25a97c;
        case 0x25a980u: goto label_25a980;
        case 0x25a984u: goto label_25a984;
        case 0x25a988u: goto label_25a988;
        case 0x25a98cu: goto label_25a98c;
        case 0x25a990u: goto label_25a990;
        case 0x25a994u: goto label_25a994;
        case 0x25a998u: goto label_25a998;
        case 0x25a99cu: goto label_25a99c;
        case 0x25a9a0u: goto label_25a9a0;
        case 0x25a9a4u: goto label_25a9a4;
        case 0x25a9a8u: goto label_25a9a8;
        case 0x25a9acu: goto label_25a9ac;
        case 0x25a9b0u: goto label_25a9b0;
        case 0x25a9b4u: goto label_25a9b4;
        case 0x25a9b8u: goto label_25a9b8;
        case 0x25a9bcu: goto label_25a9bc;
        case 0x25a9c0u: goto label_25a9c0;
        case 0x25a9c4u: goto label_25a9c4;
        case 0x25a9c8u: goto label_25a9c8;
        case 0x25a9ccu: goto label_25a9cc;
        case 0x25a9d0u: goto label_25a9d0;
        case 0x25a9d4u: goto label_25a9d4;
        case 0x25a9d8u: goto label_25a9d8;
        case 0x25a9dcu: goto label_25a9dc;
        case 0x25a9e0u: goto label_25a9e0;
        case 0x25a9e4u: goto label_25a9e4;
        case 0x25a9e8u: goto label_25a9e8;
        case 0x25a9ecu: goto label_25a9ec;
        case 0x25a9f0u: goto label_25a9f0;
        case 0x25a9f4u: goto label_25a9f4;
        case 0x25a9f8u: goto label_25a9f8;
        case 0x25a9fcu: goto label_25a9fc;
        case 0x25aa00u: goto label_25aa00;
        case 0x25aa04u: goto label_25aa04;
        case 0x25aa08u: goto label_25aa08;
        case 0x25aa0cu: goto label_25aa0c;
        case 0x25aa10u: goto label_25aa10;
        case 0x25aa14u: goto label_25aa14;
        case 0x25aa18u: goto label_25aa18;
        case 0x25aa1cu: goto label_25aa1c;
        case 0x25aa20u: goto label_25aa20;
        case 0x25aa24u: goto label_25aa24;
        case 0x25aa28u: goto label_25aa28;
        case 0x25aa2cu: goto label_25aa2c;
        case 0x25aa30u: goto label_25aa30;
        case 0x25aa34u: goto label_25aa34;
        case 0x25aa38u: goto label_25aa38;
        case 0x25aa3cu: goto label_25aa3c;
        case 0x25aa40u: goto label_25aa40;
        case 0x25aa44u: goto label_25aa44;
        case 0x25aa48u: goto label_25aa48;
        case 0x25aa4cu: goto label_25aa4c;
        case 0x25aa50u: goto label_25aa50;
        case 0x25aa54u: goto label_25aa54;
        case 0x25aa58u: goto label_25aa58;
        case 0x25aa5cu: goto label_25aa5c;
        case 0x25aa60u: goto label_25aa60;
        case 0x25aa64u: goto label_25aa64;
        case 0x25aa68u: goto label_25aa68;
        case 0x25aa6cu: goto label_25aa6c;
        case 0x25aa70u: goto label_25aa70;
        case 0x25aa74u: goto label_25aa74;
        case 0x25aa78u: goto label_25aa78;
        case 0x25aa7cu: goto label_25aa7c;
        case 0x25aa80u: goto label_25aa80;
        case 0x25aa84u: goto label_25aa84;
        case 0x25aa88u: goto label_25aa88;
        case 0x25aa8cu: goto label_25aa8c;
        case 0x25aa90u: goto label_25aa90;
        case 0x25aa94u: goto label_25aa94;
        case 0x25aa98u: goto label_25aa98;
        case 0x25aa9cu: goto label_25aa9c;
        case 0x25aaa0u: goto label_25aaa0;
        case 0x25aaa4u: goto label_25aaa4;
        case 0x25aaa8u: goto label_25aaa8;
        case 0x25aaacu: goto label_25aaac;
        case 0x25aab0u: goto label_25aab0;
        case 0x25aab4u: goto label_25aab4;
        case 0x25aab8u: goto label_25aab8;
        case 0x25aabcu: goto label_25aabc;
        case 0x25aac0u: goto label_25aac0;
        case 0x25aac4u: goto label_25aac4;
        case 0x25aac8u: goto label_25aac8;
        case 0x25aaccu: goto label_25aacc;
        case 0x25aad0u: goto label_25aad0;
        case 0x25aad4u: goto label_25aad4;
        case 0x25aad8u: goto label_25aad8;
        case 0x25aadcu: goto label_25aadc;
        case 0x25aae0u: goto label_25aae0;
        case 0x25aae4u: goto label_25aae4;
        case 0x25aae8u: goto label_25aae8;
        case 0x25aaecu: goto label_25aaec;
        case 0x25aaf0u: goto label_25aaf0;
        case 0x25aaf4u: goto label_25aaf4;
        case 0x25aaf8u: goto label_25aaf8;
        case 0x25aafcu: goto label_25aafc;
        case 0x25ab00u: goto label_25ab00;
        case 0x25ab04u: goto label_25ab04;
        case 0x25ab08u: goto label_25ab08;
        case 0x25ab0cu: goto label_25ab0c;
        case 0x25ab10u: goto label_25ab10;
        case 0x25ab14u: goto label_25ab14;
        case 0x25ab18u: goto label_25ab18;
        case 0x25ab1cu: goto label_25ab1c;
        case 0x25ab20u: goto label_25ab20;
        case 0x25ab24u: goto label_25ab24;
        case 0x25ab28u: goto label_25ab28;
        case 0x25ab2cu: goto label_25ab2c;
        case 0x25ab30u: goto label_25ab30;
        case 0x25ab34u: goto label_25ab34;
        case 0x25ab38u: goto label_25ab38;
        case 0x25ab3cu: goto label_25ab3c;
        case 0x25ab40u: goto label_25ab40;
        case 0x25ab44u: goto label_25ab44;
        case 0x25ab48u: goto label_25ab48;
        case 0x25ab4cu: goto label_25ab4c;
        case 0x25ab50u: goto label_25ab50;
        case 0x25ab54u: goto label_25ab54;
        case 0x25ab58u: goto label_25ab58;
        case 0x25ab5cu: goto label_25ab5c;
        case 0x25ab60u: goto label_25ab60;
        case 0x25ab64u: goto label_25ab64;
        case 0x25ab68u: goto label_25ab68;
        case 0x25ab6cu: goto label_25ab6c;
        case 0x25ab70u: goto label_25ab70;
        case 0x25ab74u: goto label_25ab74;
        case 0x25ab78u: goto label_25ab78;
        case 0x25ab7cu: goto label_25ab7c;
        case 0x25ab80u: goto label_25ab80;
        case 0x25ab84u: goto label_25ab84;
        case 0x25ab88u: goto label_25ab88;
        case 0x25ab8cu: goto label_25ab8c;
        case 0x25ab90u: goto label_25ab90;
        case 0x25ab94u: goto label_25ab94;
        case 0x25ab98u: goto label_25ab98;
        case 0x25ab9cu: goto label_25ab9c;
        case 0x25aba0u: goto label_25aba0;
        case 0x25aba4u: goto label_25aba4;
        case 0x25aba8u: goto label_25aba8;
        case 0x25abacu: goto label_25abac;
        case 0x25abb0u: goto label_25abb0;
        case 0x25abb4u: goto label_25abb4;
        case 0x25abb8u: goto label_25abb8;
        case 0x25abbcu: goto label_25abbc;
        case 0x25abc0u: goto label_25abc0;
        case 0x25abc4u: goto label_25abc4;
        case 0x25abc8u: goto label_25abc8;
        case 0x25abccu: goto label_25abcc;
        case 0x25abd0u: goto label_25abd0;
        case 0x25abd4u: goto label_25abd4;
        case 0x25abd8u: goto label_25abd8;
        case 0x25abdcu: goto label_25abdc;
        case 0x25abe0u: goto label_25abe0;
        case 0x25abe4u: goto label_25abe4;
        case 0x25abe8u: goto label_25abe8;
        case 0x25abecu: goto label_25abec;
        case 0x25abf0u: goto label_25abf0;
        case 0x25abf4u: goto label_25abf4;
        case 0x25abf8u: goto label_25abf8;
        case 0x25abfcu: goto label_25abfc;
        case 0x25ac00u: goto label_25ac00;
        case 0x25ac04u: goto label_25ac04;
        case 0x25ac08u: goto label_25ac08;
        case 0x25ac0cu: goto label_25ac0c;
        case 0x25ac10u: goto label_25ac10;
        case 0x25ac14u: goto label_25ac14;
        case 0x25ac18u: goto label_25ac18;
        case 0x25ac1cu: goto label_25ac1c;
        case 0x25ac20u: goto label_25ac20;
        case 0x25ac24u: goto label_25ac24;
        case 0x25ac28u: goto label_25ac28;
        case 0x25ac2cu: goto label_25ac2c;
        case 0x25ac30u: goto label_25ac30;
        case 0x25ac34u: goto label_25ac34;
        case 0x25ac38u: goto label_25ac38;
        case 0x25ac3cu: goto label_25ac3c;
        case 0x25ac40u: goto label_25ac40;
        case 0x25ac44u: goto label_25ac44;
        case 0x25ac48u: goto label_25ac48;
        case 0x25ac4cu: goto label_25ac4c;
        case 0x25ac50u: goto label_25ac50;
        case 0x25ac54u: goto label_25ac54;
        case 0x25ac58u: goto label_25ac58;
        case 0x25ac5cu: goto label_25ac5c;
        case 0x25ac60u: goto label_25ac60;
        case 0x25ac64u: goto label_25ac64;
        case 0x25ac68u: goto label_25ac68;
        case 0x25ac6cu: goto label_25ac6c;
        case 0x25ac70u: goto label_25ac70;
        case 0x25ac74u: goto label_25ac74;
        case 0x25ac78u: goto label_25ac78;
        case 0x25ac7cu: goto label_25ac7c;
        case 0x25ac80u: goto label_25ac80;
        case 0x25ac84u: goto label_25ac84;
        case 0x25ac88u: goto label_25ac88;
        case 0x25ac8cu: goto label_25ac8c;
        case 0x25ac90u: goto label_25ac90;
        case 0x25ac94u: goto label_25ac94;
        case 0x25ac98u: goto label_25ac98;
        case 0x25ac9cu: goto label_25ac9c;
        case 0x25aca0u: goto label_25aca0;
        case 0x25aca4u: goto label_25aca4;
        case 0x25aca8u: goto label_25aca8;
        case 0x25acacu: goto label_25acac;
        case 0x25acb0u: goto label_25acb0;
        case 0x25acb4u: goto label_25acb4;
        case 0x25acb8u: goto label_25acb8;
        case 0x25acbcu: goto label_25acbc;
        case 0x25acc0u: goto label_25acc0;
        case 0x25acc4u: goto label_25acc4;
        case 0x25acc8u: goto label_25acc8;
        case 0x25acccu: goto label_25accc;
        case 0x25acd0u: goto label_25acd0;
        case 0x25acd4u: goto label_25acd4;
        case 0x25acd8u: goto label_25acd8;
        case 0x25acdcu: goto label_25acdc;
        case 0x25ace0u: goto label_25ace0;
        case 0x25ace4u: goto label_25ace4;
        case 0x25ace8u: goto label_25ace8;
        case 0x25acecu: goto label_25acec;
        case 0x25acf0u: goto label_25acf0;
        case 0x25acf4u: goto label_25acf4;
        case 0x25acf8u: goto label_25acf8;
        case 0x25acfcu: goto label_25acfc;
        case 0x25ad00u: goto label_25ad00;
        case 0x25ad04u: goto label_25ad04;
        case 0x25ad08u: goto label_25ad08;
        case 0x25ad0cu: goto label_25ad0c;
        case 0x25ad10u: goto label_25ad10;
        case 0x25ad14u: goto label_25ad14;
        case 0x25ad18u: goto label_25ad18;
        case 0x25ad1cu: goto label_25ad1c;
        case 0x25ad20u: goto label_25ad20;
        case 0x25ad24u: goto label_25ad24;
        case 0x25ad28u: goto label_25ad28;
        case 0x25ad2cu: goto label_25ad2c;
        case 0x25ad30u: goto label_25ad30;
        case 0x25ad34u: goto label_25ad34;
        case 0x25ad38u: goto label_25ad38;
        case 0x25ad3cu: goto label_25ad3c;
        case 0x25ad40u: goto label_25ad40;
        case 0x25ad44u: goto label_25ad44;
        case 0x25ad48u: goto label_25ad48;
        case 0x25ad4cu: goto label_25ad4c;
        case 0x25ad50u: goto label_25ad50;
        case 0x25ad54u: goto label_25ad54;
        case 0x25ad58u: goto label_25ad58;
        case 0x25ad5cu: goto label_25ad5c;
        case 0x25ad60u: goto label_25ad60;
        case 0x25ad64u: goto label_25ad64;
        case 0x25ad68u: goto label_25ad68;
        case 0x25ad6cu: goto label_25ad6c;
        case 0x25ad70u: goto label_25ad70;
        case 0x25ad74u: goto label_25ad74;
        case 0x25ad78u: goto label_25ad78;
        case 0x25ad7cu: goto label_25ad7c;
        case 0x25ad80u: goto label_25ad80;
        case 0x25ad84u: goto label_25ad84;
        case 0x25ad88u: goto label_25ad88;
        case 0x25ad8cu: goto label_25ad8c;
        case 0x25ad90u: goto label_25ad90;
        case 0x25ad94u: goto label_25ad94;
        case 0x25ad98u: goto label_25ad98;
        case 0x25ad9cu: goto label_25ad9c;
        case 0x25ada0u: goto label_25ada0;
        case 0x25ada4u: goto label_25ada4;
        case 0x25ada8u: goto label_25ada8;
        case 0x25adacu: goto label_25adac;
        case 0x25adb0u: goto label_25adb0;
        case 0x25adb4u: goto label_25adb4;
        case 0x25adb8u: goto label_25adb8;
        case 0x25adbcu: goto label_25adbc;
        case 0x25adc0u: goto label_25adc0;
        case 0x25adc4u: goto label_25adc4;
        case 0x25adc8u: goto label_25adc8;
        case 0x25adccu: goto label_25adcc;
        case 0x25add0u: goto label_25add0;
        case 0x25add4u: goto label_25add4;
        case 0x25add8u: goto label_25add8;
        case 0x25addcu: goto label_25addc;
        case 0x25ade0u: goto label_25ade0;
        case 0x25ade4u: goto label_25ade4;
        default: break;
    }

    ctx->pc = 0x25a8c0u;

label_25a8c0:
    // 0x25a8c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25a8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_25a8c4:
    // 0x25a8c4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x25a8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_25a8c8:
    // 0x25a8c8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x25a8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_25a8cc:
    // 0x25a8cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25a8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25a8d0:
    // 0x25a8d0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x25a8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_25a8d4:
    // 0x25a8d4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x25a8d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25a8d8:
    // 0x25a8d8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x25a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_25a8dc:
    // 0x25a8dc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x25a8dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25a8e0:
    // 0x25a8e0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x25a8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_25a8e4:
    // 0x25a8e4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x25a8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_25a8e8:
    // 0x25a8e8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x25a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_25a8ec:
    // 0x25a8ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25a8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_25a8f0:
    // 0x25a8f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_25a8f4:
    // 0x25a8f4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x25a8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_25a8f8:
    // 0x25a8f8: 0x8e5600d8  lw          $s6, 0xD8($s2)
    ctx->pc = 0x25a8f8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25a8fc:
    // 0x25a8fc: 0x12c0012d  beqz        $s6, . + 4 + (0x12D << 2)
label_25a900:
    if (ctx->pc == 0x25A900u) {
        ctx->pc = 0x25A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A8FCu;
        // 0x25a900: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A904u;
        goto label_25a904;
    }
    ctx->pc = 0x25A8FCu;
    {
        const bool branch_taken_0x25a8fc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A8FCu;
        // 0x25a900: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a8fc) {
            ctx->pc = 0x25ADB4u;
            goto label_25adb4;
        }
    }
    ctx->pc = 0x25A904u;
label_25a904:
    // 0x25a904: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x25a904u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_25a908:
    // 0x25a908: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25a908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25a90c:
    // 0x25a90c: 0xc041532  jal         func_1054C8
label_25a910:
    if (ctx->pc == 0x25A910u) {
        ctx->pc = 0x25A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A90Cu;
        // 0x25a910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A914u;
        goto label_25a914;
    }
    ctx->pc = 0x25A90Cu;
    SET_GPR_U32(ctx, 31, 0x25A914u);
    ctx->pc = 0x25A910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A90Cu;
    // 0x25a910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25A90Cu, 0x25A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A914u;
label_25a914:
    // 0x25a914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25a918:
    // 0x25a918: 0xc041532  jal         func_1054C8
label_25a91c:
    if (ctx->pc == 0x25A91Cu) {
        ctx->pc = 0x25A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A918u;
        // 0x25a91c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A920u;
        goto label_25a920;
    }
    ctx->pc = 0x25A918u;
    SET_GPR_U32(ctx, 31, 0x25A920u);
    ctx->pc = 0x25A91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A918u;
    // 0x25a91c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25A918u, 0x25A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A920u;
label_25a920:
    // 0x25a920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25a924:
    // 0x25a924: 0xc041532  jal         func_1054C8
label_25a928:
    if (ctx->pc == 0x25A928u) {
        ctx->pc = 0x25A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A924u;
        // 0x25a928: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A92Cu;
        goto label_25a92c;
    }
    ctx->pc = 0x25A924u;
    SET_GPR_U32(ctx, 31, 0x25A92Cu);
    ctx->pc = 0x25A928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A924u;
    // 0x25a928: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25A924u, 0x25A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A92Cu;
label_25a92c:
    // 0x25a92c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x25a92cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a930:
    // 0x25a930: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a934:
    // 0x25a934: 0xc08997c  jal         func_2265F0
label_25a938:
    if (ctx->pc == 0x25A938u) {
        ctx->pc = 0x25A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A934u;
        // 0x25a938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A93Cu;
        goto label_25a93c;
    }
    ctx->pc = 0x25A934u;
    SET_GPR_U32(ctx, 31, 0x25A93Cu);
    ctx->pc = 0x25A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A934u;
    // 0x25a938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25A934u, 0x25A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A93Cu;
label_25a93c:
    // 0x25a93c: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_25a940:
    if (ctx->pc == 0x25A940u) {
        ctx->pc = 0x25A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A93Cu;
        // 0x25a940: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A944u;
        goto label_25a944;
    }
    ctx->pc = 0x25A93Cu;
    {
        const bool branch_taken_0x25a93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a93c) {
            ctx->pc = 0x25A940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A93Cu;
            // 0x25a940: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A9DCu;
            goto label_25a9dc;
        }
    }
    ctx->pc = 0x25A944u;
label_25a944:
    // 0x25a944: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_25a948:
    if (ctx->pc == 0x25A948u) {
        ctx->pc = 0x25A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A944u;
        // 0x25a948: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A94Cu;
        goto label_25a94c;
    }
    ctx->pc = 0x25A944u;
    {
        const bool branch_taken_0x25a944 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A944u;
        // 0x25a948: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a944) {
            ctx->pc = 0x25A968u;
            goto label_25a968;
        }
    }
    ctx->pc = 0x25A94Cu;
label_25a94c:
    // 0x25a94c: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x25a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25a950:
    // 0x25a950: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25a950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25a954:
    // 0x25a954: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25a954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25a958:
    // 0x25a958: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x25a958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_25a95c:
    // 0x25a95c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a95cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a960:
    // 0x25a960: 0xc04159e  jal         func_105678
label_25a964:
    if (ctx->pc == 0x25A964u) {
        ctx->pc = 0x25A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A960u;
        // 0x25a964: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A968u;
        goto label_25a968;
    }
    ctx->pc = 0x25A960u;
    SET_GPR_U32(ctx, 31, 0x25A968u);
    ctx->pc = 0x25A964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A960u;
    // 0x25a964: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25A960u, 0x25A968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A968u;
label_25a968:
    // 0x25a968: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x25a968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25a96c:
    // 0x25a96c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x25a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_25a970:
    // 0x25a970: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_25a974:
    if (ctx->pc == 0x25A974u) {
        ctx->pc = 0x25A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A970u;
        // 0x25a974: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A978u;
        goto label_25a978;
    }
    ctx->pc = 0x25A970u;
    {
        const bool branch_taken_0x25a970 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A970u;
        // 0x25a974: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a970) {
            ctx->pc = 0x25A9B8u;
            goto label_25a9b8;
        }
    }
    ctx->pc = 0x25A978u;
label_25a978:
    // 0x25a978: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25a978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25a97c:
    // 0x25a97c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25a97cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25a980:
    // 0x25a980: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25a980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25a984:
    // 0x25a984: 0x40f809  jalr        $v0
label_25a988:
    if (ctx->pc == 0x25A988u) {
        ctx->pc = 0x25A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A984u;
        // 0x25a988: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A98Cu;
        goto label_25a98c;
    }
    ctx->pc = 0x25A984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25A98Cu);
        ctx->pc = 0x25A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A984u;
        // 0x25a988: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A984u, 0x25A98Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A98Cu;
label_25a98c:
    // 0x25a98c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x25a98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_25a990:
    // 0x25a990: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x25a990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_25a994:
    // 0x25a994: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25a994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25a998:
    // 0x25a998: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x25a998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25a99c:
    // 0x25a99c: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x25a99cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25a9a0:
    // 0x25a9a0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25a9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25a9a4:
    // 0x25a9a4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25a9a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a9a8:
    // 0x25a9a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25a9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25a9ac:
    // 0x25a9ac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25a9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25a9b0:
    // 0x25a9b0: 0xc041664  jal         func_105990
label_25a9b4:
    if (ctx->pc == 0x25A9B4u) {
        ctx->pc = 0x25A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9B0u;
        // 0x25a9b4: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A9B8u;
        goto label_25a9b8;
    }
    ctx->pc = 0x25A9B0u;
    SET_GPR_U32(ctx, 31, 0x25A9B8u);
    ctx->pc = 0x25A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A9B0u;
    // 0x25a9b4: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25A9B0u, 0x25A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A9B8u;
label_25a9b8:
    // 0x25a9b8: 0x12a000b9  beqz        $s5, . + 4 + (0xB9 << 2)
label_25a9bc:
    if (ctx->pc == 0x25A9BCu) {
        ctx->pc = 0x25A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9B8u;
        // 0x25a9bc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A9C0u;
        goto label_25a9c0;
    }
    ctx->pc = 0x25A9B8u;
    {
        const bool branch_taken_0x25a9b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9B8u;
        // 0x25a9bc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9b8) {
            ctx->pc = 0x25ACA0u;
            goto label_25aca0;
        }
    }
    ctx->pc = 0x25A9C0u;
label_25a9c0:
    // 0x25a9c0: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25a9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25a9c4:
    // 0x25a9c4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25a9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25a9c8:
    // 0x25a9c8: 0x3c013d88  lui         $at, 0x3D88
    ctx->pc = 0x25a9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15752 << 16));
label_25a9cc:
    // 0x25a9cc: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25a9ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_25a9d0:
    // 0x25a9d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25a9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25a9d4:
    // 0x25a9d4: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_25a9d8:
    if (ctx->pc == 0x25A9D8u) {
        ctx->pc = 0x25A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9D4u;
        // 0x25a9d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A9DCu;
        goto label_25a9dc;
    }
    ctx->pc = 0x25A9D4u;
    {
        const bool branch_taken_0x25a9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9D4u;
        // 0x25a9d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9d4) {
            ctx->pc = 0x25AC98u;
            goto label_25ac98;
        }
    }
    ctx->pc = 0x25A9DCu;
label_25a9dc:
    // 0x25a9dc: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x25a9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_25a9e0:
    // 0x25a9e0: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x25a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_25a9e4:
    // 0x25a9e4: 0x16e3002c  bne         $s7, $v1, . + 4 + (0x2C << 2)
label_25a9e8:
    if (ctx->pc == 0x25A9E8u) {
        ctx->pc = 0x25A9ECu;
        goto label_25a9ec;
    }
    ctx->pc = 0x25A9E4u;
    {
        const bool branch_taken_0x25a9e4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        if (branch_taken_0x25a9e4) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25A9ECu;
label_25a9ec:
    // 0x25a9ec: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_25a9f0:
    if (ctx->pc == 0x25A9F0u) {
        ctx->pc = 0x25A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9ECu;
        // 0x25a9f0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A9F4u;
        goto label_25a9f4;
    }
    ctx->pc = 0x25A9ECu;
    {
        const bool branch_taken_0x25a9ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9ECu;
        // 0x25a9f0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9ec) {
            ctx->pc = 0x25AA08u;
            goto label_25aa08;
        }
    }
    ctx->pc = 0x25A9F4u;
label_25a9f4:
    // 0x25a9f4: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25a9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25a9f8:
    // 0x25a9f8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25a9f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25a9fc:
    // 0x25a9fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25a9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25aa00:
    // 0x25aa00: 0xc04159e  jal         func_105678
label_25aa04:
    if (ctx->pc == 0x25AA04u) {
        ctx->pc = 0x25AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA00u;
        // 0x25aa04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AA08u;
        goto label_25aa08;
    }
    ctx->pc = 0x25AA00u;
    SET_GPR_U32(ctx, 31, 0x25AA08u);
    ctx->pc = 0x25AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AA00u;
    // 0x25aa04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25AA00u, 0x25AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AA08u;
label_25aa08:
    // 0x25aa08: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x25aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25aa0c:
    // 0x25aa0c: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_25aa10:
    if (ctx->pc == 0x25AA10u) {
        ctx->pc = 0x25AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA0Cu;
        // 0x25aa10: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AA14u;
        goto label_25aa14;
    }
    ctx->pc = 0x25AA0Cu;
    {
        const bool branch_taken_0x25aa0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA0Cu;
        // 0x25aa10: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa0c) {
            ctx->pc = 0x25AA54u;
            goto label_25aa54;
        }
    }
    ctx->pc = 0x25AA14u;
label_25aa14:
    // 0x25aa14: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25aa18:
    // 0x25aa18: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25aa18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25aa1c:
    // 0x25aa1c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25aa20:
    // 0x25aa20: 0x40f809  jalr        $v0
label_25aa24:
    if (ctx->pc == 0x25AA24u) {
        ctx->pc = 0x25AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA20u;
        // 0x25aa24: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AA28u;
        goto label_25aa28;
    }
    ctx->pc = 0x25AA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25AA28u);
        ctx->pc = 0x25AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA20u;
        // 0x25aa24: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AA20u, 0x25AA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AA28u;
label_25aa28:
    // 0x25aa28: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x25aa28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_25aa2c:
    // 0x25aa2c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x25aa2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_25aa30:
    // 0x25aa30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25aa30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25aa34:
    // 0x25aa34: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x25aa34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25aa38:
    // 0x25aa38: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x25aa38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25aa3c:
    // 0x25aa3c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25aa3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25aa40:
    // 0x25aa40: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25aa40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25aa44:
    // 0x25aa44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25aa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25aa48:
    // 0x25aa48: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25aa48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25aa4c:
    // 0x25aa4c: 0xc041664  jal         func_105990
label_25aa50:
    if (ctx->pc == 0x25AA50u) {
        ctx->pc = 0x25AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA4Cu;
        // 0x25aa50: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AA54u;
        goto label_25aa54;
    }
    ctx->pc = 0x25AA4Cu;
    SET_GPR_U32(ctx, 31, 0x25AA54u);
    ctx->pc = 0x25AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AA4Cu;
    // 0x25aa50: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25AA4Cu, 0x25AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AA54u;
label_25aa54:
    // 0x25aa54: 0xc087502  jal         func_21D408
label_25aa58:
    if (ctx->pc == 0x25AA58u) {
        ctx->pc = 0x25AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA54u;
        // 0x25aa58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AA5Cu;
        goto label_25aa5c;
    }
    ctx->pc = 0x25AA54u;
    SET_GPR_U32(ctx, 31, 0x25AA5Cu);
    ctx->pc = 0x25AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AA54u;
    // 0x25aa58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x25AA54u, 0x25AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AA5Cu;
label_25aa5c:
    // 0x25aa5c: 0x8043000b  lb          $v1, 0xB($v0)
    ctx->pc = 0x25aa5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
label_25aa60:
    // 0x25aa60: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x25aa60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
label_25aa64:
    // 0x25aa64: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x25aa64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_25aa68:
    // 0x25aa68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25aa68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25aa6c:
    // 0x25aa6c: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
label_25aa70:
    if (ctx->pc == 0x25AA70u) {
        ctx->pc = 0x25AA74u;
        goto label_25aa74;
    }
    ctx->pc = 0x25AA6Cu;
    {
        const bool branch_taken_0x25aa6c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x25aa6c) {
            ctx->pc = 0x25AA80u;
            goto label_25aa80;
        }
    }
    ctx->pc = 0x25AA74u;
label_25aa74:
    // 0x25aa74: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x25aa74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
label_25aa78:
    // 0x25aa78: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25aa78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_25aa7c:
    // 0x25aa7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25aa7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25aa80:
    // 0x25aa80: 0x12a00087  beqz        $s5, . + 4 + (0x87 << 2)
label_25aa84:
    if (ctx->pc == 0x25AA84u) {
        ctx->pc = 0x25AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA80u;
        // 0x25aa84: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AA88u;
        goto label_25aa88;
    }
    ctx->pc = 0x25AA80u;
    {
        const bool branch_taken_0x25aa80 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA80u;
        // 0x25aa84: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa80) {
            ctx->pc = 0x25ACA0u;
            goto label_25aca0;
        }
    }
    ctx->pc = 0x25AA88u;
label_25aa88:
    // 0x25aa88: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25aa88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25aa8c:
    // 0x25aa8c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25aa8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25aa90:
    // 0x25aa90: 0x10000081  b           . + 4 + (0x81 << 2)
label_25aa94:
    if (ctx->pc == 0x25AA94u) {
        ctx->pc = 0x25AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA90u;
        // 0x25aa94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AA98u;
        goto label_25aa98;
    }
    ctx->pc = 0x25AA90u;
    {
        const bool branch_taken_0x25aa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA90u;
        // 0x25aa94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa90) {
            ctx->pc = 0x25AC98u;
            goto label_25ac98;
        }
    }
    ctx->pc = 0x25AA98u;
label_25aa98:
    // 0x25aa98: 0xc08a062  jal         func_228188
label_25aa9c:
    if (ctx->pc == 0x25AA9Cu) {
        ctx->pc = 0x25AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA98u;
        // 0x25aa9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AAA0u;
        goto label_25aaa0;
    }
    ctx->pc = 0x25AA98u;
    SET_GPR_U32(ctx, 31, 0x25AAA0u);
    ctx->pc = 0x25AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AA98u;
    // 0x25aa9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228188u, 0x25AA98u, 0x25AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AAA0u;
label_25aaa0:
    // 0x25aaa0: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_25aaa4:
    if (ctx->pc == 0x25AAA4u) {
        ctx->pc = 0x25AAA8u;
        goto label_25aaa8;
    }
    ctx->pc = 0x25AAA0u;
    {
        const bool branch_taken_0x25aaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aaa0) {
            ctx->pc = 0x25ABB4u;
            goto label_25abb4;
        }
    }
    ctx->pc = 0x25AAA8u;
label_25aaa8:
    // 0x25aaa8: 0xc089000  jal         func_224000
label_25aaac:
    if (ctx->pc == 0x25AAACu) {
        ctx->pc = 0x25AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAA8u;
        // 0x25aaac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AAB0u;
        goto label_25aab0;
    }
    ctx->pc = 0x25AAA8u;
    SET_GPR_U32(ctx, 31, 0x25AAB0u);
    ctx->pc = 0x25AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AAA8u;
    // 0x25aaac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x25AAA8u, 0x25AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AAB0u;
label_25aab0:
    // 0x25aab0: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_25aab4:
    if (ctx->pc == 0x25AAB4u) {
        ctx->pc = 0x25AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAB0u;
        // 0x25aab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AAB8u;
        goto label_25aab8;
    }
    ctx->pc = 0x25AAB0u;
    {
        const bool branch_taken_0x25aab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAB0u;
        // 0x25aab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aab0) {
            ctx->pc = 0x25ABB4u;
            goto label_25abb4;
        }
    }
    ctx->pc = 0x25AAB8u;
label_25aab8:
    // 0x25aab8: 0x24050276  addiu       $a1, $zero, 0x276
    ctx->pc = 0x25aab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
label_25aabc:
    // 0x25aabc: 0xc0886a8  jal         func_221AA0
label_25aac0:
    if (ctx->pc == 0x25AAC0u) {
        ctx->pc = 0x25AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AABCu;
        // 0x25aac0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AAC4u;
        goto label_25aac4;
    }
    ctx->pc = 0x25AABCu;
    SET_GPR_U32(ctx, 31, 0x25AAC4u);
    ctx->pc = 0x25AAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AABCu;
    // 0x25aac0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x25AABCu, 0x25AAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AAC4u;
label_25aac4:
    // 0x25aac4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_25aac8:
    if (ctx->pc == 0x25AAC8u) {
        ctx->pc = 0x25AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAC4u;
        // 0x25aac8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AACCu;
        goto label_25aacc;
    }
    ctx->pc = 0x25AAC4u;
    {
        const bool branch_taken_0x25aac4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAC4u;
        // 0x25aac8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aac4) {
            ctx->pc = 0x25AAE0u;
            goto label_25aae0;
        }
    }
    ctx->pc = 0x25AACCu;
label_25aacc:
    // 0x25aacc: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25aaccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25aad0:
    // 0x25aad0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25aad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25aad4:
    // 0x25aad4: 0x24060276  addiu       $a2, $zero, 0x276
    ctx->pc = 0x25aad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
label_25aad8:
    // 0x25aad8: 0xc042c24  jal         func_10B090
label_25aadc:
    if (ctx->pc == 0x25AADCu) {
        ctx->pc = 0x25AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAD8u;
        // 0x25aadc: 0x2407027b  addiu       $a3, $zero, 0x27B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 635));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AAE0u;
        goto label_25aae0;
    }
    ctx->pc = 0x25AAD8u;
    SET_GPR_U32(ctx, 31, 0x25AAE0u);
    ctx->pc = 0x25AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AAD8u;
    // 0x25aadc: 0x2407027b  addiu       $a3, $zero, 0x27B (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 635));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B090u, 0x25AAD8u, 0x25AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AAE0u;
label_25aae0:
    // 0x25aae0: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x25aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25aae4:
    // 0x25aae4: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_25aae8:
    if (ctx->pc == 0x25AAE8u) {
        ctx->pc = 0x25AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAE4u;
        // 0x25aae8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AAECu;
        goto label_25aaec;
    }
    ctx->pc = 0x25AAE4u;
    {
        const bool branch_taken_0x25aae4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAE4u;
        // 0x25aae8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aae4) {
            ctx->pc = 0x25AB2Cu;
            goto label_25ab2c;
        }
    }
    ctx->pc = 0x25AAECu;
label_25aaec:
    // 0x25aaec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25aaf0:
    // 0x25aaf0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25aaf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25aaf4:
    // 0x25aaf4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25aaf8:
    // 0x25aaf8: 0x40f809  jalr        $v0
label_25aafc:
    if (ctx->pc == 0x25AAFCu) {
        ctx->pc = 0x25AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAF8u;
        // 0x25aafc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AB00u;
        goto label_25ab00;
    }
    ctx->pc = 0x25AAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25AB00u);
        ctx->pc = 0x25AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAF8u;
        // 0x25aafc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AAF8u, 0x25AB00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AB00u;
label_25ab00:
    // 0x25ab00: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x25ab00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_25ab04:
    // 0x25ab04: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x25ab04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_25ab08:
    // 0x25ab08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25ab08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25ab0c:
    // 0x25ab0c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x25ab0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25ab10:
    // 0x25ab10: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x25ab10u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25ab14:
    // 0x25ab14: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25ab14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25ab18:
    // 0x25ab18: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25ab18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ab1c:
    // 0x25ab1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25ab1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25ab20:
    // 0x25ab20: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25ab20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25ab24:
    // 0x25ab24: 0xc041664  jal         func_105990
label_25ab28:
    if (ctx->pc == 0x25AB28u) {
        ctx->pc = 0x25AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB24u;
        // 0x25ab28: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AB2Cu;
        goto label_25ab2c;
    }
    ctx->pc = 0x25AB24u;
    SET_GPR_U32(ctx, 31, 0x25AB2Cu);
    ctx->pc = 0x25AB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AB24u;
    // 0x25ab28: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25AB24u, 0x25AB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AB2Cu;
label_25ab2c:
    // 0x25ab2c: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_25ab30:
    if (ctx->pc == 0x25AB30u) {
        ctx->pc = 0x25AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB2Cu;
        // 0x25ab30: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AB34u;
        goto label_25ab34;
    }
    ctx->pc = 0x25AB2Cu;
    {
        const bool branch_taken_0x25ab2c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB2Cu;
        // 0x25ab30: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab2c) {
            ctx->pc = 0x25AB54u;
            goto label_25ab54;
        }
    }
    ctx->pc = 0x25AB34u;
label_25ab34:
    // 0x25ab34: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25ab34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25ab38:
    // 0x25ab38: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25ab38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25ab3c:
    // 0x25ab3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25ab3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25ab40:
    // 0x25ab40: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x25ab40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_25ab44:
    // 0x25ab44: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25ab44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_25ab48:
    // 0x25ab48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25ab48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25ab4c:
    // 0x25ab4c: 0xc041b20  jal         func_106C80
label_25ab50:
    if (ctx->pc == 0x25AB50u) {
        ctx->pc = 0x25AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB4Cu;
        // 0x25ab50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AB54u;
        goto label_25ab54;
    }
    ctx->pc = 0x25AB4Cu;
    SET_GPR_U32(ctx, 31, 0x25AB54u);
    ctx->pc = 0x25AB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AB4Cu;
    // 0x25ab50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25AB4Cu, 0x25AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AB54u;
label_25ab54:
    // 0x25ab54: 0xc05d484  jal         func_175210
label_25ab58:
    if (ctx->pc == 0x25AB58u) {
        ctx->pc = 0x25AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB54u;
        // 0x25ab58: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AB5Cu;
        goto label_25ab5c;
    }
    ctx->pc = 0x25AB54u;
    SET_GPR_U32(ctx, 31, 0x25AB5Cu);
    ctx->pc = 0x25AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AB54u;
    // 0x25ab58: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25AB54u, 0x25AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AB5Cu;
label_25ab5c:
    // 0x25ab5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25ab60:
    // 0x25ab60: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25ab60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25ab64:
    // 0x25ab64: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25ab64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25ab68:
    // 0x25ab68: 0xa0f809  jalr        $a1
label_25ab6c:
    if (ctx->pc == 0x25AB6Cu) {
        ctx->pc = 0x25AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB68u;
        // 0x25ab6c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AB70u;
        goto label_25ab70;
    }
    ctx->pc = 0x25AB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25AB70u);
        ctx->pc = 0x25AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB68u;
        // 0x25ab6c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AB68u, 0x25AB70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AB70u;
label_25ab70:
    // 0x25ab70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25ab70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25ab74:
    // 0x25ab74: 0xc087016  jal         func_21C058
label_25ab78:
    if (ctx->pc == 0x25AB78u) {
        ctx->pc = 0x25AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB74u;
        // 0x25ab78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AB7Cu;
        goto label_25ab7c;
    }
    ctx->pc = 0x25AB74u;
    SET_GPR_U32(ctx, 31, 0x25AB7Cu);
    ctx->pc = 0x25AB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AB74u;
    // 0x25ab78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25AB74u, 0x25AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AB7Cu;
label_25ab7c:
    // 0x25ab7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25ab7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25ab80:
    // 0x25ab80: 0xc05d53a  jal         func_1754E8
label_25ab84:
    if (ctx->pc == 0x25AB84u) {
        ctx->pc = 0x25AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB80u;
        // 0x25ab84: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AB88u;
        goto label_25ab88;
    }
    ctx->pc = 0x25AB80u;
    SET_GPR_U32(ctx, 31, 0x25AB88u);
    ctx->pc = 0x25AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AB80u;
    // 0x25ab84: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25AB80u, 0x25AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AB88u;
label_25ab88:
    // 0x25ab88: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25ab88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25ab8c:
    // 0x25ab8c: 0xc05d4f6  jal         func_1753D8
label_25ab90:
    if (ctx->pc == 0x25AB90u) {
        ctx->pc = 0x25AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB8Cu;
        // 0x25ab90: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AB94u;
        goto label_25ab94;
    }
    ctx->pc = 0x25AB8Cu;
    SET_GPR_U32(ctx, 31, 0x25AB94u);
    ctx->pc = 0x25AB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AB8Cu;
    // 0x25ab90: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25AB8Cu, 0x25AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AB94u;
label_25ab94:
    // 0x25ab94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25ab94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25ab98:
    // 0x25ab98: 0xc097ac0  jal         func_25EB00
label_25ab9c:
    if (ctx->pc == 0x25AB9Cu) {
        ctx->pc = 0x25AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB98u;
        // 0x25ab9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ABA0u;
        goto label_25aba0;
    }
    ctx->pc = 0x25AB98u;
    SET_GPR_U32(ctx, 31, 0x25ABA0u);
    ctx->pc = 0x25AB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AB98u;
    // 0x25ab9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EB00u, 0x25AB98u, 0x25ABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ABA0u;
label_25aba0:
    // 0x25aba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25aba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25aba4:
    // 0x25aba4: 0xc089990  jal         func_226640
label_25aba8:
    if (ctx->pc == 0x25ABA8u) {
        ctx->pc = 0x25ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABA4u;
        // 0x25aba8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ABACu;
        goto label_25abac;
    }
    ctx->pc = 0x25ABA4u;
    SET_GPR_U32(ctx, 31, 0x25ABACu);
    ctx->pc = 0x25ABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ABA4u;
    // 0x25aba8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25ABA4u, 0x25ABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ABACu;
label_25abac:
    // 0x25abac: 0x10000082  b           . + 4 + (0x82 << 2)
label_25abb0:
    if (ctx->pc == 0x25ABB0u) {
        ctx->pc = 0x25ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABACu;
        // 0x25abb0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ABB4u;
        goto label_25abb4;
    }
    ctx->pc = 0x25ABACu;
    {
        const bool branch_taken_0x25abac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABACu;
        // 0x25abb0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abac) {
            ctx->pc = 0x25ADB8u;
            goto label_25adb8;
        }
    }
    ctx->pc = 0x25ABB4u;
label_25abb4:
    // 0x25abb4: 0xc08a05a  jal         func_228168
label_25abb8:
    if (ctx->pc == 0x25ABB8u) {
        ctx->pc = 0x25ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABB4u;
        // 0x25abb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ABBCu;
        goto label_25abbc;
    }
    ctx->pc = 0x25ABB4u;
    SET_GPR_U32(ctx, 31, 0x25ABBCu);
    ctx->pc = 0x25ABB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ABB4u;
    // 0x25abb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x25ABB4u, 0x25ABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ABBCu;
label_25abbc:
    // 0x25abbc: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_25abc0:
    if (ctx->pc == 0x25ABC0u) {
        ctx->pc = 0x25ABC4u;
        goto label_25abc4;
    }
    ctx->pc = 0x25ABBCu;
    {
        const bool branch_taken_0x25abbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25abbc) {
            ctx->pc = 0x25ACD0u;
            goto label_25acd0;
        }
    }
    ctx->pc = 0x25ABC4u;
label_25abc4:
    // 0x25abc4: 0xc0874fa  jal         func_21D3E8
label_25abc8:
    if (ctx->pc == 0x25ABC8u) {
        ctx->pc = 0x25ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABC4u;
        // 0x25abc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ABCCu;
        goto label_25abcc;
    }
    ctx->pc = 0x25ABC4u;
    SET_GPR_U32(ctx, 31, 0x25ABCCu);
    ctx->pc = 0x25ABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ABC4u;
    // 0x25abc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25ABC4u, 0x25ABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ABCCu;
label_25abcc:
    // 0x25abcc: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25abccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_25abd0:
    // 0x25abd0: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_25abd4:
    if (ctx->pc == 0x25ABD4u) {
        ctx->pc = 0x25ABD8u;
        goto label_25abd8;
    }
    ctx->pc = 0x25ABD0u;
    {
        const bool branch_taken_0x25abd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25abd0) {
            ctx->pc = 0x25ACD0u;
            goto label_25acd0;
        }
    }
    ctx->pc = 0x25ABD8u;
label_25abd8:
    // 0x25abd8: 0xc088ac6  jal         func_222B18
label_25abdc:
    if (ctx->pc == 0x25ABDCu) {
        ctx->pc = 0x25ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABD8u;
        // 0x25abdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ABE0u;
        goto label_25abe0;
    }
    ctx->pc = 0x25ABD8u;
    SET_GPR_U32(ctx, 31, 0x25ABE0u);
    ctx->pc = 0x25ABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ABD8u;
    // 0x25abdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x25ABD8u, 0x25ABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ABE0u;
label_25abe0:
    // 0x25abe0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x25abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_25abe4:
    // 0x25abe4: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x25abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_25abe8:
    // 0x25abe8: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x25abe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_25abec:
    // 0x25abec: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_25abf0:
    if (ctx->pc == 0x25ABF0u) {
        ctx->pc = 0x25ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABECu;
        // 0x25abf0: 0xac450054  sw          $a1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ABF4u;
        goto label_25abf4;
    }
    ctx->pc = 0x25ABECu;
    {
        const bool branch_taken_0x25abec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABECu;
        // 0x25abf0: 0xac450054  sw          $a1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abec) {
            ctx->pc = 0x25AC2Cu;
            goto label_25ac2c;
        }
    }
    ctx->pc = 0x25ABF4u;
label_25abf4:
    // 0x25abf4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25abf8:
    // 0x25abf8: 0x8e5100d8  lw          $s1, 0xD8($s2)
    ctx->pc = 0x25abf8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25abfc:
    // 0x25abfc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25abfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25ac00:
    // 0x25ac00: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25ac04:
    // 0x25ac04: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x25ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_25ac08:
    // 0x25ac08: 0x40f809  jalr        $v0
label_25ac0c:
    if (ctx->pc == 0x25AC0Cu) {
        ctx->pc = 0x25AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC08u;
        // 0x25ac0c: 0x8e5000d4  lw          $s0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AC10u;
        goto label_25ac10;
    }
    ctx->pc = 0x25AC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25AC10u);
        ctx->pc = 0x25AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC08u;
        // 0x25ac0c: 0x8e5000d4  lw          $s0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AC08u, 0x25AC10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AC10u;
label_25ac10:
    // 0x25ac10: 0x3c080026  lui         $t0, 0x26
    ctx->pc = 0x25ac10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)38 << 16));
label_25ac14:
    // 0x25ac14: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x25ac14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_25ac18:
    // 0x25ac18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25ac18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ac1c:
    // 0x25ac1c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25ac1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ac20:
    // 0x25ac20: 0x2508a8b8  addiu       $t0, $t0, -0x5748
    ctx->pc = 0x25ac20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944952));
label_25ac24:
    // 0x25ac24: 0xc04159e  jal         func_105678
label_25ac28:
    if (ctx->pc == 0x25AC28u) {
        ctx->pc = 0x25AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC24u;
        // 0x25ac28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AC2Cu;
        goto label_25ac2c;
    }
    ctx->pc = 0x25AC24u;
    SET_GPR_U32(ctx, 31, 0x25AC2Cu);
    ctx->pc = 0x25AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AC24u;
    // 0x25ac28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25AC24u, 0x25AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AC2Cu;
label_25ac2c:
    // 0x25ac2c: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x25ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25ac30:
    // 0x25ac30: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_25ac34:
    if (ctx->pc == 0x25AC34u) {
        ctx->pc = 0x25AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC30u;
        // 0x25ac34: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AC38u;
        goto label_25ac38;
    }
    ctx->pc = 0x25AC30u;
    {
        const bool branch_taken_0x25ac30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC30u;
        // 0x25ac34: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac30) {
            ctx->pc = 0x25AC78u;
            goto label_25ac78;
        }
    }
    ctx->pc = 0x25AC38u;
label_25ac38:
    // 0x25ac38: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25ac3c:
    // 0x25ac3c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25ac3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25ac40:
    // 0x25ac40: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25ac44:
    // 0x25ac44: 0x40f809  jalr        $v0
label_25ac48:
    if (ctx->pc == 0x25AC48u) {
        ctx->pc = 0x25AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC44u;
        // 0x25ac48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AC4Cu;
        goto label_25ac4c;
    }
    ctx->pc = 0x25AC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25AC4Cu);
        ctx->pc = 0x25AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC44u;
        // 0x25ac48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AC44u, 0x25AC4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AC4Cu;
label_25ac4c:
    // 0x25ac4c: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x25ac4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_25ac50:
    // 0x25ac50: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x25ac50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_25ac54:
    // 0x25ac54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25ac54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25ac58:
    // 0x25ac58: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x25ac58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25ac5c:
    // 0x25ac5c: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x25ac5cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25ac60:
    // 0x25ac60: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25ac60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25ac64:
    // 0x25ac64: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25ac64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ac68:
    // 0x25ac68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25ac68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25ac6c:
    // 0x25ac6c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25ac6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25ac70:
    // 0x25ac70: 0xc041664  jal         func_105990
label_25ac74:
    if (ctx->pc == 0x25AC74u) {
        ctx->pc = 0x25AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC70u;
        // 0x25ac74: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AC78u;
        goto label_25ac78;
    }
    ctx->pc = 0x25AC70u;
    SET_GPR_U32(ctx, 31, 0x25AC78u);
    ctx->pc = 0x25AC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AC70u;
    // 0x25ac74: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25AC70u, 0x25AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AC78u;
label_25ac78:
    // 0x25ac78: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_25ac7c:
    if (ctx->pc == 0x25AC7Cu) {
        ctx->pc = 0x25AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC78u;
        // 0x25ac7c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AC80u;
        goto label_25ac80;
    }
    ctx->pc = 0x25AC78u;
    {
        const bool branch_taken_0x25ac78 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC78u;
        // 0x25ac7c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac78) {
            ctx->pc = 0x25ACA0u;
            goto label_25aca0;
        }
    }
    ctx->pc = 0x25AC80u;
label_25ac80:
    // 0x25ac80: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25ac80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25ac84:
    // 0x25ac84: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25ac84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25ac88:
    // 0x25ac88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25ac88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25ac8c:
    // 0x25ac8c: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x25ac8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_25ac90:
    // 0x25ac90: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25ac90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_25ac94:
    // 0x25ac94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25ac94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25ac98:
    // 0x25ac98: 0xc041b20  jal         func_106C80
label_25ac9c:
    if (ctx->pc == 0x25AC9Cu) {
        ctx->pc = 0x25AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC98u;
        // 0x25ac9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ACA0u;
        goto label_25aca0;
    }
    ctx->pc = 0x25AC98u;
    SET_GPR_U32(ctx, 31, 0x25ACA0u);
    ctx->pc = 0x25AC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AC98u;
    // 0x25ac9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25AC98u, 0x25ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ACA0u;
label_25aca0:
    // 0x25aca0: 0xc05d484  jal         func_175210
label_25aca4:
    if (ctx->pc == 0x25ACA4u) {
        ctx->pc = 0x25ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACA0u;
        // 0x25aca4: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ACA8u;
        goto label_25aca8;
    }
    ctx->pc = 0x25ACA0u;
    SET_GPR_U32(ctx, 31, 0x25ACA8u);
    ctx->pc = 0x25ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ACA0u;
    // 0x25aca4: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25ACA0u, 0x25ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ACA8u;
label_25aca8:
    // 0x25aca8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25acac:
    // 0x25acac: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25acacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25acb0:
    // 0x25acb0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25acb4:
    // 0x25acb4: 0xa0f809  jalr        $a1
label_25acb8:
    if (ctx->pc == 0x25ACB8u) {
        ctx->pc = 0x25ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACB4u;
        // 0x25acb8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ACBCu;
        goto label_25acbc;
    }
    ctx->pc = 0x25ACB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25ACBCu);
        ctx->pc = 0x25ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACB4u;
        // 0x25acb8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ACB4u, 0x25ACBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25ACBCu;
label_25acbc:
    // 0x25acbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25acbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25acc0:
    // 0x25acc0: 0xc087016  jal         func_21C058
label_25acc4:
    if (ctx->pc == 0x25ACC4u) {
        ctx->pc = 0x25ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACC0u;
        // 0x25acc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ACC8u;
        goto label_25acc8;
    }
    ctx->pc = 0x25ACC0u;
    SET_GPR_U32(ctx, 31, 0x25ACC8u);
    ctx->pc = 0x25ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ACC0u;
    // 0x25acc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25ACC0u, 0x25ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ACC8u;
label_25acc8:
    // 0x25acc8: 0x10000032  b           . + 4 + (0x32 << 2)
label_25accc:
    if (ctx->pc == 0x25ACCCu) {
        ctx->pc = 0x25ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACC8u;
        // 0x25accc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ACD0u;
        goto label_25acd0;
    }
    ctx->pc = 0x25ACC8u;
    {
        const bool branch_taken_0x25acc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACC8u;
        // 0x25accc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25acc8) {
            ctx->pc = 0x25AD94u;
            goto label_25ad94;
        }
    }
    ctx->pc = 0x25ACD0u;
label_25acd0:
    // 0x25acd0: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_25acd4:
    if (ctx->pc == 0x25ACD4u) {
        ctx->pc = 0x25ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACD0u;
        // 0x25acd4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ACD8u;
        goto label_25acd8;
    }
    ctx->pc = 0x25ACD0u;
    {
        const bool branch_taken_0x25acd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACD0u;
        // 0x25acd4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25acd0) {
            ctx->pc = 0x25ACF4u;
            goto label_25acf4;
        }
    }
    ctx->pc = 0x25ACD8u;
label_25acd8:
    // 0x25acd8: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x25acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25acdc:
    // 0x25acdc: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25acdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25ace0:
    // 0x25ace0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25ace0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25ace4:
    // 0x25ace4: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x25ace4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_25ace8:
    // 0x25ace8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25ace8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25acec:
    // 0x25acec: 0xc04159e  jal         func_105678
label_25acf0:
    if (ctx->pc == 0x25ACF0u) {
        ctx->pc = 0x25ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACECu;
        // 0x25acf0: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ACF4u;
        goto label_25acf4;
    }
    ctx->pc = 0x25ACECu;
    SET_GPR_U32(ctx, 31, 0x25ACF4u);
    ctx->pc = 0x25ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ACECu;
    // 0x25acf0: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25ACECu, 0x25ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ACF4u;
label_25acf4:
    // 0x25acf4: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x25acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_25acf8:
    // 0x25acf8: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_25acfc:
    if (ctx->pc == 0x25ACFCu) {
        ctx->pc = 0x25ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACF8u;
        // 0x25acfc: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AD00u;
        goto label_25ad00;
    }
    ctx->pc = 0x25ACF8u;
    {
        const bool branch_taken_0x25acf8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACF8u;
        // 0x25acfc: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25acf8) {
            ctx->pc = 0x25AD40u;
            goto label_25ad40;
        }
    }
    ctx->pc = 0x25AD00u;
label_25ad00:
    // 0x25ad00: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25ad04:
    // 0x25ad04: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25ad04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25ad08:
    // 0x25ad08: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25ad0c:
    // 0x25ad0c: 0x40f809  jalr        $v0
label_25ad10:
    if (ctx->pc == 0x25AD10u) {
        ctx->pc = 0x25AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD0Cu;
        // 0x25ad10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AD14u;
        goto label_25ad14;
    }
    ctx->pc = 0x25AD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25AD14u);
        ctx->pc = 0x25AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD0Cu;
        // 0x25ad10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AD0Cu, 0x25AD14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AD14u;
label_25ad14:
    // 0x25ad14: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x25ad14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_25ad18:
    // 0x25ad18: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x25ad18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_25ad1c:
    // 0x25ad1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25ad1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25ad20:
    // 0x25ad20: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x25ad20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25ad24:
    // 0x25ad24: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x25ad24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25ad28:
    // 0x25ad28: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25ad28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25ad2c:
    // 0x25ad2c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25ad2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ad30:
    // 0x25ad30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25ad30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25ad34:
    // 0x25ad34: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25ad34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25ad38:
    // 0x25ad38: 0xc041664  jal         func_105990
label_25ad3c:
    if (ctx->pc == 0x25AD3Cu) {
        ctx->pc = 0x25AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD38u;
        // 0x25ad3c: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AD40u;
        goto label_25ad40;
    }
    ctx->pc = 0x25AD38u;
    SET_GPR_U32(ctx, 31, 0x25AD40u);
    ctx->pc = 0x25AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AD38u;
    // 0x25ad3c: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25AD38u, 0x25AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AD40u;
label_25ad40:
    // 0x25ad40: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_25ad44:
    if (ctx->pc == 0x25AD44u) {
        ctx->pc = 0x25AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD40u;
        // 0x25ad44: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AD48u;
        goto label_25ad48;
    }
    ctx->pc = 0x25AD40u;
    {
        const bool branch_taken_0x25ad40 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD40u;
        // 0x25ad44: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad40) {
            ctx->pc = 0x25AD68u;
            goto label_25ad68;
        }
    }
    ctx->pc = 0x25AD48u;
label_25ad48:
    // 0x25ad48: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x25ad48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25ad4c:
    // 0x25ad4c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25ad4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25ad50:
    // 0x25ad50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25ad50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25ad54:
    // 0x25ad54: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x25ad54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_25ad58:
    // 0x25ad58: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25ad58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_25ad5c:
    // 0x25ad5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25ad5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25ad60:
    // 0x25ad60: 0xc041b20  jal         func_106C80
label_25ad64:
    if (ctx->pc == 0x25AD64u) {
        ctx->pc = 0x25AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD60u;
        // 0x25ad64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AD68u;
        goto label_25ad68;
    }
    ctx->pc = 0x25AD60u;
    SET_GPR_U32(ctx, 31, 0x25AD68u);
    ctx->pc = 0x25AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AD60u;
    // 0x25ad64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25AD60u, 0x25AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AD68u;
label_25ad68:
    // 0x25ad68: 0xc05d484  jal         func_175210
label_25ad6c:
    if (ctx->pc == 0x25AD6Cu) {
        ctx->pc = 0x25AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD68u;
        // 0x25ad6c: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AD70u;
        goto label_25ad70;
    }
    ctx->pc = 0x25AD68u;
    SET_GPR_U32(ctx, 31, 0x25AD70u);
    ctx->pc = 0x25AD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AD68u;
    // 0x25ad6c: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25AD68u, 0x25AD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AD70u;
label_25ad70:
    // 0x25ad70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25ad74:
    // 0x25ad74: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25ad74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25ad78:
    // 0x25ad78: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25ad78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25ad7c:
    // 0x25ad7c: 0xa0f809  jalr        $a1
label_25ad80:
    if (ctx->pc == 0x25AD80u) {
        ctx->pc = 0x25AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD7Cu;
        // 0x25ad80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AD84u;
        goto label_25ad84;
    }
    ctx->pc = 0x25AD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25AD84u);
        ctx->pc = 0x25AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD7Cu;
        // 0x25ad80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AD7Cu, 0x25AD84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AD84u;
label_25ad84:
    // 0x25ad84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25ad84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25ad88:
    // 0x25ad88: 0xc087016  jal         func_21C058
label_25ad8c:
    if (ctx->pc == 0x25AD8Cu) {
        ctx->pc = 0x25AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD88u;
        // 0x25ad8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AD90u;
        goto label_25ad90;
    }
    ctx->pc = 0x25AD88u;
    SET_GPR_U32(ctx, 31, 0x25AD90u);
    ctx->pc = 0x25AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AD88u;
    // 0x25ad8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25AD88u, 0x25AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AD90u;
label_25ad90:
    // 0x25ad90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25ad90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25ad94:
    // 0x25ad94: 0xc05d53a  jal         func_1754E8
label_25ad98:
    if (ctx->pc == 0x25AD98u) {
        ctx->pc = 0x25AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD94u;
        // 0x25ad98: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AD9Cu;
        goto label_25ad9c;
    }
    ctx->pc = 0x25AD94u;
    SET_GPR_U32(ctx, 31, 0x25AD9Cu);
    ctx->pc = 0x25AD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AD94u;
    // 0x25ad98: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25AD94u, 0x25AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AD9Cu;
label_25ad9c:
    // 0x25ad9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25ad9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25ada0:
    // 0x25ada0: 0xc05d4f6  jal         func_1753D8
label_25ada4:
    if (ctx->pc == 0x25ADA4u) {
        ctx->pc = 0x25ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADA0u;
        // 0x25ada4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ADA8u;
        goto label_25ada8;
    }
    ctx->pc = 0x25ADA0u;
    SET_GPR_U32(ctx, 31, 0x25ADA8u);
    ctx->pc = 0x25ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ADA0u;
    // 0x25ada4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25ADA0u, 0x25ADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ADA8u;
label_25ada8:
    // 0x25ada8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25ada8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25adac:
    // 0x25adac: 0xc089990  jal         func_226640
label_25adb0:
    if (ctx->pc == 0x25ADB0u) {
        ctx->pc = 0x25ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADACu;
        // 0x25adb0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ADB4u;
        goto label_25adb4;
    }
    ctx->pc = 0x25ADACu;
    SET_GPR_U32(ctx, 31, 0x25ADB4u);
    ctx->pc = 0x25ADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ADACu;
    // 0x25adb0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25ADACu, 0x25ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ADB4u;
label_25adb4:
    // 0x25adb4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x25adb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25adb8:
    // 0x25adb8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x25adb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_25adbc:
    // 0x25adbc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x25adbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25adc0:
    // 0x25adc0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x25adc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25adc4:
    // 0x25adc4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x25adc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25adc8:
    // 0x25adc8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25adc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25adcc:
    // 0x25adcc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x25adccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25add0:
    // 0x25add0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x25add0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25add4:
    // 0x25add4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x25add4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25add8:
    // 0x25add8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25add8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25addc:
    // 0x25addc: 0x3e00008  jr          $ra
label_25ade0:
    if (ctx->pc == 0x25ADE0u) {
        ctx->pc = 0x25ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADDCu;
        // 0x25ade0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ADE4u;
        goto label_25ade4;
    }
    ctx->pc = 0x25ADDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADDCu;
        // 0x25ade0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ADDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25ADE4u;
label_25ade4:
    // 0x25ade4: 0x0  nop
    ctx->pc = 0x25ade4u;
    // NOP
    ctx->pc = 0x25ade8u;
}
