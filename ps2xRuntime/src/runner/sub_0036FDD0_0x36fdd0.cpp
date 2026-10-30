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

// Function: sub_0036FDD0
// Address: 0x36fdd0 - 0x36fe90
void sub_0036FDD0_0x36fdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FDD0_0x36fdd0");
#endif

    switch (ctx->pc) {
        case 0x36fe00u: goto label_36fe00;
        case 0x36fe14u: goto label_36fe14;
        case 0x36fe1cu: goto label_36fe1c;
        case 0x36fe30u: goto label_36fe30;
        case 0x36fe38u: goto label_36fe38;
        case 0x36fe4cu: goto label_36fe4c;
        case 0x36fe54u: goto label_36fe54;
        case 0x36fe68u: goto label_36fe68;
        default: break;
    }

    ctx->pc = 0x36fdd0u;

    // 0x36fdd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36fdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36fdd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36fdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36fdd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36fdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36fddc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36fddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fde0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36fde0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fde4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36fde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36fde8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36fde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36fdec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36fdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36fdf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36fdf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fdf4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x36fdf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x36fdf8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36FDF8u;
    SET_GPR_U32(ctx, 31, 0x36FE00u);
    ctx->pc = 0x36FDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FDF8u;
    // 0x36fdfc: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36FDF8u, 0x36FE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FE00u;
label_36fe00:
    // 0x36fe00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36fe00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fe04: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x36fe04u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36fe08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36fe0c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36FE0Cu;
    SET_GPR_U32(ctx, 31, 0x36FE14u);
    ctx->pc = 0x36FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FE0Cu;
    // 0x36fe10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36FE0Cu, 0x36FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FE14u;
label_36fe14:
    // 0x36fe14: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36FE14u;
    SET_GPR_U32(ctx, 31, 0x36FE1Cu);
    ctx->pc = 0x36FE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FE14u;
    // 0x36fe18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36FE14u, 0x36FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FE1Cu;
label_36fe1c:
    // 0x36fe1c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x36fe1cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x36fe20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36fe20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fe24: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36fe28: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36FE28u;
    SET_GPR_U32(ctx, 31, 0x36FE30u);
    ctx->pc = 0x36FE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FE28u;
    // 0x36fe2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36FE28u, 0x36FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FE30u;
label_36fe30:
    // 0x36fe30: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36FE30u;
    SET_GPR_U32(ctx, 31, 0x36FE38u);
    ctx->pc = 0x36FE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FE30u;
    // 0x36fe34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36FE30u, 0x36FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FE38u;
label_36fe38:
    // 0x36fe38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36fe38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fe3c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36fe3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36fe40: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36fe40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36fe44: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36FE44u;
    SET_GPR_U32(ctx, 31, 0x36FE4Cu);
    ctx->pc = 0x36FE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FE44u;
    // 0x36fe48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36FE44u, 0x36FE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FE4Cu;
label_36fe4c:
    // 0x36fe4c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36FE4Cu;
    SET_GPR_U32(ctx, 31, 0x36FE54u);
    ctx->pc = 0x36FE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FE4Cu;
    // 0x36fe50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36FE4Cu, 0x36FE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FE54u;
label_36fe54:
    // 0x36fe54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36fe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fe58: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x36fe58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x36fe5c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x36fe5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x36fe60: 0xc06d70c  jal         func_1B5C30
    ctx->pc = 0x36FE60u;
    SET_GPR_U32(ctx, 31, 0x36FE68u);
    ctx->pc = 0x36FE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FE60u;
    // 0x36fe64: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5C30u, 0x36FE60u, 0x36FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FE68u;
label_36fe68:
    // 0x36fe68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36fe68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36fe6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36fe6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fe70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36fe70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36fe74: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36fe74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36fe78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36fe78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fe7c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x36fe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36fe80: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x36fe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36fe84: 0x3e00008  jr          $ra
    ctx->pc = 0x36FE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE84u;
        // 0x36fe88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FE8Cu;
    // 0x36fe8c: 0x0  nop
    ctx->pc = 0x36fe8cu;
    // NOP
    ctx->pc = 0x36fe90u;
}
