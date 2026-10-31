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

// Function: sub_001E2E40
// Address: 0x1e2e40 - 0x1e2f40
void sub_001E2E40_0x1e2e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2E40_0x1e2e40");
#endif

    switch (ctx->pc) {
        case 0x1e2e40u: goto label_1e2e40;
        case 0x1e2e44u: goto label_1e2e44;
        case 0x1e2e48u: goto label_1e2e48;
        case 0x1e2e4cu: goto label_1e2e4c;
        case 0x1e2e50u: goto label_1e2e50;
        case 0x1e2e54u: goto label_1e2e54;
        case 0x1e2e58u: goto label_1e2e58;
        case 0x1e2e5cu: goto label_1e2e5c;
        case 0x1e2e60u: goto label_1e2e60;
        case 0x1e2e64u: goto label_1e2e64;
        case 0x1e2e68u: goto label_1e2e68;
        case 0x1e2e6cu: goto label_1e2e6c;
        case 0x1e2e70u: goto label_1e2e70;
        case 0x1e2e74u: goto label_1e2e74;
        case 0x1e2e78u: goto label_1e2e78;
        case 0x1e2e7cu: goto label_1e2e7c;
        case 0x1e2e80u: goto label_1e2e80;
        case 0x1e2e84u: goto label_1e2e84;
        case 0x1e2e88u: goto label_1e2e88;
        case 0x1e2e8cu: goto label_1e2e8c;
        case 0x1e2e90u: goto label_1e2e90;
        case 0x1e2e94u: goto label_1e2e94;
        case 0x1e2e98u: goto label_1e2e98;
        case 0x1e2e9cu: goto label_1e2e9c;
        case 0x1e2ea0u: goto label_1e2ea0;
        case 0x1e2ea4u: goto label_1e2ea4;
        case 0x1e2ea8u: goto label_1e2ea8;
        case 0x1e2eacu: goto label_1e2eac;
        case 0x1e2eb0u: goto label_1e2eb0;
        case 0x1e2eb4u: goto label_1e2eb4;
        case 0x1e2eb8u: goto label_1e2eb8;
        case 0x1e2ebcu: goto label_1e2ebc;
        case 0x1e2ec0u: goto label_1e2ec0;
        case 0x1e2ec4u: goto label_1e2ec4;
        case 0x1e2ec8u: goto label_1e2ec8;
        case 0x1e2eccu: goto label_1e2ecc;
        case 0x1e2ed0u: goto label_1e2ed0;
        case 0x1e2ed4u: goto label_1e2ed4;
        case 0x1e2ed8u: goto label_1e2ed8;
        case 0x1e2edcu: goto label_1e2edc;
        case 0x1e2ee0u: goto label_1e2ee0;
        case 0x1e2ee4u: goto label_1e2ee4;
        case 0x1e2ee8u: goto label_1e2ee8;
        case 0x1e2eecu: goto label_1e2eec;
        case 0x1e2ef0u: goto label_1e2ef0;
        case 0x1e2ef4u: goto label_1e2ef4;
        case 0x1e2ef8u: goto label_1e2ef8;
        case 0x1e2efcu: goto label_1e2efc;
        case 0x1e2f00u: goto label_1e2f00;
        case 0x1e2f04u: goto label_1e2f04;
        case 0x1e2f08u: goto label_1e2f08;
        case 0x1e2f0cu: goto label_1e2f0c;
        case 0x1e2f10u: goto label_1e2f10;
        case 0x1e2f14u: goto label_1e2f14;
        case 0x1e2f18u: goto label_1e2f18;
        case 0x1e2f1cu: goto label_1e2f1c;
        case 0x1e2f20u: goto label_1e2f20;
        case 0x1e2f24u: goto label_1e2f24;
        case 0x1e2f28u: goto label_1e2f28;
        case 0x1e2f2cu: goto label_1e2f2c;
        case 0x1e2f30u: goto label_1e2f30;
        case 0x1e2f34u: goto label_1e2f34;
        case 0x1e2f38u: goto label_1e2f38;
        case 0x1e2f3cu: goto label_1e2f3c;
        default: break;
    }

    ctx->pc = 0x1e2e40u;

