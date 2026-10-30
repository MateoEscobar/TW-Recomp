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

// Function: sub_00329748
// Address: 0x329748 - 0x3297d0
void sub_00329748_0x329748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329748_0x329748");
#endif

    switch (ctx->pc) {
        case 0x329780u: goto label_329780;
        case 0x32979cu: goto label_32979c;
        default: break;
    }

    ctx->pc = 0x329748u;

    // 0x329748: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x329748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32974c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x32974cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x329750: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x329750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x329754: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x329754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329758: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x329758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x32975c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32975cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329760: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x329760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x329764: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x329764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x329768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32976c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x32976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x329770: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x329770u;
    {
        const bool branch_taken_0x329770 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x329774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329770u;
        // 0x329774: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329770) {
            ctx->pc = 0x3297B0u;
            goto label_3297b0;
        }
    }
    ctx->pc = 0x329778u;
    // 0x329778: 0x2414fffc  addiu       $s4, $zero, -0x4
    ctx->pc = 0x329778u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x32977c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32977cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329780:
    // 0x329780: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x329780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x329784: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x329784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x329788: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x329788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x32978c: 0x54740004  bnel        $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x32978Cu;
    {
        const bool branch_taken_0x32978c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x32978c) {
            ctx->pc = 0x329790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32978Cu;
            // 0x329790: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3297A0u;
            goto label_3297a0;
        }
    }
    ctx->pc = 0x329794u;
    // 0x329794: 0xc0ca634  jal         func_3298D0
    ctx->pc = 0x329794u;
    SET_GPR_U32(ctx, 31, 0x32979Cu);
    ctx->pc = 0x329798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329794u;
    // 0x329798: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3298D0u, 0x329794u, 0x32979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32979Cu;
label_32979c:
    // 0x32979c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x32979cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3297a0:
    // 0x3297a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3297a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3297a4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3297a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3297a8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3297A8u;
    {
        const bool branch_taken_0x3297a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3297ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297A8u;
        // 0x3297ac: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3297a8) {
            ctx->pc = 0x329780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329780;
        }
    }
    ctx->pc = 0x3297B0u;
label_3297b0:
    // 0x3297b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3297b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3297b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3297b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3297b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3297b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3297bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3297bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3297c0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3297c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3297c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3297c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3297c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3297C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3297CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297C8u;
        // 0x3297cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3297C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3297D0u;
}
