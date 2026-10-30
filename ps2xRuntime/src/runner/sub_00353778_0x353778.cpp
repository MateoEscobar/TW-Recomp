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

// Function: sub_00353778
// Address: 0x353778 - 0x353818
void sub_00353778_0x353778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353778_0x353778");
#endif

    switch (ctx->pc) {
        case 0x3537b8u: goto label_3537b8;
        case 0x3537ccu: goto label_3537cc;
        default: break;
    }

    ctx->pc = 0x353778u;

    // 0x353778: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x353778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35377c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x35377cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x353780: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x353780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x353784: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x353784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x353788: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x353788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35378c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x35378cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x353790: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x353790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353794: 0x8c432aec  lw          $v1, 0x2AEC($v0)
    ctx->pc = 0x353794u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512AECu));
    // 0x353798: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x353798u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35379c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x35379cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3537a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3537a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3537a4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3537A4u;
    {
        const bool branch_taken_0x3537a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3537A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3537A4u;
        // 0x3537a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3537a4) {
            ctx->pc = 0x3537F0u;
            goto label_3537f0;
        }
    }
    ctx->pc = 0x3537ACu;
    // 0x3537ac: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x3537acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
    // 0x3537b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3537b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3537b4: 0x0  nop
    ctx->pc = 0x3537b4u;
    // NOP
label_3537b8:
    // 0x3537b8: 0x8e44ba10  lw          $a0, -0x45F0($s2)
    ctx->pc = 0x3537b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949392)));
    // 0x3537bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3537bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3537c0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x3537c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3537c4: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x3537C4u;
    SET_GPR_U32(ctx, 31, 0x3537CCu);
    ctx->pc = 0x3537C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3537C4u;
    // 0x3537c8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3537C4u, 0x3537CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3537CCu;
label_3537cc:
    // 0x3537cc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3537CCu;
    {
        const bool branch_taken_0x3537cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3537cc) {
            ctx->pc = 0x3537D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3537CCu;
            // 0x3537d0: 0x8e822aec  lw          $v0, 0x2AEC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10988)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3537E0u;
            goto label_3537e0;
        }
    }
    ctx->pc = 0x3537D4u;
    // 0x3537d4: 0x8e42ba10  lw          $v0, -0x45F0($s2)
    ctx->pc = 0x3537d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949392)));
    // 0x3537d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3537D8u;
    {
        const bool branch_taken_0x3537d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3537DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3537D8u;
        // 0x3537dc: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3537d8) {
            ctx->pc = 0x3537F4u;
            goto label_3537f4;
        }
    }
    ctx->pc = 0x3537E0u;
label_3537e0:
    // 0x3537e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3537e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3537e4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3537e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3537e8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3537E8u;
    {
        const bool branch_taken_0x3537e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3537ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3537E8u;
        // 0x3537ec: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3537e8) {
            ctx->pc = 0x3537B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3537b8;
        }
    }
    ctx->pc = 0x3537F0u;
label_3537f0:
    // 0x3537f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3537f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3537f4:
    // 0x3537f4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3537f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3537f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3537f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3537fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3537fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x353800: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x353800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353804: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x353804u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x353808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35380c: 0x3e00008  jr          $ra
    ctx->pc = 0x35380Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35380Cu;
        // 0x353810: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35380Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353814u;
    // 0x353814: 0x0  nop
    ctx->pc = 0x353814u;
    // NOP
    ctx->pc = 0x353818u;
}
