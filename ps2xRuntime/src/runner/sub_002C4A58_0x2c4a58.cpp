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

// Function: sub_002C4A58
// Address: 0x2c4a58 - 0x2c4af8
void sub_002C4A58_0x2c4a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4A58_0x2c4a58");
#endif

    switch (ctx->pc) {
        case 0x2c4a58u: goto label_2c4a58;
        case 0x2c4a5cu: goto label_2c4a5c;
        case 0x2c4a60u: goto label_2c4a60;
        case 0x2c4a64u: goto label_2c4a64;
        case 0x2c4a68u: goto label_2c4a68;
        case 0x2c4a6cu: goto label_2c4a6c;
        case 0x2c4a70u: goto label_2c4a70;
        case 0x2c4a74u: goto label_2c4a74;
        case 0x2c4a78u: goto label_2c4a78;
        case 0x2c4a7cu: goto label_2c4a7c;
        case 0x2c4a80u: goto label_2c4a80;
        case 0x2c4a84u: goto label_2c4a84;
        case 0x2c4a88u: goto label_2c4a88;
        case 0x2c4a8cu: goto label_2c4a8c;
        case 0x2c4a90u: goto label_2c4a90;
        case 0x2c4a94u: goto label_2c4a94;
        case 0x2c4a98u: goto label_2c4a98;
        case 0x2c4a9cu: goto label_2c4a9c;
        case 0x2c4aa0u: goto label_2c4aa0;
        case 0x2c4aa4u: goto label_2c4aa4;
        case 0x2c4aa8u: goto label_2c4aa8;
        case 0x2c4aacu: goto label_2c4aac;
        case 0x2c4ab0u: goto label_2c4ab0;
        case 0x2c4ab4u: goto label_2c4ab4;
        case 0x2c4ab8u: goto label_2c4ab8;
        case 0x2c4abcu: goto label_2c4abc;
        case 0x2c4ac0u: goto label_2c4ac0;
        case 0x2c4ac4u: goto label_2c4ac4;
        case 0x2c4ac8u: goto label_2c4ac8;
        case 0x2c4accu: goto label_2c4acc;
        case 0x2c4ad0u: goto label_2c4ad0;
        case 0x2c4ad4u: goto label_2c4ad4;
        case 0x2c4ad8u: goto label_2c4ad8;
        case 0x2c4adcu: goto label_2c4adc;
        case 0x2c4ae0u: goto label_2c4ae0;
        case 0x2c4ae4u: goto label_2c4ae4;
        case 0x2c4ae8u: goto label_2c4ae8;
        case 0x2c4aecu: goto label_2c4aec;
        case 0x2c4af0u: goto label_2c4af0;
        case 0x2c4af4u: goto label_2c4af4;
        default: break;
    }

    ctx->pc = 0x2c4a58u;

label_2c4a58:
    // 0x2c4a58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c4a5c:
    // 0x2c4a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c4a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4a60:
    // 0x2c4a60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c4a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2c4a64:
    // 0x2c4a64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c4a68:
    // 0x2c4a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c4a6c:
    // 0x2c4a6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c4a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c4a70:
    // 0x2c4a70: 0xc0a2ab0  jal         func_28AAC0
label_2c4a74:
    if (ctx->pc == 0x2C4A74u) {
        ctx->pc = 0x2C4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A70u;
        // 0x2c4a74: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4A78u;
        goto label_2c4a78;
    }
    ctx->pc = 0x2C4A70u;
    SET_GPR_U32(ctx, 31, 0x2C4A78u);
    ctx->pc = 0x2C4A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A70u;
    // 0x2c4a74: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2C4A70u, 0x2C4A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A78u;
label_2c4a78:
    // 0x2c4a78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c4a7c:
    // 0x2c4a7c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2c4a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c4a80:
    // 0x2c4a80: 0xc08c716  jal         func_231C58
