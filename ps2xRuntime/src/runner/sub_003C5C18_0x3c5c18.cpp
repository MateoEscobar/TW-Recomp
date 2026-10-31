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

// Function: sub_003C5C18
// Address: 0x3c5c18 - 0x3c5cb8
void sub_003C5C18_0x3c5c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5C18_0x3c5c18");
#endif

    switch (ctx->pc) {
        case 0x3c5c50u: goto label_3c5c50;
        case 0x3c5c5cu: goto label_3c5c5c;
        case 0x3c5c68u: goto label_3c5c68;
        case 0x3c5c74u: goto label_3c5c74;
        case 0x3c5c80u: goto label_3c5c80;
        case 0x3c5c90u: goto label_3c5c90;
        case 0x3c5c98u: goto label_3c5c98;
        default: break;
    }

    ctx->pc = 0x3c5c18u;

    // 0x3c5c18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c5c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3c5c1c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c5c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3c5c20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c5c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c5c24: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c5c24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3c5c28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c5c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5c2c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c5c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3c5c30: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3c5c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3c5c34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c5c34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5c38: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x3c5c38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3c5c3c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3c5c3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5c40: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5c40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3c5c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c5c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c5c48: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3C5C48u;
    SET_GPR_U32(ctx, 31, 0x3C5C50u);
    ctx->pc = 0x3C5C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5C48u;
    // 0x3c5c4c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3C5C48u, 0x3C5C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5C50u;
label_3c5c50:
    // 0x3c5c50: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5c54: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C5C54u;
    SET_GPR_U32(ctx, 31, 0x3C5C5Cu);
    ctx->pc = 0x3C5C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5C54u;
    // 0x3c5c58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C5C54u, 0x3C5C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5C5Cu;
label_3c5c5c:
    // 0x3c5c5c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5c60: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C5C60u;
    SET_GPR_U32(ctx, 31, 0x3C5C68u);
    ctx->pc = 0x3C5C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5C60u;
    // 0x3c5c64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C5C60u, 0x3C5C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5C68u;
label_3c5c68:
    // 0x3c5c68: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5c6c: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3C5C6Cu;
    SET_GPR_U32(ctx, 31, 0x3C5C74u);
    ctx->pc = 0x3C5C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5C6Cu;
    // 0x3c5c70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3C5C6Cu, 0x3C5C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5C74u;
label_3c5c74:
    // 0x3c5c74: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5c78: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C5C78u;
    SET_GPR_U32(ctx, 31, 0x3C5C80u);
    ctx->pc = 0x3C5C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5C78u;
    // 0x3c5c7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C5C78u, 0x3C5C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5C80u;
label_3c5c80:
    // 0x3c5c80: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5c84: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c5c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3c5c88: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3C5C88u;
    SET_GPR_U32(ctx, 31, 0x3C5C90u);
    ctx->pc = 0x3C5C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5C88u;
    // 0x3c5c8c: 0x24a53bc8  addiu       $a1, $a1, 0x3BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3C5C88u, 0x3C5C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5C90u;
label_3c5c90:
    // 0x3c5c90: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3C5C90u;
    SET_GPR_U32(ctx, 31, 0x3C5C98u);
    ctx->pc = 0x3C5C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5C90u;
    // 0x3c5c94: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3C5C90u, 0x3C5C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5C98u;
label_3c5c98:
    // 0x3c5c98: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c5c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c5c9c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c5c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c5ca0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c5ca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c5ca4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3c5ca4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5ca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c5ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5cac: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3c5cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c5cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5CB0u;
        // 0x3c5cb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5CB8u;
}
