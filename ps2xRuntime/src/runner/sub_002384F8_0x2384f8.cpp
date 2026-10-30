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

// Function: sub_002384F8
// Address: 0x2384f8 - 0x238540
void sub_002384F8_0x2384f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002384F8_0x2384f8");
#endif

    switch (ctx->pc) {
        case 0x238514u: goto label_238514;
        case 0x23851cu: goto label_23851c;
        case 0x23852cu: goto label_23852c;
        default: break;
    }

    ctx->pc = 0x2384f8u;

    // 0x2384f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2384f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2384fc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2384fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x238500: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x238500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x238504: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x238504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23850c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23850Cu;
    SET_GPR_U32(ctx, 31, 0x238514u);
    ctx->pc = 0x238510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23850Cu;
    // 0x238510: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23850Cu, 0x238514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238514u;
label_238514:
    // 0x238514: 0xc08a61a  jal         func_229868
    ctx->pc = 0x238514u;
    SET_GPR_U32(ctx, 31, 0x23851Cu);
    ctx->pc = 0x238518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238514u;
    // 0x238518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238514u, 0x23851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23851Cu;
label_23851c:
    // 0x23851c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23851Cu;
    {
        const bool branch_taken_0x23851c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23851c) {
            ctx->pc = 0x238520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23851Cu;
            // 0x238520: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238534u;
            goto label_238534;
        }
    }
    ctx->pc = 0x238524u;
    // 0x238524: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x238524u;
    SET_GPR_U32(ctx, 31, 0x23852Cu);
    ctx->pc = 0x238528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238524u;
    // 0x238528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x238524u, 0x23852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23852Cu;
label_23852c:
    // 0x23852c: 0xa050001b  sb          $s0, 0x1B($v0)
    ctx->pc = 0x23852cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 16));
    // 0x238530: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x238530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_238534:
    // 0x238534: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238538: 0x3e00008  jr          $ra
    ctx->pc = 0x238538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238538u;
        // 0x23853c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238540u;
}
