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

// Function: sub_0037B960
// Address: 0x37b960 - 0x37b998
void sub_0037B960_0x37b960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B960_0x37b960");
#endif

    switch (ctx->pc) {
        case 0x37b974u: goto label_37b974;
        case 0x37b980u: goto label_37b980;
        default: break;
    }

    ctx->pc = 0x37b960u;

    // 0x37b960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b964: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37b964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37b968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b96c: 0xc106146  jal         func_418518
    ctx->pc = 0x37B96Cu;
    SET_GPR_U32(ctx, 31, 0x37B974u);
    ctx->pc = 0x37B970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B96Cu;
    // 0x37b970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418518u, 0x37B96Cu, 0x37B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B974u;
label_37b974:
    // 0x37b974: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37b974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b978: 0xc102562  jal         func_409588
    ctx->pc = 0x37B978u;
    SET_GPR_U32(ctx, 31, 0x37B980u);
    ctx->pc = 0x37B97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B978u;
    // 0x37b97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x37B978u, 0x37B980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B980u;
label_37b980:
    // 0x37b980: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37b980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b98c: 0x3e00008  jr          $ra
    ctx->pc = 0x37B98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B98Cu;
        // 0x37b990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B994u;
    // 0x37b994: 0x0  nop
    ctx->pc = 0x37b994u;
    // NOP
    ctx->pc = 0x37b998u;
}