label_1e2e40:
    // 0x1e2e40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e2e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e2e44:
    // 0x1e2e44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e2e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e2e48:
    // 0x1e2e48: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e2e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1e2e4c:
    // 0x1e2e4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e2e4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2e50:
    // 0x1e2e50: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e2e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e2e54:
    // 0x1e2e54: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e2e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1e2e58:
    // 0x1e2e58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e2e5c:
    // 0x1e2e5c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e2e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e2e60:
    // 0x1e2e60: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1e2e60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1e2e64:
    // 0x1e2e64: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1e2e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1e2e68:
    // 0x1e2e68: 0x40f809  jalr        $v0
label_1e2e6c:
    if (ctx->pc == 0x1E2E6Cu) {
        ctx->pc = 0x1E2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E68u;
        // 0x1e2e6c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E70u;
        goto label_1e2e70;
    }
    ctx->pc = 0x1E2E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E2E70u);
        ctx->pc = 0x1E2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E68u;
        // 0x1e2e6c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2E68u, 0x1E2E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2E70u;
label_1e2e70:
    // 0x1e2e70: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1e2e74:
    if (ctx->pc == 0x1E2E74u) {
        ctx->pc = 0x1E2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E70u;
        // 0x1e2e74: 0x26420094  addiu       $v0, $s2, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E78u;
        goto label_1e2e78;
    }
    ctx->pc = 0x1E2E70u;
    {
        const bool branch_taken_0x1e2e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E70u;
        // 0x1e2e74: 0x26420094  addiu       $v0, $s2, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e70) {
            ctx->pc = 0x1E2F24u;
            goto label_1e2f24;
        }
    }
    ctx->pc = 0x1E2E78u;
label_1e2e78:
    // 0x1e2e78: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1e2e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1e2e7c:
    // 0x1e2e7c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1e2e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e2e80:
    // 0x1e2e80: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1e2e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e2e84:
    // 0x1e2e84: 0x32883  sra         $a1, $v1, 2
    ctx->pc = 0x1e2e84u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
label_1e2e88:
    // 0x1e2e88: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
label_1e2e8c:
    if (ctx->pc == 0x1E2E8Cu) {
        ctx->pc = 0x1E2E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E88u;
        // 0x1e2e8c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E90u;
        goto label_1e2e90;
    }
    ctx->pc = 0x1E2E88u;
    {
        const bool branch_taken_0x1e2e88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E88u;
        // 0x1e2e8c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e88) {
            ctx->pc = 0x1E2F24u;
            goto label_1e2f24;
        }
    }
    ctx->pc = 0x1E2E90u;
label_1e2e90:
    // 0x1e2e90: 0x8e4300ac  lw          $v1, 0xAC($s2)
    ctx->pc = 0x1e2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
label_1e2e94:
    // 0x1e2e94: 0x8e5100b4  lw          $s1, 0xB4($s2)
    ctx->pc = 0x1e2e94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_1e2e98:
    // 0x1e2e98: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x1e2e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_1e2e9c:
    // 0x1e2e9c: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x1e2e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1e2ea0:
    // 0x1e2ea0: 0x8e5000a4  lw          $s0, 0xA4($s2)
    ctx->pc = 0x1e2ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e2ea4:
    // 0x1e2ea4: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e2ea4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_1e2ea8:
    // 0x1e2ea8: 0x38840003  xori        $a0, $a0, 0x3
    ctx->pc = 0x1e2ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
label_1e2eac:
    // 0x1e2eac: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1e2eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e2eb0:
    // 0x1e2eb0: 0x64880a  movz        $s1, $v1, $a0
    ctx->pc = 0x1e2eb0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_1e2eb4:
    // 0x1e2eb4: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1e2eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1e2eb8:
    // 0x1e2eb8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e2eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e2ebc:
    // 0x1e2ebc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1e2ec0:
    if (ctx->pc == 0x1E2EC0u) {
        ctx->pc = 0x1E2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2EBCu;
        // 0x1e2ec0: 0x205102b  sltu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2EC4u;
        goto label_1e2ec4;
    }
    ctx->pc = 0x1E2EBCu;
    {
        const bool branch_taken_0x1e2ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2EBCu;
        // 0x1e2ec0: 0x205102b  sltu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ebc) {
            ctx->pc = 0x1E2F24u;
            goto label_1e2f24;
        }
    }
    ctx->pc = 0x1E2EC4u;
