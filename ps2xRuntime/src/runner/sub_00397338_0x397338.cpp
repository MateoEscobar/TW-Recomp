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

// Function: sub_00397338
// Address: 0x397338 - 0x3973a0
void sub_00397338_0x397338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397338_0x397338");
#endif

    switch (ctx->pc) {
        case 0x397354u: goto label_397354;
        case 0x397368u: goto label_397368;
        case 0x397374u: goto label_397374;
        case 0x397384u: goto label_397384;
        case 0x39738cu: goto label_39738c;
        default: break;
    }

    ctx->pc = 0x397338u;

    // 0x397338: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x397338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x39733c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x39733cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x397340: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x397340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x397344: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x397344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x397348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x397348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39734c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x39734Cu;
    SET_GPR_U32(ctx, 31, 0x397354u);
    ctx->pc = 0x397350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39734Cu;
    // 0x397350: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x39734Cu, 0x397354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397354u;
label_397354:
    // 0x397354: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x397354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397358: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x397358u;
    {
        const bool branch_taken_0x397358 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397358u;
        // 0x39735c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397358) {
            ctx->pc = 0x39738Cu;
            goto label_39738c;
        }
    }
    ctx->pc = 0x397360u;
    // 0x397360: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x397360u;
    SET_GPR_U32(ctx, 31, 0x397368u);
    ctx->pc = 0x397364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397360u;
    // 0x397364: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x397360u, 0x397368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397368u;
label_397368:
    // 0x397368: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x397368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39736c: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x39736Cu;
    SET_GPR_U32(ctx, 31, 0x397374u);
    ctx->pc = 0x397370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39736Cu;
    // 0x397370: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x39736Cu, 0x397374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397374u;
label_397374:
    // 0x397374: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x397374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x397378: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x397378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x39737c: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x39737Cu;
    SET_GPR_U32(ctx, 31, 0x397384u);
    ctx->pc = 0x397380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39737Cu;
    // 0x397380: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x39737Cu, 0x397384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397384u;
label_397384:
    // 0x397384: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x397384u;
    SET_GPR_U32(ctx, 31, 0x39738Cu);
    ctx->pc = 0x397388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397384u;
    // 0x397388: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x397384u, 0x39738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39738Cu;
label_39738c:
    // 0x39738c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x39738cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x397390: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x397390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397394: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x397394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397398: 0x3e00008  jr          $ra
    ctx->pc = 0x397398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397398u;
        // 0x39739c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3973A0u;
}
