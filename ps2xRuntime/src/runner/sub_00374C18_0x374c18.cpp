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

// Function: sub_00374C18
// Address: 0x374c18 - 0x374cd0
void sub_00374C18_0x374c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374C18_0x374c18");
#endif

    switch (ctx->pc) {
        case 0x374c44u: goto label_374c44;
        case 0x374c4cu: goto label_374c4c;
        case 0x374c60u: goto label_374c60;
        case 0x374c68u: goto label_374c68;
        case 0x374c80u: goto label_374c80;
        case 0x374c88u: goto label_374c88;
        case 0x374c9cu: goto label_374c9c;
        case 0x374cb0u: goto label_374cb0;
        default: break;
    }

    ctx->pc = 0x374c18u;

    // 0x374c18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x374c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x374c1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x374c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374c20: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x374c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x374c24: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x374c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x374c28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x374c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374c2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x374c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374c30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x374c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x374c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374c38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x374c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374c3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374C3Cu;
    SET_GPR_U32(ctx, 31, 0x374C44u);
    ctx->pc = 0x374C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374C3Cu;
    // 0x374c40: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374C3Cu, 0x374C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374C44u;
label_374c44:
    // 0x374c44: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x374C44u;
    SET_GPR_U32(ctx, 31, 0x374C4Cu);
    ctx->pc = 0x374C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374C44u;
    // 0x374c48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x374C44u, 0x374C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374C4Cu;
label_374c4c:
    // 0x374c4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x374c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374c50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x374c50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374c54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x374c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x374c58: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374C58u;
    SET_GPR_U32(ctx, 31, 0x374C60u);
    ctx->pc = 0x374C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374C58u;
    // 0x374c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374C58u, 0x374C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374C60u;
label_374c60:
    // 0x374c60: 0xc10b108  jal         func_42C420
    ctx->pc = 0x374C60u;
    SET_GPR_U32(ctx, 31, 0x374C68u);
    ctx->pc = 0x374C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374C60u;
    // 0x374c64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x374C60u, 0x374C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374C68u;
label_374c68:
    // 0x374c68: 0x34068004  ori         $a2, $zero, 0x8004
    ctx->pc = 0x374c68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x374c6c: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x374c6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x374c70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x374c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374c74: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x374c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x374c78: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374C78u;
    SET_GPR_U32(ctx, 31, 0x374C80u);
    ctx->pc = 0x374C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374C78u;
    // 0x374c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374C78u, 0x374C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374C80u;
label_374c80:
    // 0x374c80: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x374C80u;
    SET_GPR_U32(ctx, 31, 0x374C88u);
    ctx->pc = 0x374C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374C80u;
    // 0x374c84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x374C80u, 0x374C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374C88u;
label_374c88:
    // 0x374c88: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x374c88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x374c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x374c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374c90: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x374c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x374c94: 0xc102488  jal         func_409220
    ctx->pc = 0x374C94u;
    SET_GPR_U32(ctx, 31, 0x374C9Cu);
    ctx->pc = 0x374C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374C94u;
    // 0x374c98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x374C94u, 0x374C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374C9Cu;
label_374c9c:
    // 0x374c9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x374c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374ca0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x374ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374ca4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x374ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374ca8: 0xc0c5766  jal         func_315D98
    ctx->pc = 0x374CA8u;
    SET_GPR_U32(ctx, 31, 0x374CB0u);
    ctx->pc = 0x374CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374CA8u;
    // 0x374cac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x315D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315D98u, 0x374CA8u, 0x374CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374CB0u;
label_374cb0:
    // 0x374cb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x374cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374cb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x374cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374cb8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x374cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374cbc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x374cbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374cc4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x374cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x374cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x374CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374CC8u;
        // 0x374ccc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374CD0u;
}
