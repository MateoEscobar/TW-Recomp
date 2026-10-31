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

// Function: sub_0032AB28
// Address: 0x32ab28 - 0x32aed0
void sub_0032AB28_0x32ab28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032AB28_0x32ab28");
#endif

    switch (ctx->pc) {
        case 0x32ab28u: goto label_32ab28;
        case 0x32ab2cu: goto label_32ab2c;
        case 0x32ab30u: goto label_32ab30;
        case 0x32ab34u: goto label_32ab34;
        case 0x32ab38u: goto label_32ab38;
        case 0x32ab3cu: goto label_32ab3c;
        case 0x32ab40u: goto label_32ab40;
        case 0x32ab44u: goto label_32ab44;
        case 0x32ab48u: goto label_32ab48;
        case 0x32ab4cu: goto label_32ab4c;
        case 0x32ab50u: goto label_32ab50;
        case 0x32ab54u: goto label_32ab54;
        case 0x32ab58u: goto label_32ab58;
        case 0x32ab5cu: goto label_32ab5c;
        case 0x32ab60u: goto label_32ab60;
        case 0x32ab64u: goto label_32ab64;
        case 0x32ab68u: goto label_32ab68;
        case 0x32ab6cu: goto label_32ab6c;
        case 0x32ab70u: goto label_32ab70;
        case 0x32ab74u: goto label_32ab74;
        case 0x32ab78u: goto label_32ab78;
        case 0x32ab7cu: goto label_32ab7c;
        case 0x32ab80u: goto label_32ab80;
        case 0x32ab84u: goto label_32ab84;
        case 0x32ab88u: goto label_32ab88;
        case 0x32ab8cu: goto label_32ab8c;
        case 0x32ab90u: goto label_32ab90;
        case 0x32ab94u: goto label_32ab94;
        case 0x32ab98u: goto label_32ab98;
        case 0x32ab9cu: goto label_32ab9c;
        case 0x32aba0u: goto label_32aba0;
        case 0x32aba4u: goto label_32aba4;
        case 0x32aba8u: goto label_32aba8;
        case 0x32abacu: goto label_32abac;
        case 0x32abb0u: goto label_32abb0;
        case 0x32abb4u: goto label_32abb4;
        case 0x32abb8u: goto label_32abb8;
        case 0x32abbcu: goto label_32abbc;
        case 0x32abc0u: goto label_32abc0;
        case 0x32abc4u: goto label_32abc4;
        case 0x32abc8u: goto label_32abc8;
        case 0x32abccu: goto label_32abcc;
        case 0x32abd0u: goto label_32abd0;
        case 0x32abd4u: goto label_32abd4;
        case 0x32abd8u: goto label_32abd8;
        case 0x32abdcu: goto label_32abdc;
        case 0x32abe0u: goto label_32abe0;
        case 0x32abe4u: goto label_32abe4;
        case 0x32abe8u: goto label_32abe8;
        case 0x32abecu: goto label_32abec;
        case 0x32abf0u: goto label_32abf0;
        case 0x32abf4u: goto label_32abf4;
        case 0x32abf8u: goto label_32abf8;
        case 0x32abfcu: goto label_32abfc;
        case 0x32ac00u: goto label_32ac00;
        case 0x32ac04u: goto label_32ac04;
        case 0x32ac08u: goto label_32ac08;
        case 0x32ac0cu: goto label_32ac0c;
        case 0x32ac10u: goto label_32ac10;
        case 0x32ac14u: goto label_32ac14;
        case 0x32ac18u: goto label_32ac18;
        case 0x32ac1cu: goto label_32ac1c;
        case 0x32ac20u: goto label_32ac20;
        case 0x32ac24u: goto label_32ac24;
        case 0x32ac28u: goto label_32ac28;
        case 0x32ac2cu: goto label_32ac2c;
        case 0x32ac30u: goto label_32ac30;
        case 0x32ac34u: goto label_32ac34;
        case 0x32ac38u: goto label_32ac38;
        case 0x32ac3cu: goto label_32ac3c;
        case 0x32ac40u: goto label_32ac40;
        case 0x32ac44u: goto label_32ac44;
        case 0x32ac48u: goto label_32ac48;
        case 0x32ac4cu: goto label_32ac4c;
        case 0x32ac50u: goto label_32ac50;
        case 0x32ac54u: goto label_32ac54;
        case 0x32ac58u: goto label_32ac58;
        case 0x32ac5cu: goto label_32ac5c;
        case 0x32ac60u: goto label_32ac60;
        case 0x32ac64u: goto label_32ac64;
        case 0x32ac68u: goto label_32ac68;
        case 0x32ac6cu: goto label_32ac6c;
        case 0x32ac70u: goto label_32ac70;
        case 0x32ac74u: goto label_32ac74;
        case 0x32ac78u: goto label_32ac78;
        case 0x32ac7cu: goto label_32ac7c;
        case 0x32ac80u: goto label_32ac80;
        case 0x32ac84u: goto label_32ac84;
        case 0x32ac88u: goto label_32ac88;
        case 0x32ac8cu: goto label_32ac8c;
        case 0x32ac90u: goto label_32ac90;
        case 0x32ac94u: goto label_32ac94;
        case 0x32ac98u: goto label_32ac98;
        case 0x32ac9cu: goto label_32ac9c;
        case 0x32aca0u: goto label_32aca0;
        case 0x32aca4u: goto label_32aca4;
        case 0x32aca8u: goto label_32aca8;
        case 0x32acacu: goto label_32acac;
        case 0x32acb0u: goto label_32acb0;
        case 0x32acb4u: goto label_32acb4;
        case 0x32acb8u: goto label_32acb8;
        case 0x32acbcu: goto label_32acbc;
        case 0x32acc0u: goto label_32acc0;
        case 0x32acc4u: goto label_32acc4;
        case 0x32acc8u: goto label_32acc8;
        case 0x32acccu: goto label_32accc;
        case 0x32acd0u: goto label_32acd0;
        case 0x32acd4u: goto label_32acd4;
        case 0x32acd8u: goto label_32acd8;
        case 0x32acdcu: goto label_32acdc;
        case 0x32ace0u: goto label_32ace0;
        case 0x32ace4u: goto label_32ace4;
        case 0x32ace8u: goto label_32ace8;
        case 0x32acecu: goto label_32acec;
        case 0x32acf0u: goto label_32acf0;
        case 0x32acf4u: goto label_32acf4;
        case 0x32acf8u: goto label_32acf8;
        case 0x32acfcu: goto label_32acfc;
        case 0x32ad00u: goto label_32ad00;
        case 0x32ad04u: goto label_32ad04;
        case 0x32ad08u: goto label_32ad08;
        case 0x32ad0cu: goto label_32ad0c;
        case 0x32ad10u: goto label_32ad10;
        case 0x32ad14u: goto label_32ad14;
        case 0x32ad18u: goto label_32ad18;
        case 0x32ad1cu: goto label_32ad1c;
        case 0x32ad20u: goto label_32ad20;
        case 0x32ad24u: goto label_32ad24;
        case 0x32ad28u: goto label_32ad28;
        case 0x32ad2cu: goto label_32ad2c;
        case 0x32ad30u: goto label_32ad30;
        case 0x32ad34u: goto label_32ad34;
        case 0x32ad38u: goto label_32ad38;
        case 0x32ad3cu: goto label_32ad3c;
        case 0x32ad40u: goto label_32ad40;
        case 0x32ad44u: goto label_32ad44;
        case 0x32ad48u: goto label_32ad48;
        case 0x32ad4cu: goto label_32ad4c;
        case 0x32ad50u: goto label_32ad50;
        case 0x32ad54u: goto label_32ad54;
        case 0x32ad58u: goto label_32ad58;
        case 0x32ad5cu: goto label_32ad5c;
        case 0x32ad60u: goto label_32ad60;
        case 0x32ad64u: goto label_32ad64;
        case 0x32ad68u: goto label_32ad68;
        case 0x32ad6cu: goto label_32ad6c;
        case 0x32ad70u: goto label_32ad70;
        case 0x32ad74u: goto label_32ad74;
        case 0x32ad78u: goto label_32ad78;
        case 0x32ad7cu: goto label_32ad7c;
        case 0x32ad80u: goto label_32ad80;
        case 0x32ad84u: goto label_32ad84;
        case 0x32ad88u: goto label_32ad88;
        case 0x32ad8cu: goto label_32ad8c;
        case 0x32ad90u: goto label_32ad90;
        case 0x32ad94u: goto label_32ad94;
        case 0x32ad98u: goto label_32ad98;
        case 0x32ad9cu: goto label_32ad9c;
        case 0x32ada0u: goto label_32ada0;
        case 0x32ada4u: goto label_32ada4;
        case 0x32ada8u: goto label_32ada8;
        case 0x32adacu: goto label_32adac;
        case 0x32adb0u: goto label_32adb0;
        case 0x32adb4u: goto label_32adb4;
        case 0x32adb8u: goto label_32adb8;
        case 0x32adbcu: goto label_32adbc;
        case 0x32adc0u: goto label_32adc0;
        case 0x32adc4u: goto label_32adc4;
        case 0x32adc8u: goto label_32adc8;
        case 0x32adccu: goto label_32adcc;
        case 0x32add0u: goto label_32add0;
        case 0x32add4u: goto label_32add4;
        case 0x32add8u: goto label_32add8;
        case 0x32addcu: goto label_32addc;
        case 0x32ade0u: goto label_32ade0;
        case 0x32ade4u: goto label_32ade4;
        case 0x32ade8u: goto label_32ade8;
        case 0x32adecu: goto label_32adec;
        case 0x32adf0u: goto label_32adf0;
        case 0x32adf4u: goto label_32adf4;
        case 0x32adf8u: goto label_32adf8;
        case 0x32adfcu: goto label_32adfc;
        case 0x32ae00u: goto label_32ae00;
        case 0x32ae04u: goto label_32ae04;
        case 0x32ae08u: goto label_32ae08;
        case 0x32ae0cu: goto label_32ae0c;
        case 0x32ae10u: goto label_32ae10;
        case 0x32ae14u: goto label_32ae14;
        case 0x32ae18u: goto label_32ae18;
        case 0x32ae1cu: goto label_32ae1c;
        case 0x32ae20u: goto label_32ae20;
        case 0x32ae24u: goto label_32ae24;
        case 0x32ae28u: goto label_32ae28;
        case 0x32ae2cu: goto label_32ae2c;
        case 0x32ae30u: goto label_32ae30;
        case 0x32ae34u: goto label_32ae34;
        case 0x32ae38u: goto label_32ae38;
        case 0x32ae3cu: goto label_32ae3c;
        case 0x32ae40u: goto label_32ae40;
        case 0x32ae44u: goto label_32ae44;
        case 0x32ae48u: goto label_32ae48;
        case 0x32ae4cu: goto label_32ae4c;
        case 0x32ae50u: goto label_32ae50;
        case 0x32ae54u: goto label_32ae54;
        case 0x32ae58u: goto label_32ae58;
        case 0x32ae5cu: goto label_32ae5c;
        case 0x32ae60u: goto label_32ae60;
        case 0x32ae64u: goto label_32ae64;
        case 0x32ae68u: goto label_32ae68;
        case 0x32ae6cu: goto label_32ae6c;
        case 0x32ae70u: goto label_32ae70;
        case 0x32ae74u: goto label_32ae74;
        case 0x32ae78u: goto label_32ae78;
        case 0x32ae7cu: goto label_32ae7c;
        case 0x32ae80u: goto label_32ae80;
        case 0x32ae84u: goto label_32ae84;
        case 0x32ae88u: goto label_32ae88;
        case 0x32ae8cu: goto label_32ae8c;
        case 0x32ae90u: goto label_32ae90;
        case 0x32ae94u: goto label_32ae94;
        case 0x32ae98u: goto label_32ae98;
        case 0x32ae9cu: goto label_32ae9c;
        case 0x32aea0u: goto label_32aea0;
        case 0x32aea4u: goto label_32aea4;
        case 0x32aea8u: goto label_32aea8;
        case 0x32aeacu: goto label_32aeac;
        case 0x32aeb0u: goto label_32aeb0;
        case 0x32aeb4u: goto label_32aeb4;
        case 0x32aeb8u: goto label_32aeb8;
        case 0x32aebcu: goto label_32aebc;
        case 0x32aec0u: goto label_32aec0;
        case 0x32aec4u: goto label_32aec4;
        case 0x32aec8u: goto label_32aec8;
        case 0x32aeccu: goto label_32aecc;
        default: break;
    }

    ctx->pc = 0x32ab28u;

