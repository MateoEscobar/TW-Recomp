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

// Function: sub_00235198
// Address: 0x235198 - 0x235200
void sub_00235198_0x235198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235198_0x235198");
#endif

    switch (ctx->pc) {
        case 0x2351b4u: goto label_2351b4;
        case 0x2351bcu: goto label_2351bc;
        default: break;
    }

    ctx->pc = 0x235198u;

    // 0x235198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23519c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23519cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2351a0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2351a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2351a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2351a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2351a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2351a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2351ac: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2351ACu;
    SET_GPR_U32(ctx, 31, 0x2351B4u);
    ctx->pc = 0x2351B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2351ACu;
    // 0x2351b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2351ACu, 0x2351B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2351B4u;
label_2351b4:
    // 0x2351b4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2351B4u;
    SET_GPR_U32(ctx, 31, 0x2351BCu);
    ctx->pc = 0x2351B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2351B4u;
    // 0x2351b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2351B4u, 0x2351BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2351BCu;
label_2351bc:
    // 0x2351bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2351bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2351c0: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2351C0u;
    {
        const bool branch_taken_0x2351c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2351c0) {
            ctx->pc = 0x2351C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2351C0u;
            // 0x2351c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2351F0u;
            goto label_2351f0;
        }
    }
    ctx->pc = 0x2351C8u;
    // 0x2351c8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2351C8u;
    {
        const bool branch_taken_0x2351c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2351CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351C8u;
        // 0x2351cc: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351c8) {
            ctx->pc = 0x2351DCu;
            goto label_2351dc;
        }
    }
    ctx->pc = 0x2351D0u;
    // 0x2351d0: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2351d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2351d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2351D4u;
    {
        const bool branch_taken_0x2351d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2351D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351D4u;
        // 0x2351d8: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351d4) {
            ctx->pc = 0x2351E8u;
            goto label_2351e8;
        }
    }
    ctx->pc = 0x2351DCu;
label_2351dc:
    // 0x2351dc: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2351dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2351e0: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2351e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2351e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2351e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2351e8:
    // 0x2351e8: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2351e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x2351ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2351ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2351f0:
    // 0x2351f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2351f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2351f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2351F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2351F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351F4u;
        // 0x2351f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2351F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2351FCu;
    // 0x2351fc: 0x0  nop
    ctx->pc = 0x2351fcu;
    // NOP
    ctx->pc = 0x235200u;
}
