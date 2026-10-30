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

// Function: sub_0037AE68
// Address: 0x37ae68 - 0x37af58
void sub_0037AE68_0x37ae68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037AE68_0x37ae68");
#endif

    switch (ctx->pc) {
        case 0x37ae9cu: goto label_37ae9c;
        case 0x37aea4u: goto label_37aea4;
        case 0x37aeb8u: goto label_37aeb8;
        case 0x37aec0u: goto label_37aec0;
        case 0x37aed4u: goto label_37aed4;
        case 0x37aedcu: goto label_37aedc;
        case 0x37aef0u: goto label_37aef0;
        case 0x37aef8u: goto label_37aef8;
        case 0x37af0cu: goto label_37af0c;
        case 0x37af14u: goto label_37af14;
        case 0x37af2cu: goto label_37af2c;
        default: break;
    }

    ctx->pc = 0x37ae68u;

    // 0x37ae68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37ae68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x37ae6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37ae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ae70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37ae70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37ae74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37ae74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37ae78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37ae78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ae7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37ae7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ae80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37ae80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37ae84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37ae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37ae88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37ae88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ae8c: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x37ae8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x37ae90: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x37ae90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x37ae94: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37AE94u;
    SET_GPR_U32(ctx, 31, 0x37AE9Cu);
    ctx->pc = 0x37AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AE94u;
    // 0x37ae98: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37AE94u, 0x37AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AE9Cu;
label_37ae9c:
    // 0x37ae9c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37AE9Cu;
    SET_GPR_U32(ctx, 31, 0x37AEA4u);
    ctx->pc = 0x37AEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AE9Cu;
    // 0x37aea0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37AE9Cu, 0x37AEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AEA4u;
label_37aea4:
    // 0x37aea4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37aea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aea8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37aea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aeac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37aeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37aeb0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37AEB0u;
    SET_GPR_U32(ctx, 31, 0x37AEB8u);
    ctx->pc = 0x37AEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AEB0u;
    // 0x37aeb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37AEB0u, 0x37AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AEB8u;
label_37aeb8:
    // 0x37aeb8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37AEB8u;
    SET_GPR_U32(ctx, 31, 0x37AEC0u);
    ctx->pc = 0x37AEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AEB8u;
    // 0x37aebc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37AEB8u, 0x37AEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AEC0u;
label_37aec0:
    // 0x37aec0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x37aec0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x37aec4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37aec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aec8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37aec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37aecc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37AECCu;
    SET_GPR_U32(ctx, 31, 0x37AED4u);
    ctx->pc = 0x37AED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AECCu;
    // 0x37aed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37AECCu, 0x37AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AED4u;
label_37aed4:
    // 0x37aed4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37AED4u;
    SET_GPR_U32(ctx, 31, 0x37AEDCu);
    ctx->pc = 0x37AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AED4u;
    // 0x37aed8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37AED4u, 0x37AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AEDCu;
label_37aedc:
    // 0x37aedc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x37aedcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x37aee0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37aee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aee4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37aee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37aee8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37AEE8u;
    SET_GPR_U32(ctx, 31, 0x37AEF0u);
    ctx->pc = 0x37AEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AEE8u;
    // 0x37aeec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37AEE8u, 0x37AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AEF0u;
label_37aef0:
    // 0x37aef0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37AEF0u;
    SET_GPR_U32(ctx, 31, 0x37AEF8u);
    ctx->pc = 0x37AEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AEF0u;
    // 0x37aef4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37AEF0u, 0x37AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AEF8u;
label_37aef8:
    // 0x37aef8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37aef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aefc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x37aefcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x37af00: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37af00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37af04: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37AF04u;
    SET_GPR_U32(ctx, 31, 0x37AF0Cu);
    ctx->pc = 0x37AF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF04u;
    // 0x37af08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37AF04u, 0x37AF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF0Cu;
label_37af0c:
    // 0x37af0c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37AF0Cu;
    SET_GPR_U32(ctx, 31, 0x37AF14u);
    ctx->pc = 0x37AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF0Cu;
    // 0x37af10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37AF0Cu, 0x37AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF14u;
label_37af14:
    // 0x37af14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37af14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37af18: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x37af18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x37af1c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x37af1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x37af20: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x37af20u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x37af24: 0xc104b10  jal         func_412C40
    ctx->pc = 0x37AF24u;
    SET_GPR_U32(ctx, 31, 0x37AF2Cu);
    ctx->pc = 0x37AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF24u;
    // 0x37af28: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x412C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412C40u, 0x37AF24u, 0x37AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF2Cu;
label_37af2c:
    // 0x37af2c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37af2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37af30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37af30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37af34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37af34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37af38: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37af38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37af3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37af3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37af40: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x37af40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x37af44: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x37af44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x37af48: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x37af48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37af4c: 0x3e00008  jr          $ra
    ctx->pc = 0x37AF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AF4Cu;
        // 0x37af50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AF54u;
    // 0x37af54: 0x0  nop
    ctx->pc = 0x37af54u;
    // NOP
    ctx->pc = 0x37af58u;
}