label_32ab28:
    // 0x32ab28: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x32ab28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_32ab2c:
    // 0x32ab2c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x32ab2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_32ab30:
    // 0x32ab30: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x32ab30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_32ab34:
    // 0x32ab34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ab34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32ab38:
    // 0x32ab38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x32ab38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_32ab3c:
    // 0x32ab3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32ab3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ab40:
    // 0x32ab40: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x32ab40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_32ab44:
    // 0x32ab44: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x32ab44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_32ab48:
    // 0x32ab48: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x32ab48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_32ab4c:
    // 0x32ab4c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x32ab4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_32ab50:
    // 0x32ab50: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x32ab50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_32ab54:
    // 0x32ab54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32ab54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32ab58:
    // 0x32ab58: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x32ab58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_32ab5c:
    // 0x32ab5c: 0x8e12002c  lw          $s2, 0x2C($s0)
    ctx->pc = 0x32ab5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_32ab60:
    // 0x32ab60: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x32ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_32ab64:
    // 0x32ab64: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x32ab64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_32ab68:
    // 0x32ab68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32ab6c:
    if (ctx->pc == 0x32AB6Cu) {
        ctx->pc = 0x32AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB68u;
        // 0x32ab6c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB70u;
        goto label_32ab70;
    }
    ctx->pc = 0x32AB68u;
    {
        const bool branch_taken_0x32ab68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB68u;
        // 0x32ab6c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab68) {
            ctx->pc = 0x32AB7Cu;
            goto label_32ab7c;
        }
    }
    ctx->pc = 0x32AB70u;
