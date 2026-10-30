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

// Function: sub_0031ACB8
// Address: 0x31acb8 - 0x31af68
void sub_0031ACB8_0x31acb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031ACB8_0x31acb8");
#endif

    switch (ctx->pc) {
        case 0x31acb8u: goto label_31acb8;
        case 0x31acbcu: goto label_31acbc;
        case 0x31acc0u: goto label_31acc0;
        case 0x31acc4u: goto label_31acc4;
        case 0x31acc8u: goto label_31acc8;
        case 0x31acccu: goto label_31accc;
        case 0x31acd0u: goto label_31acd0;
        case 0x31acd4u: goto label_31acd4;
        case 0x31acd8u: goto label_31acd8;
        case 0x31acdcu: goto label_31acdc;
        case 0x31ace0u: goto label_31ace0;
        case 0x31ace4u: goto label_31ace4;
        case 0x31ace8u: goto label_31ace8;
        case 0x31acecu: goto label_31acec;
        case 0x31acf0u: goto label_31acf0;
        case 0x31acf4u: goto label_31acf4;
        case 0x31acf8u: goto label_31acf8;
        case 0x31acfcu: goto label_31acfc;
        case 0x31ad00u: goto label_31ad00;
        case 0x31ad04u: goto label_31ad04;
        case 0x31ad08u: goto label_31ad08;
        case 0x31ad0cu: goto label_31ad0c;
        case 0x31ad10u: goto label_31ad10;
        case 0x31ad14u: goto label_31ad14;
        case 0x31ad18u: goto label_31ad18;
        case 0x31ad1cu: goto label_31ad1c;
        case 0x31ad20u: goto label_31ad20;
        case 0x31ad24u: goto label_31ad24;
        case 0x31ad28u: goto label_31ad28;
        case 0x31ad2cu: goto label_31ad2c;
        case 0x31ad30u: goto label_31ad30;
        case 0x31ad34u: goto label_31ad34;
        case 0x31ad38u: goto label_31ad38;
        case 0x31ad3cu: goto label_31ad3c;
        case 0x31ad40u: goto label_31ad40;
        case 0x31ad44u: goto label_31ad44;
        case 0x31ad48u: goto label_31ad48;
        case 0x31ad4cu: goto label_31ad4c;
        case 0x31ad50u: goto label_31ad50;
        case 0x31ad54u: goto label_31ad54;
        case 0x31ad58u: goto label_31ad58;
        case 0x31ad5cu: goto label_31ad5c;
        case 0x31ad60u: goto label_31ad60;
        case 0x31ad64u: goto label_31ad64;
        case 0x31ad68u: goto label_31ad68;
        case 0x31ad6cu: goto label_31ad6c;
        case 0x31ad70u: goto label_31ad70;
        case 0x31ad74u: goto label_31ad74;
        case 0x31ad78u: goto label_31ad78;
        case 0x31ad7cu: goto label_31ad7c;
        case 0x31ad80u: goto label_31ad80;
        case 0x31ad84u: goto label_31ad84;
        case 0x31ad88u: goto label_31ad88;
        case 0x31ad8cu: goto label_31ad8c;
        case 0x31ad90u: goto label_31ad90;
        case 0x31ad94u: goto label_31ad94;
        case 0x31ad98u: goto label_31ad98;
        case 0x31ad9cu: goto label_31ad9c;
        case 0x31ada0u: goto label_31ada0;
        case 0x31ada4u: goto label_31ada4;
        case 0x31ada8u: goto label_31ada8;
        case 0x31adacu: goto label_31adac;
        case 0x31adb0u: goto label_31adb0;
        case 0x31adb4u: goto label_31adb4;
        case 0x31adb8u: goto label_31adb8;
        case 0x31adbcu: goto label_31adbc;
        case 0x31adc0u: goto label_31adc0;
        case 0x31adc4u: goto label_31adc4;
        case 0x31adc8u: goto label_31adc8;
        case 0x31adccu: goto label_31adcc;
        case 0x31add0u: goto label_31add0;
        case 0x31add4u: goto label_31add4;
        case 0x31add8u: goto label_31add8;
        case 0x31addcu: goto label_31addc;
        case 0x31ade0u: goto label_31ade0;
        case 0x31ade4u: goto label_31ade4;
        case 0x31ade8u: goto label_31ade8;
        case 0x31adecu: goto label_31adec;
        case 0x31adf0u: goto label_31adf0;
        case 0x31adf4u: goto label_31adf4;
        case 0x31adf8u: goto label_31adf8;
        case 0x31adfcu: goto label_31adfc;
        case 0x31ae00u: goto label_31ae00;
        case 0x31ae04u: goto label_31ae04;
        case 0x31ae08u: goto label_31ae08;
        case 0x31ae0cu: goto label_31ae0c;
        case 0x31ae10u: goto label_31ae10;
        case 0x31ae14u: goto label_31ae14;
        case 0x31ae18u: goto label_31ae18;
        case 0x31ae1cu: goto label_31ae1c;
        case 0x31ae20u: goto label_31ae20;
        case 0x31ae24u: goto label_31ae24;
        case 0x31ae28u: goto label_31ae28;
        case 0x31ae2cu: goto label_31ae2c;
        case 0x31ae30u: goto label_31ae30;
        case 0x31ae34u: goto label_31ae34;
        case 0x31ae38u: goto label_31ae38;
        case 0x31ae3cu: goto label_31ae3c;
        case 0x31ae40u: goto label_31ae40;
        case 0x31ae44u: goto label_31ae44;
        case 0x31ae48u: goto label_31ae48;
        case 0x31ae4cu: goto label_31ae4c;
        case 0x31ae50u: goto label_31ae50;
        case 0x31ae54u: goto label_31ae54;
        case 0x31ae58u: goto label_31ae58;
        case 0x31ae5cu: goto label_31ae5c;
        case 0x31ae60u: goto label_31ae60;
        case 0x31ae64u: goto label_31ae64;
        case 0x31ae68u: goto label_31ae68;
        case 0x31ae6cu: goto label_31ae6c;
        case 0x31ae70u: goto label_31ae70;
        case 0x31ae74u: goto label_31ae74;
        case 0x31ae78u: goto label_31ae78;
        case 0x31ae7cu: goto label_31ae7c;
        case 0x31ae80u: goto label_31ae80;
        case 0x31ae84u: goto label_31ae84;
        case 0x31ae88u: goto label_31ae88;
        case 0x31ae8cu: goto label_31ae8c;
        case 0x31ae90u: goto label_31ae90;
        case 0x31ae94u: goto label_31ae94;
        case 0x31ae98u: goto label_31ae98;
        case 0x31ae9cu: goto label_31ae9c;
        case 0x31aea0u: goto label_31aea0;
        case 0x31aea4u: goto label_31aea4;
        case 0x31aea8u: goto label_31aea8;
        case 0x31aeacu: goto label_31aeac;
        case 0x31aeb0u: goto label_31aeb0;
        case 0x31aeb4u: goto label_31aeb4;
        case 0x31aeb8u: goto label_31aeb8;
        case 0x31aebcu: goto label_31aebc;
        case 0x31aec0u: goto label_31aec0;
        case 0x31aec4u: goto label_31aec4;
        case 0x31aec8u: goto label_31aec8;
        case 0x31aeccu: goto label_31aecc;
        case 0x31aed0u: goto label_31aed0;
        case 0x31aed4u: goto label_31aed4;
        case 0x31aed8u: goto label_31aed8;
        case 0x31aedcu: goto label_31aedc;
        case 0x31aee0u: goto label_31aee0;
        case 0x31aee4u: goto label_31aee4;
        case 0x31aee8u: goto label_31aee8;
        case 0x31aeecu: goto label_31aeec;
        case 0x31aef0u: goto label_31aef0;
        case 0x31aef4u: goto label_31aef4;
        case 0x31aef8u: goto label_31aef8;
        case 0x31aefcu: goto label_31aefc;
        case 0x31af00u: goto label_31af00;
        case 0x31af04u: goto label_31af04;
        case 0x31af08u: goto label_31af08;
        case 0x31af0cu: goto label_31af0c;
        case 0x31af10u: goto label_31af10;
        case 0x31af14u: goto label_31af14;
        case 0x31af18u: goto label_31af18;
        case 0x31af1cu: goto label_31af1c;
        case 0x31af20u: goto label_31af20;
        case 0x31af24u: goto label_31af24;
        case 0x31af28u: goto label_31af28;
        case 0x31af2cu: goto label_31af2c;
        case 0x31af30u: goto label_31af30;
        case 0x31af34u: goto label_31af34;
        case 0x31af38u: goto label_31af38;
        case 0x31af3cu: goto label_31af3c;
        case 0x31af40u: goto label_31af40;
        case 0x31af44u: goto label_31af44;
        case 0x31af48u: goto label_31af48;
        case 0x31af4cu: goto label_31af4c;
        case 0x31af50u: goto label_31af50;
        case 0x31af54u: goto label_31af54;
        case 0x31af58u: goto label_31af58;
        case 0x31af5cu: goto label_31af5c;
        case 0x31af60u: goto label_31af60;
        case 0x31af64u: goto label_31af64;
        default: break;
    }

    ctx->pc = 0x31acb8u;

