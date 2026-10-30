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

// Function: sub_0035FAC8
// Address: 0x35fac8 - 0x35fb68
void sub_0035FAC8_0x35fac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035FAC8_0x35fac8");
#endif

    switch (ctx->pc) {
        case 0x35faf4u: goto label_35faf4;
        case 0x35fafcu: goto label_35fafc;
        case 0x35fb10u: goto label_35fb10;
        case 0x35fb18u: goto label_35fb18;
        case 0x35fb2cu: goto label_35fb2c;
        case 0x35fb34u: goto label_35fb34;
        case 0x35fb44u: goto label_35fb44;
        default: break;
    }

    ctx->pc = 0x35fac8u;

    // 0x35fac8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35fac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35facc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35faccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fad0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35fad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35fad4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35fad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35fad8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35fad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fadc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35fadcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fae0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35fae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35fae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35fae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35fae8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35fae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35faec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FAECu;
    SET_GPR_U32(ctx, 31, 0x35FAF4u);
    ctx->pc = 0x35FAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FAECu;
    // 0x35faf0: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FAECu, 0x35FAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FAF4u;
label_35faf4:
    // 0x35faf4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35FAF4u;
    SET_GPR_U32(ctx, 31, 0x35FAFCu);
    ctx->pc = 0x35FAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FAF4u;
    // 0x35faf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35FAF4u, 0x35FAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FAFCu;
label_35fafc:
    // 0x35fafc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35fafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fb00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35fb00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fb04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35fb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35fb08: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FB08u;
    SET_GPR_U32(ctx, 31, 0x35FB10u);
    ctx->pc = 0x35FB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FB08u;
    // 0x35fb0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FB08u, 0x35FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FB10u;
label_35fb10:
    // 0x35fb10: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35FB10u;
    SET_GPR_U32(ctx, 31, 0x35FB18u);
    ctx->pc = 0x35FB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FB10u;
    // 0x35fb14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35FB10u, 0x35FB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FB18u;
label_35fb18:
    // 0x35fb18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35fb18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fb1c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35fb1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x35fb20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35fb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35fb24: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FB24u;
    SET_GPR_U32(ctx, 31, 0x35FB2Cu);
    ctx->pc = 0x35FB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FB24u;
    // 0x35fb28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FB24u, 0x35FB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FB2Cu;
label_35fb2c:
    // 0x35fb2c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35FB2Cu;
    SET_GPR_U32(ctx, 31, 0x35FB34u);
    ctx->pc = 0x35FB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FB2Cu;
    // 0x35fb30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35FB2Cu, 0x35FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FB34u;
label_35fb34:
    // 0x35fb34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35fb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fb38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35fb38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35fb3c: 0xc0a4a4e  jal         func_292938
    ctx->pc = 0x35FB3Cu;
    SET_GPR_U32(ctx, 31, 0x35FB44u);
    ctx->pc = 0x35FB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FB3Cu;
    // 0x35fb40: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x292938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292938u, 0x35FB3Cu, 0x35FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FB44u;
label_35fb44:
    // 0x35fb44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35fb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35fb48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35fb48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fb4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35fb4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35fb50: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35fb50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35fb54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35fb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fb58: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x35fb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35fb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x35FB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FB5Cu;
        // 0x35fb60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FB64u;
    // 0x35fb64: 0x0  nop
    ctx->pc = 0x35fb64u;
    // NOP
    ctx->pc = 0x35fb68u;
}