label_32ab70:
    // 0x32ab70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32ab70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32ab74:
    // 0x32ab74: 0xc0cb244  jal         func_32C910
label_32ab78:
    if (ctx->pc == 0x32AB78u) {
        ctx->pc = 0x32AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB74u;
        // 0x32ab78: 0x2405008a  addiu       $a1, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AB7Cu;
        goto label_32ab7c;
    }
    ctx->pc = 0x32AB74u;
    SET_GPR_U32(ctx, 31, 0x32AB7Cu);
    ctx->pc = 0x32AB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB74u;
    // 0x32ab78: 0x2405008a  addiu       $a1, $zero, 0x8A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C910u, 0x32AB74u, 0x32AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB7Cu;
label_32ab7c:
    // 0x32ab7c: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x32ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32ab80:
    // 0x32ab80: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x32ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_32ab84:
    // 0x32ab84: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x32ab84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32ab88:
    // 0x32ab88: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x32ab88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_32ab8c:
    // 0x32ab8c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x32ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32ab90:
    // 0x32ab90: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x32ab90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32ab94:
    // 0x32ab94: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x32ab94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_32ab98:
    // 0x32ab98: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32ab9c:
    // 0x32ab9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32aba0:
    // 0x32aba0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32aba0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32aba4:
    // 0x32aba4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32aba8:
    // 0x32aba8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_32abac:
    if (ctx->pc == 0x32ABACu) {
        ctx->pc = 0x32ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABA8u;
        // 0x32abac: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ABB0u;
        goto label_32abb0;
    }
    ctx->pc = 0x32ABA8u;
    {
        const bool branch_taken_0x32aba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABA8u;
        // 0x32abac: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aba8) {
            ctx->pc = 0x32ABC8u;
            goto label_32abc8;
        }
    }
    ctx->pc = 0x32ABB0u;
label_32abb0:
    // 0x32abb0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32abb4:
    // 0x32abb4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32abb8:
    // 0x32abb8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32abb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32abbc:
    // 0x32abbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32abc0:
    // 0x32abc0: 0x10000006  b           . + 4 + (0x6 << 2)
label_32abc4:
    if (ctx->pc == 0x32ABC4u) {
        ctx->pc = 0x32ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABC0u;
        // 0x32abc4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ABC8u;
        goto label_32abc8;
    }
    ctx->pc = 0x32ABC0u;
    {
        const bool branch_taken_0x32abc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABC0u;
        // 0x32abc4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32abc0) {
            ctx->pc = 0x32ABDCu;
            goto label_32abdc;
        }
    }
    ctx->pc = 0x32ABC8u;
label_32abc8:
    // 0x32abc8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32abcc:
    // 0x32abcc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32abccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32abd0:
    // 0x32abd0: 0x40f809  jalr        $v0