label_31acb8:
    // 0x31acb8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x31acb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_31acbc:
    // 0x31acbc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x31acbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_31acc0:
    // 0x31acc0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x31acc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_31acc4:
    // 0x31acc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31acc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31acc8:
    // 0x31acc8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31acc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_31accc:
    // 0x31accc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x31acccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_31acd0:
    // 0x31acd0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x31acd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31acd4:
    // 0x31acd4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x31acd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_31acd8:
    // 0x31acd8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x31acd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_31acdc:
    // 0x31acdc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x31acdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_31ace0:
    // 0x31ace0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x31ace0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31ace4:
    // 0x31ace4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31ace4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31ace8:
    // 0x31ace8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x31ace8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_31acec:
    // 0x31acec: 0xc08a61a  jal         func_229868
label_31acf0:
    if (ctx->pc == 0x31ACF0u) {
        ctx->pc = 0x31ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ACECu;
        // 0x31acf0: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ACF4u;
        goto label_31acf4;
    }
    ctx->pc = 0x31ACECu;
    SET_GPR_U32(ctx, 31, 0x31ACF4u);
    ctx->pc = 0x31ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ACECu;
    // 0x31acf0: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x31ACECu, 0x31ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ACF4u;
label_31acf4:
    // 0x31acf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31acf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31acf8:
    // 0x31acf8: 0xc0e4060  jal         func_390180
