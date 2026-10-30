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

// Function: sub_004F0E30
// Address: 0x4f0e30 - 0x4f0ed0
void sub_004F0E30_0x4f0e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0E30_0x4f0e30");
#endif

    switch (ctx->pc) {
        case 0x4f0e30u: goto label_4f0e30;
        case 0x4f0e34u: goto label_4f0e34;
        case 0x4f0e38u: goto label_4f0e38;
        case 0x4f0e3cu: goto label_4f0e3c;
        case 0x4f0e40u: goto label_4f0e40;
        case 0x4f0e44u: goto label_4f0e44;
        case 0x4f0e48u: goto label_4f0e48;
        case 0x4f0e4cu: goto label_4f0e4c;
        case 0x4f0e50u: goto label_4f0e50;
        case 0x4f0e54u: goto label_4f0e54;
        case 0x4f0e58u: goto label_4f0e58;
        case 0x4f0e5cu: goto label_4f0e5c;
        case 0x4f0e60u: goto label_4f0e60;
        case 0x4f0e64u: goto label_4f0e64;
        case 0x4f0e68u: goto label_4f0e68;
        case 0x4f0e6cu: goto label_4f0e6c;
        case 0x4f0e70u: goto label_4f0e70;
        case 0x4f0e74u: goto label_4f0e74;
        case 0x4f0e78u: goto label_4f0e78;
        case 0x4f0e7cu: goto label_4f0e7c;
        case 0x4f0e80u: goto label_4f0e80;
        case 0x4f0e84u: goto label_4f0e84;
        case 0x4f0e88u: goto label_4f0e88;
        case 0x4f0e8cu: goto label_4f0e8c;
        case 0x4f0e90u: goto label_4f0e90;
        case 0x4f0e94u: goto label_4f0e94;
        case 0x4f0e98u: goto label_4f0e98;
        case 0x4f0e9cu: goto label_4f0e9c;
        case 0x4f0ea0u: goto label_4f0ea0;
        case 0x4f0ea4u: goto label_4f0ea4;
        case 0x4f0ea8u: goto label_4f0ea8;
        case 0x4f0eacu: goto label_4f0eac;
        case 0x4f0eb0u: goto label_4f0eb0;
        case 0x4f0eb4u: goto label_4f0eb4;
        case 0x4f0eb8u: goto label_4f0eb8;
        case 0x4f0ebcu: goto label_4f0ebc;
        case 0x4f0ec0u: goto label_4f0ec0;
        case 0x4f0ec4u: goto label_4f0ec4;
        case 0x4f0ec8u: goto label_4f0ec8;
        case 0x4f0eccu: goto label_4f0ecc;
        default: break;
    }

    ctx->pc = 0x4f0e30u;

label_4f0e30:
    // 0x4f0e30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f0e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4f0e34:
    // 0x4f0e34: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4f0e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4f0e38:
    // 0x4f0e38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4f0e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4f0e3c:
    // 0x4f0e3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f0e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f0e40:
    // 0x4f0e40: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4f0e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4f0e44:
    // 0x4f0e44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4f0e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f0e48:
    // 0x4f0e48: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4f0e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4f0e4c:
    // 0x4f0e4c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4f0e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4f0e50:
    // 0x4f0e50: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4f0e54:
    if (ctx->pc == 0x4F0E54u) {
        ctx->pc = 0x4F0E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E50u;
        // 0x4f0e54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0E58u;
        goto label_4f0e58;
    }
    ctx->pc = 0x4F0E50u;
    {
        const bool branch_taken_0x4f0e50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E50u;
        // 0x4f0e54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0e50) {
            ctx->pc = 0x4F0EACu;
            goto label_4f0eac;
        }
    }
    ctx->pc = 0x4F0E58u;
label_4f0e58:
    // 0x4f0e58: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x4f0e58u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_4f0e5c:
    // 0x4f0e5c: 0x3c130057  lui         $s3, 0x57
    ctx->pc = 0x4f0e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
label_4f0e60:
    // 0x4f0e60: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x4f0e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4f0e64:
    // 0x4f0e64: 0x0  nop
    ctx->pc = 0x4f0e64u;
    // NOP
