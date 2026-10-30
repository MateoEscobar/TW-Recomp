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

// Function: sub_00377F18
// Address: 0x377f18 - 0x377f78
void sub_00377F18_0x377f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377F18_0x377f18");
#endif

    switch (ctx->pc) {
        case 0x377f38u: goto label_377f38;
        case 0x377f40u: goto label_377f40;
        case 0x377f54u: goto label_377f54;
        case 0x377f60u: goto label_377f60;
        default: break;
    }

    ctx->pc = 0x377f18u;

    // 0x377f18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x377f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x377f1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x377f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377f20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x377f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x377f24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x377f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377f28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x377f2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377f30: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377F30u;
    SET_GPR_U32(ctx, 31, 0x377F38u);
    ctx->pc = 0x377F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377F30u;
    // 0x377f34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377F30u, 0x377F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377F38u;
label_377f38:
    // 0x377f38: 0xc10b108  jal         func_42C420
    ctx->pc = 0x377F38u;
    SET_GPR_U32(ctx, 31, 0x377F40u);
    ctx->pc = 0x377F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377F38u;
    // 0x377f3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x377F38u, 0x377F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377F40u;
label_377f40:
    // 0x377f40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x377f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x377f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377f48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x377f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377f4c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x377F4Cu;
    SET_GPR_U32(ctx, 31, 0x377F54u);
    ctx->pc = 0x377F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377F4Cu;
    // 0x377f50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x377F4Cu, 0x377F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377F54u;
label_377f54:
    // 0x377f54: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x377f54u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x377f58: 0xc0e5b16  jal         func_396C58
    ctx->pc = 0x377F58u;
    SET_GPR_U32(ctx, 31, 0x377F60u);
    ctx->pc = 0x377F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377F58u;
    // 0x377f5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396C58u, 0x377F58u, 0x377F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377F60u;
label_377f60:
    // 0x377f60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x377f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377f64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x377f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377f68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377f70: 0x3e00008  jr          $ra
    ctx->pc = 0x377F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F70u;
        // 0x377f74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377F78u;
}
