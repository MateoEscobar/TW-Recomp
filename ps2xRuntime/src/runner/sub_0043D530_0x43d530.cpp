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

// Function: sub_0043D530
// Address: 0x43d530 - 0x43d5c0
void sub_0043D530_0x43d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D530_0x43d530");
#endif

    switch (ctx->pc) {
        case 0x43d540u: goto label_43d540;
        case 0x43d564u: goto label_43d564;
        case 0x43d570u: goto label_43d570;
        case 0x43d594u: goto label_43d594;
        default: break;
    }

    ctx->pc = 0x43d530u;

    // 0x43d530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x43d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x43d534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43d534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43d538: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x43D538u;
    SET_GPR_U32(ctx, 31, 0x43D540u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x43D538u, 0x43D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D540u;
label_43d540:
    // 0x43d540: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x43d540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x43d544: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x43d544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x43d548: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x43d548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x43d54c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x43d54cu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x43d550: 0xf  sync
    ctx->pc = 0x43d550u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x43d554: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43D554u;
    {
        const bool branch_taken_0x43d554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D554u;
        // 0x43d558: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d554) {
            ctx->pc = 0x43D568u;
            goto label_43d568;
        }
    }
    ctx->pc = 0x43D55Cu;
    // 0x43d55c: 0xc110cc4  jal         func_443310
    ctx->pc = 0x43D55Cu;
    SET_GPR_U32(ctx, 31, 0x43D564u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x43D55Cu, 0x43D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D564u;
label_43d564:
    // 0x43d564: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x43d564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_43d568:
    // 0x43d568: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x43d568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x43d56c: 0x0  nop
    ctx->pc = 0x43d56cu;
    // NOP
label_43d570:
    // 0x43d570: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x43d570u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x43d574: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x43d574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x43d578: 0x0  nop
    ctx->pc = 0x43d578u;
    // NOP
    // 0x43d57c: 0x0  nop
    ctx->pc = 0x43d57cu;
    // NOP
    // 0x43d580: 0x0  nop
    ctx->pc = 0x43d580u;
    // NOP
    // 0x43d584: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x43D584u;
    {
        const bool branch_taken_0x43d584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43d584) {
            ctx->pc = 0x43D570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43d570;
        }
    }
    ctx->pc = 0x43D58Cu;
    // 0x43d58c: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x43D58Cu;
    SET_GPR_U32(ctx, 31, 0x43D594u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x43D58Cu, 0x43D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D594u;
label_43d594:
    // 0x43d594: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x43d594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x43d598: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x43d598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x43d59c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x43d59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x43d5a0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x43d5a0u;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x43d5a4: 0xf  sync
    ctx->pc = 0x43d5a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x43d5a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43D5A8u;
    {
        const bool branch_taken_0x43d5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D5A8u;
        // 0x43d5ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d5a8) {
            ctx->pc = 0x43D5B8u;
            goto label_43d5b8;
        }
    }
    ctx->pc = 0x43D5B0u;
    // 0x43d5b0: 0x8110cc4  j           func_443310
    ctx->pc = 0x43D5B0u;
    ctx->pc = 0x43D5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D5B0u;
    // 0x43d5b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443310u;
    sub_00443310_0x443310(rdram, ctx, runtime); return;
    ctx->pc = 0x43D5B8u;
label_43d5b8:
    // 0x43d5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x43D5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D5B8u;
        // 0x43d5bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D5C0u;
}
