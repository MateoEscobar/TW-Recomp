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

// Function: sub_003711D0
// Address: 0x3711d0 - 0x371230
void sub_003711D0_0x3711d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003711D0_0x3711d0");
#endif

    switch (ctx->pc) {
        case 0x3711f0u: goto label_3711f0;
        case 0x3711f8u: goto label_3711f8;
        case 0x37120cu: goto label_37120c;
        case 0x371218u: goto label_371218;
        default: break;
    }

    ctx->pc = 0x3711d0u;

    // 0x3711d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3711d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3711d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3711d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3711d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3711d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3711dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3711dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3711e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3711e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3711e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3711e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3711e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3711E8u;
    SET_GPR_U32(ctx, 31, 0x3711F0u);
    ctx->pc = 0x3711ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3711E8u;
    // 0x3711ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3711E8u, 0x3711F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3711F0u;
label_3711f0:
    // 0x3711f0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3711F0u;
    SET_GPR_U32(ctx, 31, 0x3711F8u);
    ctx->pc = 0x3711F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3711F0u;
    // 0x3711f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3711F0u, 0x3711F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3711F8u;
label_3711f8:
    // 0x3711f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3711f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3711fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3711fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371200: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x371200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371204: 0xc102488  jal         func_409220
    ctx->pc = 0x371204u;
    SET_GPR_U32(ctx, 31, 0x37120Cu);
    ctx->pc = 0x371208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371204u;
    // 0x371208: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x371204u, 0x37120Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37120Cu;
label_37120c:
    // 0x37120c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37120cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371210: 0xc044d38  jal         func_1134E0
    ctx->pc = 0x371210u;
    SET_GPR_U32(ctx, 31, 0x371218u);
    ctx->pc = 0x371214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371210u;
    // 0x371214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1134E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1134E0u, 0x371210u, 0x371218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371218u;
label_371218:
    // 0x371218: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x371218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37121c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37121cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x371224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371228: 0x3e00008  jr          $ra
    ctx->pc = 0x371228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371228u;
        // 0x37122c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371230u;
}
