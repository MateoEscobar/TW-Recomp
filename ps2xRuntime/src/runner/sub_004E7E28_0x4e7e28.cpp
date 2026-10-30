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

// Function: sub_004E7E28
// Address: 0x4e7e28 - 0x4e7ef0
void sub_004E7E28_0x4e7e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7E28_0x4e7e28");
#endif

    switch (ctx->pc) {
        case 0x4e7e28u: goto label_4e7e28;
        case 0x4e7e2cu: goto label_4e7e2c;
        case 0x4e7e30u: goto label_4e7e30;
        case 0x4e7e34u: goto label_4e7e34;
        case 0x4e7e38u: goto label_4e7e38;
        case 0x4e7e3cu: goto label_4e7e3c;
        case 0x4e7e40u: goto label_4e7e40;
        case 0x4e7e44u: goto label_4e7e44;
        case 0x4e7e48u: goto label_4e7e48;
        case 0x4e7e4cu: goto label_4e7e4c;
        case 0x4e7e50u: goto label_4e7e50;
        case 0x4e7e54u: goto label_4e7e54;
        case 0x4e7e58u: goto label_4e7e58;
        case 0x4e7e5cu: goto label_4e7e5c;
        case 0x4e7e60u: goto label_4e7e60;
        case 0x4e7e64u: goto label_4e7e64;
        case 0x4e7e68u: goto label_4e7e68;
        case 0x4e7e6cu: goto label_4e7e6c;
        case 0x4e7e70u: goto label_4e7e70;
        case 0x4e7e74u: goto label_4e7e74;
        case 0x4e7e78u: goto label_4e7e78;
        case 0x4e7e7cu: goto label_4e7e7c;
        case 0x4e7e80u: goto label_4e7e80;
        case 0x4e7e84u: goto label_4e7e84;
        case 0x4e7e88u: goto label_4e7e88;
        case 0x4e7e8cu: goto label_4e7e8c;
        case 0x4e7e90u: goto label_4e7e90;
        case 0x4e7e94u: goto label_4e7e94;
        case 0x4e7e98u: goto label_4e7e98;
        case 0x4e7e9cu: goto label_4e7e9c;
        case 0x4e7ea0u: goto label_4e7ea0;
        case 0x4e7ea4u: goto label_4e7ea4;
        case 0x4e7ea8u: goto label_4e7ea8;
        case 0x4e7eacu: goto label_4e7eac;
        case 0x4e7eb0u: goto label_4e7eb0;
        case 0x4e7eb4u: goto label_4e7eb4;
        case 0x4e7eb8u: goto label_4e7eb8;
        case 0x4e7ebcu: goto label_4e7ebc;
        case 0x4e7ec0u: goto label_4e7ec0;
        case 0x4e7ec4u: goto label_4e7ec4;
        case 0x4e7ec8u: goto label_4e7ec8;
        case 0x4e7eccu: goto label_4e7ecc;
        case 0x4e7ed0u: goto label_4e7ed0;
        case 0x4e7ed4u: goto label_4e7ed4;
        case 0x4e7ed8u: goto label_4e7ed8;
        case 0x4e7edcu: goto label_4e7edc;
        case 0x4e7ee0u: goto label_4e7ee0;
        case 0x4e7ee4u: goto label_4e7ee4;
        case 0x4e7ee8u: goto label_4e7ee8;
        case 0x4e7eecu: goto label_4e7eec;
        default: break;
    }

    ctx->pc = 0x4e7e28u;

label_4e7e28:
    // 0x4e7e28: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4e7e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4e7e2c:
    // 0x4e7e2c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4e7e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_4e7e30:
    // 0x4e7e30: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4e7e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_4e7e34:
    // 0x4e7e34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e7e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e7e38:
    // 0x4e7e38: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4e7e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_4e7e3c:
    // 0x4e7e3c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4e7e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_4e7e40:
    // 0x4e7e40: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4e7e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4e7e44:
    // 0x4e7e44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e7e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e7e48:
    // 0x4e7e48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4e7e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e7e4c:
    // 0x4e7e4c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4e7e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_4e7e50:
    // 0x4e7e50: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_4e7e54:
    if (ctx->pc == 0x4E7E54u) {
        ctx->pc = 0x4E7E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7E50u;
        // 0x4e7e54: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7E58u;
        goto label_4e7e58;
    }
    ctx->pc = 0x4E7E50u;
    {
        const bool branch_taken_0x4e7e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E7E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7E50u;
        // 0x4e7e54: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7e50) {
            ctx->pc = 0x4E7ED0u;
            goto label_4e7ed0;
        }
    }
    ctx->pc = 0x4E7E58u;
label_4e7e58:
    // 0x4e7e58: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x4e7e58u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
