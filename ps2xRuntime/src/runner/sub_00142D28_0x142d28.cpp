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

// Function: sub_00142D28
// Address: 0x142d28 - 0x142db8
void sub_00142D28_0x142d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142D28_0x142d28");
#endif

    switch (ctx->pc) {
        case 0x142d28u: goto label_142d28;
        case 0x142d2cu: goto label_142d2c;
        case 0x142d30u: goto label_142d30;
        case 0x142d34u: goto label_142d34;
        case 0x142d38u: goto label_142d38;
        case 0x142d3cu: goto label_142d3c;
        case 0x142d40u: goto label_142d40;
        case 0x142d44u: goto label_142d44;
        case 0x142d48u: goto label_142d48;
        case 0x142d4cu: goto label_142d4c;
        case 0x142d50u: goto label_142d50;
        case 0x142d54u: goto label_142d54;
        case 0x142d58u: goto label_142d58;
        case 0x142d5cu: goto label_142d5c;
        case 0x142d60u: goto label_142d60;
        case 0x142d64u: goto label_142d64;
        case 0x142d68u: goto label_142d68;
        case 0x142d6cu: goto label_142d6c;
        case 0x142d70u: goto label_142d70;
        case 0x142d74u: goto label_142d74;
        case 0x142d78u: goto label_142d78;
        case 0x142d7cu: goto label_142d7c;
        case 0x142d80u: goto label_142d80;
        case 0x142d84u: goto label_142d84;
        case 0x142d88u: goto label_142d88;
        case 0x142d8cu: goto label_142d8c;
        case 0x142d90u: goto label_142d90;
        case 0x142d94u: goto label_142d94;
        case 0x142d98u: goto label_142d98;
        case 0x142d9cu: goto label_142d9c;
        case 0x142da0u: goto label_142da0;
        case 0x142da4u: goto label_142da4;
        case 0x142da8u: goto label_142da8;
        case 0x142dacu: goto label_142dac;
        case 0x142db0u: goto label_142db0;
        case 0x142db4u: goto label_142db4;
        default: break;
    }

    ctx->pc = 0x142d28u;

label_142d28:
    // 0x142d28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x142d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_142d2c:
    // 0x142d2c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x142d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_142d30:
    // 0x142d30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x142d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_142d34:
    // 0x142d34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x142d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_142d38:
    // 0x142d38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x142d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_142d3c:
    // 0x142d3c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x142d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_142d40:
    // 0x142d40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x142d40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_142d44:
    // 0x142d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_142d48:
    // 0x142d48: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x142d48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_142d4c:
    // 0x142d4c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x142d4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_142d50:
    // 0x142d50: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x142d50u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_142d54:
    // 0x142d54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x142d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_142d58:
    // 0x142d58: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x142d58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_142d5c:
    // 0x142d5c: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x142d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_142d60:
    // 0x142d60: 0x40f809  jalr        $v0
label_142d64:
    if (ctx->pc == 0x142D64u) {
        ctx->pc = 0x142D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D60u;
        // 0x142d64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142D68u;
        goto label_142d68;
    }
    ctx->pc = 0x142D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x142D68u);
        ctx->pc = 0x142D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D60u;
        // 0x142d64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142D60u, 0x142D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142D68u;
label_142d68:
    // 0x142d68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x142d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_142d6c:
    // 0x142d6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x142d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_142d70:
    // 0x142d70: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x142d70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_142d74:
    // 0x142d74: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x142d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_142d78:
    // 0x142d78: 0x40f809  jalr        $v0
label_142d7c:
    if (ctx->pc == 0x142D7Cu) {
        ctx->pc = 0x142D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D78u;
        // 0x142d7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142D80u;
        goto label_142d80;
    }
    ctx->pc = 0x142D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x142D80u);
        ctx->pc = 0x142D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D78u;
        // 0x142d7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142D78u, 0x142D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142D80u;
label_142d80:
    // 0x142d80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x142d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_142d84:
    // 0x142d84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x142d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_142d88:
    // 0x142d88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142d88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_142d8c:
    // 0x142d8c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x142d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_142d90:
    // 0x142d90: 0xc050a96  jal         func_142A58
label_142d94:
    if (ctx->pc == 0x142D94u) {
        ctx->pc = 0x142D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D90u;
        // 0x142d94: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142D98u;
        goto label_142d98;
    }
    ctx->pc = 0x142D90u;
    SET_GPR_U32(ctx, 31, 0x142D98u);
    ctx->pc = 0x142D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D90u;
    // 0x142d94: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142A58u, 0x142D90u, 0x142D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D98u;
label_142d98:
    // 0x142d98: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x142d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_142d9c:
    // 0x142d9c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x142d9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_142da0:
    // 0x142da0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x142da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_142da4:
    // 0x142da4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x142da4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_142da8:
    // 0x142da8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142dac:
    // 0x142dac: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x142dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_142db0:
    // 0x142db0: 0x3e00008  jr          $ra
label_142db4:
    if (ctx->pc == 0x142DB4u) {
        ctx->pc = 0x142DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142DB0u;
        // 0x142db4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142DB8u;
        goto label_fallthrough_0x142db0;
    }
    ctx->pc = 0x142DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142DB0u;
        // 0x142db4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x142db0:
    ctx->pc = 0x142DB8u;
}