label_4f0e68:
    // 0x4f0e68: 0xc13c38c  jal         func_4F0E30
label_4f0e6c:
    if (ctx->pc == 0x4F0E6Cu) {
        ctx->pc = 0x4F0E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E68u;
        // 0x4f0e6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0E70u;
        goto label_4f0e70;
    }
    ctx->pc = 0x4F0E68u;
    SET_GPR_U32(ctx, 31, 0x4F0E70u);
    ctx->pc = 0x4F0E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0E68u;
    // 0x4f0e6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0E30u;
    goto label_4f0e30;
    ctx->pc = 0x4F0E70u;
label_4f0e70:
    // 0x4f0e70: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_4f0e74:
    if (ctx->pc == 0x4F0E74u) {
        ctx->pc = 0x4F0E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E70u;
        // 0x4f0e74: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0E78u;
        goto label_4f0e78;
    }
    ctx->pc = 0x4F0E70u;
    {
        const bool branch_taken_0x4f0e70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E70u;
        // 0x4f0e74: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0e70) {
            ctx->pc = 0x4F0EA0u;
            goto label_4f0ea0;
        }
    }
    ctx->pc = 0x4F0E78u;
label_4f0e78:
    // 0x4f0e78: 0x8e8327e4  lw          $v1, 0x27E4($s4)
    ctx->pc = 0x4f0e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_4f0e7c:
    // 0x4f0e7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f0e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f0e80:
    // 0x4f0e80: 0x26666ea0  addiu       $a2, $s3, 0x6EA0
    ctx->pc = 0x4f0e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 28320));
label_4f0e84:
    // 0x4f0e84: 0x24070091  addiu       $a3, $zero, 0x91
    ctx->pc = 0x4f0e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
label_4f0e88:
    // 0x4f0e88: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x4f0e88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4f0e8c:
    // 0x4f0e8c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f0e90:
    // 0x4f0e90: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f0e90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f0e94:
    // 0x4f0e94: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f0e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f0e98:
    // 0x4f0e98: 0x60f809  jalr        $v1
label_4f0e9c:
    if (ctx->pc == 0x4F0E9Cu) {
        ctx->pc = 0x4F0E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E98u;
        // 0x4f0e9c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0EA0u;
        goto label_4f0ea0;
    }
    ctx->pc = 0x4F0E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F0EA0u);
        ctx->pc = 0x4F0E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E98u;
        // 0x4f0e9c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0E98u, 0x4F0EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F0EA0u;
label_4f0ea0:
    // 0x4f0ea0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4f0ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f0ea4:
    // 0x4f0ea4: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
label_4f0ea8:
    if (ctx->pc == 0x4F0EA8u) {
        ctx->pc = 0x4F0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0EA4u;
        // 0x4f0ea8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0EACu;
        goto label_4f0eac;
    }
    ctx->pc = 0x4F0EA4u;
    {
        const bool branch_taken_0x4f0ea4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f0ea4) {
            ctx->pc = 0x4F0EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0EA4u;
            // 0x4f0ea8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f0e68;
        }
    }
    ctx->pc = 0x4F0EACu;
label_4f0eac:
    // 0x4f0eac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4f0eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f0eb0:
    // 0x4f0eb0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4f0eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f0eb4:
    // 0x4f0eb4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4f0eb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f0eb8:
    // 0x4f0eb8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4f0eb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f0ebc:
    // 0x4f0ebc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4f0ebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f0ec0:
    // 0x4f0ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f0ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f0ec4:
    // 0x4f0ec4: 0x3e00008  jr          $ra
label_4f0ec8:
    if (ctx->pc == 0x4F0EC8u) {
        ctx->pc = 0x4F0EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0EC4u;
        // 0x4f0ec8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0ECCu;
        goto label_4f0ecc;
    }
    ctx->pc = 0x4F0EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0EC4u;
        // 0x4f0ec8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0ECCu;
label_4f0ecc:
    // 0x4f0ecc: 0x0  nop
    ctx->pc = 0x4f0eccu;
    // NOP
    ctx->pc = 0x4f0ed0u;
}
