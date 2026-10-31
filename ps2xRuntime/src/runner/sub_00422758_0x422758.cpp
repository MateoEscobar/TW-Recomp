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

// Function: sub_00422758
// Address: 0x422758 - 0x4227d8
void sub_00422758_0x422758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422758_0x422758");
#endif

    switch (ctx->pc) {
        case 0x422798u: goto label_422798;
        case 0x4227c8u: goto label_4227c8;
        default: break;
    }

    ctx->pc = 0x422758u;

    // 0x422758: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x422758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x42275c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42275cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x422760: 0x8c42489c  lw          $v0, 0x489C($v0)
    ctx->pc = 0x422760u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51489Cu));
    // 0x422764: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x422764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x422768: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x422768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x42276c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42276cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422770: 0x244914d4  addiu       $t1, $v0, 0x14D4
    ctx->pc = 0x422770u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 5332));
    // 0x422774: 0x8d284200  lw          $t0, 0x4200($t1)
    ctx->pc = 0x422774u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16896)));
    // 0x422778: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x422778u;
    {
        const bool branch_taken_0x422778 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x42277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422778u;
        // 0x42277c: 0x3c050070  lui         $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422778) {
            ctx->pc = 0x4227BCu;
            goto label_4227bc;
        }
    }
    ctx->pc = 0x422780u;
    // 0x422780: 0x8c4214d8  lw          $v0, 0x14D8($v0)
    ctx->pc = 0x422780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x422784: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x422784u;
    {
        const bool branch_taken_0x422784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x422788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422784u;
        // 0x422788: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422784) {
            ctx->pc = 0x422798u;
            goto label_422798;
        }
    }
    ctx->pc = 0x42278Cu;
    // 0x42278c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x42278Cu;
    {
        const bool branch_taken_0x42278c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x422790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42278Cu;
        // 0x422790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42278c) {
            ctx->pc = 0x4227BCu;
            goto label_4227bc;
        }
    }
    ctx->pc = 0x422794u;
    // 0x422794: 0x0  nop
    ctx->pc = 0x422794u;
    // NOP
label_422798:
    // 0x422798: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x422798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x42279c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x42279Cu;
    {
        const bool branch_taken_0x42279c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4227A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42279Cu;
        // 0x4227a0: 0x24020084  addiu       $v0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42279c) {
            ctx->pc = 0x4227BCu;
            goto label_4227bc;
        }
    }
    ctx->pc = 0x4227A4u;
    // 0x4227a4: 0xe21818  mult        $v1, $a3, $v0
    ctx->pc = 0x4227a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4227a8: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x4227a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4227ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4227acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4227b0: 0x5464fff9  bnel        $v1, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4227B0u;
    {
        const bool branch_taken_0x4227b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4227b0) {
            ctx->pc = 0x4227B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4227B0u;
            // 0x4227b4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x422798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422798;
        }
    }
    ctx->pc = 0x4227B8u;
    // 0x4227b8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x4227b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4227bc:
    // 0x4227bc: 0x24a5e490  addiu       $a1, $a1, -0x1B70
    ctx->pc = 0x4227bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960272));
    // 0x4227c0: 0xc108c14  jal         func_423050
    ctx->pc = 0x4227C0u;
    SET_GPR_U32(ctx, 31, 0x4227C8u);
    ctx->pc = 0x4227C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4227C0u;
    // 0x4227c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423050u, 0x4227C0u, 0x4227C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4227C8u;
label_4227c8:
    // 0x4227c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4227c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4227cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4227ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4227d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4227D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4227D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4227D0u;
        // 0x4227d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4227D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4227D8u;
}
