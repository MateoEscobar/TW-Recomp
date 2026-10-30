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

// Function: sub_003725F0
// Address: 0x3725f0 - 0x372668
void sub_003725F0_0x3725f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003725F0_0x3725f0");
#endif

    switch (ctx->pc) {
        case 0x372618u: goto label_372618;
        case 0x372620u: goto label_372620;
        case 0x372634u: goto label_372634;
        case 0x37263cu: goto label_37263c;
        case 0x372648u: goto label_372648;
        default: break;
    }

    ctx->pc = 0x3725f0u;

    // 0x3725f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3725f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3725f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3725f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3725f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3725f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3725fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3725fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x372600: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x372600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372604: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x372604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372608: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x372608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37260c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37260cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x372610: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372610u;
    SET_GPR_U32(ctx, 31, 0x372618u);
    ctx->pc = 0x372614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372610u;
    // 0x372614: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372610u, 0x372618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372618u;
label_372618:
    // 0x372618: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x372618u;
    SET_GPR_U32(ctx, 31, 0x372620u);
    ctx->pc = 0x37261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372618u;
    // 0x37261c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x372618u, 0x372620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372620u;
label_372620:
    // 0x372620: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x372620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372624: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x372624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372628: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x372628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37262c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37262Cu;
    SET_GPR_U32(ctx, 31, 0x372634u);
    ctx->pc = 0x372630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37262Cu;
    // 0x372630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37262Cu, 0x372634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372634u;
label_372634:
    // 0x372634: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x372634u;
    SET_GPR_U32(ctx, 31, 0x37263Cu);
    ctx->pc = 0x372638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372634u;
    // 0x372638: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x372634u, 0x37263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37263Cu;
label_37263c:
    // 0x37263c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37263cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372640: 0xc044f00  jal         func_113C00
    ctx->pc = 0x372640u;
    SET_GPR_U32(ctx, 31, 0x372648u);
    ctx->pc = 0x372644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372640u;
    // 0x372644: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x113C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113C00u, 0x372640u, 0x372648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372648u;
label_372648:
    // 0x372648: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x372648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37264c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37264cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372650: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x372650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x372654: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x372654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x372658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37265c: 0x3e00008  jr          $ra
    ctx->pc = 0x37265Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37265Cu;
        // 0x372660: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37265Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372664u;
    // 0x372664: 0x0  nop
    ctx->pc = 0x372664u;
    // NOP
    ctx->pc = 0x372668u;
}
