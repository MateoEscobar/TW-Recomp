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

// Function: sub_0036FEC8
// Address: 0x36fec8 - 0x36ff40
void sub_0036FEC8_0x36fec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FEC8_0x36fec8");
#endif

    switch (ctx->pc) {
        case 0x36fef0u: goto label_36fef0;
        case 0x36fef8u: goto label_36fef8;
        case 0x36ff0cu: goto label_36ff0c;
        case 0x36ff14u: goto label_36ff14;
        case 0x36ff20u: goto label_36ff20;
        default: break;
    }

    ctx->pc = 0x36fec8u;

    // 0x36fec8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36fec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36fecc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36feccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36fed0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36fed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36fed4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36fed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36fed8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36fed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fedc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36fedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36fee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36fee4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x36fee4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36fee8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36FEE8u;
    SET_GPR_U32(ctx, 31, 0x36FEF0u);
    ctx->pc = 0x36FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FEE8u;
    // 0x36feec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36FEE8u, 0x36FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FEF0u;
label_36fef0:
    // 0x36fef0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36FEF0u;
    SET_GPR_U32(ctx, 31, 0x36FEF8u);
    ctx->pc = 0x36FEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FEF0u;
    // 0x36fef4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36FEF0u, 0x36FEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FEF8u;
label_36fef8:
    // 0x36fef8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36fef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fefc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36fefcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36ff00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36ff00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ff04: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36FF04u;
    SET_GPR_U32(ctx, 31, 0x36FF0Cu);
    ctx->pc = 0x36FF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FF04u;
    // 0x36ff08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36FF04u, 0x36FF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FF0Cu;
label_36ff0c:
    // 0x36ff0c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36FF0Cu;
    SET_GPR_U32(ctx, 31, 0x36FF14u);
    ctx->pc = 0x36FF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FF0Cu;
    // 0x36ff10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36FF0Cu, 0x36FF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FF14u;
label_36ff14:
    // 0x36ff14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36ff14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36ff18: 0xc06d74e  jal         func_1B5D38
    ctx->pc = 0x36FF18u;
    SET_GPR_U32(ctx, 31, 0x36FF20u);
    ctx->pc = 0x36FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FF18u;
    // 0x36ff1c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5D38u, 0x36FF18u, 0x36FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FF20u;
label_36ff20:
    // 0x36ff20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36ff20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36ff24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36ff24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ff28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36ff28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ff2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ff2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ff30: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x36ff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36ff34: 0x3e00008  jr          $ra
    ctx->pc = 0x36FF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF34u;
        // 0x36ff38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FF3Cu;
    // 0x36ff3c: 0x0  nop
    ctx->pc = 0x36ff3cu;
    // NOP
    ctx->pc = 0x36ff40u;
}