label_32abd4:
    if (ctx->pc == 0x32ABD4u) {
        ctx->pc = 0x32ABD8u;
        goto label_32abd8;
    }
    ctx->pc = 0x32ABD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32ABD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ABD0u, 0x32ABD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32ABD8u;
label_32abd8:
    // 0x32abd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32abd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32abdc:
    // 0x32abdc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32abdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_32abe0:
    // 0x32abe0: 0x2416005b  addiu       $s6, $zero, 0x5B
    ctx->pc = 0x32abe0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_32abe4:
    // 0x32abe4: 0x2415005d  addiu       $s5, $zero, 0x5D
    ctx->pc = 0x32abe4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
label_32abe8:
    // 0x32abe8: 0x3c1e0057  lui         $fp, 0x57
    ctx->pc = 0x32abe8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)87 << 16));
label_32abec:
    // 0x32abec: 0x3c170057  lui         $s7, 0x57
    ctx->pc = 0x32abecu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)87 << 16));
label_32abf0:
    // 0x32abf0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x32abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_32abf4:
    // 0x32abf4: 0x2623000a  addiu       $v1, $s1, 0xA
    ctx->pc = 0x32abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_32abf8:
    // 0x32abf8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x32abf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_32abfc:
    // 0x32abfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_32ac00:
    if (ctx->pc == 0x32AC00u) {
        ctx->pc = 0x32AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABFCu;
        // 0x32ac00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC04u;
        goto label_32ac04;
    }
    ctx->pc = 0x32ABFCu;
    {
        const bool branch_taken_0x32abfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABFCu;
        // 0x32ac00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32abfc) {
            ctx->pc = 0x32AC0Cu;
            goto label_32ac0c;
        }
    }
    ctx->pc = 0x32AC04u;
label_32ac04:
    // 0x32ac04: 0xc0cb244  jal         func_32C910
label_32ac08:
    if (ctx->pc == 0x32AC08u) {
        ctx->pc = 0x32AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC04u;
        // 0x32ac08: 0x2625008a  addiu       $a1, $s1, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC0Cu;
        goto label_32ac0c;
    }
    ctx->pc = 0x32AC04u;
    SET_GPR_U32(ctx, 31, 0x32AC0Cu);
    ctx->pc = 0x32AC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC04u;
    // 0x32ac08: 0x2625008a  addiu       $a1, $s1, 0x8A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 138));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C910u, 0x32AC04u, 0x32AC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC0Cu;
label_32ac0c:
    // 0x32ac0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32ac10:
    // 0x32ac10: 0x1076001e  beq         $v1, $s6, . + 4 + (0x1E << 2)
label_32ac14:
    if (ctx->pc == 0x32AC14u) {
        ctx->pc = 0x32AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC10u;
        // 0x32ac14: 0x2862005c  slti        $v0, $v1, 0x5C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)92) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC18u;
        goto label_32ac18;
    }
    ctx->pc = 0x32AC10u;
    {
        const bool branch_taken_0x32ac10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x32AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC10u;
        // 0x32ac14: 0x2862005c  slti        $v0, $v1, 0x5C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)92) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac10) {
            ctx->pc = 0x32AC8Cu;
            goto label_32ac8c;
        }
    }
    ctx->pc = 0x32AC18u;
label_32ac18:
    // 0x32ac18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_32ac1c:
    if (ctx->pc == 0x32AC1Cu) {
        ctx->pc = 0x32AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC18u;
        // 0x32ac1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC20u;
        goto label_32ac20;
    }
    ctx->pc = 0x32AC18u;
    {
        const bool branch_taken_0x32ac18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC18u;
        // 0x32ac1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac18) {
            ctx->pc = 0x32AC38u;
            goto label_32ac38;
        }
    }
    ctx->pc = 0x32AC20u;
label_32ac20:
    // 0x32ac20: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_32ac24:
    if (ctx->pc == 0x32AC24u) {
        ctx->pc = 0x32AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC20u;
        // 0x32ac24: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC28u;
        goto label_32ac28;
    }
    ctx->pc = 0x32AC20u;
    {
        const bool branch_taken_0x32ac20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC20u;
        // 0x32ac24: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac20) {
            ctx->pc = 0x32AC48u;
            goto label_32ac48;
        }
    }
    ctx->pc = 0x32AC28u;
label_32ac28:
    // 0x32ac28: 0x50620059  beql        $v1, $v0, . + 4 + (0x59 << 2)
label_32ac2c:
    if (ctx->pc == 0x32AC2Cu) {
        ctx->pc = 0x32AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC28u;
        // 0x32ac2c: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC30u;
        goto label_32ac30;
    }
    ctx->pc = 0x32AC28u;
    {
        const bool branch_taken_0x32ac28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32ac28) {
            ctx->pc = 0x32AC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AC28u;
            // 0x32ac2c: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AD90u;
            goto label_32ad90;
        }
    }
    ctx->pc = 0x32AC30u;
label_32ac30:
    // 0x32ac30: 0x1000005e  b           . + 4 + (0x5E << 2)
label_32ac34:
    if (ctx->pc == 0x32AC34u) {
        ctx->pc = 0x32AC38u;
        goto label_32ac38;
    }
    ctx->pc = 0x32AC30u;
    {
        const bool branch_taken_0x32ac30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ac30) {
            ctx->pc = 0x32ADACu;
            goto label_32adac;
        }
    }
    ctx->pc = 0x32AC38u;
label_32ac38:
    // 0x32ac38: 0x5075003a  beql        $v1, $s5, . + 4 + (0x3A << 2)
