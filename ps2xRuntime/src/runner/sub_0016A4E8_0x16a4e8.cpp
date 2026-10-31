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

// Function: sub_0016A4E8
// Address: 0x16a4e8 - 0x16a538
void sub_0016A4E8_0x16a4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A4E8_0x16a4e8");
#endif

    switch (ctx->pc) {
        case 0x16a510u: goto label_16a510;
        case 0x16a51cu: goto label_16a51c;
        default: break;
    }

    ctx->pc = 0x16a4e8u;

    // 0x16a4e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a4ec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16a4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16a4f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16a4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16a4f4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16a4f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16a4f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a4fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a500: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16A500u;
    {
        const bool branch_taken_0x16a500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A500u;
        // 0x16a504: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a500) {
            ctx->pc = 0x16A524u;
            goto label_16a524;
        }
    }
    ctx->pc = 0x16A508u;
    // 0x16a508: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16A508u;
    SET_GPR_U32(ctx, 31, 0x16A510u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16A508u, 0x16A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A510u;
label_16a510:
    // 0x16a510: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16a510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a514: 0xc05950c  jal         func_165430
    ctx->pc = 0x16A514u;
    SET_GPR_U32(ctx, 31, 0x16A51Cu);
    ctx->pc = 0x16A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A514u;
    // 0x16a518: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165430u, 0x16A514u, 0x16A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A51Cu;
label_16a51c:
    // 0x16a51c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A51Cu;
    {
        const bool branch_taken_0x16a51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A51Cu;
        // 0x16a520: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a51c) {
            ctx->pc = 0x16A52Cu;
            goto label_16a52c;
        }
    }
    ctx->pc = 0x16A524u;
label_16a524:
    // 0x16a524: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16a524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a528: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16a52c:
    // 0x16a52c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a530: 0x3e00008  jr          $ra
    ctx->pc = 0x16A530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A530u;
        // 0x16a534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A538u;
}
