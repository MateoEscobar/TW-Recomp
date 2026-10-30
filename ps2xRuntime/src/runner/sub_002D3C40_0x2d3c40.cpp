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

// Function: sub_002D3C40
// Address: 0x2d3c40 - 0x2d3d08
void sub_002D3C40_0x2d3c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3C40_0x2d3c40");
#endif

    switch (ctx->pc) {
        case 0x2d3c68u: goto label_2d3c68;
        case 0x2d3c90u: goto label_2d3c90;
        case 0x2d3ca0u: goto label_2d3ca0;
        case 0x2d3cd0u: goto label_2d3cd0;
        case 0x2d3ce0u: goto label_2d3ce0;
        case 0x2d3cf0u: goto label_2d3cf0;
        default: break;
    }

    ctx->pc = 0x2d3c40u;

    // 0x2d3c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d3c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d3c44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d3c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3c48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d3c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d3c4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d3c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d3c50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d3c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3c58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3c5c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2d3c5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3c60: 0xc087612  jal         func_21D848
    ctx->pc = 0x2D3C60u;
    SET_GPR_U32(ctx, 31, 0x2D3C68u);
    ctx->pc = 0x2D3C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C60u;
    // 0x2d3c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2D3C60u, 0x2D3C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C68u;
label_2d3c68:
    // 0x2d3c68: 0x92030024  lbu         $v1, 0x24($s0)
    ctx->pc = 0x2d3c68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d3c6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3c70: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D3C70u;
    {
        const bool branch_taken_0x2d3c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D3C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C70u;
        // 0x2d3c74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c70) {
            ctx->pc = 0x2D3CE8u;
            goto label_2d3ce8;
        }
    }
    ctx->pc = 0x2D3C78u;
    // 0x2d3c78: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2d3c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2d3c7c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D3C7Cu;
    {
        const bool branch_taken_0x2d3c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C7Cu;
        // 0x2d3c80: 0x3c0501c1  lui         $a1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c7c) {
            ctx->pc = 0x2D3CE8u;
            goto label_2d3ce8;
        }
    }
    ctx->pc = 0x2D3C84u;
    // 0x2d3c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c88: 0xc089998  jal         func_226660
    ctx->pc = 0x2D3C88u;
    SET_GPR_U32(ctx, 31, 0x2D3C90u);
    ctx->pc = 0x2D3C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C88u;
    // 0x2d3c8c: 0x34a56a40  ori         $a1, $a1, 0x6A40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2D3C88u, 0x2D3C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C90u;
label_2d3c90:
    // 0x2d3c90: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D3C90u;
    {
        const bool branch_taken_0x2d3c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C90u;
        // 0x2d3c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c90) {
            ctx->pc = 0x2D3CD8u;
            goto label_2d3cd8;
        }
    }
    ctx->pc = 0x2D3C98u;
    // 0x2d3c98: 0xc089f98  jal         func_227E60
    ctx->pc = 0x2D3C98u;
    SET_GPR_U32(ctx, 31, 0x2D3CA0u);
    ctx->pc = 0x2D3C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C98u;
    // 0x2d3c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2D3C98u, 0x2D3CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CA0u;
label_2d3ca0:
    // 0x2d3ca0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D3CA0u;
    {
        const bool branch_taken_0x2d3ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3CA0u;
        // 0x2d3ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ca0) {
            ctx->pc = 0x2D3CD8u;
            goto label_2d3cd8;
        }
    }
    ctx->pc = 0x2D3CA8u;
    // 0x2d3ca8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d3ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2d3cac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d3cacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d3cb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d3cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d3cb4: 0x240502a1  addiu       $a1, $zero, 0x2A1
    ctx->pc = 0x2d3cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    // 0x2d3cb8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2d3cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d3cbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d3cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3cc0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d3cc0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2d3cc4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d3cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3cc8: 0xc0968f8  jal         func_25A3E0
    ctx->pc = 0x2D3CC8u;
    SET_GPR_U32(ctx, 31, 0x2D3CD0u);
    ctx->pc = 0x2D3CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3CC8u;
    // 0x2d3ccc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2D3CC8u, 0x2D3CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CD0u;
label_2d3cd0:
    // 0x2d3cd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3CD0u;
    {
        const bool branch_taken_0x2d3cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3CD0u;
        // 0x2d3cd4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3cd0) {
            ctx->pc = 0x2D3CF4u;
            goto label_2d3cf4;
        }
    }
    ctx->pc = 0x2D3CD8u;
label_2d3cd8:
    // 0x2d3cd8: 0xc089974  jal         func_2265D0
    ctx->pc = 0x2D3CD8u;
    SET_GPR_U32(ctx, 31, 0x2D3CE0u);
    ctx->pc = 0x2D3CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3CD8u;
    // 0x2d3cdc: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x2D3CD8u, 0x2D3CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CE0u;
label_2d3ce0:
    // 0x2d3ce0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3CE0u;
    {
        const bool branch_taken_0x2d3ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3CE0u;
        // 0x2d3ce4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ce0) {
            ctx->pc = 0x2D3CF4u;
            goto label_2d3cf4;
        }
    }
    ctx->pc = 0x2D3CE8u;
label_2d3ce8:
    // 0x2d3ce8: 0xc089974  jal         func_2265D0
    ctx->pc = 0x2D3CE8u;
    SET_GPR_U32(ctx, 31, 0x2D3CF0u);
    ctx->pc = 0x2D3CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3CE8u;
    // 0x2d3cec: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x2D3CE8u, 0x2D3CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CF0u;
label_2d3cf0:
    // 0x2d3cf0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d3cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d3cf4:
    // 0x2d3cf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d3cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3CFCu;
        // 0x2d3d00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3D04u;
    // 0x2d3d04: 0x0  nop
    ctx->pc = 0x2d3d04u;
    // NOP
    ctx->pc = 0x2d3d08u;
}
