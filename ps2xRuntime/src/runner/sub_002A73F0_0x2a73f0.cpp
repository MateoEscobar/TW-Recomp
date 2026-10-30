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

// Function: sub_002A73F0
// Address: 0x2a73f0 - 0x2a7458
void sub_002A73F0_0x2a73f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A73F0_0x2a73f0");
#endif

    switch (ctx->pc) {
        case 0x2a7430u: goto label_2a7430;
        default: break;
    }

    ctx->pc = 0x2a73f0u;

    // 0x2a73f0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2a73f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a73f4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2a73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a73f8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x2a73f8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2a73fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a73fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2a7400: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2a7400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a7404: 0x24639444  addiu       $v1, $v1, -0x6BBC
    ctx->pc = 0x2a7404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939716));
    // 0x2a7408: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a7408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a740c: 0x8c45bd30  lw          $a1, -0x42D0($v0)
    ctx->pc = 0x2a740cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2a7410: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2a7410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a7414: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a7414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a7418: 0x1045000d  beq         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A7418u;
    {
        const bool branch_taken_0x2a7418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2A741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7418u;
        // 0x2a741c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7418) {
            ctx->pc = 0x2A7450u;
            goto label_2a7450;
        }
    }
    ctx->pc = 0x2A7420u;
    // 0x2a7420: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2a7420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2a7424: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x2a7424u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x2a7428: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a7428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a742c: 0x0  nop
    ctx->pc = 0x2a742cu;
    // NOP
label_2a7430:
    // 0x2a7430: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2a7430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2a7434: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2a7434u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2a7438: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2a7438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a743c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A743Cu;
    {
        const bool branch_taken_0x2a743c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A743Cu;
        // 0x2a7440: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a743c) {
            ctx->pc = 0x2A7450u;
            goto label_2a7450;
        }
    }
    ctx->pc = 0x2A7444u;
    // 0x2a7444: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a7444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a7448: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A7448u;
    {
        const bool branch_taken_0x2a7448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2A744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7448u;
        // 0x2a744c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7448) {
            ctx->pc = 0x2A7430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7430;
        }
    }
    ctx->pc = 0x2A7450u;
label_2a7450:
    // 0x2a7450: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7450u;
        // 0x2a7454: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7458u;
}