label_32ac3c:
    if (ctx->pc == 0x32AC3Cu) {
        ctx->pc = 0x32AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC38u;
        // 0x32ac3c: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC40u;
        goto label_32ac40;
    }
    ctx->pc = 0x32AC38u;
    {
        const bool branch_taken_0x32ac38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x32ac38) {
            ctx->pc = 0x32AC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AC38u;
            // 0x32ac3c: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AD24u;
            goto label_32ad24;
        }
    }
    ctx->pc = 0x32AC40u;
label_32ac40:
    // 0x32ac40: 0x1000005a  b           . + 4 + (0x5A << 2)
label_32ac44:
    if (ctx->pc == 0x32AC44u) {
        ctx->pc = 0x32AC48u;
        goto label_32ac48;
    }
    ctx->pc = 0x32AC40u;
    {
        const bool branch_taken_0x32ac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ac40) {
            ctx->pc = 0x32ADACu;
            goto label_32adac;
        }
    }
    ctx->pc = 0x32AC48u;
label_32ac48:
    // 0x32ac48: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x32ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32ac4c:
    // 0x32ac4c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32ac50:
    // 0x32ac50: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x32ac50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_32ac54:
    // 0x32ac54: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_32ac58:
    if (ctx->pc == 0x32AC58u) {
        ctx->pc = 0x32AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC54u;
        // 0x32ac58: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC5Cu;
        goto label_32ac5c;
    }
    ctx->pc = 0x32AC54u;
    {
        const bool branch_taken_0x32ac54 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC54u;
        // 0x32ac58: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac54) {
            ctx->pc = 0x32AC74u;
            goto label_32ac74;
        }
    }
    ctx->pc = 0x32AC5Cu;
label_32ac5c:
    // 0x32ac5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ac5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32ac60:
    // 0x32ac60: 0x27c554f0  addiu       $a1, $fp, 0x54F0
    ctx->pc = 0x32ac60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 21744));
label_32ac64:
    // 0x32ac64: 0xc0ca8bc  jal         func_32A2F0
label_32ac68:
    if (ctx->pc == 0x32AC68u) {
        ctx->pc = 0x32AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC64u;
        // 0x32ac68: 0x2406011b  addiu       $a2, $zero, 0x11B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC6Cu;
        goto label_32ac6c;
    }
    ctx->pc = 0x32AC64u;
    SET_GPR_U32(ctx, 31, 0x32AC6Cu);
    ctx->pc = 0x32AC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC64u;
    // 0x32ac68: 0x2406011b  addiu       $a2, $zero, 0x11B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A2F0u, 0x32AC64u, 0x32AC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC6Cu;
label_32ac6c:
    // 0x32ac6c: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_32ac70:
    if (ctx->pc == 0x32AC70u) {
        ctx->pc = 0x32AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC6Cu;
        // 0x32ac70: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC74u;
        goto label_32ac74;
    }
    ctx->pc = 0x32AC6Cu;
    {
        const bool branch_taken_0x32ac6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC6Cu;
        // 0x32ac70: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac6c) {
            ctx->pc = 0x32ABF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32abf4;
        }
    }
    ctx->pc = 0x32AC74u;
label_32ac74:
    // 0x32ac74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ac74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32ac78:
    // 0x32ac78: 0x26e55508  addiu       $a1, $s7, 0x5508
    ctx->pc = 0x32ac78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 21768));
label_32ac7c:
    // 0x32ac7c: 0xc0ca8bc  jal         func_32A2F0
label_32ac80:
    if (ctx->pc == 0x32AC80u) {
        ctx->pc = 0x32AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC7Cu;
        // 0x32ac80: 0x2406011c  addiu       $a2, $zero, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC84u;
        goto label_32ac84;
    }
    ctx->pc = 0x32AC7Cu;
    SET_GPR_U32(ctx, 31, 0x32AC84u);
    ctx->pc = 0x32AC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC7Cu;
    // 0x32ac80: 0x2406011c  addiu       $a2, $zero, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A2F0u, 0x32AC7Cu, 0x32AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC84u;
label_32ac84:
    // 0x32ac84: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_32ac88:
    if (ctx->pc == 0x32AC88u) {
        ctx->pc = 0x32AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC84u;
        // 0x32ac88: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AC8Cu;
        goto label_32ac8c;
    }
    ctx->pc = 0x32AC84u;
    {
        const bool branch_taken_0x32ac84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC84u;
        // 0x32ac88: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac84) {
            ctx->pc = 0x32ABF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32abf4;
        }
    }
    ctx->pc = 0x32AC8Cu;
label_32ac8c:
    // 0x32ac8c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x32ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32ac90:
    // 0x32ac90: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32ac90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32ac94:
    // 0x32ac94: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32ac98:
    // 0x32ac98: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x32ac98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_32ac9c:
    // 0x32ac9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32ac9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32aca0:
    // 0x32aca0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32aca4:
    // 0x32aca4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32aca8:
    // 0x32aca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32aca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32acac:
    // 0x32acac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32acacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32acb0:
    // 0x32acb0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32acb4:
    if (ctx->pc == 0x32ACB4u) {
        ctx->pc = 0x32ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACB0u;
        // 0x32acb4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ACB8u;
        goto label_32acb8;
    }
    ctx->pc = 0x32ACB0u;
    {
        const bool branch_taken_0x32acb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACB0u;
        // 0x32acb4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32acb0) {
            ctx->pc = 0x32ACD0u;
            goto label_32acd0;
        }
    }
    ctx->pc = 0x32ACB8u;
label_32acb8:
    // 0x32acb8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32acbc:
    // 0x32acbc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32acc0:
    // 0x32acc0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32acc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32acc4:
    // 0x32acc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32acc8:
    // 0x32acc8: 0x10000006  b           . + 4 + (0x6 << 2)