label_31acfc:
    if (ctx->pc == 0x31ACFCu) {
        ctx->pc = 0x31ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ACF8u;
        // 0x31acfc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AD00u;
        goto label_31ad00;
    }
    ctx->pc = 0x31ACF8u;
    SET_GPR_U32(ctx, 31, 0x31AD00u);
    ctx->pc = 0x31ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ACF8u;
    // 0x31acfc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x31ACF8u, 0x31AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD00u;
label_31ad00:
    // 0x31ad00: 0xc08a61a  jal         func_229868
label_31ad04:
    if (ctx->pc == 0x31AD04u) {
        ctx->pc = 0x31AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD00u;
        // 0x31ad04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AD08u;
        goto label_31ad08;
    }
    ctx->pc = 0x31AD00u;
    SET_GPR_U32(ctx, 31, 0x31AD08u);
    ctx->pc = 0x31AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD00u;
    // 0x31ad04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x31AD00u, 0x31AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD08u;
label_31ad08:
    // 0x31ad08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x31ad08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ad0c:
    // 0x31ad0c: 0xc087502  jal         func_21D408
label_31ad10:
    if (ctx->pc == 0x31AD10u) {
        ctx->pc = 0x31AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD0Cu;
        // 0x31ad10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AD14u;
        goto label_31ad14;
    }
    ctx->pc = 0x31AD0Cu;
    SET_GPR_U32(ctx, 31, 0x31AD14u);
    ctx->pc = 0x31AD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD0Cu;
    // 0x31ad10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31AD0Cu, 0x31AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD14u;
label_31ad14:
    // 0x31ad14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31ad14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ad18:
    // 0x31ad18: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x31ad18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_31ad1c:
    // 0x31ad1c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_31ad20:
    if (ctx->pc == 0x31AD20u) {
        ctx->pc = 0x31AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD1Cu;
        // 0x31ad20: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AD24u;
        goto label_31ad24;
    }
    ctx->pc = 0x31AD1Cu;
    {
        const bool branch_taken_0x31ad1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD1Cu;
        // 0x31ad20: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad1c) {
            ctx->pc = 0x31AD30u;
            goto label_31ad30;
        }
    }
    ctx->pc = 0x31AD24u;
label_31ad24:
    // 0x31ad24: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x31ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_31ad28:
    // 0x31ad28: 0x10000002  b           . + 4 + (0x2 << 2)
label_31ad2c:
    if (ctx->pc == 0x31AD2Cu) {
        ctx->pc = 0x31AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD28u;
        // 0x31ad2c: 0x8c520040  lw          $s2, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AD30u;
        goto label_31ad30;
    }
    ctx->pc = 0x31AD28u;
    {
        const bool branch_taken_0x31ad28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD28u;
        // 0x31ad2c: 0x8c520040  lw          $s2, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad28) {
            ctx->pc = 0x31AD34u;
            goto label_31ad34;
        }
    }
    ctx->pc = 0x31AD30u;
label_31ad30:
    // 0x31ad30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31ad30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ad34:
    // 0x31ad34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31ad34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31ad38:
    // 0x31ad38: 0xc0a2acc  jal         func_28AB30
label_31ad3c:
    if (ctx->pc == 0x31AD3Cu) {
        ctx->pc = 0x31AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD38u;
        // 0x31ad3c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AD40u;
        goto label_31ad40;
    }
    ctx->pc = 0x31AD38u;
    SET_GPR_U32(ctx, 31, 0x31AD40u);
    ctx->pc = 0x31AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD38u;
    // 0x31ad3c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB30u, 0x31AD38u, 0x31AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD40u;
label_31ad40:
    // 0x31ad40: 0x5050007e  beql        $v0, $s0, . + 4 + (0x7E << 2)
label_31ad44:
    if (ctx->pc == 0x31AD44u) {
        ctx->pc = 0x31AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD40u;
        // 0x31ad44: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AD48u;
        goto label_31ad48;
    }
    ctx->pc = 0x31AD40u;
    {
        const bool branch_taken_0x31ad40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x31ad40) {
            ctx->pc = 0x31AD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AD40u;
            // 0x31ad44: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AF3Cu;
            goto label_31af3c;
        }
    }
    ctx->pc = 0x31AD48u;