label_1e2ec4:
    // 0x1e2ec4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_1e2ec8:
    if (ctx->pc == 0x1E2EC8u) {
        ctx->pc = 0x1E2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2EC4u;
        // 0x1e2ec8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2ECCu;
        goto label_1e2ecc;
    }
    ctx->pc = 0x1E2EC4u;
    {
        const bool branch_taken_0x1e2ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2ec4) {
            ctx->pc = 0x1E2EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2EC4u;
            // 0x1e2ec8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2F28u;
            goto label_1e2f28;
        }
    }
    ctx->pc = 0x1E2ECCu;
label_1e2ecc:
    // 0x1e2ecc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1e2eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1e2ed0:
    // 0x1e2ed0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e2ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1e2ed4:
    // 0x1e2ed4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e2ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e2ed8:
    // 0x1e2ed8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e2edc:
    // 0x1e2edc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e2edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2ee0:
    // 0x1e2ee0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1e2ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e2ee4:
    // 0x1e2ee4: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1e2ee4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1e2ee8:
    // 0x1e2ee8: 0x8c65003c  lw          $a1, 0x3C($v1)
    ctx->pc = 0x1e2ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1e2eec:
    // 0x1e2eec: 0xa0f809  jalr        $a1
label_1e2ef0:
    if (ctx->pc == 0x1E2EF0u) {
        ctx->pc = 0x1E2EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2EECu;
        // 0x1e2ef0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2EF4u;
        goto label_1e2ef4;
    }
    ctx->pc = 0x1E2EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1E2EF4u);
        ctx->pc = 0x1E2EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2EECu;
        // 0x1e2ef0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2EECu, 0x1E2EF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2EF4u;
label_1e2ef4:
    // 0x1e2ef4: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x1e2ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1e2ef8:
    // 0x1e2ef8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e2ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e2efc:
    // 0x1e2efc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e2efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e2f00:
    // 0x1e2f00: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1e2f04:
    if (ctx->pc == 0x1E2F04u) {
        ctx->pc = 0x1E2F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F00u;
        // 0x1e2f04: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2F08u;
        goto label_1e2f08;
    }
    ctx->pc = 0x1E2F00u;
    {
        const bool branch_taken_0x1e2f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2f00) {
            ctx->pc = 0x1E2F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2F00u;
            // 0x1e2f04: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2F28u;
            goto label_1e2f28;
        }
    }
    ctx->pc = 0x1E2F08u;
label_1e2f08:
    // 0x1e2f08: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1e2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e2f0c:
    // 0x1e2f0c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1e2f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1e2f10:
    // 0x1e2f10: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e2f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e2f14:
    // 0x1e2f14: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e2f14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e2f18:
    // 0x1e2f18: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e2f18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e2f1c:
    // 0x1e2f1c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
label_1e2f20:
    if (ctx->pc == 0x1E2F20u) {
        ctx->pc = 0x1E2F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F1Cu;
        // 0x1e2f20: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2F24u;
        goto label_1e2f24;
    }
    ctx->pc = 0x1E2F1Cu;
    {
        const bool branch_taken_0x1e2f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2f1c) {
            ctx->pc = 0x1E2F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2F1Cu;
            // 0x1e2f20: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2ed0;
        }
    }
    ctx->pc = 0x1E2F24u;
label_1e2f24:
    // 0x1e2f24: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e2f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2f28:
    // 0x1e2f28: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e2f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e2f2c:
    // 0x1e2f2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e2f2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e2f30:
    // 0x1e2f30: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e2f30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2f34:
    // 0x1e2f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2f38:
    // 0x1e2f38: 0x3e00008  jr          $ra
label_1e2f3c:
    if (ctx->pc == 0x1E2F3Cu) {
        ctx->pc = 0x1E2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F38u;
        // 0x1e2f3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2F40u;
        goto label_fallthrough_0x1e2f38;
    }
    ctx->pc = 0x1E2F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F38u;
        // 0x1e2f3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e2f38:
    ctx->pc = 0x1E2F40u;
}
