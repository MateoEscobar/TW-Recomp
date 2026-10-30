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

// Function: sub_0037AC70
// Address: 0x37ac70 - 0x37ae68
void sub_0037AC70_0x37ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037AC70_0x37ac70");
#endif

    switch (ctx->pc) {
        case 0x37acacu: goto label_37acac;
        case 0x37acc0u: goto label_37acc0;
        case 0x37acc8u: goto label_37acc8;
        case 0x37ace0u: goto label_37ace0;
        case 0x37acf4u: goto label_37acf4;
        case 0x37acfcu: goto label_37acfc;
        case 0x37ad10u: goto label_37ad10;
        case 0x37ad28u: goto label_37ad28;
        case 0x37ad30u: goto label_37ad30;
        case 0x37ad48u: goto label_37ad48;
        case 0x37ad60u: goto label_37ad60;
        case 0x37ad68u: goto label_37ad68;
        case 0x37ad94u: goto label_37ad94;
        case 0x37ada0u: goto label_37ada0;
        case 0x37adb8u: goto label_37adb8;
        case 0x37adc4u: goto label_37adc4;
        case 0x37add0u: goto label_37add0;
        case 0x37ade0u: goto label_37ade0;
        case 0x37adf4u: goto label_37adf4;
        case 0x37ae08u: goto label_37ae08;
        case 0x37ae18u: goto label_37ae18;
        case 0x37ae2cu: goto label_37ae2c;
        default: break;
    }

    ctx->pc = 0x37ac70u;

    // 0x37ac70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x37ac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x37ac74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37ac74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ac78: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x37ac78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x37ac7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37ac7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ac80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37ac80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ac84: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x37ac84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x37ac88: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x37ac88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x37ac8c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x37ac8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x37ac90: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x37ac90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x37ac94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x37ac94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x37ac98: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x37ac98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x37ac9c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x37ac9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x37aca0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37aca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37aca4: 0xc102488  jal         func_409220
    ctx->pc = 0x37ACA4u;
    SET_GPR_U32(ctx, 31, 0x37ACACu);
    ctx->pc = 0x37ACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ACA4u;
    // 0x37aca8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37ACA4u, 0x37ACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ACACu;
label_37acac:
    // 0x37acac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37acacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37acb0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37acb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37acb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37acb8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37ACB8u;
    SET_GPR_U32(ctx, 31, 0x37ACC0u);
    ctx->pc = 0x37ACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ACB8u;
    // 0x37acbc: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37ACB8u, 0x37ACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ACC0u;
label_37acc0:
    // 0x37acc0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37ACC0u;
    SET_GPR_U32(ctx, 31, 0x37ACC8u);
    ctx->pc = 0x37ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ACC0u;
    // 0x37acc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37ACC0u, 0x37ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ACC8u;
label_37acc8:
    // 0x37acc8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37accc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37acccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37acd0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37acd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37acd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37acd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37acd8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37ACD8u;
    SET_GPR_U32(ctx, 31, 0x37ACE0u);
    ctx->pc = 0x37ACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ACD8u;
    // 0x37acdc: 0x2b403  sra         $s6, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37ACD8u, 0x37ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ACE0u;
label_37ace0:
    // 0x37ace0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37ace0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ace4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ace8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37ace8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37acec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37ACECu;
    SET_GPR_U32(ctx, 31, 0x37ACF4u);
    ctx->pc = 0x37ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ACECu;
    // 0x37acf0: 0x2a82b  sltu        $s5, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37ACECu, 0x37ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ACF4u;
label_37acf4:
    // 0x37acf4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37ACF4u;
    SET_GPR_U32(ctx, 31, 0x37ACFCu);
    ctx->pc = 0x37ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ACF4u;
    // 0x37acf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37ACF4u, 0x37ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ACFCu;
label_37acfc:
    // 0x37acfc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x37acfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ad00: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x37ad00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37ad04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37ad04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ad08: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x37ad08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ad0c: 0x0  nop
    ctx->pc = 0x37ad0cu;
    // NOP
label_37ad10:
    // 0x37ad10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37ad10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37ad14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ad14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ad18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37ad18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37ad1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37ad1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ad20: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37AD20u;
    SET_GPR_U32(ctx, 31, 0x37AD28u);
    ctx->pc = 0x37AD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AD20u;
    // 0x37ad24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37AD20u, 0x37AD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AD28u;
label_37ad28:
    // 0x37ad28: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37AD28u;
    SET_GPR_U32(ctx, 31, 0x37AD30u);
    ctx->pc = 0x37AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AD28u;
    // 0x37ad2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37AD28u, 0x37AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AD30u;
label_37ad30:
    // 0x37ad30: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x37ad30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37ad34: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37ad34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37ad38: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37AD38u;
    {
        const bool branch_taken_0x37ad38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD38u;
        // 0x37ad3c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ad38) {
            ctx->pc = 0x37AD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ad10;
        }
    }
    ctx->pc = 0x37AD40u;
    // 0x37ad40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37ad40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ad44: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x37ad44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37ad48:
    // 0x37ad48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37ad48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37ad4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ad4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ad50: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37ad50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37ad54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37ad54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ad58: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37AD58u;
    SET_GPR_U32(ctx, 31, 0x37AD60u);
    ctx->pc = 0x37AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AD58u;
    // 0x37ad5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37AD58u, 0x37AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AD60u;