label_31ad48:
    // 0x31ad48: 0xc088edc  jal         func_223B70
label_31ad4c:
    if (ctx->pc == 0x31AD4Cu) {
        ctx->pc = 0x31AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD48u;
        // 0x31ad4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AD50u;
        goto label_31ad50;
    }
    ctx->pc = 0x31AD48u;
    SET_GPR_U32(ctx, 31, 0x31AD50u);
    ctx->pc = 0x31AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD48u;
    // 0x31ad4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x31AD48u, 0x31AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD50u;
label_31ad50:
    // 0x31ad50: 0x5050007a  beql        $v0, $s0, . + 4 + (0x7A << 2)
label_31ad54:
    if (ctx->pc == 0x31AD54u) {
        ctx->pc = 0x31AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD50u;
        // 0x31ad54: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AD58u;
        goto label_31ad58;
    }
    ctx->pc = 0x31AD50u;
    {
        const bool branch_taken_0x31ad50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x31ad50) {
            ctx->pc = 0x31AD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AD50u;
            // 0x31ad54: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AF3Cu;
            goto label_31af3c;
        }
    }
    ctx->pc = 0x31AD58u;
label_31ad58:
    // 0x31ad58: 0xc0e409a  jal         func_390268
label_31ad5c:
    if (ctx->pc == 0x31AD5Cu) {
        ctx->pc = 0x31AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD58u;
        // 0x31ad5c: 0x26240124  addiu       $a0, $s1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AD60u;
        goto label_31ad60;
    }
    ctx->pc = 0x31AD58u;
    SET_GPR_U32(ctx, 31, 0x31AD60u);
    ctx->pc = 0x31AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD58u;
    // 0x31ad5c: 0x26240124  addiu       $a0, $s1, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31AD58u, 0x31AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD60u;
label_31ad60:
    // 0x31ad60: 0x54400076  bnel        $v0, $zero, . + 4 + (0x76 << 2)
label_31ad64:
    if (ctx->pc == 0x31AD64u) {
        ctx->pc = 0x31AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD60u;
        // 0x31ad64: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AD68u;
        goto label_31ad68;
    }
    ctx->pc = 0x31AD60u;
    {
        const bool branch_taken_0x31ad60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ad60) {
            ctx->pc = 0x31AD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AD60u;
            // 0x31ad64: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AF3Cu;
            goto label_31af3c;
        }
    }
    ctx->pc = 0x31AD68u;
label_31ad68:
    // 0x31ad68: 0xc08a08a  jal         func_228228
label_31ad6c:
    if (ctx->pc == 0x31AD6Cu) {
        ctx->pc = 0x31AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD68u;
        // 0x31ad6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AD70u;
        goto label_31ad70;
    }
    ctx->pc = 0x31AD68u;
    SET_GPR_U32(ctx, 31, 0x31AD70u);
    ctx->pc = 0x31AD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD68u;
    // 0x31ad6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x31AD68u, 0x31AD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD70u;
label_31ad70:
    // 0x31ad70: 0x54400072  bnel        $v0, $zero, . + 4 + (0x72 << 2)
label_31ad74:
    if (ctx->pc == 0x31AD74u) {
        ctx->pc = 0x31AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD70u;
        // 0x31ad74: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AD78u;
        goto label_31ad78;
    }
    ctx->pc = 0x31AD70u;
    {
        const bool branch_taken_0x31ad70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ad70) {
            ctx->pc = 0x31AD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AD70u;
            // 0x31ad74: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AF3Cu;
            goto label_31af3c;
        }
    }
    ctx->pc = 0x31AD78u;
label_31ad78:
    // 0x31ad78: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x31ad78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_31ad7c:
    // 0x31ad7c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x31ad7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31ad80:
    // 0x31ad80: 0xc0a44ac  jal         func_2912B0
label_31ad84:
    if (ctx->pc == 0x31AD84u) {
        ctx->pc = 0x31AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD80u;
        // 0x31ad84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AD88u;
        goto label_31ad88;
    }
    ctx->pc = 0x31AD80u;
    SET_GPR_U32(ctx, 31, 0x31AD88u);
    ctx->pc = 0x31AD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD80u;
    // 0x31ad84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2912B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2912B0u, 0x31AD80u, 0x31AD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD88u;
label_31ad88:
    // 0x31ad88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31ad88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ad8c:
    // 0x31ad8c: 0x1260006a  beqz        $s3, . + 4 + (0x6A << 2)
label_31ad90:
    if (ctx->pc == 0x31AD90u) {
        ctx->pc = 0x31AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD8Cu;
        // 0x31ad90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AD94u;
        goto label_31ad94;
    }
    ctx->pc = 0x31AD8Cu;
    {
        const bool branch_taken_0x31ad8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD8Cu;
        // 0x31ad90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad8c) {
            ctx->pc = 0x31AF38u;
            goto label_31af38;
        }
    }
    ctx->pc = 0x31AD94u;
label_31ad94:
    // 0x31ad94: 0xc0a4162  jal         func_290588