label_4e7e5c:
    // 0x4e7e5c: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x4e7e5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_4e7e60:
    // 0x4e7e60: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4e7e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4e7e64:
    // 0x4e7e64: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e7e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e7e68:
    // 0x4e7e68: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4e7e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_4e7e6c:
    // 0x4e7e6c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e7e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e7e70:
    // 0x4e7e70: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x4e7e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_4e7e74:
    // 0x4e7e74: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x4e7e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4e7e78:
    // 0x4e7e78: 0x14820012  bne         $a0, $v0, . + 4 + (0x12 << 2)
label_4e7e7c:
    if (ctx->pc == 0x4E7E7Cu) {
        ctx->pc = 0x4E7E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7E78u;
        // 0x4e7e7c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7E80u;
        goto label_4e7e80;
    }
    ctx->pc = 0x4E7E78u;
    {
        const bool branch_taken_0x4e7e78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E7E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7E78u;
        // 0x4e7e7c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7e78) {
            ctx->pc = 0x4E7EC4u;
            goto label_4e7ec4;
        }
    }
    ctx->pc = 0x4E7E80u;
label_4e7e80:
    // 0x4e7e80: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x4e7e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_4e7e84:
    // 0x4e7e84: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x4e7e84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e7e88:
    // 0x4e7e88: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4e7e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4e7e8c:
    // 0x4e7e8c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x4e7e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_4e7e90:
    // 0x4e7e90: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4e7e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4e7e94:
    // 0x4e7e94: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x4e7e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4e7e98:
    // 0x4e7e98: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4e7e9c:
    if (ctx->pc == 0x4E7E9Cu) {
        ctx->pc = 0x4E7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7E98u;
        // 0x4e7e9c: 0x8e68b9c0  lw          $t0, -0x4640($s3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7EA0u;
        goto label_4e7ea0;
    }
    ctx->pc = 0x4E7E98u;
    {
        const bool branch_taken_0x4e7e98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7E98u;
        // 0x4e7e9c: 0x8e68b9c0  lw          $t0, -0x4640($s3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7e98) {
            ctx->pc = 0x4E7EBCu;
            goto label_4e7ebc;
        }
    }
    ctx->pc = 0x4E7EA0u;
label_4e7ea0:
    // 0x4e7ea0: 0x264654f8  addiu       $a2, $s2, 0x54F8
    ctx->pc = 0x4e7ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 21752));
label_4e7ea4:
    // 0x4e7ea4: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e7ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e7ea8:
    // 0x4e7ea8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e7ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e7eac:
    // 0x4e7eac: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e7eacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e7eb0:
    // 0x4e7eb0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e7eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e7eb4:
    // 0x4e7eb4: 0x60f809  jalr        $v1
label_4e7eb8:
    if (ctx->pc == 0x4E7EB8u) {
        ctx->pc = 0x4E7EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7EB4u;
        // 0x4e7eb8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7EBCu;
        goto label_4e7ebc;
    }
    ctx->pc = 0x4E7EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E7EBCu);
        ctx->pc = 0x4E7EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7EB4u;
        // 0x4e7eb8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7EB4u, 0x4E7EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E7EBCu;
label_4e7ebc:
    // 0x4e7ebc: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x4e7ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_4e7ec0:
    // 0x4e7ec0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4e7ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4e7ec4:
    // 0x4e7ec4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4e7ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e7ec8:
    // 0x4e7ec8: 0x1443ffe5  bne         $v0, $v1, . + 4 + (-0x1B << 2)
label_4e7ecc:
    if (ctx->pc == 0x4E7ECCu) {
        ctx->pc = 0x4E7ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7EC8u;
        // 0x4e7ecc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7ED0u;
        goto label_4e7ed0;
    }
    ctx->pc = 0x4E7EC8u;
    {
        const bool branch_taken_0x4e7ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4E7ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7EC8u;
        // 0x4e7ecc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7ec8) {
            ctx->pc = 0x4E7E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e7e60;
        }
    }
    ctx->pc = 0x4E7ED0u;
label_4e7ed0:
    // 0x4e7ed0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4e7ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4e7ed4:
    // 0x4e7ed4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4e7ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e7ed8:
    // 0x4e7ed8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4e7ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e7edc:
    // 0x4e7edc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4e7edcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e7ee0:
    // 0x4e7ee0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4e7ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4e7ee4:
    // 0x4e7ee4: 0x3e00008  jr          $ra
label_4e7ee8:
    if (ctx->pc == 0x4E7EE8u) {
        ctx->pc = 0x4E7EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7EE4u;
        // 0x4e7ee8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7EECu;
        goto label_4e7eec;
    }
    ctx->pc = 0x4E7EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7EE4u;
        // 0x4e7ee8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E7EECu;
label_4e7eec:
    // 0x4e7eec: 0x0  nop
    ctx->pc = 0x4e7eecu;
    // NOP
    ctx->pc = 0x4e7ef0u;
}
