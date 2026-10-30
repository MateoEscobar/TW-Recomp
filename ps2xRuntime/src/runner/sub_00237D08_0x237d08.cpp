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

// Function: sub_00237D08
// Address: 0x237d08 - 0x237d48
void sub_00237D08_0x237d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237D08_0x237d08");
#endif

    switch (ctx->pc) {
        case 0x237d1cu: goto label_237d1c;
        case 0x237d24u: goto label_237d24;
        case 0x237d34u: goto label_237d34;
        default: break;
    }

    ctx->pc = 0x237d08u;

    // 0x237d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x237d0c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237d10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237d14: 0xc0e4060  jal         func_390180
    ctx->pc = 0x237D14u;
    SET_GPR_U32(ctx, 31, 0x237D1Cu);
    ctx->pc = 0x237D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D14u;
    // 0x237d18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237D14u, 0x237D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D1Cu;
label_237d1c:
    // 0x237d1c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237D1Cu;
    SET_GPR_U32(ctx, 31, 0x237D24u);
    ctx->pc = 0x237D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D1Cu;
    // 0x237d20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237D1Cu, 0x237D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D24u;
label_237d24:
    // 0x237d24: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x237D24u;
    {
        const bool branch_taken_0x237d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237d24) {
            ctx->pc = 0x237D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237D24u;
            // 0x237d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237D3Cu;
            goto label_237d3c;
        }
    }
    ctx->pc = 0x237D2Cu;
    // 0x237d2c: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x237D2Cu;
    SET_GPR_U32(ctx, 31, 0x237D34u);
    ctx->pc = 0x237D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D2Cu;
    // 0x237d30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x237D2Cu, 0x237D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D34u;
label_237d34:
    // 0x237d34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x237D34u;
    {
        const bool branch_taken_0x237d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D34u;
        // 0x237d38: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d34) {
            ctx->pc = 0x237D40u;
            goto label_237d40;
        }
    }
    ctx->pc = 0x237D3Cu;
label_237d3c:
    // 0x237d3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_237d40:
    // 0x237d40: 0x3e00008  jr          $ra
    ctx->pc = 0x237D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D40u;
        // 0x237d44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237D48u;
}
