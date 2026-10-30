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

// Function: sub_00333830
// Address: 0x333830 - 0x333900
void sub_00333830_0x333830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333830_0x333830");
#endif

    switch (ctx->pc) {
        case 0x333850u: goto label_333850;
        case 0x333880u: goto label_333880;
        case 0x3338d8u: goto label_3338d8;
        default: break;
    }

    ctx->pc = 0x333830u;

    // 0x333830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x333830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x333834: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x333834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x333838: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x333838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33383c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33383cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333840: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x333840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x333844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333848: 0xc0ca4b8  jal         func_3292E0
    ctx->pc = 0x333848u;
    SET_GPR_U32(ctx, 31, 0x333850u);
    ctx->pc = 0x33384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333848u;
    // 0x33384c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3292E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3292E0u, 0x333848u, 0x333850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333850u;
label_333850:
    // 0x333850: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x333850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333854: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x333854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x333858: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x333858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33385c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33385cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x333860: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x333860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x333864: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x333864u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333868: 0x1204000f  beq         $s0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x333868u;
    {
        const bool branch_taken_0x333868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x33386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333868u;
        // 0x33386c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333868) {
            ctx->pc = 0x3338A8u;
            goto label_3338a8;
        }
    }
    ctx->pc = 0x333870u;
    // 0x333870: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x333870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x333874: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x333874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x333878: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x333878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33387c: 0x0  nop
    ctx->pc = 0x33387cu;
    // NOP
label_333880:
    // 0x333880: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x333880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x333884: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x333884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x333888: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x333888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x33388c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x33388cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x333890: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x333890u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x333894: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x333894u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x333898: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x333898u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33389c: 0xfca30018  sd          $v1, 0x18($a1)
    ctx->pc = 0x33389cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 3));
    // 0x3338a0: 0x1606fff7  bne         $s0, $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3338A0u;
    {
        const bool branch_taken_0x3338a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        ctx->pc = 0x3338A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3338A0u;
        // 0x3338a4: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3338a0) {
            ctx->pc = 0x333880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333880;
        }
    }
    ctx->pc = 0x3338A8u;
label_3338a8:
    // 0x3338a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3338a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3338ac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3338acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3338b0: 0xac720008  sw          $s2, 0x8($v1)
    ctx->pc = 0x3338b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
    // 0x3338b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3338b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3338b8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3338b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3338bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3338bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3338c0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3338c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3338c4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3338C4u;
    {
        const bool branch_taken_0x3338c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3338C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3338C4u;
        // 0x3338c8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3338c4) {
            ctx->pc = 0x3338E0u;
            goto label_3338e0;
        }
    }
    ctx->pc = 0x3338CCu;
    // 0x3338cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3338ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3338d0: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x3338D0u;
    SET_GPR_U32(ctx, 31, 0x3338D8u);
    ctx->pc = 0x3338D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3338D0u;
    // 0x3338d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x3338D0u, 0x3338D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3338D8u;
label_3338d8:
    // 0x3338d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3338d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3338dc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3338dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3338e0:
    // 0x3338e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3338e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3338e4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3338e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3338e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3338e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3338ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3338ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3338f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3338f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3338f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3338f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3338f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3338F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3338FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3338F8u;
        // 0x3338fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3338F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333900u;
}
