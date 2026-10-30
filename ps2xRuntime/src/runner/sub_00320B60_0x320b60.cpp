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

// Function: sub_00320B60
// Address: 0x320b60 - 0x320be0
void sub_00320B60_0x320b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320B60_0x320b60");
#endif

    switch (ctx->pc) {
        case 0x320b84u: goto label_320b84;
        case 0x320b98u: goto label_320b98;
        case 0x320bb8u: goto label_320bb8;
        case 0x320bc4u: goto label_320bc4;
        default: break;
    }

    ctx->pc = 0x320b60u;

    // 0x320b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x320b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x320b64: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x320b64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x320b68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x320b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x320b6c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x320b6cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x320b70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x320b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x320b74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x320b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x320b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320b7c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x320B7Cu;
    SET_GPR_U32(ctx, 31, 0x320B84u);
    ctx->pc = 0x320B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320B7Cu;
    // 0x320b80: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x320B7Cu, 0x320B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320B84u;
label_320b84:
    // 0x320b84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x320b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b88: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x320B88u;
    {
        const bool branch_taken_0x320b88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x320B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B88u;
        // 0x320b8c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b88) {
            ctx->pc = 0x320BC8u;
            goto label_320bc8;
        }
    }
    ctx->pc = 0x320B90u;
    // 0x320b90: 0xc0c1956  jal         func_306558
    ctx->pc = 0x320B90u;
    SET_GPR_U32(ctx, 31, 0x320B98u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x320B90u, 0x320B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320B98u;
label_320b98:
    // 0x320b98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x320b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b9c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x320B9Cu;
    {
        const bool branch_taken_0x320b9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x320BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B9Cu;
        // 0x320ba0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b9c) {
            ctx->pc = 0x320BB8u;
            goto label_320bb8;
        }
    }
    ctx->pc = 0x320BA4u;
    // 0x320ba4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x320ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x320ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320bac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x320bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320bb0: 0xc0c82f8  jal         func_320BE0
    ctx->pc = 0x320BB0u;
    SET_GPR_U32(ctx, 31, 0x320BB8u);
    ctx->pc = 0x320BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320BB0u;
    // 0x320bb4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x320BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320BE0u, 0x320BB0u, 0x320BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320BB8u;
label_320bb8:
    // 0x320bb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x320bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320bbc: 0xc059590  jal         func_165640
    ctx->pc = 0x320BBCu;
    SET_GPR_U32(ctx, 31, 0x320BC4u);
    ctx->pc = 0x320BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320BBCu;
    // 0x320bc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x320BBCu, 0x320BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320BC4u;
label_320bc4:
    // 0x320bc4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x320bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_320bc8:
    // 0x320bc8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x320bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320bcc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x320bccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x320BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BD4u;
        // 0x320bd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320BDCu;
    // 0x320bdc: 0x0  nop
    ctx->pc = 0x320bdcu;
    // NOP
    ctx->pc = 0x320be0u;
}
