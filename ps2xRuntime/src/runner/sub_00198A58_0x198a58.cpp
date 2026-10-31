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

// Function: sub_00198A58
// Address: 0x198a58 - 0x198b08
void sub_00198A58_0x198a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198A58_0x198a58");
#endif

    switch (ctx->pc) {
        case 0x198a58u: goto label_198a58;
        case 0x198a5cu: goto label_198a5c;
        case 0x198a60u: goto label_198a60;
        case 0x198a64u: goto label_198a64;
        case 0x198a68u: goto label_198a68;
        case 0x198a6cu: goto label_198a6c;
        case 0x198a70u: goto label_198a70;
        case 0x198a74u: goto label_198a74;
        case 0x198a78u: goto label_198a78;
        case 0x198a7cu: goto label_198a7c;
        case 0x198a80u: goto label_198a80;
        case 0x198a84u: goto label_198a84;
        case 0x198a88u: goto label_198a88;
        case 0x198a8cu: goto label_198a8c;
        case 0x198a90u: goto label_198a90;
        case 0x198a94u: goto label_198a94;
        case 0x198a98u: goto label_198a98;
        case 0x198a9cu: goto label_198a9c;
        case 0x198aa0u: goto label_198aa0;
        case 0x198aa4u: goto label_198aa4;
        case 0x198aa8u: goto label_198aa8;
        case 0x198aacu: goto label_198aac;
        case 0x198ab0u: goto label_198ab0;
        case 0x198ab4u: goto label_198ab4;
        case 0x198ab8u: goto label_198ab8;
        case 0x198abcu: goto label_198abc;
        case 0x198ac0u: goto label_198ac0;
        case 0x198ac4u: goto label_198ac4;
        case 0x198ac8u: goto label_198ac8;
        case 0x198accu: goto label_198acc;
        case 0x198ad0u: goto label_198ad0;
        case 0x198ad4u: goto label_198ad4;
        case 0x198ad8u: goto label_198ad8;
        case 0x198adcu: goto label_198adc;
        case 0x198ae0u: goto label_198ae0;
        case 0x198ae4u: goto label_198ae4;
        case 0x198ae8u: goto label_198ae8;
        case 0x198aecu: goto label_198aec;
        case 0x198af0u: goto label_198af0;
        case 0x198af4u: goto label_198af4;
        case 0x198af8u: goto label_198af8;
        case 0x198afcu: goto label_198afc;
        case 0x198b00u: goto label_198b00;
        case 0x198b04u: goto label_198b04;
        default: break;
    }

    ctx->pc = 0x198a58u;

label_198a58:
    // 0x198a58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x198a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_198a5c:
    // 0x198a5c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x198a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_198a60:
    // 0x198a60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x198a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_198a64:
    // 0x198a64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198a68:
    // 0x198a68: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x198a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_198a6c:
    // 0x198a6c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x198a6cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_198a70:
    // 0x198a70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_198a74:
    // 0x198a74: 0x26130050  addiu       $s3, $s0, 0x50
    ctx->pc = 0x198a74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_198a78:
    // 0x198a78: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x198a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_198a7c:
    // 0x198a7c: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x198a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
label_198a80:
    // 0x198a80: 0xae070058  sw          $a3, 0x58($s0)
    ctx->pc = 0x198a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 7));
label_198a84:
    // 0x198a84: 0xae08005c  sw          $t0, 0x5C($s0)
    ctx->pc = 0x198a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 8));
label_198a88:
    // 0x198a88: 0xae060054  sw          $a2, 0x54($s0)
    ctx->pc = 0x198a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 6));
label_198a8c:
    // 0x198a8c: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x198a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_198a90:
    // 0x198a90: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x198a90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_198a94:
    // 0x198a94: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x198a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_198a98:
    // 0x198a98: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x198a98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_198a9c:
    // 0x198a9c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x198a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_198aa0:
    // 0x198aa0: 0x40f809  jalr        $v0
label_198aa4:
    if (ctx->pc == 0x198AA4u) {
        ctx->pc = 0x198AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AA0u;
        // 0x198aa4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198AA8u;
        goto label_198aa8;
    }
    ctx->pc = 0x198AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198AA8u);
        ctx->pc = 0x198AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AA0u;
        // 0x198aa4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198AA0u, 0x198AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198AA8u;
label_198aa8:
    // 0x198aa8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x198aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_198aac:
    // 0x198aac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x198aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198ab0:
    // 0x198ab0: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x198ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_198ab4:
    // 0x198ab4: 0xc1218b8  jal         func_4862E0
label_198ab8:
    if (ctx->pc == 0x198AB8u) {
        ctx->pc = 0x198AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AB4u;
        // 0x198ab8: 0x8c650060  lw          $a1, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198ABCu;
        goto label_198abc;
    }
    ctx->pc = 0x198AB4u;
    SET_GPR_U32(ctx, 31, 0x198ABCu);
    ctx->pc = 0x198AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198AB4u;
    // 0x198ab8: 0x8c650060  lw          $a1, 0x60($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4862E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4862E0u, 0x198AB4u, 0x198ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198ABCu;
label_198abc:
    // 0x198abc: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x198abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_198ac0:
    // 0x198ac0: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x198ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_198ac4:
    // 0x198ac4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x198ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_198ac8:
    // 0x198ac8: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x198ac8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_198acc:
    // 0x198acc: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x198accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_198ad0:
    // 0x198ad0: 0x40f809  jalr        $v0
label_198ad4:
    if (ctx->pc == 0x198AD4u) {
        ctx->pc = 0x198AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AD0u;
        // 0x198ad4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198AD8u;
        goto label_198ad8;
    }
    ctx->pc = 0x198AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198AD8u);
        ctx->pc = 0x198AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AD0u;
        // 0x198ad4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198AD0u, 0x198AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198AD8u;
label_198ad8:
    // 0x198ad8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x198ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_198adc:
    // 0x198adc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x198adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198ae0:
    // 0x198ae0: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x198ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_198ae4:
    // 0x198ae4: 0xc1218b8  jal         func_4862E0
label_198ae8:
    if (ctx->pc == 0x198AE8u) {
        ctx->pc = 0x198AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AE4u;
        // 0x198ae8: 0x8c650064  lw          $a1, 0x64($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198AECu;
        goto label_198aec;
    }
    ctx->pc = 0x198AE4u;
    SET_GPR_U32(ctx, 31, 0x198AECu);
    ctx->pc = 0x198AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198AE4u;
    // 0x198ae8: 0x8c650064  lw          $a1, 0x64($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4862E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4862E0u, 0x198AE4u, 0x198AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198AECu;
label_198aec:
    // 0x198aec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x198aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_198af0:
    // 0x198af0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x198af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_198af4:
    // 0x198af4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x198af4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_198af8:
    // 0x198af8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x198af8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_198afc:
    // 0x198afc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198b00:
    // 0x198b00: 0x3e00008  jr          $ra
label_198b04:
    if (ctx->pc == 0x198B04u) {
        ctx->pc = 0x198B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B00u;
        // 0x198b04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B08u;
        goto label_fallthrough_0x198b00;
    }
    ctx->pc = 0x198B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B00u;
        // 0x198b04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x198b00:
    ctx->pc = 0x198B08u;
}