label_31ad98:
    if (ctx->pc == 0x31AD98u) {
        ctx->pc = 0x31AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD94u;
        // 0x31ad98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AD9Cu;
        goto label_31ad9c;
    }
    ctx->pc = 0x31AD94u;
    SET_GPR_U32(ctx, 31, 0x31AD9Cu);
    ctx->pc = 0x31AD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD94u;
    // 0x31ad98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290588u, 0x31AD94u, 0x31AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD9Cu;
label_31ad9c:
    // 0x31ad9c: 0x50400067  beql        $v0, $zero, . + 4 + (0x67 << 2)
label_31ada0:
    if (ctx->pc == 0x31ADA0u) {
        ctx->pc = 0x31ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD9Cu;
        // 0x31ada0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ADA4u;
        goto label_31ada4;
    }
    ctx->pc = 0x31AD9Cu;
    {
        const bool branch_taken_0x31ad9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ad9c) {
            ctx->pc = 0x31ADA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AD9Cu;
            // 0x31ada0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AF3Cu;
            goto label_31af3c;
        }
    }
    ctx->pc = 0x31ADA4u;
label_31ada4:
    // 0x31ada4: 0xc0a40ec  jal         func_2903B0
label_31ada8:
    if (ctx->pc == 0x31ADA8u) {
        ctx->pc = 0x31ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADA4u;
        // 0x31ada8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ADACu;
        goto label_31adac;
    }
    ctx->pc = 0x31ADA4u;
    SET_GPR_U32(ctx, 31, 0x31ADACu);
    ctx->pc = 0x31ADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ADA4u;
    // 0x31ada8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2903B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2903B0u, 0x31ADA4u, 0x31ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ADACu;
label_31adac:
    // 0x31adac: 0x14500014  bne         $v0, $s0, . + 4 + (0x14 << 2)
label_31adb0:
    if (ctx->pc == 0x31ADB0u) {
        ctx->pc = 0x31ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADACu;
        // 0x31adb0: 0x2403006f  addiu       $v1, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ADB4u;
        goto label_31adb4;
    }
    ctx->pc = 0x31ADACu;
    {
        const bool branch_taken_0x31adac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x31ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADACu;
        // 0x31adb0: 0x2403006f  addiu       $v1, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31adac) {
            ctx->pc = 0x31AE00u;
            goto label_31ae00;
        }
    }
    ctx->pc = 0x31ADB4u;
label_31adb4:
    // 0x31adb4: 0x92c20052  lbu         $v0, 0x52($s6)
    ctx->pc = 0x31adb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 82)));
label_31adb8:
    // 0x31adb8: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x31adb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_31adbc:
    // 0x31adbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31adbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31adc0:
    // 0x31adc0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x31adc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_31adc4:
    // 0x31adc4: 0xc0a3658  jal         func_28D960
label_31adc8:
    if (ctx->pc == 0x31ADC8u) {
        ctx->pc = 0x31ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADC4u;
        // 0x31adc8: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ADCCu;
        goto label_31adcc;
    }
    ctx->pc = 0x31ADC4u;
    SET_GPR_U32(ctx, 31, 0x31ADCCu);
    ctx->pc = 0x31ADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ADC4u;
    // 0x31adc8: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x31ADC4u, 0x31ADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ADCCu;
label_31adcc:
    // 0x31adcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31adccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31add0:
    // 0x31add0: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_31add4:
    if (ctx->pc == 0x31ADD4u) {
        ctx->pc = 0x31ADD8u;
        goto label_31add8;
    }
    ctx->pc = 0x31ADD0u;
    {
        const bool branch_taken_0x31add0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x31add0) {
            ctx->pc = 0x31AE00u;
            goto label_31ae00;
        }
    }
    ctx->pc = 0x31ADD8u;
label_31add8:
    // 0x31add8: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x31add8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_31addc:
    // 0x31addc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x31addcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_31ade0:
    // 0x31ade0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_31ade4:
    if (ctx->pc == 0x31ADE4u) {
        ctx->pc = 0x31ADE8u;
        goto label_31ade8;
    }
    ctx->pc = 0x31ADE0u;
    {
        const bool branch_taken_0x31ade0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ade0) {
            ctx->pc = 0x31AE00u;
            goto label_31ae00;
        }
    }
    ctx->pc = 0x31ADE8u;
label_31ade8:
    // 0x31ade8: 0xc0a35f6  jal         func_28D7D8
label_31adec:
    if (ctx->pc == 0x31ADECu) {
        ctx->pc = 0x31ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ADE8u;
        // 0x31adec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31ADF0u;
        goto label_31adf0;
    }
    ctx->pc = 0x31ADE8u;
    SET_GPR_U32(ctx, 31, 0x31ADF0u);
    ctx->pc = 0x31ADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ADE8u;
    // 0x31adec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x31ADE8u, 0x31ADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ADF0u;
