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

// Function: sub_00328668
// Address: 0x328668 - 0x328698
void sub_00328668_0x328668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328668_0x328668");
#endif

    switch (ctx->pc) {
        case 0x32868cu: goto label_32868c;
        default: break;
    }

    ctx->pc = 0x328668u;

    // 0x328668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32866c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x32866cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x328674: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x328674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x328678: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x328678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x32867c: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x32867cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x328680: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x328680u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x328684: 0xc0ca174  jal         func_3285D0
    ctx->pc = 0x328684u;
    SET_GPR_U32(ctx, 31, 0x32868Cu);
    ctx->pc = 0x328688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328684u;
    // 0x328688: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3285D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3285D0u, 0x328684u, 0x32868Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32868Cu;
label_32868c:
    // 0x32868c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32868cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328690: 0x3e00008  jr          $ra
    ctx->pc = 0x328690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328690u;
        // 0x328694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328698u;
}