label_37ad60:
    // 0x37ad60: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37AD60u;
    SET_GPR_U32(ctx, 31, 0x37AD68u);
    ctx->pc = 0x37AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AD60u;
    // 0x37ad64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37AD60u, 0x37AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AD68u;
label_37ad68:
    // 0x37ad68: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x37ad68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37ad6c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37ad6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37ad70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37AD70u;
    {
        const bool branch_taken_0x37ad70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD70u;
        // 0x37ad74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ad70) {
            ctx->pc = 0x37AD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ad48;
        }
    }
    ctx->pc = 0x37AD78u;
    // 0x37ad78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x37ad78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ad7c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x37ad7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ad80: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x37ad80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ad84: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x37ad84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ad88: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x37ad88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ad8c: 0xc10496e  jal         func_4125B8
    ctx->pc = 0x37AD8Cu;
    SET_GPR_U32(ctx, 31, 0x37AD94u);
    ctx->pc = 0x37AD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AD8Cu;
    // 0x37ad90: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125B8u, 0x37AD8Cu, 0x37AD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AD94u;
label_37ad94:
    // 0x37ad94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37ad94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ad98: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37AD98u;
    SET_GPR_U32(ctx, 31, 0x37ADA0u);
    ctx->pc = 0x37AD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AD98u;
    // 0x37ad9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37AD98u, 0x37ADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ADA0u;
label_37ada0:
    // 0x37ada0: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37ADA0u;
    {
        const bool branch_taken_0x37ada0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ADA0u;
        // 0x37ada4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ada0) {
            ctx->pc = 0x37ADBCu;
            goto label_37adbc;
        }
    }
    ctx->pc = 0x37ADA8u;
    // 0x37ada8: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x37ada8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x37adac: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x37adacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37adb0: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37ADB0u;
    SET_GPR_U32(ctx, 31, 0x37ADB8u);
    ctx->pc = 0x37ADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ADB0u;
    // 0x37adb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37ADB0u, 0x37ADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ADB8u;
label_37adb8:
    // 0x37adb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37adb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37adbc:
    // 0x37adbc: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37ADBCu;
    SET_GPR_U32(ctx, 31, 0x37ADC4u);
    ctx->pc = 0x37ADC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ADBCu;
    // 0x37adc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37ADBCu, 0x37ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ADC4u;
label_37adc4:
    // 0x37adc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37adc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37adc8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x37adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x37adcc: 0x0  nop
    ctx->pc = 0x37adccu;
    // NOP
label_37add0:
    // 0x37add0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x37add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x37add4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37add4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37add8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x37ADD8u;
    SET_GPR_U32(ctx, 31, 0x37ADE0u);
    ctx->pc = 0x37ADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ADD8u;
    // 0x37addc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x37ADD8u, 0x37ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ADE0u;
label_37ade0:
    // 0x37ade0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37ade0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ade4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ade4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ade8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37ade8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37adec: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37ADECu;
    SET_GPR_U32(ctx, 31, 0x37ADF4u);
    ctx->pc = 0x37ADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ADECu;
    // 0x37adf0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37ADECu, 0x37ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ADF4u;
label_37adf4:
    // 0x37adf4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37adf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37adf8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37ADF8u;
    {
        const bool branch_taken_0x37adf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ADF8u;
        // 0x37adfc: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37adf8) {
            ctx->pc = 0x37ADD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37add0;
        }
    }
    ctx->pc = 0x37AE00u;
    // 0x37ae00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37ae00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ae04: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x37ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_37ae08:
    // 0x37ae08: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x37ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x37ae0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37ae0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37ae10: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x37AE10u;
    SET_GPR_U32(ctx, 31, 0x37AE18u);
    ctx->pc = 0x37AE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AE10u;
    // 0x37ae14: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x37AE10u, 0x37AE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AE18u;
label_37ae18:
    // 0x37ae18: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37ae18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ae1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ae1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ae20: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37ae20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37ae24: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37AE24u;
    SET_GPR_U32(ctx, 31, 0x37AE2Cu);
    ctx->pc = 0x37AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AE24u;
    // 0x37ae28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37AE24u, 0x37AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AE2Cu;
label_37ae2c:
    // 0x37ae2c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37ae2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37ae30: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37AE30u;
    {
        const bool branch_taken_0x37ae30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE30u;
        // 0x37ae34: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ae30) {
            ctx->pc = 0x37AE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ae08;
        }
    }
    ctx->pc = 0x37AE38u;
    // 0x37ae38: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x37ae38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37ae3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ae40: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x37ae40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37ae44: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x37ae44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37ae48: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x37ae48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37ae4c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x37ae4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37ae50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37ae50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37ae54: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x37ae54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37ae58: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x37ae58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37ae5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37ae5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37ae60: 0x3e00008  jr          $ra
    ctx->pc = 0x37AE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE60u;
        // 0x37ae64: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AE68u;
}
