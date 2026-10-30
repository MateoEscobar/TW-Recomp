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

// Function: sub_00446860
// Address: 0x446860 - 0x4468e0
void sub_00446860_0x446860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00446860_0x446860");
#endif

    switch (ctx->pc) {
        case 0x4468bcu: goto label_4468bc;
        default: break;
    }

    ctx->pc = 0x446860u;

    // 0x446860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x446860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x446864: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x446864u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x446868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44686c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x44686Cu;
    {
        const bool branch_taken_0x44686c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x44686c) {
            ctx->pc = 0x446870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44686Cu;
            // 0x446870: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x446874u;
            goto label_446874;
        }
    }
    ctx->pc = 0x446874u;
label_446874:
    // 0x446874: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x446874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x446878: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x446878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x44687c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x44687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x446880: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x446880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x446884: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x446884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x446888: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x446888u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x44688c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x44688cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x446890: 0x1012  mflo        $v0
    ctx->pc = 0x446890u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x446894: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x446894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x446898: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x446898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x44689c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x44689cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4468a0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4468A0u;
    {
        const bool branch_taken_0x4468a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4468a0) {
            ctx->pc = 0x4468A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4468A0u;
            // 0x4468a4: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4468B0u;
            goto label_4468b0;
        }
    }
    ctx->pc = 0x4468A8u;
    // 0x4468a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4468A8u;
    {
        const bool branch_taken_0x4468a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4468ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4468A8u;
        // 0x4468ac: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4468a8) {
            ctx->pc = 0x4468C0u;
            goto label_4468c0;
        }
    }
    ctx->pc = 0x4468B0u;
label_4468b0:
    // 0x4468b0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4468b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4468b4: 0xc111f76  jal         func_447DD8
    ctx->pc = 0x4468B4u;
    SET_GPR_U32(ctx, 31, 0x4468BCu);
    ctx->pc = 0x4468B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4468B4u;
    // 0x4468b8: 0x24a5e0b8  addiu       $a1, $a1, -0x1F48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x4468B4u, 0x4468BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4468BCu;
label_4468bc:
    // 0x4468bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4468bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4468c0:
    // 0x4468c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4468c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4468c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4468C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4468C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4468C4u;
        // 0x4468c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4468C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4468CCu;
    // 0x4468cc: 0x0  nop
    ctx->pc = 0x4468ccu;
    // NOP
    // 0x4468d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4468d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4468d4: 0x0  nop
    ctx->pc = 0x4468d4u;
    // NOP
    // 0x4468d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4468d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4468dc: 0x0  nop
    ctx->pc = 0x4468dcu;
    // NOP
    ctx->pc = 0x4468e0u;
}
