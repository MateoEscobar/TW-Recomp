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

// Function: sub_0035D158
// Address: 0x35d158 - 0x35d1a8
void sub_0035D158_0x35d158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D158_0x35d158");
#endif

    switch (ctx->pc) {
        case 0x35d174u: goto label_35d174;
        case 0x35d17cu: goto label_35d17c;
        case 0x35d184u: goto label_35d184;
        case 0x35d190u: goto label_35d190;
        default: break;
    }

    ctx->pc = 0x35d158u;

    // 0x35d158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d15c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d160: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35d160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35d164: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d16c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D16Cu;
    SET_GPR_U32(ctx, 31, 0x35D174u);
    ctx->pc = 0x35D170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D16Cu;
    // 0x35d170: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D16Cu, 0x35D174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D174u;
label_35d174:
    // 0x35d174: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D174u;
    SET_GPR_U32(ctx, 31, 0x35D17Cu);
    ctx->pc = 0x35D178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D174u;
    // 0x35d178: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D174u, 0x35D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D17Cu;
label_35d17c:
    // 0x35d17c: 0xc08e62c  jal         func_2398B0
    ctx->pc = 0x35D17Cu;
    SET_GPR_U32(ctx, 31, 0x35D184u);
    ctx->pc = 0x35D180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D17Cu;
    // 0x35d180: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2398B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2398B0u, 0x35D17Cu, 0x35D184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D184u;
label_35d184:
    // 0x35d184: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35d184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d188: 0xc102562  jal         func_409588
    ctx->pc = 0x35D188u;
    SET_GPR_U32(ctx, 31, 0x35D190u);
    ctx->pc = 0x35D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D188u;
    // 0x35d18c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35D188u, 0x35D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D190u;
label_35d190:
    // 0x35d190: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35d190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d19c: 0x3e00008  jr          $ra
    ctx->pc = 0x35D19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D19Cu;
        // 0x35d1a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D1A4u;
    // 0x35d1a4: 0x0  nop
    ctx->pc = 0x35d1a4u;
    // NOP
    ctx->pc = 0x35d1a8u;
}
