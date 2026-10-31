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

// Function: sub_0030AE10
// Address: 0x30ae10 - 0x30ae78
void sub_0030AE10_0x30ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AE10_0x30ae10");
#endif

    switch (ctx->pc) {
        case 0x30ae30u: goto label_30ae30;
        case 0x30ae70u: goto label_30ae70;
        default: break;
    }

    ctx->pc = 0x30ae10u;

    // 0x30ae10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30ae14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30ae14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30ae18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30ae18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30ae1c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x30ae1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ae20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30ae20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30ae24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30ae24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ae28: 0xc08a61a  jal         func_229868
    ctx->pc = 0x30AE28u;
    SET_GPR_U32(ctx, 31, 0x30AE30u);
    ctx->pc = 0x30AE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AE28u;
    // 0x30ae2c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x30AE28u, 0x30AE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE30u;
label_30ae30:
    // 0x30ae30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30ae30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ae34: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30AE34u;
    {
        const bool branch_taken_0x30ae34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE34u;
        // 0x30ae38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae34) {
            ctx->pc = 0x30AE84u;
            return;
        }
    }
    ctx->pc = 0x30AE3Cu;
    // 0x30ae3c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x30ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x30ae40: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x30ae40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30ae44: 0x2cc30016  sltiu       $v1, $a2, 0x16
    ctx->pc = 0x30ae44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x30ae48: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30AE48u;
    {
        const bool branch_taken_0x30ae48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE48u;
        // 0x30ae4c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae48) {
            ctx->pc = 0x30AE80u;
            return;
        }
    }
    ctx->pc = 0x30AE50u;
    // 0x30ae50: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x30ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x30ae54: 0x2442b990  addiu       $v0, $v0, -0x4670
    ctx->pc = 0x30ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949264));
    // 0x30ae58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30ae5c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30ae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30ae60: 0x800008  jr          $a0
    ctx->pc = 0x30AE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30AE68u: goto label_30ae68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AE60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x30AE68u;
label_30ae68:
    // 0x30ae68: 0xc0c2ad6  jal         func_30AB58
    ctx->pc = 0x30AE68u;
    SET_GPR_U32(ctx, 31, 0x30AE70u);
    ctx->pc = 0x30AE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AE68u;
    // 0x30ae6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AB58u, 0x30AE68u, 0x30AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE70u;
label_30ae70:
    // 0x30ae70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30AE70u;
    {
        const bool branch_taken_0x30ae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE70u;
        // 0x30ae74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae70) {
            ctx->pc = 0x30AE84u;
            return;
        }
    }
    ctx->pc = 0x30AE78u;
}
