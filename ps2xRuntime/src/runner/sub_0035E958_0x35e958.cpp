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

// Function: sub_0035E958
// Address: 0x35e958 - 0x35e990
void sub_0035E958_0x35e958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E958_0x35e958");
#endif

    switch (ctx->pc) {
        case 0x35e96cu: goto label_35e96c;
        case 0x35e974u: goto label_35e974;
        case 0x35e97cu: goto label_35e97c;
        default: break;
    }

    ctx->pc = 0x35e958u;

    // 0x35e958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35e958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35e95c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e964: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E964u;
    SET_GPR_U32(ctx, 31, 0x35E96Cu);
    ctx->pc = 0x35E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E964u;
    // 0x35e968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E964u, 0x35E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E96Cu;
label_35e96c:
    // 0x35e96c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35E96Cu;
    SET_GPR_U32(ctx, 31, 0x35E974u);
    ctx->pc = 0x35E970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E96Cu;
    // 0x35e970: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35E96Cu, 0x35E974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E974u;
label_35e974:
    // 0x35e974: 0xc0a5222  jal         func_294888
    ctx->pc = 0x35E974u;
    SET_GPR_U32(ctx, 31, 0x35E97Cu);
    ctx->pc = 0x35E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E974u;
    // 0x35e978: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294888u, 0x35E974u, 0x35E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E97Cu;
label_35e97c:
    // 0x35e97c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e980: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e984: 0x3e00008  jr          $ra
    ctx->pc = 0x35E984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E984u;
        // 0x35e988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E98Cu;
    // 0x35e98c: 0x0  nop
    ctx->pc = 0x35e98cu;
    // NOP
    ctx->pc = 0x35e990u;
}