label_31adf0:
    // 0x31adf0: 0x8223002c  lb          $v1, 0x2C($s1)
    ctx->pc = 0x31adf0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_31adf4:
    // 0x31adf4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x31adf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_31adf8:
    // 0x31adf8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_31adfc:
    if (ctx->pc == 0x31ADFCu) {
        ctx->pc = 0x31AE00u;
        goto label_31ae00;
    }
    ctx->pc = 0x31ADF8u;
    {
        const bool branch_taken_0x31adf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31adf8) {
            ctx->pc = 0x31ADE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ade8;
        }
    }
    ctx->pc = 0x31AE00u;
label_31ae00:
    // 0x31ae00: 0xc0a40d2  jal         func_290348
label_31ae04:
    if (ctx->pc == 0x31AE04u) {
        ctx->pc = 0x31AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE00u;
        // 0x31ae04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AE08u;
        goto label_31ae08;
    }
    ctx->pc = 0x31AE00u;
    SET_GPR_U32(ctx, 31, 0x31AE08u);
    ctx->pc = 0x31AE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AE00u;
    // 0x31ae04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x31AE00u, 0x31AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AE08u;
label_31ae08:
    // 0x31ae08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31ae0c:
    // 0x31ae0c: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
label_31ae10:
    if (ctx->pc == 0x31AE10u) {
        ctx->pc = 0x31AE14u;
        goto label_31ae14;
    }
    ctx->pc = 0x31AE0Cu;
    {
        const bool branch_taken_0x31ae0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31ae0c) {
            ctx->pc = 0x31AE64u;
            goto label_31ae64;
        }
    }
    ctx->pc = 0x31AE14u;
label_31ae14:
    // 0x31ae14: 0x52400031  beql        $s2, $zero, . + 4 + (0x31 << 2)
label_31ae18:
    if (ctx->pc == 0x31AE18u) {
        ctx->pc = 0x31AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE14u;
        // 0x31ae18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AE1Cu;
        goto label_31ae1c;
    }
    ctx->pc = 0x31AE14u;
    {
        const bool branch_taken_0x31ae14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ae14) {
            ctx->pc = 0x31AE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AE14u;
            // 0x31ae18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AEDCu;
            goto label_31aedc;
        }
    }
    ctx->pc = 0x31AE1Cu;
label_31ae1c:
    // 0x31ae1c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x31ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_31ae20:
    // 0x31ae20: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x31ae20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_31ae24:
    // 0x31ae24: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31ae28:
    // 0x31ae28: 0x40f809  jalr        $v0
label_31ae2c:
    if (ctx->pc == 0x31AE2Cu) {
        ctx->pc = 0x31AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE28u;
        // 0x31ae2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AE30u;
        goto label_31ae30;
    }
    ctx->pc = 0x31AE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31AE30u);
        ctx->pc = 0x31AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE28u;
        // 0x31ae2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AE28u, 0x31AE30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31AE30u;
label_31ae30:
    // 0x31ae30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31ae30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ae34:
    // 0x31ae34: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x31ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_31ae38:
    // 0x31ae38: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
label_31ae3c:
    if (ctx->pc == 0x31AE3Cu) {
        ctx->pc = 0x31AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE38u;
        // 0x31ae3c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AE40u;
        goto label_31ae40;
    }
    ctx->pc = 0x31AE38u;
    {
        const bool branch_taken_0x31ae38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE38u;
        // 0x31ae3c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae38) {
            ctx->pc = 0x31AF38u;
            goto label_31af38;
        }
    }
    ctx->pc = 0x31AE40u;
label_31ae40:
    // 0x31ae40: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
label_31ae44:
    if (ctx->pc == 0x31AE44u) {
        ctx->pc = 0x31AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE40u;
        // 0x31ae44: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AE48u;
        goto label_31ae48;
    }
    ctx->pc = 0x31AE40u;
    {
        const bool branch_taken_0x31ae40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE40u;
        // 0x31ae44: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae40) {
            ctx->pc = 0x31AF38u;
            goto label_31af38;
        }
    }
    ctx->pc = 0x31AE48u;
label_31ae48:
    // 0x31ae48: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
label_31ae4c:
    if (ctx->pc == 0x31AE4Cu) {
        ctx->pc = 0x31AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE48u;
        // 0x31ae4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AE50u;
        goto label_31ae50;
    }
    ctx->pc = 0x31AE48u;
    {
        const bool branch_taken_0x31ae48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE48u;
        // 0x31ae4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae48) {
            ctx->pc = 0x31AF38u;
            goto label_31af38;
        }
    }
    ctx->pc = 0x31AE50u;
label_31ae50:
    // 0x31ae50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31ae50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31ae54:
    // 0x31ae54: 0xc0a33f8  jal         func_28CFE0
label_31ae58:
    if (ctx->pc == 0x31AE58u) {
        ctx->pc = 0x31AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE54u;
        // 0x31ae58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AE5Cu;
        goto label_31ae5c;
    }
    ctx->pc = 0x31AE54u;
    SET_GPR_U32(ctx, 31, 0x31AE5Cu);
    ctx->pc = 0x31AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AE54u;
    // 0x31ae58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x31AE54u, 0x31AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AE5Cu;
