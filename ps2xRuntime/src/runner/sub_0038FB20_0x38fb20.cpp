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

// Function: sub_0038FB20
// Address: 0x38fb20 - 0x38fbe8
void sub_0038FB20_0x38fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FB20_0x38fb20");
#endif

    switch (ctx->pc) {
        case 0x38fb20u: goto label_38fb20;
        case 0x38fb24u: goto label_38fb24;
        case 0x38fb28u: goto label_38fb28;
        case 0x38fb2cu: goto label_38fb2c;
        case 0x38fb30u: goto label_38fb30;
        case 0x38fb34u: goto label_38fb34;
        case 0x38fb38u: goto label_38fb38;
        case 0x38fb3cu: goto label_38fb3c;
        case 0x38fb40u: goto label_38fb40;
        case 0x38fb44u: goto label_38fb44;
        case 0x38fb48u: goto label_38fb48;
        case 0x38fb4cu: goto label_38fb4c;
        case 0x38fb50u: goto label_38fb50;
        case 0x38fb54u: goto label_38fb54;
        case 0x38fb58u: goto label_38fb58;
        case 0x38fb5cu: goto label_38fb5c;
        case 0x38fb60u: goto label_38fb60;
        case 0x38fb64u: goto label_38fb64;
        case 0x38fb68u: goto label_38fb68;
        case 0x38fb6cu: goto label_38fb6c;
        case 0x38fb70u: goto label_38fb70;
        case 0x38fb74u: goto label_38fb74;
        case 0x38fb78u: goto label_38fb78;
        case 0x38fb7cu: goto label_38fb7c;
        case 0x38fb80u: goto label_38fb80;
        case 0x38fb84u: goto label_38fb84;
        case 0x38fb88u: goto label_38fb88;
        case 0x38fb8cu: goto label_38fb8c;
        case 0x38fb90u: goto label_38fb90;
        case 0x38fb94u: goto label_38fb94;
        case 0x38fb98u: goto label_38fb98;
        case 0x38fb9cu: goto label_38fb9c;
        case 0x38fba0u: goto label_38fba0;
        case 0x38fba4u: goto label_38fba4;
        case 0x38fba8u: goto label_38fba8;
        case 0x38fbacu: goto label_38fbac;
        case 0x38fbb0u: goto label_38fbb0;
        case 0x38fbb4u: goto label_38fbb4;
        case 0x38fbb8u: goto label_38fbb8;
        case 0x38fbbcu: goto label_38fbbc;
        case 0x38fbc0u: goto label_38fbc0;
        case 0x38fbc4u: goto label_38fbc4;
        case 0x38fbc8u: goto label_38fbc8;
        case 0x38fbccu: goto label_38fbcc;
        case 0x38fbd0u: goto label_38fbd0;
        case 0x38fbd4u: goto label_38fbd4;
        case 0x38fbd8u: goto label_38fbd8;
        case 0x38fbdcu: goto label_38fbdc;
        case 0x38fbe0u: goto label_38fbe0;
        case 0x38fbe4u: goto label_38fbe4;
        default: break;
    }

    ctx->pc = 0x38fb20u;

label_38fb20:
    // 0x38fb20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38fb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_38fb24:
    // 0x38fb24: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x38fb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_38fb28:
    // 0x38fb28: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x38fb28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_38fb2c:
    // 0x38fb2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38fb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38fb30:
    // 0x38fb30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38fb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38fb34:
    // 0x38fb34: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x38fb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_38fb38:
    // 0x38fb38: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x38fb38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38fb3c:
    // 0x38fb3c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x38fb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_38fb40:
    // 0x38fb40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x38fb40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38fb44:
    // 0x38fb44: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x38fb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_38fb48:
    // 0x38fb48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38fb48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38fb4c:
    // 0x38fb4c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x38fb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_38fb50:
    // 0x38fb50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x38fb50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38fb54:
    // 0x38fb54: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x38fb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_38fb58:
    // 0x38fb58: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x38fb58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38fb5c:
    // 0x38fb5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38fb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38fb60:
    // 0x38fb60: 0x1000000f  b           . + 4 + (0xF << 2)
