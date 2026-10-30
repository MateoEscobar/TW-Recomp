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

// Function: sub_00192740
// Address: 0x192740 - 0x1927d0
void sub_00192740_0x192740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192740_0x192740");
#endif

    switch (ctx->pc) {
        case 0x192770u: goto label_192770;
        case 0x19278cu: goto label_19278c;
        case 0x1927a8u: goto label_1927a8;
        default: break;
    }

    ctx->pc = 0x192740u;

    // 0x192740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x192740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x192744: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x192744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x192748: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x192748u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x19274c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19274cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x192750: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x192750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x192754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192758: 0x8e45cd98  lw          $a1, -0x3268($s2)
    ctx->pc = 0x192758u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50CD98u));
    // 0x19275c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19275cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192764: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x192764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192768: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x192768u;
    SET_GPR_U32(ctx, 31, 0x192770u);
    ctx->pc = 0x19276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192768u;
    // 0x19276c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x192768u, 0x192770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192770u;
label_192770:
    // 0x192770: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x192770u;
    {
        const bool branch_taken_0x192770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192770u;
        // 0x192774: 0x8e45cd98  lw          $a1, -0x3268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192770) {
            ctx->pc = 0x1927B4u;
            goto label_1927b4;
        }
    }
    ctx->pc = 0x192778u;
    // 0x192778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19277c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x19277cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192780: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x192780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x192784: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x192784u;
    SET_GPR_U32(ctx, 31, 0x19278Cu);
    ctx->pc = 0x192788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192784u;
    // 0x192788: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x192784u, 0x19278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19278Cu;
label_19278c:
    // 0x19278c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19278Cu;
    {
        const bool branch_taken_0x19278c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19278Cu;
        // 0x192790: 0x8e45cd98  lw          $a1, -0x3268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19278c) {
            ctx->pc = 0x1927B4u;
            goto label_1927b4;
        }
    }
    ctx->pc = 0x192794u;
    // 0x192794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192798: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x192798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19279c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x19279cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1927a0: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x1927A0u;
    SET_GPR_U32(ctx, 31, 0x1927A8u);
    ctx->pc = 0x1927A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927A0u;
    // 0x1927a4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x1927A0u, 0x1927A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927A8u;
label_1927a8:
    // 0x1927a8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x1927a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1927ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1927ACu;
    {
        const bool branch_taken_0x1927ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1927B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927ACu;
        // 0x1927b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1927ac) {
            ctx->pc = 0x1927B8u;
            goto label_1927b8;
        }
    }
    ctx->pc = 0x1927B4u;
label_1927b4:
    // 0x1927b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1927b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1927b8:
    // 0x1927b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1927b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1927bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1927bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1927c0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1927c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1927c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1927c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1927c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1927C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1927CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927C8u;
        // 0x1927cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1927C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1927D0u;
}
