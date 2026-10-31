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

// Function: sub_00310E00
// Address: 0x310e00 - 0x310e90
void sub_00310E00_0x310e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310E00_0x310e00");
#endif

    switch (ctx->pc) {
        case 0x310e2cu: goto label_310e2c;
        case 0x310e40u: goto label_310e40;
        case 0x310e64u: goto label_310e64;
        case 0x310e70u: goto label_310e70;
        default: break;
    }

    ctx->pc = 0x310e00u;

    // 0x310e00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x310e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x310e04: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x310e04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x310e08: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x310e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x310e0c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x310e0cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x310e10: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x310e10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x310e14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x310e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310e18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x310e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x310e1c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x310e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x310e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x310e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x310e24: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x310E24u;
    SET_GPR_U32(ctx, 31, 0x310E2Cu);
    ctx->pc = 0x310E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310E24u;
    // 0x310e28: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x310E24u, 0x310E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310E2Cu;
label_310e2c:
    // 0x310e2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x310e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310e30: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x310E30u;
    {
        const bool branch_taken_0x310e30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x310E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E30u;
        // 0x310e34: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e30) {
            ctx->pc = 0x310E74u;
            goto label_310e74;
        }
    }
    ctx->pc = 0x310E38u;
    // 0x310e38: 0xc0c1956  jal         func_306558
    ctx->pc = 0x310E38u;
    SET_GPR_U32(ctx, 31, 0x310E40u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x310E38u, 0x310E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310E40u;
label_310e40:
    // 0x310e40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x310e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310e44: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x310E44u;
    {
        const bool branch_taken_0x310e44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x310E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E44u;
        // 0x310e48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e44) {
            ctx->pc = 0x310E64u;
            goto label_310e64;
        }
    }
    ctx->pc = 0x310E4Cu;
    // 0x310e4c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x310e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x310e50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x310e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x310e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310e58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x310e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310e5c: 0xc0c43a4  jal         func_310E90
    ctx->pc = 0x310E5Cu;
    SET_GPR_U32(ctx, 31, 0x310E64u);
    ctx->pc = 0x310E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310E5Cu;
    // 0x310e60: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x310E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310E90u, 0x310E5Cu, 0x310E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310E64u;
label_310e64:
    // 0x310e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x310e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310e68: 0xc059590  jal         func_165640
    ctx->pc = 0x310E68u;
    SET_GPR_U32(ctx, 31, 0x310E70u);
    ctx->pc = 0x310E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310E68u;
    // 0x310e6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x310E68u, 0x310E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310E70u;
label_310e70:
    // 0x310e70: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x310e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_310e74:
    // 0x310e74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x310e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x310e78: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x310e78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x310e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310e80: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x310e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x310e84: 0x3e00008  jr          $ra
    ctx->pc = 0x310E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E84u;
        // 0x310e88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310E8Cu;
    // 0x310e8c: 0x0  nop
    ctx->pc = 0x310e8cu;
    // NOP
    ctx->pc = 0x310e90u;
}
