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

// Function: sub_002FDDE8
// Address: 0x2fdde8 - 0x2fde78
void sub_002FDDE8_0x2fdde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDDE8_0x2fdde8");
#endif

    switch (ctx->pc) {
        case 0x2fde18u: goto label_2fde18;
        case 0x2fde20u: goto label_2fde20;
        case 0x2fde30u: goto label_2fde30;
        case 0x2fde3cu: goto label_2fde3c;
        case 0x2fde58u: goto label_2fde58;
        default: break;
    }

    ctx->pc = 0x2fdde8u;

    // 0x2fdde8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fdde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2fddec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2fddecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2fddf0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2fddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2fddf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fddf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fddf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fddf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fddfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2fddfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fde00: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2fde00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2fde04: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2fde04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fde08: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2fde08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2fde0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fde0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fde10: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2FDE10u;
    SET_GPR_U32(ctx, 31, 0x2FDE18u);
    ctx->pc = 0x2FDE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDE10u;
    // 0x2fde14: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2FDE10u, 0x2FDE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDE18u;
label_2fde18:
    // 0x2fde18: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2FDE18u;
    SET_GPR_U32(ctx, 31, 0x2FDE20u);
    ctx->pc = 0x2FDE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDE18u;
    // 0x2fde1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2FDE18u, 0x2FDE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDE20u;
label_2fde20:
    // 0x2fde20: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2FDE20u;
    {
        const bool branch_taken_0x2fde20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE20u;
        // 0x2fde24: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde20) {
            ctx->pc = 0x2FDE5Cu;
            goto label_2fde5c;
        }
    }
    ctx->pc = 0x2FDE28u;
    // 0x2fde28: 0xc087502  jal         func_21D408
    ctx->pc = 0x2FDE28u;
    SET_GPR_U32(ctx, 31, 0x2FDE30u);
    ctx->pc = 0x2FDE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDE28u;
    // 0x2fde2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2FDE28u, 0x2FDE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDE30u;
label_2fde30:
    // 0x2fde30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fde30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fde34: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2FDE34u;
    SET_GPR_U32(ctx, 31, 0x2FDE3Cu);
    ctx->pc = 0x2FDE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDE34u;
    // 0x2fde38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2FDE34u, 0x2FDE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDE3Cu;
label_2fde3c:
    // 0x2fde3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FDE3Cu;
    {
        const bool branch_taken_0x2fde3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE3Cu;
        // 0x2fde40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde3c) {
            ctx->pc = 0x2FDE58u;
            goto label_2fde58;
        }
    }
    ctx->pc = 0x2FDE44u;
    // 0x2fde44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fde44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fde48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2fde48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fde4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2fde4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2fde50: 0xc0bf79e  jal         func_2FDE78
    ctx->pc = 0x2FDE50u;
    SET_GPR_U32(ctx, 31, 0x2FDE58u);
    ctx->pc = 0x2FDE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDE50u;
    // 0x2fde54: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDE78u, 0x2FDE50u, 0x2FDE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDE58u;
label_2fde58:
    // 0x2fde58: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2fde58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fde5c:
    // 0x2fde5c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2fde5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fde60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fde60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fde64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fde64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fde68: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2fde68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fde6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE6Cu;
        // 0x2fde70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDE74u;
    // 0x2fde74: 0x0  nop
    ctx->pc = 0x2fde74u;
    // NOP
    ctx->pc = 0x2fde78u;
}
