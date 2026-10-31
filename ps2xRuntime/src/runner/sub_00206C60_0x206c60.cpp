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

// Function: sub_00206C60
// Address: 0x206c60 - 0x206d10
void sub_00206C60_0x206c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206C60_0x206c60");
#endif

    switch (ctx->pc) {
        case 0x206c60u: goto label_206c60;
        case 0x206c64u: goto label_206c64;
        case 0x206c68u: goto label_206c68;
        case 0x206c6cu: goto label_206c6c;
        case 0x206c70u: goto label_206c70;
        case 0x206c74u: goto label_206c74;
        case 0x206c78u: goto label_206c78;
        case 0x206c7cu: goto label_206c7c;
        case 0x206c80u: goto label_206c80;
        case 0x206c84u: goto label_206c84;
        case 0x206c88u: goto label_206c88;
        case 0x206c8cu: goto label_206c8c;
        case 0x206c90u: goto label_206c90;
        case 0x206c94u: goto label_206c94;
        case 0x206c98u: goto label_206c98;
        case 0x206c9cu: goto label_206c9c;
        case 0x206ca0u: goto label_206ca0;
        case 0x206ca4u: goto label_206ca4;
        case 0x206ca8u: goto label_206ca8;
        case 0x206cacu: goto label_206cac;
        case 0x206cb0u: goto label_206cb0;
        case 0x206cb4u: goto label_206cb4;
        case 0x206cb8u: goto label_206cb8;
        case 0x206cbcu: goto label_206cbc;
        case 0x206cc0u: goto label_206cc0;
        case 0x206cc4u: goto label_206cc4;
        case 0x206cc8u: goto label_206cc8;
        case 0x206cccu: goto label_206ccc;
        case 0x206cd0u: goto label_206cd0;
        case 0x206cd4u: goto label_206cd4;
        case 0x206cd8u: goto label_206cd8;
        case 0x206cdcu: goto label_206cdc;
        case 0x206ce0u: goto label_206ce0;
        case 0x206ce4u: goto label_206ce4;
        case 0x206ce8u: goto label_206ce8;
        case 0x206cecu: goto label_206cec;
        case 0x206cf0u: goto label_206cf0;
        case 0x206cf4u: goto label_206cf4;
        case 0x206cf8u: goto label_206cf8;
        case 0x206cfcu: goto label_206cfc;
        case 0x206d00u: goto label_206d00;
        case 0x206d04u: goto label_206d04;
        case 0x206d08u: goto label_206d08;
        case 0x206d0cu: goto label_206d0c;
        default: break;
    }

    ctx->pc = 0x206c60u;

label_206c60:
    // 0x206c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x206c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_206c64:
    // 0x206c64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_206c68:
    // 0x206c68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x206c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_206c6c:
    // 0x206c6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x206c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206c70:
    // 0x206c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206c74:
    // 0x206c74: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x206c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_206c78:
    // 0x206c78: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_206c7c:
    if (ctx->pc == 0x206C7Cu) {
        ctx->pc = 0x206C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C78u;
        // 0x206c7c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206C80u;
        goto label_206c80;
    }
    ctx->pc = 0x206C78u;
    {
        const bool branch_taken_0x206c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C78u;
        // 0x206c7c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c78) {
            ctx->pc = 0x206CFCu;
            goto label_206cfc;
        }
    }
    ctx->pc = 0x206C80u;
label_206c80:
    // 0x206c80: 0xc073462  jal         func_1CD188
label_206c84:
    if (ctx->pc == 0x206C84u) {
        ctx->pc = 0x206C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C80u;
        // 0x206c84: 0x8e24008c  lw          $a0, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206C88u;
        goto label_206c88;
    }
    ctx->pc = 0x206C80u;
    SET_GPR_U32(ctx, 31, 0x206C88u);
    ctx->pc = 0x206C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C80u;
    // 0x206c84: 0x8e24008c  lw          $a0, 0x8C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x206C80u, 0x206C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C88u;
label_206c88:
    // 0x206c88: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x206c88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_206c8c:
    // 0x206c8c: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x206c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_206c90:
    // 0x206c90: 0x26108950  addiu       $s0, $s0, -0x76B0
    ctx->pc = 0x206c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936912));
