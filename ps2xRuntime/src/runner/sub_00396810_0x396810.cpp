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

// Function: sub_00396810
// Address: 0x396810 - 0x396858
void sub_00396810_0x396810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396810_0x396810");
#endif

    switch (ctx->pc) {
        case 0x396824u: goto label_396824;
        case 0x39682cu: goto label_39682c;
        case 0x39684cu: goto label_39684c;
        default: break;
    }

    ctx->pc = 0x396810u;

    // 0x396810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x396810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x396814: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x396814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x396818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39681c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x39681Cu;
    SET_GPR_U32(ctx, 31, 0x396824u);
    ctx->pc = 0x396820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39681Cu;
    // 0x396820: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x39681Cu, 0x396824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396824u;
label_396824:
    // 0x396824: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x396824u;
    SET_GPR_U32(ctx, 31, 0x39682Cu);
    ctx->pc = 0x396828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396824u;
    // 0x396828: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x396824u, 0x39682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39682Cu;
label_39682c:
    // 0x39682c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39682Cu;
    {
        const bool branch_taken_0x39682c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x396830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39682Cu;
        // 0x396830: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39682c) {
            ctx->pc = 0x39683Cu;
            goto label_39683c;
        }
    }
    ctx->pc = 0x396834u;
    // 0x396834: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x396834u;
    {
        const bool branch_taken_0x396834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396834u;
        // 0x396838: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396834) {
            ctx->pc = 0x39684Cu;
            goto label_39684c;
        }
    }
    ctx->pc = 0x39683Cu;
label_39683c:
    // 0x39683c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39683cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396840: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x396840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
    // 0x396844: 0xc0e63d8  jal         func_398F60
    ctx->pc = 0x396844u;
    SET_GPR_U32(ctx, 31, 0x39684Cu);
    ctx->pc = 0x396848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396844u;
    // 0x396848: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398F60u, 0x396844u, 0x39684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39684Cu;
label_39684c:
    // 0x39684c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39684cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396850: 0x3e00008  jr          $ra
    ctx->pc = 0x396850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396850u;
        // 0x396854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396858u;
}