label_31ae5c:
    // 0x31ae5c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_31ae60:
    if (ctx->pc == 0x31AE60u) {
        ctx->pc = 0x31AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE5Cu;
        // 0x31ae60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AE64u;
        goto label_31ae64;
    }
    ctx->pc = 0x31AE5Cu;
    {
        const bool branch_taken_0x31ae5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE5Cu;
        // 0x31ae60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae5c) {
            ctx->pc = 0x31AEDCu;
            goto label_31aedc;
        }
    }
    ctx->pc = 0x31AE64u;
label_31ae64:
    // 0x31ae64: 0xc0a2fc0  jal         func_28BF00
label_31ae68:
    if (ctx->pc == 0x31AE68u) {
        ctx->pc = 0x31AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE64u;
        // 0x31ae68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AE6Cu;
        goto label_31ae6c;
    }
    ctx->pc = 0x31AE64u;
    SET_GPR_U32(ctx, 31, 0x31AE6Cu);
    ctx->pc = 0x31AE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AE64u;
    // 0x31ae68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x31AE64u, 0x31AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AE6Cu;
label_31ae6c:
    // 0x31ae6c: 0x86840092  lh          $a0, 0x92($s4)
    ctx->pc = 0x31ae6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_31ae70:
    // 0x31ae70: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x31ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_31ae74:
    // 0x31ae74: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x31ae74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_31ae78:
    // 0x31ae78: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x31ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_31ae7c:
    // 0x31ae7c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x31ae7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_31ae80:
    // 0x31ae80: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x31ae80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_31ae84:
    // 0x31ae84: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_31ae88:
    // 0x31ae88: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x31ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31ae8c:
    // 0x31ae8c: 0xc0cdb38  jal         func_336CE0
label_31ae90:
    if (ctx->pc == 0x31AE90u) {
        ctx->pc = 0x31AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE8Cu;
        // 0x31ae90: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AE94u;
        goto label_31ae94;
    }
    ctx->pc = 0x31AE8Cu;
    SET_GPR_U32(ctx, 31, 0x31AE94u);
    ctx->pc = 0x31AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AE8Cu;
    // 0x31ae90: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x31AE8Cu, 0x31AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AE94u;
label_31ae94:
    // 0x31ae94: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x31ae94u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_31ae98:
    // 0x31ae98: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x31ae98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31ae9c:
    // 0x31ae9c: 0x0  nop
    ctx->pc = 0x31ae9cu;
    // NOP
label_31aea0:
    // 0x31aea0: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_31aea4:
    if (ctx->pc == 0x31AEA4u) {
        ctx->pc = 0x31AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AEA0u;
        // 0x31aea4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AEA8u;
        goto label_31aea8;
    }
    ctx->pc = 0x31AEA0u;
    {
        const bool branch_taken_0x31aea0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AEA0u;
        // 0x31aea4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aea0) {
            ctx->pc = 0x31AF3Cu;
            goto label_31af3c;
        }
    }
    ctx->pc = 0x31AEA8u;
label_31aea8:
    // 0x31aea8: 0x5240000c  beql        $s2, $zero, . + 4 + (0xC << 2)
label_31aeac:
    if (ctx->pc == 0x31AEACu) {
        ctx->pc = 0x31AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AEA8u;
        // 0x31aeac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AEB0u;
        goto label_31aeb0;
    }
    ctx->pc = 0x31AEA8u;
    {
        const bool branch_taken_0x31aea8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aea8) {
            ctx->pc = 0x31AEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AEA8u;
            // 0x31aeac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AEDCu;
            goto label_31aedc;
        }
    }
    ctx->pc = 0x31AEB0u;
label_31aeb0:
    // 0x31aeb0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x31aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_31aeb4:
    // 0x31aeb4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x31aeb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_31aeb8:
    // 0x31aeb8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31aebc:
    // 0x31aebc: 0x40f809  jalr        $v0
label_31aec0:
    if (ctx->pc == 0x31AEC0u) {
        ctx->pc = 0x31AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AEBCu;
        // 0x31aec0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AEC4u;
        goto label_31aec4;
    }
    ctx->pc = 0x31AEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31AEC4u);
        ctx->pc = 0x31AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AEBCu;
        // 0x31aec0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AEBCu, 0x31AEC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31AEC4u;
label_31aec4:
    // 0x31aec4: 0x2403005e  addiu       $v1, $zero, 0x5E
    ctx->pc = 0x31aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_31aec8:
    // 0x31aec8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_31aecc:
    if (ctx->pc == 0x31AECCu) {
        ctx->pc = 0x31AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AEC8u;
        // 0x31aecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AED0u;
        goto label_31aed0;
    }
    ctx->pc = 0x31AEC8u;
    {
        const bool branch_taken_0x31aec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AEC8u;
        // 0x31aecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aec8) {
            ctx->pc = 0x31AEDCu;
            goto label_31aedc;
        }
    }
    ctx->pc = 0x31AED0u;
