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

// Function: sub_0040C240
// Address: 0x40c240 - 0x40c280
void sub_0040C240_0x40c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C240_0x40c240");
#endif

    switch (ctx->pc) {
        case 0x40c260u: goto label_40c260;
        case 0x40c26cu: goto label_40c26c;
        default: break;
    }

    ctx->pc = 0x40c240u;

    // 0x40c240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40c240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40c244: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40c244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x40c248: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40c248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40c24c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x40c24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40c250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40c254: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x40c254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c258: 0xc10c366  jal         func_430D98
    ctx->pc = 0x40C258u;
    SET_GPR_U32(ctx, 31, 0x40C260u);
    ctx->pc = 0x40C25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C258u;
    // 0x40c25c: 0x244435d0  addiu       $a0, $v0, 0x35D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430D98u, 0x40C258u, 0x40C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C260u;
label_40c260:
    // 0x40c260: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40c260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c264: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x40C264u;
    SET_GPR_U32(ctx, 31, 0x40C26Cu);
    ctx->pc = 0x40C268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C264u;
    // 0x40c268: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x40C264u, 0x40C26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C26Cu;
label_40c26c:
    // 0x40c26c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40c26cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40c270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40c270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40c274: 0x3e00008  jr          $ra
    ctx->pc = 0x40C274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C274u;
        // 0x40c278: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C27Cu;
    // 0x40c27c: 0x0  nop
    ctx->pc = 0x40c27cu;
    // NOP
    ctx->pc = 0x40c280u;
}
