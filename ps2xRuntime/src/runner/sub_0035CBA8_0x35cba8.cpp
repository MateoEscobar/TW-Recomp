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

// Function: sub_0035CBA8
// Address: 0x35cba8 - 0x35cc20
void sub_0035CBA8_0x35cba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CBA8_0x35cba8");
#endif

    switch (ctx->pc) {
        case 0x35cbccu: goto label_35cbcc;
        case 0x35cbe0u: goto label_35cbe0;
        case 0x35cbf4u: goto label_35cbf4;
        case 0x35cc04u: goto label_35cc04;
        default: break;
    }

    ctx->pc = 0x35cba8u;

    // 0x35cba8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35cba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35cbac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35cbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cbb0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35cbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35cbb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35cbb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cbb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35cbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35cbbc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35cbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35cbc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35cbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35cbc4: 0xc102488  jal         func_409220
    ctx->pc = 0x35CBC4u;
    SET_GPR_U32(ctx, 31, 0x35CBCCu);
    ctx->pc = 0x35CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CBC4u;
    // 0x35cbc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35CBC4u, 0x35CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CBCCu;
label_35cbcc:
    // 0x35cbcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35cbccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cbd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35cbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cbd4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35cbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35cbd8: 0xc102488  jal         func_409220
    ctx->pc = 0x35CBD8u;
    SET_GPR_U32(ctx, 31, 0x35CBE0u);
    ctx->pc = 0x35CBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CBD8u;
    // 0x35cbdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35CBD8u, 0x35CBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CBE0u;
label_35cbe0:
    // 0x35cbe0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35cbe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cbe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35cbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cbe8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35cbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35cbec: 0xc102488  jal         func_409220
    ctx->pc = 0x35CBECu;
    SET_GPR_U32(ctx, 31, 0x35CBF4u);
    ctx->pc = 0x35CBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CBECu;
    // 0x35cbf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35CBECu, 0x35CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CBF4u;
label_35cbf4:
    // 0x35cbf4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35cbf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cbf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35cbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cbfc: 0xc08d23e  jal         func_2348F8
    ctx->pc = 0x35CBFCu;
    SET_GPR_U32(ctx, 31, 0x35CC04u);
    ctx->pc = 0x35CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CBFCu;
    // 0x35cc00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2348F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2348F8u, 0x35CBFCu, 0x35CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CC04u;
label_35cc04:
    // 0x35cc04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35cc04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35cc08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35cc08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cc0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35cc0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35cc10: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35cc10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35cc14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35cc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35cc18: 0x3e00008  jr          $ra
    ctx->pc = 0x35CC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CC18u;
        // 0x35cc1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CC20u;
}