label_32accc:
    if (ctx->pc == 0x32ACCCu) {
        ctx->pc = 0x32ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACC8u;
        // 0x32accc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ACD0u;
        goto label_32acd0;
    }
    ctx->pc = 0x32ACC8u;
    {
        const bool branch_taken_0x32acc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACC8u;
        // 0x32accc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32acc8) {
            ctx->pc = 0x32ACE4u;
            goto label_32ace4;
        }
    }
    ctx->pc = 0x32ACD0u;
label_32acd0:
    // 0x32acd0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32acd4:
    // 0x32acd4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32acd8:
    // 0x32acd8: 0x40f809  jalr        $v0
label_32acdc:
    if (ctx->pc == 0x32ACDCu) {
        ctx->pc = 0x32ACE0u;
        goto label_32ace0;
    }
    ctx->pc = 0x32ACD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32ACE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ACD8u, 0x32ACE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32ACE0u;
label_32ace0:
    // 0x32ace0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32ace0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ace4:
    // 0x32ace4: 0x1496ffc2  bne         $a0, $s6, . + 4 + (-0x3E << 2)
label_32ace8:
    if (ctx->pc == 0x32ACE8u) {
        ctx->pc = 0x32ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACE4u;
        // 0x32ace8: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ACECu;
        goto label_32acec;
    }
    ctx->pc = 0x32ACE4u;
    {
        const bool branch_taken_0x32ace4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 22));
        ctx->pc = 0x32ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACE4u;
        // 0x32ace8: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ace4) {
            ctx->pc = 0x32ABF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32abf0;
        }
    }
    ctx->pc = 0x32ACECu;
label_32acec:
    // 0x32acec: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x32acecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32acf0:
    // 0x32acf0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x32acf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_32acf4:
    // 0x32acf4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32acf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32acf8:
    // 0x32acf8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32acfc:
    // 0x32acfc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x32acfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_32ad00:
    // 0x32ad00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32ad00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32ad04:
    // 0x32ad04: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32ad08:
    // 0x32ad08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32ad0c:
    // 0x32ad0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32ad0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ad10:
    // 0x32ad10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32ad14:
    // 0x32ad14: 0x14800032  bnez        $a0, . + 4 + (0x32 << 2)
label_32ad18:
    if (ctx->pc == 0x32AD18u) {
        ctx->pc = 0x32AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD14u;
        // 0x32ad18: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD1Cu;
        goto label_32ad1c;
    }
    ctx->pc = 0x32AD14u;
    {
        const bool branch_taken_0x32ad14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD14u;
        // 0x32ad18: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad14) {
            ctx->pc = 0x32ADE0u;
            goto label_32ade0;
        }
    }
    ctx->pc = 0x32AD1Cu;
label_32ad1c:
    // 0x32ad1c: 0x10000037  b           . + 4 + (0x37 << 2)
label_32ad20:
    if (ctx->pc == 0x32AD20u) {
        ctx->pc = 0x32AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD1Cu;
        // 0x32ad20: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD24u;
        goto label_32ad24;
    }
    ctx->pc = 0x32AD1Cu;
    {
        const bool branch_taken_0x32ad1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD1Cu;
        // 0x32ad20: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad1c) {
            ctx->pc = 0x32ADFCu;
            goto label_32adfc;
        }
    }
    ctx->pc = 0x32AD24u;
label_32ad24:
    // 0x32ad24: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32ad24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32ad28:
    // 0x32ad28: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32ad2c:
    // 0x32ad2c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x32ad2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_32ad30:
    // 0x32ad30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32ad30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32ad34:
    // 0x32ad34: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32ad38:
    // 0x32ad38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32ad3c:
    // 0x32ad3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32ad3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ad40:
    // 0x32ad40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32ad44:
    // 0x32ad44: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32ad48:
    if (ctx->pc == 0x32AD48u) {
        ctx->pc = 0x32AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD44u;
        // 0x32ad48: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD4Cu;
        goto label_32ad4c;
    }
    ctx->pc = 0x32AD44u;
    {
        const bool branch_taken_0x32ad44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD44u;
        // 0x32ad48: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad44) {
            ctx->pc = 0x32AD64u;
            goto label_32ad64;
        }
    }
    ctx->pc = 0x32AD4Cu;
label_32ad4c:
    // 0x32ad4c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32ad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32ad50:
    // 0x32ad50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32ad54:
    // 0x32ad54: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32ad54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32ad58:
    // 0x32ad58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32ad5c:
    // 0x32ad5c: 0x10000006  b           . + 4 + (0x6 << 2)
label_32ad60:
    if (ctx->pc == 0x32AD60u) {
        ctx->pc = 0x32AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD5Cu;
        // 0x32ad60: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD64u;
        goto label_32ad64;
    }
    ctx->pc = 0x32AD5Cu;
    {
        const bool branch_taken_0x32ad5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD5Cu;
        // 0x32ad60: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad5c) {
            ctx->pc = 0x32AD78u;
            goto label_32ad78;
        }
    }
    ctx->pc = 0x32AD64u;
label_32ad64:
    // 0x32ad64: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32ad68:
    // 0x32ad68: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32ad6c:
    // 0x32ad6c: 0x40f809  jalr        $v0
label_32ad70:
    if (ctx->pc == 0x32AD70u) {
        ctx->pc = 0x32AD74u;
        goto label_32ad74;
    }
    ctx->pc = 0x32AD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32AD74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AD6Cu, 0x32AD74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32AD74u;
label_32ad74:
    // 0x32ad74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32ad74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ad78:
    // 0x32ad78: 0x1495ff9d  bne         $a0, $s5, . + 4 + (-0x63 << 2)
