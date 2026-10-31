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

// Function: sub_003D2E48
// Address: 0x3d2e48 - 0x3d2ed0
void sub_003D2E48_0x3d2e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2E48_0x3d2e48");
#endif

    switch (ctx->pc) {
        case 0x3d2e48u: goto label_3d2e48;
        case 0x3d2e4cu: goto label_3d2e4c;
        case 0x3d2e50u: goto label_3d2e50;
        case 0x3d2e54u: goto label_3d2e54;
        case 0x3d2e58u: goto label_3d2e58;
        case 0x3d2e5cu: goto label_3d2e5c;
        case 0x3d2e60u: goto label_3d2e60;
        case 0x3d2e64u: goto label_3d2e64;
        case 0x3d2e68u: goto label_3d2e68;
        case 0x3d2e6cu: goto label_3d2e6c;
        case 0x3d2e70u: goto label_3d2e70;
        case 0x3d2e74u: goto label_3d2e74;
        case 0x3d2e78u: goto label_3d2e78;
        case 0x3d2e7cu: goto label_3d2e7c;
        case 0x3d2e80u: goto label_3d2e80;
        case 0x3d2e84u: goto label_3d2e84;
        case 0x3d2e88u: goto label_3d2e88;
        case 0x3d2e8cu: goto label_3d2e8c;
        case 0x3d2e90u: goto label_3d2e90;
        case 0x3d2e94u: goto label_3d2e94;
        case 0x3d2e98u: goto label_3d2e98;
        case 0x3d2e9cu: goto label_3d2e9c;
        case 0x3d2ea0u: goto label_3d2ea0;
        case 0x3d2ea4u: goto label_3d2ea4;
        case 0x3d2ea8u: goto label_3d2ea8;
        case 0x3d2eacu: goto label_3d2eac;
        case 0x3d2eb0u: goto label_3d2eb0;
        case 0x3d2eb4u: goto label_3d2eb4;
        case 0x3d2eb8u: goto label_3d2eb8;
        case 0x3d2ebcu: goto label_3d2ebc;
        case 0x3d2ec0u: goto label_3d2ec0;
        case 0x3d2ec4u: goto label_3d2ec4;
        case 0x3d2ec8u: goto label_3d2ec8;
        case 0x3d2eccu: goto label_3d2ecc;
        default: break;
    }

    ctx->pc = 0x3d2e48u;

label_3d2e48:
    // 0x3d2e48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d2e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d2e4c:
    // 0x3d2e4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3d2e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3d2e50:
    // 0x3d2e50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d2e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d2e54:
    // 0x3d2e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d2e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d2e58:
    // 0x3d2e58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d2e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d2e5c:
    // 0x3d2e5c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d2e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d2e60:
    // 0x3d2e60: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3d2e60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d2e64:
    // 0x3d2e64: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d2e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d2e68:
    // 0x3d2e68: 0x40f809  jalr        $v0
label_3d2e6c:
    if (ctx->pc == 0x3D2E6Cu) {
        ctx->pc = 0x3D2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E68u;
        // 0x3d2e6c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2E70u;
        goto label_3d2e70;
    }
    ctx->pc = 0x3D2E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D2E70u);
        ctx->pc = 0x3D2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E68u;
        // 0x3d2e6c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2E68u, 0x3D2E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D2E70u;
label_3d2e70:
    // 0x3d2e70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d2e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d2e74:
    // 0x3d2e74: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3d2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3d2e78:
    // 0x3d2e78: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_3d2e7c:
    if (ctx->pc == 0x3D2E7Cu) {
        ctx->pc = 0x3D2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E78u;
        // 0x3d2e7c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2E80u;
        goto label_3d2e80;
    }
    ctx->pc = 0x3D2E78u;
    {
        const bool branch_taken_0x3d2e78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E78u;
        // 0x3d2e7c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2e78) {
            ctx->pc = 0x3D2E88u;
            goto label_3d2e88;
        }
    }
    ctx->pc = 0x3D2E80u;
