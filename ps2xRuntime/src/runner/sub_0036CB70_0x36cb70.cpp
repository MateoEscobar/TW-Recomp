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

// Function: sub_0036CB70
// Address: 0x36cb70 - 0x36cbc0
void sub_0036CB70_0x36cb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CB70_0x36cb70");
#endif

    switch (ctx->pc) {
        case 0x36cb8cu: goto label_36cb8c;
        case 0x36cb94u: goto label_36cb94;
        case 0x36cb9cu: goto label_36cb9c;
        case 0x36cba8u: goto label_36cba8;
        default: break;
    }

    ctx->pc = 0x36cb70u;

    // 0x36cb70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36cb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36cb74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36cb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cb78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36cb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36cb7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36cb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cb80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36cb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36cb84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CB84u;
    SET_GPR_U32(ctx, 31, 0x36CB8Cu);
    ctx->pc = 0x36CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CB84u;
    // 0x36cb88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CB84u, 0x36CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CB8Cu;
label_36cb8c:
    // 0x36cb8c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36CB8Cu;
    SET_GPR_U32(ctx, 31, 0x36CB94u);
    ctx->pc = 0x36CB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CB8Cu;
    // 0x36cb90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36CB8Cu, 0x36CB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CB94u;
label_36cb94:
    // 0x36cb94: 0xc0e16e4  jal         func_385B90
    ctx->pc = 0x36CB94u;
    SET_GPR_U32(ctx, 31, 0x36CB9Cu);
    ctx->pc = 0x36CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CB94u;
    // 0x36cb98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385B90u, 0x36CB94u, 0x36CB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CB9Cu;
label_36cb9c:
    // 0x36cb9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36cb9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cba0: 0xc102562  jal         func_409588
    ctx->pc = 0x36CBA0u;
    SET_GPR_U32(ctx, 31, 0x36CBA8u);
    ctx->pc = 0x36CBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CBA0u;
    // 0x36cba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x36CBA0u, 0x36CBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CBA8u;
label_36cba8:
    // 0x36cba8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36cba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36cbac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cbb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36cbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x36CBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CBB4u;
        // 0x36cbb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CBBCu;
    // 0x36cbbc: 0x0  nop
    ctx->pc = 0x36cbbcu;
    // NOP
    ctx->pc = 0x36cbc0u;
}
