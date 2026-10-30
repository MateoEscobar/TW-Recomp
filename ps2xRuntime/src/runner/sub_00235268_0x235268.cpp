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

// Function: sub_00235268
// Address: 0x235268 - 0x2352b0
void sub_00235268_0x235268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235268_0x235268");
#endif

    switch (ctx->pc) {
        case 0x235284u: goto label_235284;
        case 0x23528cu: goto label_23528c;
        case 0x23529cu: goto label_23529c;
        default: break;
    }

    ctx->pc = 0x235268u;

    // 0x235268: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23526c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23526cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x235270: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x235270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x235274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x235274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23527c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23527Cu;
    SET_GPR_U32(ctx, 31, 0x235284u);
    ctx->pc = 0x235280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23527Cu;
    // 0x235280: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23527Cu, 0x235284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235284u;
label_235284:
    // 0x235284: 0xc08a61a  jal         func_229868
    ctx->pc = 0x235284u;
    SET_GPR_U32(ctx, 31, 0x23528Cu);
    ctx->pc = 0x235288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235284u;
    // 0x235288: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x235284u, 0x23528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23528Cu;
label_23528c:
    // 0x23528c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23528Cu;
    {
        const bool branch_taken_0x23528c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23528Cu;
        // 0x235290: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23528c) {
            ctx->pc = 0x23529Cu;
            goto label_23529c;
        }
    }
    ctx->pc = 0x235294u;
    // 0x235294: 0xc087612  jal         func_21D848
    ctx->pc = 0x235294u;
    SET_GPR_U32(ctx, 31, 0x23529Cu);
    ctx->pc = 0x235298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235294u;
    // 0x235298: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x235294u, 0x23529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23529Cu;
label_23529c:
    // 0x23529c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23529cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2352a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2352a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2352a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2352A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2352A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352A4u;
        // 0x2352a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2352A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2352ACu;
    // 0x2352ac: 0x0  nop
    ctx->pc = 0x2352acu;
    // NOP
    ctx->pc = 0x2352b0u;
}
