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

// Function: sub_0036AE60
// Address: 0x36ae60 - 0x36b020
void sub_0036AE60_0x36ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AE60_0x36ae60");
#endif

    switch (ctx->pc) {
        case 0x36aea0u: goto label_36aea0;
        case 0x36aea8u: goto label_36aea8;
        case 0x36aebcu: goto label_36aebc;
        case 0x36aec4u: goto label_36aec4;
        case 0x36aed8u: goto label_36aed8;
        case 0x36aee0u: goto label_36aee0;
        case 0x36aef4u: goto label_36aef4;
        case 0x36aefcu: goto label_36aefc;
        case 0x36af10u: goto label_36af10;
        case 0x36af18u: goto label_36af18;
        case 0x36af2cu: goto label_36af2c;
        case 0x36af34u: goto label_36af34;
        case 0x36af40u: goto label_36af40;
        case 0x36af58u: goto label_36af58;
        case 0x36af60u: goto label_36af60;
        case 0x36af90u: goto label_36af90;
        case 0x36af98u: goto label_36af98;
        case 0x36afacu: goto label_36afac;
        case 0x36afc4u: goto label_36afc4;
        case 0x36afd8u: goto label_36afd8;
        default: break;
    }

    ctx->pc = 0x36ae60u;

    // 0x36ae60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x36ae60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x36ae64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ae64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ae68: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x36ae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x36ae6c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x36ae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x36ae70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36ae70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36ae74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ae78: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x36ae78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x36ae7c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x36ae7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x36ae80: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x36ae80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x36ae84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x36ae84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x36ae88: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x36ae88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x36ae8c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x36ae8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x36ae90: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x36ae90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x36ae94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36ae94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36ae98: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AE98u;
    SET_GPR_U32(ctx, 31, 0x36AEA0u);
    ctx->pc = 0x36AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AE98u;
    // 0x36ae9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AE98u, 0x36AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AEA0u;
label_36aea0:
    // 0x36aea0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36AEA0u;
    SET_GPR_U32(ctx, 31, 0x36AEA8u);
    ctx->pc = 0x36AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AEA0u;
    // 0x36aea4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36AEA0u, 0x36AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AEA8u;
label_36aea8:
    // 0x36aea8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36aea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aeac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36aeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36aeb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36aeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aeb4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AEB4u;
    SET_GPR_U32(ctx, 31, 0x36AEBCu);
    ctx->pc = 0x36AEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AEB4u;
    // 0x36aeb8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AEB4u, 0x36AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AEBCu;
label_36aebc:
    // 0x36aebc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36AEBCu;
    SET_GPR_U32(ctx, 31, 0x36AEC4u);
    ctx->pc = 0x36AEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AEBCu;
    // 0x36aec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36AEBCu, 0x36AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AEC4u;
label_36aec4:
    // 0x36aec4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36aec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aec8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36aec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36aecc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36aeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aed0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AED0u;
    SET_GPR_U32(ctx, 31, 0x36AED8u);
    ctx->pc = 0x36AED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AED0u;
    // 0x36aed4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AED0u, 0x36AED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AED8u;
label_36aed8:
    // 0x36aed8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36AED8u;
    SET_GPR_U32(ctx, 31, 0x36AEE0u);
    ctx->pc = 0x36AEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AED8u;
    // 0x36aedc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36AED8u, 0x36AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AEE0u;
label_36aee0:
    // 0x36aee0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36aee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aee4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36aee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36aee8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36aee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aeec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AEECu;
    SET_GPR_U32(ctx, 31, 0x36AEF4u);
    ctx->pc = 0x36AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AEECu;
    // 0x36aef0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AEECu, 0x36AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AEF4u;
label_36aef4:
    // 0x36aef4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36AEF4u;
    SET_GPR_U32(ctx, 31, 0x36AEFCu);
    ctx->pc = 0x36AEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AEF4u;
    // 0x36aef8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36AEF4u, 0x36AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AEFCu;
label_36aefc:
    // 0x36aefc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36aefcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af00: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36af00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36af04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36af04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af08: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AF08u;
    SET_GPR_U32(ctx, 31, 0x36AF10u);
    ctx->pc = 0x36AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AF08u;
    // 0x36af0c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AF08u, 0x36AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF10u;
label_36af10:
    // 0x36af10: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36AF10u;
    SET_GPR_U32(ctx, 31, 0x36AF18u);
    ctx->pc = 0x36AF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AF10u;
    // 0x36af14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36AF10u, 0x36AF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF18u;
