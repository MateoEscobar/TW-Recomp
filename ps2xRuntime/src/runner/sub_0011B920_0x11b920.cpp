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

// Function: sub_0011B920
// Address: 0x11b920 - 0x11b970
void sub_0011B920_0x11b920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B920_0x11b920");
#endif

    switch (ctx->pc) {
        case 0x11b920u: goto label_11b920;
        case 0x11b924u: goto label_11b924;
        case 0x11b928u: goto label_11b928;
        case 0x11b92cu: goto label_11b92c;
        case 0x11b930u: goto label_11b930;
        case 0x11b934u: goto label_11b934;
        case 0x11b938u: goto label_11b938;
        case 0x11b93cu: goto label_11b93c;
        case 0x11b940u: goto label_11b940;
        case 0x11b944u: goto label_11b944;
        case 0x11b948u: goto label_11b948;
        case 0x11b94cu: goto label_11b94c;
        case 0x11b950u: goto label_11b950;
        case 0x11b954u: goto label_11b954;
        case 0x11b958u: goto label_11b958;
        case 0x11b95cu: goto label_11b95c;
        case 0x11b960u: goto label_11b960;
        case 0x11b964u: goto label_11b964;
        case 0x11b968u: goto label_11b968;
        case 0x11b96cu: goto label_11b96c;
        default: break;
    }

    ctx->pc = 0x11b920u;

label_11b920:
    // 0x11b920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11b924:
    // 0x11b924: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11b924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_11b928:
    // 0x11b928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11b928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11b92c:
    // 0x11b92c: 0xc0e4060  jal         func_390180
label_11b930:
    if (ctx->pc == 0x11B930u) {
        ctx->pc = 0x11B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B92Cu;
        // 0x11b930: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B934u;
        goto label_11b934;
    }
    ctx->pc = 0x11B92Cu;
    SET_GPR_U32(ctx, 31, 0x11B934u);
    ctx->pc = 0x11B930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B92Cu;
    // 0x11b930: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11B92Cu, 0x11B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B934u;
label_11b934:
    // 0x11b934: 0xc047a5e  jal         func_11E978
label_11b938:
    if (ctx->pc == 0x11B938u) {
        ctx->pc = 0x11B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B934u;
        // 0x11b938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B93Cu;
        goto label_11b93c;
    }
    ctx->pc = 0x11B934u;
    SET_GPR_U32(ctx, 31, 0x11B93Cu);
    ctx->pc = 0x11B938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B934u;
    // 0x11b938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E978u, 0x11B934u, 0x11B93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B93Cu;
label_11b93c:
    // 0x11b93c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b940:
    // 0x11b940: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
label_11b944:
    if (ctx->pc == 0x11B944u) {
        ctx->pc = 0x11B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B940u;
        // 0x11b944: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B948u;
        goto label_11b948;
    }
    ctx->pc = 0x11B940u;
    {
        const bool branch_taken_0x11b940 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b940) {
            ctx->pc = 0x11B944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B940u;
            // 0x11b944: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B954u;
            goto label_11b954;
        }
    }
    ctx->pc = 0x11B948u;
label_11b948:
    // 0x11b948: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11b948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11b94c:
    // 0x11b94c: 0x10000005  b           . + 4 + (0x5 << 2)
label_11b950:
    if (ctx->pc == 0x11B950u) {
        ctx->pc = 0x11B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B94Cu;
        // 0x11b950: 0x244216c0  addiu       $v0, $v0, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B954u;
        goto label_11b954;
    }
    ctx->pc = 0x11B94Cu;
    {
        const bool branch_taken_0x11b94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B94Cu;
        // 0x11b950: 0x244216c0  addiu       $v0, $v0, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b94c) {
            ctx->pc = 0x11B964u;
            goto label_11b964;
        }
    }
    ctx->pc = 0x11B954u;
label_11b954:
    // 0x11b954: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x11b954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_11b958:
    // 0x11b958: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x11b958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_11b95c:
    // 0x11b95c: 0x40f809  jalr        $v0
label_11b960:
    if (ctx->pc == 0x11B960u) {
        ctx->pc = 0x11B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B95Cu;
        // 0x11b960: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B964u;
        goto label_11b964;
    }
    ctx->pc = 0x11B95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11B964u);
        ctx->pc = 0x11B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B95Cu;
        // 0x11b960: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B95Cu, 0x11B964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B964u;
label_11b964:
    // 0x11b964: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11b968:
    // 0x11b968: 0x3e00008  jr          $ra
label_11b96c:
    if (ctx->pc == 0x11B96Cu) {
        ctx->pc = 0x11B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B968u;
        // 0x11b96c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B970u;
        goto label_fallthrough_0x11b968;
    }
    ctx->pc = 0x11B968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B968u;
        // 0x11b96c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11b968:
    ctx->pc = 0x11B970u;
}
