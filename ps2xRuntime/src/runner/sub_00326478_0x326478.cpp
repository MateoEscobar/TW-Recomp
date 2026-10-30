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

// Function: sub_00326478
// Address: 0x326478 - 0x3264c8
void sub_00326478_0x326478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326478_0x326478");
#endif

    switch (ctx->pc) {
        case 0x32649cu: goto label_32649c;
        case 0x3264acu: goto label_3264ac;
        default: break;
    }

    ctx->pc = 0x326478u;

    // 0x326478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x326478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32647c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32647cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326480: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x326480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x326484: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x326484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x326488: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x326488u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x32648c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32648cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326494: 0xc0c8db8  jal         func_3236E0
    ctx->pc = 0x326494u;
    SET_GPR_U32(ctx, 31, 0x32649Cu);
    ctx->pc = 0x326498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326494u;
    // 0x326498: 0x26104b98  addiu       $s0, $s0, 0x4B98 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236E0u, 0x326494u, 0x32649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32649Cu;
label_32649c:
    // 0x32649c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32649cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3264a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3264a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3264a4: 0xc0c9224  jal         func_324890
    ctx->pc = 0x3264A4u;
    SET_GPR_U32(ctx, 31, 0x3264ACu);
    ctx->pc = 0x3264A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3264A4u;
    // 0x3264a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324890u, 0x3264A4u, 0x3264ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3264ACu;
label_3264ac:
    // 0x3264ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3264acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3264b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3264b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3264b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3264b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3264b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3264b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3264bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3264BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3264C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3264BCu;
        // 0x3264c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3264BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3264C4u;
    // 0x3264c4: 0x0  nop
    ctx->pc = 0x3264c4u;
    // NOP
    ctx->pc = 0x3264c8u;
}
