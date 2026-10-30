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

// Function: sub_00413198
// Address: 0x413198 - 0x413200
void sub_00413198_0x413198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413198_0x413198");
#endif

    switch (ctx->pc) {
        case 0x4131b4u: goto label_4131b4;
        case 0x4131c8u: goto label_4131c8;
        case 0x4131d8u: goto label_4131d8;
        default: break;
    }

    ctx->pc = 0x413198u;

    // 0x413198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x413198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41319c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x41319cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4131a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4131a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4131a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4131a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4131a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4131a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4131ac: 0xc0e40aa  jal         func_3902A8
    ctx->pc = 0x4131ACu;
    SET_GPR_U32(ctx, 31, 0x4131B4u);
    ctx->pc = 0x4131B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4131ACu;
    // 0x4131b0: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3902A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3902A8u, 0x4131ACu, 0x4131B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4131B4u;
label_4131b4:
    // 0x4131b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4131b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4131b8: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x4131B8u;
    {
        const bool branch_taken_0x4131b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4131BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4131B8u;
        // 0x4131bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4131b8) {
            ctx->pc = 0x4131ECu;
            goto label_4131ec;
        }
    }
    ctx->pc = 0x4131C0u;
    // 0x4131c0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x4131C0u;
    SET_GPR_U32(ctx, 31, 0x4131C8u);
    ctx->pc = 0x4131C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4131C0u;
    // 0x4131c4: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4131C0u, 0x4131C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4131C8u;
label_4131c8:
    // 0x4131c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4131C8u;
    {
        const bool branch_taken_0x4131c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4131CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4131C8u;
        // 0x4131cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4131c8) {
            ctx->pc = 0x4131E8u;
            goto label_4131e8;
        }
    }
    ctx->pc = 0x4131D0u;
    // 0x4131d0: 0xc104a70  jal         func_4129C0
    ctx->pc = 0x4131D0u;
    SET_GPR_U32(ctx, 31, 0x4131D8u);
    ctx->pc = 0x4131D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4131D0u;
    // 0x4131d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4129C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4129C0u, 0x4131D0u, 0x4131D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4131D8u;
label_4131d8:
    // 0x4131d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4131d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4131dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4131dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4131e0: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4131E0u;
    {
        const bool branch_taken_0x4131e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4131E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4131E0u;
        // 0x4131e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4131e0) {
            ctx->pc = 0x4131ECu;
            goto label_4131ec;
        }
    }
    ctx->pc = 0x4131E8u;
label_4131e8:
    // 0x4131e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4131e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4131ec:
    // 0x4131ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4131ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4131f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4131f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4131f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4131F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4131F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4131F4u;
        // 0x4131f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4131F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4131FCu;
    // 0x4131fc: 0x0  nop
    ctx->pc = 0x4131fcu;
    // NOP
    ctx->pc = 0x413200u;
}