label_36af18:
    // 0x36af18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36af18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36af1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af20: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36af20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36af24: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36AF24u;
    SET_GPR_U32(ctx, 31, 0x36AF2Cu);
    ctx->pc = 0x36AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AF24u;
    // 0x36af28: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36AF24u, 0x36AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF2Cu;
label_36af2c:
    // 0x36af2c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36AF2Cu;
    SET_GPR_U32(ctx, 31, 0x36AF34u);
    ctx->pc = 0x36AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AF2Cu;
    // 0x36af30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36AF2Cu, 0x36AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF34u;
label_36af34:
    // 0x36af34: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36af34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36af38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af3c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36af3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36af40:
    // 0x36af40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36af40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36af44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36af44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36af48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36af4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36af4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af50: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36AF50u;
    SET_GPR_U32(ctx, 31, 0x36AF58u);
    ctx->pc = 0x36AF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AF50u;
    // 0x36af54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36AF50u, 0x36AF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF58u;
label_36af58:
    // 0x36af58: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36AF58u;
    SET_GPR_U32(ctx, 31, 0x36AF60u);
    ctx->pc = 0x36AF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AF58u;
    // 0x36af5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36AF58u, 0x36AF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF60u;
label_36af60:
    // 0x36af60: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36af60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36af64: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x36af64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x36af68: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36AF68u;
    {
        const bool branch_taken_0x36af68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AF68u;
        // 0x36af6c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36af68) {
            ctx->pc = 0x36AF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36af40;
        }
    }
    ctx->pc = 0x36AF70u;
    // 0x36af70: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x36af70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af74: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x36af74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af78: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x36af78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af7c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x36af7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af80: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x36af80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af84: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x36af84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af88: 0xc06391c  jal         func_18E470
    ctx->pc = 0x36AF88u;
    SET_GPR_U32(ctx, 31, 0x36AF90u);
    ctx->pc = 0x36AF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AF88u;
    // 0x36af8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E470u, 0x36AF88u, 0x36AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF90u;
label_36af90:
    // 0x36af90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36af90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af94: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x36af94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_36af98:
    // 0x36af98: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x36af98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36af9c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x36af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x36afa0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x36afa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36afa4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36AFA4u;
    SET_GPR_U32(ctx, 31, 0x36AFACu);
    ctx->pc = 0x36AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AFA4u;
    // 0x36afa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36AFA4u, 0x36AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AFACu;
label_36afac:
    // 0x36afac: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36AFACu;
    {
        const bool branch_taken_0x36afac = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x36AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AFACu;
        // 0x36afb0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36afac) {
            ctx->pc = 0x36AFC8u;
            goto label_36afc8;
        }
    }
    ctx->pc = 0x36AFB4u;
    // 0x36afb4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36afb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x36afb8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x36afb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36afbc: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36AFBCu;
    SET_GPR_U32(ctx, 31, 0x36AFC4u);
    ctx->pc = 0x36AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AFBCu;
    // 0x36afc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36AFBCu, 0x36AFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AFC4u;
label_36afc4:
    // 0x36afc4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36afc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36afc8:
    // 0x36afc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36afc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36afcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36afccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36afd0: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36AFD0u;
    SET_GPR_U32(ctx, 31, 0x36AFD8u);
    ctx->pc = 0x36AFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AFD0u;
    // 0x36afd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36AFD0u, 0x36AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AFD8u;
label_36afd8:
    // 0x36afd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36afd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36afdc: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x36afdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x36afe0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x36AFE0u;
    {
        const bool branch_taken_0x36afe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AFE0u;
        // 0x36afe4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36afe0) {
            ctx->pc = 0x36AF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36af98;
        }
    }
    ctx->pc = 0x36AFE8u;
    // 0x36afe8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x36afe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36afec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36afecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aff0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x36aff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36aff4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x36aff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36aff8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x36aff8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36affc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x36affcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36b000: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x36b000u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36b004: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x36b004u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36b008: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x36b008u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36b00c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x36b00cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36b010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36b010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b014: 0x3e00008  jr          $ra
    ctx->pc = 0x36B014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B014u;
        // 0x36b018: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B01Cu;
    // 0x36b01c: 0x0  nop
    ctx->pc = 0x36b01cu;
    // NOP
    ctx->pc = 0x36b020u;
}