label_38fb64:
    if (ctx->pc == 0x38FB64u) {
        ctx->pc = 0x38FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB60u;
        // 0x38fb64: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FB68u;
        goto label_38fb68;
    }
    ctx->pc = 0x38FB60u;
    {
        const bool branch_taken_0x38fb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB60u;
        // 0x38fb64: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb60) {
            ctx->pc = 0x38FBA0u;
            goto label_38fba0;
        }
    }
    ctx->pc = 0x38FB68u;
label_38fb68:
    // 0x38fb68: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x38fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_38fb6c:
    // 0x38fb6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x38fb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38fb70:
    // 0x38fb70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38fb74:
    // 0x38fb74: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x38fb74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38fb78:
    // 0x38fb78: 0xc0cdb38  jal         func_336CE0
label_38fb7c:
    if (ctx->pc == 0x38FB7Cu) {
        ctx->pc = 0x38FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB78u;
        // 0x38fb7c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FB80u;
        goto label_38fb80;
    }
    ctx->pc = 0x38FB78u;
    SET_GPR_U32(ctx, 31, 0x38FB80u);
    ctx->pc = 0x38FB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FB78u;
    // 0x38fb7c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x38FB78u, 0x38FB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FB80u;
label_38fb80:
    // 0x38fb80: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x38fb80u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_38fb84:
    // 0x38fb84: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x38fb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38fb88:
    // 0x38fb88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38fb88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38fb8c:
    // 0x38fb8c: 0x0  nop
    ctx->pc = 0x38fb8cu;
    // NOP
label_38fb90:
    // 0x38fb90: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_38fb94:
    if (ctx->pc == 0x38FB94u) {
        ctx->pc = 0x38FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB90u;
        // 0x38fb94: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FB98u;
        goto label_38fb98;
    }
    ctx->pc = 0x38FB90u;
    {
        const bool branch_taken_0x38fb90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB90u;
        // 0x38fb94: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb90) {
            ctx->pc = 0x38FBA0u;
            goto label_38fba0;
        }
    }
    ctx->pc = 0x38FB98u;
label_38fb98:
    // 0x38fb98: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x38fb98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_38fb9c:
    // 0x38fb9c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x38fb9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38fba0:
    // 0x38fba0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x38fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38fba4:
    // 0x38fba4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x38fba4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_38fba8:
    // 0x38fba8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x38fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_38fbac:
    // 0x38fbac: 0x40f809  jalr        $v0
label_38fbb0:
    if (ctx->pc == 0x38FBB0u) {
        ctx->pc = 0x38FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FBACu;
        // 0x38fbb0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FBB4u;
        goto label_38fbb4;
    }
    ctx->pc = 0x38FBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38FBB4u);
        ctx->pc = 0x38FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FBACu;
        // 0x38fbb0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FBACu, 0x38FBB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38FBB4u;
label_38fbb4:
    // 0x38fbb4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x38fbb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38fbb8:
    // 0x38fbb8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_38fbbc:
    if (ctx->pc == 0x38FBBCu) {
        ctx->pc = 0x38FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FBB8u;
        // 0x38fbbc: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FBC0u;
        goto label_38fbc0;
    }
    ctx->pc = 0x38FBB8u;
    {
        const bool branch_taken_0x38fbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38fbb8) {
            ctx->pc = 0x38FBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FBB8u;
            // 0x38fbbc: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fb68;
        }
    }
    ctx->pc = 0x38FBC0u;
label_38fbc0:
    // 0x38fbc0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x38fbc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38fbc4:
    // 0x38fbc4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x38fbc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38fbc8:
    // 0x38fbc8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x38fbc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38fbcc:
    // 0x38fbcc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x38fbccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38fbd0:
    // 0x38fbd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38fbd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38fbd4:
    // 0x38fbd4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x38fbd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38fbd8:
    // 0x38fbd8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x38fbd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38fbdc:
    // 0x38fbdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38fbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38fbe0:
    // 0x38fbe0: 0x3e00008  jr          $ra
label_38fbe4:
    if (ctx->pc == 0x38FBE4u) {
        ctx->pc = 0x38FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FBE0u;
        // 0x38fbe4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FBE8u;
        goto label_fallthrough_0x38fbe0;
    }
    ctx->pc = 0x38FBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FBE0u;
        // 0x38fbe4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38fbe0:
    ctx->pc = 0x38FBE8u;
}