label_2c4a84:
    if (ctx->pc == 0x2C4A84u) {
        ctx->pc = 0x2C4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A80u;
        // 0x2c4a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4A88u;
        goto label_2c4a88;
    }
    ctx->pc = 0x2C4A80u;
    SET_GPR_U32(ctx, 31, 0x2C4A88u);
    ctx->pc = 0x2C4A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A80u;
    // 0x2c4a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C58u, 0x2C4A80u, 0x2C4A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A88u;
label_2c4a88:
    // 0x2c4a88: 0xc08bfbc  jal         func_22FEF0
label_2c4a8c:
    if (ctx->pc == 0x2C4A8Cu) {
        ctx->pc = 0x2C4A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A88u;
        // 0x2c4a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4A90u;
        goto label_2c4a90;
    }
    ctx->pc = 0x2C4A88u;
    SET_GPR_U32(ctx, 31, 0x2C4A90u);
    ctx->pc = 0x2C4A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A88u;
    // 0x2c4a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2C4A88u, 0x2C4A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A90u;
label_2c4a90:
    // 0x2c4a90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c4a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c4a94:
    // 0x2c4a94: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c4a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c4a98:
    // 0x2c4a98: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c4a9c:
    // 0x2c4a9c: 0x40f809  jalr        $v0
label_2c4aa0:
    if (ctx->pc == 0x2C4AA0u) {
        ctx->pc = 0x2C4AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A9Cu;
        // 0x2c4aa0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4AA4u;
        goto label_2c4aa4;
    }
    ctx->pc = 0x2C4A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C4AA4u);
        ctx->pc = 0x2C4AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A9Cu;
        // 0x2c4aa0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4A9Cu, 0x2C4AA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C4AA4u;
label_2c4aa4:
    // 0x2c4aa4: 0xc08e2b8  jal         func_238AE0
label_2c4aa8:
    if (ctx->pc == 0x2C4AA8u) {
        ctx->pc = 0x2C4AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4AA4u;
        // 0x2c4aa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4AACu;
        goto label_2c4aac;
    }
    ctx->pc = 0x2C4AA4u;
    SET_GPR_U32(ctx, 31, 0x2C4AACu);
    ctx->pc = 0x2C4AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4AA4u;
    // 0x2c4aa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AE0u, 0x2C4AA4u, 0x2C4AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4AACu;
label_2c4aac:
    // 0x2c4aac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c4aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c4ab0:
    // 0x2c4ab0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c4ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c4ab4:
    // 0x2c4ab4: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2c4ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
label_2c4ab8:
    // 0x2c4ab8: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2c4ab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
label_2c4abc:
    // 0x2c4abc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c4ac0:
    // 0x2c4ac0: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x2c4ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2c4ac4:
    // 0x2c4ac4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c4ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c4ac8:
    // 0x2c4ac8: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2c4ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2c4acc:
    // 0x2c4acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4ad0:
    // 0x2c4ad0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c4ad4:
    // 0x2c4ad4: 0xac44021c  sw          $a0, 0x21C($v0)
    ctx->pc = 0x2c4ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 4));
label_2c4ad8:
    // 0x2c4ad8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c4ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c4adc:
    // 0x2c4adc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c4ae0:
    // 0x2c4ae0: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x2c4ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_2c4ae4:
    // 0x2c4ae4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c4ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c4ae8:
    // 0x2c4ae8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2c4ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2c4aec:
    // 0x2c4aec: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x2c4aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_2c4af0:
    // 0x2c4af0: 0x3e00008  jr          $ra
label_2c4af4:
    if (ctx->pc == 0x2C4AF4u) {
        ctx->pc = 0x2C4AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4AF0u;
        // 0x2c4af4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4AF8u;
        goto label_fallthrough_0x2c4af0;
    }
    ctx->pc = 0x2C4AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4AF0u;
        // 0x2c4af4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c4af0:
    ctx->pc = 0x2C4AF8u;
}