label_31aed0:
    // 0x31aed0: 0xc0a35f6  jal         func_28D7D8
label_31aed4:
    if (ctx->pc == 0x31AED4u) {
        ctx->pc = 0x31AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AED0u;
        // 0x31aed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AED8u;
        goto label_31aed8;
    }
    ctx->pc = 0x31AED0u;
    SET_GPR_U32(ctx, 31, 0x31AED8u);
    ctx->pc = 0x31AED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AED0u;
    // 0x31aed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x31AED0u, 0x31AED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AED8u;
label_31aed8:
    // 0x31aed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31aed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31aedc:
    // 0x31aedc: 0xc0a3658  jal         func_28D960
label_31aee0:
    if (ctx->pc == 0x31AEE0u) {
        ctx->pc = 0x31AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AEDCu;
        // 0x31aee0: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AEE4u;
        goto label_31aee4;
    }
    ctx->pc = 0x31AEDCu;
    SET_GPR_U32(ctx, 31, 0x31AEE4u);
    ctx->pc = 0x31AEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AEDCu;
    // 0x31aee0: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x31AEDCu, 0x31AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AEE4u;
label_31aee4:
    // 0x31aee4: 0x8223002d  lb          $v1, 0x2D($s1)
    ctx->pc = 0x31aee4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
label_31aee8:
    // 0x31aee8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x31aee8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_31aeec:
    // 0x31aeec: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_31aef0:
    if (ctx->pc == 0x31AEF0u) {
        ctx->pc = 0x31AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AEECu;
        // 0x31aef0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AEF4u;
        goto label_31aef4;
    }
    ctx->pc = 0x31AEECu;
    {
        const bool branch_taken_0x31aeec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AEECu;
        // 0x31aef0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aeec) {
            ctx->pc = 0x31AF3Cu;
            goto label_31af3c;
        }
    }
    ctx->pc = 0x31AEF4u;
label_31aef4:
    // 0x31aef4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x31aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_31aef8:
    // 0x31aef8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31aef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31aefc:
    // 0x31aefc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31af00:
    // 0x31af00: 0x40f809  jalr        $v0
label_31af04:
    if (ctx->pc == 0x31AF04u) {
        ctx->pc = 0x31AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF00u;
        // 0x31af04: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AF08u;
        goto label_31af08;
    }
    ctx->pc = 0x31AF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31AF08u);
        ctx->pc = 0x31AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF00u;
        // 0x31af04: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AF00u, 0x31AF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31AF08u;
label_31af08:
    // 0x31af08: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x31af08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_31af0c:
    // 0x31af0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31af0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31af10:
    // 0x31af10: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31af10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31af14:
    // 0x31af14: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31af14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31af18:
    // 0x31af18: 0x40f809  jalr        $v0
label_31af1c:
    if (ctx->pc == 0x31AF1Cu) {
        ctx->pc = 0x31AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF18u;
        // 0x31af1c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AF20u;
        goto label_31af20;
    }
    ctx->pc = 0x31AF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31AF20u);
        ctx->pc = 0x31AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF18u;
        // 0x31af1c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AF18u, 0x31AF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31AF20u;
label_31af20:
    // 0x31af20: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x31af20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_31af24:
    // 0x31af24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31af24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31af28:
    // 0x31af28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31af28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31af2c:
    // 0x31af2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31af2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31af30:
    // 0x31af30: 0xc0add6e  jal         func_2B75B8
label_31af34:
    if (ctx->pc == 0x31AF34u) {
        ctx->pc = 0x31AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF30u;
        // 0x31af34: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AF38u;
        goto label_31af38;
    }
    ctx->pc = 0x31AF30u;
    SET_GPR_U32(ctx, 31, 0x31AF38u);
    ctx->pc = 0x31AF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AF30u;
    // 0x31af34: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B75B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B75B8u, 0x31AF30u, 0x31AF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AF38u;
label_31af38:
    // 0x31af38: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x31af38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31af3c:
    // 0x31af3c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x31af3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31af40:
    // 0x31af40: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x31af40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31af44:
    // 0x31af44: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31af44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31af48:
    // 0x31af48: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x31af48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31af4c:
    // 0x31af4c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x31af4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31af50:
    // 0x31af50: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x31af50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31af54:
    // 0x31af54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31af54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31af58:
    // 0x31af58: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x31af58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31af5c:
    // 0x31af5c: 0x3e00008  jr          $ra
label_31af60:
    if (ctx->pc == 0x31AF60u) {
        ctx->pc = 0x31AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF5Cu;
        // 0x31af60: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AF64u;
        goto label_31af64;
    }
    ctx->pc = 0x31AF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF5Cu;
        // 0x31af60: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AF64u;
label_31af64:
    // 0x31af64: 0x0  nop
    ctx->pc = 0x31af64u;
    // NOP
    ctx->pc = 0x31af68u;
}