label_32ad7c:
    if (ctx->pc == 0x32AD7Cu) {
        ctx->pc = 0x32AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD78u;
        // 0x32ad7c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD80u;
        goto label_32ad80;
    }
    ctx->pc = 0x32AD78u;
    {
        const bool branch_taken_0x32ad78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x32AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD78u;
        // 0x32ad7c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad78) {
            ctx->pc = 0x32ABF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32abf0;
        }
    }
    ctx->pc = 0x32AD80u;
label_32ad80:
    // 0x32ad80: 0x12600024  beqz        $s3, . + 4 + (0x24 << 2)
label_32ad84:
    if (ctx->pc == 0x32AD84u) {
        ctx->pc = 0x32AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD80u;
        // 0x32ad84: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD88u;
        goto label_32ad88;
    }
    ctx->pc = 0x32AD80u;
    {
        const bool branch_taken_0x32ad80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD80u;
        // 0x32ad84: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad80) {
            ctx->pc = 0x32AE14u;
            goto label_32ae14;
        }
    }
    ctx->pc = 0x32AD88u;
label_32ad88:
    // 0x32ad88: 0x1000ffda  b           . + 4 + (-0x26 << 2)
label_32ad8c:
    if (ctx->pc == 0x32AD8Cu) {
        ctx->pc = 0x32AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD88u;
        // 0x32ad8c: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AD90u;
        goto label_32ad90;
    }
    ctx->pc = 0x32AD88u;
    {
        const bool branch_taken_0x32ad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD88u;
        // 0x32ad8c: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad88) {
            ctx->pc = 0x32ACF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32acf4;
        }
    }
    ctx->pc = 0x32AD90u;
label_32ad90:
    // 0x32ad90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ad90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32ad94:
    // 0x32ad94: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32ad98:
    // 0x32ad98: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x32ad98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_32ad9c:
    // 0x32ad9c: 0xc0ca8fa  jal         func_32A3E8
label_32ada0:
    if (ctx->pc == 0x32ADA0u) {
        ctx->pc = 0x32ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD9Cu;
        // 0x32ada0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADA4u;
        goto label_32ada4;
    }
    ctx->pc = 0x32AD9Cu;
    SET_GPR_U32(ctx, 31, 0x32ADA4u);
    ctx->pc = 0x32ADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD9Cu;
    // 0x32ada0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A3E8u, 0x32AD9Cu, 0x32ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ADA4u;
label_32ada4:
    // 0x32ada4: 0x1000ff93  b           . + 4 + (-0x6D << 2)
label_32ada8:
    if (ctx->pc == 0x32ADA8u) {
        ctx->pc = 0x32ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADA4u;
        // 0x32ada8: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADACu;
        goto label_32adac;
    }
    ctx->pc = 0x32ADA4u;
    {
        const bool branch_taken_0x32ada4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADA4u;
        // 0x32ada8: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ada4) {
            ctx->pc = 0x32ABF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32abf4;
        }
    }
    ctx->pc = 0x32ADACu;
label_32adac:
    // 0x32adac: 0x52800007  beql        $s4, $zero, . + 4 + (0x7 << 2)
label_32adb0:
    if (ctx->pc == 0x32ADB0u) {
        ctx->pc = 0x32ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADACu;
        // 0x32adb0: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADB4u;
        goto label_32adb4;
    }
    ctx->pc = 0x32ADACu;
    {
        const bool branch_taken_0x32adac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x32adac) {
            ctx->pc = 0x32ADB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32ADACu;
            // 0x32adb0: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32ADCCu;
            goto label_32adcc;
        }
    }
    ctx->pc = 0x32ADB4u;
label_32adb4:
    // 0x32adb4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x32adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32adb8:
    // 0x32adb8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32adb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32adbc:
    // 0x32adbc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32adc0:
    // 0x32adc0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x32adc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_32adc4:
    // 0x32adc4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32adc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32adc8:
    // 0x32adc8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32adcc:
    // 0x32adcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32adccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32add0:
    // 0x32add0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32add0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32add4:
    // 0x32add4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32add4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32add8:
    // 0x32add8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32addc:
    if (ctx->pc == 0x32ADDCu) {
        ctx->pc = 0x32ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADD8u;
        // 0x32addc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADE0u;
        goto label_32ade0;
    }
    ctx->pc = 0x32ADD8u;
    {
        const bool branch_taken_0x32add8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADD8u;
        // 0x32addc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32add8) {
            ctx->pc = 0x32ADF8u;
            goto label_32adf8;
        }
    }
    ctx->pc = 0x32ADE0u;
label_32ade0:
    // 0x32ade0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32ade4:
    // 0x32ade4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32ade8:
    // 0x32ade8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32ade8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32adec:
    // 0x32adec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32adecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32adf0:
    // 0x32adf0: 0x10000006  b           . + 4 + (0x6 << 2)
label_32adf4:
    if (ctx->pc == 0x32ADF4u) {
        ctx->pc = 0x32ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADF0u;
        // 0x32adf4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32ADF8u;
        goto label_32adf8;
    }
    ctx->pc = 0x32ADF0u;
    {
        const bool branch_taken_0x32adf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADF0u;
        // 0x32adf4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32adf0) {
            ctx->pc = 0x32AE0Cu;
            goto label_32ae0c;
        }
    }
    ctx->pc = 0x32ADF8u;
label_32adf8:
    // 0x32adf8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32adfc:
    // 0x32adfc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32ae00:
    // 0x32ae00: 0x40f809  jalr        $v0
label_32ae04:
    if (ctx->pc == 0x32AE04u) {
        ctx->pc = 0x32AE08u;
        goto label_32ae08;
    }
    ctx->pc = 0x32AE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32AE08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AE00u, 0x32AE08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32AE08u;
