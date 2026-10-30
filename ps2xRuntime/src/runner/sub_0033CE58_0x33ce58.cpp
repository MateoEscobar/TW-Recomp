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

// Function: sub_0033CE58
// Address: 0x33ce58 - 0x33cf00
void sub_0033CE58_0x33ce58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CE58_0x33ce58");
#endif

    switch (ctx->pc) {
        case 0x33ce98u: goto label_33ce98;
        case 0x33ceacu: goto label_33ceac;
        case 0x33ceccu: goto label_33cecc;
        default: break;
    }

    ctx->pc = 0x33ce58u;

    // 0x33ce58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33ce58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33ce5c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x33ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x33ce60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x33ce60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x33ce64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x33ce68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33ce68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33ce6c: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x33ce6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x33ce70: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x33ce70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x33ce74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33ce74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ce78: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x33ce78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x33ce7c: 0x247316d0  addiu       $s3, $v1, 0x16D0
    ctx->pc = 0x33ce7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 5840));
    // 0x33ce80: 0x34425930  ori         $v0, $v0, 0x5930
    ctx->pc = 0x33ce80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22832);
    // 0x33ce84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33ce84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33ce88: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x33ce88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x33ce8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33ce8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ce90: 0x36310500  ori         $s1, $s1, 0x500
    ctx->pc = 0x33ce90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1280);
    // 0x33ce94: 0x0  nop
    ctx->pc = 0x33ce94u;
    // NOP
label_33ce98:
    // 0x33ce98: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x33ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x33ce9c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33CE9Cu;
    {
        const bool branch_taken_0x33ce9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE9Cu;
        // 0x33cea0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ce9c) {
            ctx->pc = 0x33CED4u;
            goto label_33ced4;
        }
    }
    ctx->pc = 0x33CEA4u;
    // 0x33cea4: 0xc0d069a  jal         func_341A68
    ctx->pc = 0x33CEA4u;
    SET_GPR_U32(ctx, 31, 0x33CEACu);
    ctx->pc = 0x33CEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CEA4u;
    // 0x33cea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A68u, 0x33CEA4u, 0x33CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CEACu;
label_33ceac:
    // 0x33ceac: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x33ceacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x33ceb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33ceb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ceb4: 0xae110040  sw          $s1, 0x40($s0)
    ctx->pc = 0x33ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 17));
    // 0x33ceb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33ceb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cebc: 0xa600003c  sh          $zero, 0x3C($s0)
    ctx->pc = 0x33cebcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x33cec0: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x33cec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x33cec4: 0xc0d019a  jal         func_340668
    ctx->pc = 0x33CEC4u;
    SET_GPR_U32(ctx, 31, 0x33CECCu);
    ctx->pc = 0x33CEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CEC4u;
    // 0x33cec8: 0x7e020060  sq          $v0, 0x60($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340668u, 0x33CEC4u, 0x33CECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CECCu;
label_33cecc:
    // 0x33cecc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33CECCu;
    {
        const bool branch_taken_0x33cecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CECCu;
        // 0x33ced0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cecc) {
            ctx->pc = 0x33CEE4u;
            goto label_33cee4;
        }
    }
    ctx->pc = 0x33CED4u;
label_33ced4:
    // 0x33ced4: 0x286201a0  slti        $v0, $v1, 0x1A0
    ctx->pc = 0x33ced4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)416) ? 1 : 0);
    // 0x33ced8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x33CED8u;
    {
        const bool branch_taken_0x33ced8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CED8u;
        // 0x33cedc: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ced8) {
            ctx->pc = 0x33CE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ce98;
        }
    }
    ctx->pc = 0x33CEE0u;
    // 0x33cee0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33cee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33cee4:
    // 0x33cee4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x33cee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33cee8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x33cee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33ceec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33ceecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33cef0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x33cef0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33cef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cef8: 0x3e00008  jr          $ra
    ctx->pc = 0x33CEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CEF8u;
        // 0x33cefc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CF00u;
}