label_3d2e80:
    // 0x3d2e80: 0x5622000e  bnel        $s1, $v0, . + 4 + (0xE << 2)
label_3d2e84:
    if (ctx->pc == 0x3D2E84u) {
        ctx->pc = 0x3D2E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E80u;
        // 0x3d2e84: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2E88u;
        goto label_3d2e88;
    }
    ctx->pc = 0x3D2E80u;
    {
        const bool branch_taken_0x3d2e80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d2e80) {
            ctx->pc = 0x3D2E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2E80u;
            // 0x3d2e84: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2EBCu;
            goto label_3d2ebc;
        }
    }
    ctx->pc = 0x3D2E88u;
label_3d2e88:
    // 0x3d2e88: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x3d2e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3d2e8c:
    // 0x3d2e8c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3d2e90:
    if (ctx->pc == 0x3D2E90u) {
        ctx->pc = 0x3D2E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E8Cu;
        // 0x3d2e90: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2E94u;
        goto label_3d2e94;
    }
    ctx->pc = 0x3D2E8Cu;
    {
        const bool branch_taken_0x3d2e8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2e8c) {
            ctx->pc = 0x3D2E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2E8Cu;
            // 0x3d2e90: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2EA4u;
            goto label_3d2ea4;
        }
    }
    ctx->pc = 0x3D2E94u;
label_3d2e94:
    // 0x3d2e94: 0xc0e95f6  jal         func_3A57D8
label_3d2e98:
    if (ctx->pc == 0x3D2E98u) {
        ctx->pc = 0x3D2E9Cu;
        goto label_3d2e9c;
    }
    ctx->pc = 0x3D2E94u;
    SET_GPR_U32(ctx, 31, 0x3D2E9Cu);
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3D2E94u, 0x3D2E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2E9Cu;
label_3d2e9c:
    // 0x3d2e9c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x3d2e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_3d2ea0:
    // 0x3d2ea0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x3d2ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3d2ea4:
    // 0x3d2ea4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3d2ea8:
    if (ctx->pc == 0x3D2EA8u) {
        ctx->pc = 0x3D2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2EA4u;
        // 0x3d2ea8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2EACu;
        goto label_3d2eac;
    }
    ctx->pc = 0x3D2EA4u;
    {
        const bool branch_taken_0x3d2ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2ea4) {
            ctx->pc = 0x3D2EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2EA4u;
            // 0x3d2ea8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2EBCu;
            goto label_3d2ebc;
        }
    }
    ctx->pc = 0x3D2EACu;
label_3d2eac:
    // 0x3d2eac: 0xc0e95f6  jal         func_3A57D8
label_3d2eb0:
    if (ctx->pc == 0x3D2EB0u) {
        ctx->pc = 0x3D2EB4u;
        goto label_3d2eb4;
    }
    ctx->pc = 0x3D2EACu;
    SET_GPR_U32(ctx, 31, 0x3D2EB4u);
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3D2EACu, 0x3D2EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2EB4u;
label_3d2eb4:
    // 0x3d2eb4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x3d2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_3d2eb8:
    // 0x3d2eb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3d2eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d2ebc:
    // 0x3d2ebc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d2ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d2ec0:
    // 0x3d2ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d2ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d2ec4:
    // 0x3d2ec4: 0x3e00008  jr          $ra
label_3d2ec8:
    if (ctx->pc == 0x3D2EC8u) {
        ctx->pc = 0x3D2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2EC4u;
        // 0x3d2ec8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2ECCu;
        goto label_3d2ecc;
    }
    ctx->pc = 0x3D2EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2EC4u;
        // 0x3d2ec8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D2ECCu;
label_3d2ecc:
    // 0x3d2ecc: 0x0  nop
    ctx->pc = 0x3d2eccu;
    // NOP
    ctx->pc = 0x3d2ed0u;
}
