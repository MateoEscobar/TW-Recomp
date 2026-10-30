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

// Function: sub_0036D068
// Address: 0x36d068 - 0x36d0e0
void sub_0036D068_0x36d068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D068_0x36d068");
#endif

    switch (ctx->pc) {
        case 0x36d090u: goto label_36d090;
        case 0x36d098u: goto label_36d098;
        case 0x36d0acu: goto label_36d0ac;
        case 0x36d0b4u: goto label_36d0b4;
        case 0x36d0c0u: goto label_36d0c0;
        default: break;
    }

    ctx->pc = 0x36d068u;

    // 0x36d068: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36d068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36d06c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d070: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36d070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36d074: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36d074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36d078: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36d078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d07c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36d07cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d080: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36d080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36d084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d088: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D088u;
    SET_GPR_U32(ctx, 31, 0x36D090u);
    ctx->pc = 0x36D08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D088u;
    // 0x36d08c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D088u, 0x36D090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D090u;
label_36d090:
    // 0x36d090: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36D090u;
    SET_GPR_U32(ctx, 31, 0x36D098u);
    ctx->pc = 0x36D094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D090u;
    // 0x36d094: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36D090u, 0x36D098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D098u;
label_36d098:
    // 0x36d098: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36d098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d09c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36d09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36d0a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36d0a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d0a4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D0A4u;
    SET_GPR_U32(ctx, 31, 0x36D0ACu);
    ctx->pc = 0x36D0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D0A4u;
    // 0x36d0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D0A4u, 0x36D0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D0ACu;
label_36d0ac:
    // 0x36d0ac: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36D0ACu;
    SET_GPR_U32(ctx, 31, 0x36D0B4u);
    ctx->pc = 0x36D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D0ACu;
    // 0x36d0b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36D0ACu, 0x36D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D0B4u;
label_36d0b4:
    // 0x36d0b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36d0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d0b8: 0xc10528a  jal         func_414A28
    ctx->pc = 0x36D0B8u;
    SET_GPR_U32(ctx, 31, 0x36D0C0u);
    ctx->pc = 0x36D0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D0B8u;
    // 0x36d0bc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x414A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414A28u, 0x36D0B8u, 0x36D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D0C0u;
label_36d0c0:
    // 0x36d0c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36d0c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36d0c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d0c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d0c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36d0c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d0cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36d0ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x36D0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D0D4u;
        // 0x36d0d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D0DCu;
    // 0x36d0dc: 0x0  nop
    ctx->pc = 0x36d0dcu;
    // NOP
    ctx->pc = 0x36d0e0u;
}