label_206c94:
    // 0x206c94: 0x2406005d  addiu       $a2, $zero, 0x5D
    ctx->pc = 0x206c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
label_206c98:
    // 0x206c98: 0xc139138  jal         func_4E44E0
label_206c9c:
    if (ctx->pc == 0x206C9Cu) {
        ctx->pc = 0x206C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C98u;
        // 0x206c9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206CA0u;
        goto label_206ca0;
    }
    ctx->pc = 0x206C98u;
    SET_GPR_U32(ctx, 31, 0x206CA0u);
    ctx->pc = 0x206C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C98u;
    // 0x206c9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x206C98u, 0x206CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206CA0u;
label_206ca0:
    // 0x206ca0: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x206ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_206ca4:
    // 0x206ca4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x206ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_206ca8:
    // 0x206ca8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x206ca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_206cac:
    // 0x206cac: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x206cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_206cb0:
    // 0x206cb0: 0x60f809  jalr        $v1
label_206cb4:
    if (ctx->pc == 0x206CB4u) {
        ctx->pc = 0x206CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CB0u;
        // 0x206cb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206CB8u;
        goto label_206cb8;
    }
    ctx->pc = 0x206CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206CB8u);
        ctx->pc = 0x206CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CB0u;
        // 0x206cb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206CB0u, 0x206CB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206CB8u;
label_206cb8:
    // 0x206cb8: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x206cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_206cbc:
    // 0x206cbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x206cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206cc0:
    // 0x206cc0: 0xc139fe8  jal         func_4E7FA0
label_206cc4:
    if (ctx->pc == 0x206CC4u) {
        ctx->pc = 0x206CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CC0u;
        // 0x206cc4: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206CC8u;
        goto label_206cc8;
    }
    ctx->pc = 0x206CC0u;
    SET_GPR_U32(ctx, 31, 0x206CC8u);
    ctx->pc = 0x206CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206CC0u;
    // 0x206cc4: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x206CC0u, 0x206CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206CC8u;
label_206cc8:
    // 0x206cc8: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x206cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_206ccc:
    // 0x206ccc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x206cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_206cd0:
    // 0x206cd0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x206cd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_206cd4:
    // 0x206cd4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x206cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_206cd8:
    // 0x206cd8: 0x60f809  jalr        $v1
label_206cdc:
    if (ctx->pc == 0x206CDCu) {
        ctx->pc = 0x206CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CD8u;
        // 0x206cdc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206CE0u;
        goto label_206ce0;
    }
    ctx->pc = 0x206CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206CE0u);
        ctx->pc = 0x206CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CD8u;
        // 0x206cdc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206CD8u, 0x206CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206CE0u;
label_206ce0:
    // 0x206ce0: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x206ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_206ce4:
    // 0x206ce4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x206ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206ce8:
    // 0x206ce8: 0xc139fc8  jal         func_4E7F20
label_206cec:
    if (ctx->pc == 0x206CECu) {
        ctx->pc = 0x206CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CE8u;
        // 0x206cec: 0x24060063  addiu       $a2, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206CF0u;
        goto label_206cf0;
    }
    ctx->pc = 0x206CE8u;
    SET_GPR_U32(ctx, 31, 0x206CF0u);
    ctx->pc = 0x206CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206CE8u;
    // 0x206cec: 0x24060063  addiu       $a2, $zero, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x206CE8u, 0x206CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206CF0u;
label_206cf0:
    // 0x206cf0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x206cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_206cf4:
    // 0x206cf4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x206cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_206cf8:
    // 0x206cf8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x206cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_206cfc:
    // 0x206cfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x206cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_206d00:
    // 0x206d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206d04:
    // 0x206d04: 0x3e00008  jr          $ra
label_206d08:
    if (ctx->pc == 0x206D08u) {
        ctx->pc = 0x206D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D04u;
        // 0x206d08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206D0Cu;
        goto label_206d0c;
    }
    ctx->pc = 0x206D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D04u;
        // 0x206d08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206D0Cu;
label_206d0c:
    // 0x206d0c: 0x0  nop
    ctx->pc = 0x206d0cu;
    // NOP
    ctx->pc = 0x206d10u;
}
