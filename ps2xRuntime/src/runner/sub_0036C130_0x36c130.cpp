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

// Function: sub_0036C130
// Address: 0x36c130 - 0x36c1a8
void sub_0036C130_0x36c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C130_0x36c130");
#endif

    switch (ctx->pc) {
        case 0x36c158u: goto label_36c158;
        case 0x36c160u: goto label_36c160;
        case 0x36c174u: goto label_36c174;
        case 0x36c17cu: goto label_36c17c;
        case 0x36c188u: goto label_36c188;
        default: break;
    }

    ctx->pc = 0x36c130u;

    // 0x36c130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36c130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36c134: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c138: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36c138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36c13c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36c13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36c140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36c140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c144: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36c144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c148: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36c148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36c14c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c150: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C150u;
    SET_GPR_U32(ctx, 31, 0x36C158u);
    ctx->pc = 0x36C154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C150u;
    // 0x36c154: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C150u, 0x36C158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C158u;
label_36c158:
    // 0x36c158: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36C158u;
    SET_GPR_U32(ctx, 31, 0x36C160u);
    ctx->pc = 0x36C15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C158u;
    // 0x36c15c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36C158u, 0x36C160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C160u;
label_36c160:
    // 0x36c160: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36c160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c164: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36c164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c168: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36c168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c16c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C16Cu;
    SET_GPR_U32(ctx, 31, 0x36C174u);
    ctx->pc = 0x36C170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C16Cu;
    // 0x36c170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C16Cu, 0x36C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C174u;
label_36c174:
    // 0x36c174: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36C174u;
    SET_GPR_U32(ctx, 31, 0x36C17Cu);
    ctx->pc = 0x36C178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C174u;
    // 0x36c178: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36C174u, 0x36C17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C17Cu;
label_36c17c:
    // 0x36c17c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36c17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c180: 0xc105ebc  jal         func_417AF0
    ctx->pc = 0x36C180u;
    SET_GPR_U32(ctx, 31, 0x36C188u);
    ctx->pc = 0x36C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C180u;
    // 0x36c184: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x417AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417AF0u, 0x36C180u, 0x36C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C188u;
label_36c188:
    // 0x36c188: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36c188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36c18c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c18cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c190: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36c190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c194: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36c194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c19c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C19Cu;
        // 0x36c1a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C1A4u;
    // 0x36c1a4: 0x0  nop
    ctx->pc = 0x36c1a4u;
    // NOP
    ctx->pc = 0x36c1a8u;
}