label_32ae08:
    // 0x32ae08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32ae08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ae0c:
    // 0x32ae0c: 0x1000ff78  b           . + 4 + (-0x88 << 2)
label_32ae10:
    if (ctx->pc == 0x32AE10u) {
        ctx->pc = 0x32AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE0Cu;
        // 0x32ae10: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE14u;
        goto label_32ae14;
    }
    ctx->pc = 0x32AE0Cu;
    {
        const bool branch_taken_0x32ae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE0Cu;
        // 0x32ae10: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ae0c) {
            ctx->pc = 0x32ABF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32abf0;
        }
    }
    ctx->pc = 0x32AE14u;
label_32ae14:
    // 0x32ae14: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x32ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32ae18:
    // 0x32ae18: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32ae18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32ae1c:
    // 0x32ae1c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32ae20:
    // 0x32ae20: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x32ae20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_32ae24:
    // 0x32ae24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32ae24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32ae28:
    // 0x32ae28: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32ae2c:
    // 0x32ae2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32ae30:
    // 0x32ae30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32ae30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ae34:
    // 0x32ae34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32ae38:
    // 0x32ae38: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32ae3c:
    if (ctx->pc == 0x32AE3Cu) {
        ctx->pc = 0x32AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE38u;
        // 0x32ae3c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE40u;
        goto label_32ae40;
    }
    ctx->pc = 0x32AE38u;
    {
        const bool branch_taken_0x32ae38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE38u;
        // 0x32ae3c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ae38) {
            ctx->pc = 0x32AE58u;
            goto label_32ae58;
        }
    }
    ctx->pc = 0x32AE40u;
label_32ae40:
    // 0x32ae40: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32ae44:
    // 0x32ae44: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32ae48:
    // 0x32ae48: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32ae48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32ae4c:
    // 0x32ae4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32ae50:
    // 0x32ae50: 0x10000006  b           . + 4 + (0x6 << 2)
label_32ae54:
    if (ctx->pc == 0x32AE54u) {
        ctx->pc = 0x32AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE50u;
        // 0x32ae54: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE58u;
        goto label_32ae58;
    }
    ctx->pc = 0x32AE50u;
    {
        const bool branch_taken_0x32ae50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE50u;
        // 0x32ae54: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ae50) {
            ctx->pc = 0x32AE6Cu;
            goto label_32ae6c;
        }
    }
    ctx->pc = 0x32AE58u;
label_32ae58:
    // 0x32ae58: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32ae5c:
    // 0x32ae5c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32ae60:
    // 0x32ae60: 0x40f809  jalr        $v0
label_32ae64:
    if (ctx->pc == 0x32AE64u) {
        ctx->pc = 0x32AE68u;
        goto label_32ae68;
    }
    ctx->pc = 0x32AE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32AE68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AE60u, 0x32AE68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32AE68u;
label_32ae68:
    // 0x32ae68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32ae68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32ae6c:
    // 0x32ae6c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32ae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_32ae70:
    // 0x32ae70: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x32ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32ae74:
    // 0x32ae74: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32ae78:
    // 0x32ae78: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x32ae78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_32ae7c:
    // 0x32ae7c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_32ae80:
    if (ctx->pc == 0x32AE80u) {
        ctx->pc = 0x32AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE7Cu;
        // 0x32ae80: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE84u;
        goto label_32ae84;
    }
    ctx->pc = 0x32AE7Cu;
    {
        const bool branch_taken_0x32ae7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE7Cu;
        // 0x32ae80: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ae7c) {
            ctx->pc = 0x32AE9Cu;
            goto label_32ae9c;
        }
    }
    ctx->pc = 0x32AE84u;
label_32ae84:
    // 0x32ae84: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x32ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_32ae88:
    // 0x32ae88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32ae88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32ae8c:
    // 0x32ae8c: 0x2626fffb  addiu       $a2, $s1, -0x5
    ctx->pc = 0x32ae8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967291));
label_32ae90:
    // 0x32ae90: 0xc0cbebc  jal         func_32FAF0
label_32ae94:
    if (ctx->pc == 0x32AE94u) {
        ctx->pc = 0x32AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE90u;
        // 0x32ae94: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE98u;
        goto label_32ae98;
    }
    ctx->pc = 0x32AE90u;
    SET_GPR_U32(ctx, 31, 0x32AE98u);
    ctx->pc = 0x32AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AE90u;
    // 0x32ae94: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FAF0u, 0x32AE90u, 0x32AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE98u;
label_32ae98:
    // 0x32ae98: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x32ae98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_32ae9c:
    // 0x32ae9c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x32ae9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_32aea0:
    // 0x32aea0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x32aea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_32aea4:
    // 0x32aea4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x32aea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32aea8:
    // 0x32aea8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x32aea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32aeac:
    // 0x32aeac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x32aeacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32aeb0:
    // 0x32aeb0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x32aeb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32aeb4:
    // 0x32aeb4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x32aeb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32aeb8:
    // 0x32aeb8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x32aeb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32aebc:
    // 0x32aebc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x32aebcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32aec0:
    // 0x32aec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32aec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32aec4:
    // 0x32aec4: 0x3e00008  jr          $ra
label_32aec8:
    if (ctx->pc == 0x32AEC8u) {
        ctx->pc = 0x32AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEC4u;
        // 0x32aec8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AECCu;
        goto label_32aecc;
    }
    ctx->pc = 0x32AEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEC4u;
        // 0x32aec8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AECCu;
label_32aecc:
    // 0x32aecc: 0x0  nop
    ctx->pc = 0x32aeccu;
    // NOP
    ctx->pc = 0x32aed0u;
}
