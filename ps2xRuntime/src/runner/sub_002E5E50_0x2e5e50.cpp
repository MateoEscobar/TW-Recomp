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

// Function: sub_002E5E50
// Address: 0x2e5e50 - 0x2e5f40
void sub_002E5E50_0x2e5e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5E50_0x2e5e50");
#endif

    switch (ctx->pc) {
        case 0x2e5e50u: goto label_2e5e50;
        case 0x2e5e54u: goto label_2e5e54;
        case 0x2e5e58u: goto label_2e5e58;
        case 0x2e5e5cu: goto label_2e5e5c;
        case 0x2e5e60u: goto label_2e5e60;
        case 0x2e5e64u: goto label_2e5e64;
        case 0x2e5e68u: goto label_2e5e68;
        case 0x2e5e6cu: goto label_2e5e6c;
        case 0x2e5e70u: goto label_2e5e70;
        case 0x2e5e74u: goto label_2e5e74;
        case 0x2e5e78u: goto label_2e5e78;
        case 0x2e5e7cu: goto label_2e5e7c;
        case 0x2e5e80u: goto label_2e5e80;
        case 0x2e5e84u: goto label_2e5e84;
        case 0x2e5e88u: goto label_2e5e88;
        case 0x2e5e8cu: goto label_2e5e8c;
        case 0x2e5e90u: goto label_2e5e90;
        case 0x2e5e94u: goto label_2e5e94;
        case 0x2e5e98u: goto label_2e5e98;
        case 0x2e5e9cu: goto label_2e5e9c;
        case 0x2e5ea0u: goto label_2e5ea0;
        case 0x2e5ea4u: goto label_2e5ea4;
        case 0x2e5ea8u: goto label_2e5ea8;
        case 0x2e5eacu: goto label_2e5eac;
        case 0x2e5eb0u: goto label_2e5eb0;
        case 0x2e5eb4u: goto label_2e5eb4;
        case 0x2e5eb8u: goto label_2e5eb8;
        case 0x2e5ebcu: goto label_2e5ebc;
        case 0x2e5ec0u: goto label_2e5ec0;
        case 0x2e5ec4u: goto label_2e5ec4;
        case 0x2e5ec8u: goto label_2e5ec8;
        case 0x2e5eccu: goto label_2e5ecc;
        case 0x2e5ed0u: goto label_2e5ed0;
        case 0x2e5ed4u: goto label_2e5ed4;
        case 0x2e5ed8u: goto label_2e5ed8;
        case 0x2e5edcu: goto label_2e5edc;
        case 0x2e5ee0u: goto label_2e5ee0;
        case 0x2e5ee4u: goto label_2e5ee4;
        case 0x2e5ee8u: goto label_2e5ee8;
        case 0x2e5eecu: goto label_2e5eec;
        case 0x2e5ef0u: goto label_2e5ef0;
        case 0x2e5ef4u: goto label_2e5ef4;
        case 0x2e5ef8u: goto label_2e5ef8;
        case 0x2e5efcu: goto label_2e5efc;
        case 0x2e5f00u: goto label_2e5f00;
        case 0x2e5f04u: goto label_2e5f04;
        case 0x2e5f08u: goto label_2e5f08;
        case 0x2e5f0cu: goto label_2e5f0c;
        case 0x2e5f10u: goto label_2e5f10;
        case 0x2e5f14u: goto label_2e5f14;
        case 0x2e5f18u: goto label_2e5f18;
        case 0x2e5f1cu: goto label_2e5f1c;
        case 0x2e5f20u: goto label_2e5f20;
        case 0x2e5f24u: goto label_2e5f24;
        case 0x2e5f28u: goto label_2e5f28;
        case 0x2e5f2cu: goto label_2e5f2c;
        case 0x2e5f30u: goto label_2e5f30;
        case 0x2e5f34u: goto label_2e5f34;
        case 0x2e5f38u: goto label_2e5f38;
        case 0x2e5f3cu: goto label_2e5f3c;
        default: break;
    }

    ctx->pc = 0x2e5e50u;

label_2e5e50:
    // 0x2e5e50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e5e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e5e54:
    // 0x2e5e54: 0x24050152  addiu       $a1, $zero, 0x152
    ctx->pc = 0x2e5e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
label_2e5e58:
    // 0x2e5e58: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e5e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2e5e5c:
    // 0x2e5e5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e5e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e5e60:
    // 0x2e5e60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e5e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2e5e64:
    // 0x2e5e64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e5e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e5e68:
    // 0x2e5e68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e5e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2e5e6c:
    // 0x2e5e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e5e70:
    // 0x2e5e70: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e5e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e5e74:
    // 0x2e5e74: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2e5e74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e5e78:
    // 0x2e5e78: 0xc0886a8  jal         func_221AA0
label_2e5e7c:
    if (ctx->pc == 0x2E5E7Cu) {
        ctx->pc = 0x2E5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E78u;
        // 0x2e5e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E80u;
        goto label_2e5e80;
    }
    ctx->pc = 0x2E5E78u;
    SET_GPR_U32(ctx, 31, 0x2E5E80u);
    ctx->pc = 0x2E5E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5E78u;
    // 0x2e5e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2E5E78u, 0x2E5E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5E80u;
label_2e5e80:
    // 0x2e5e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e5e84:
    // 0x2e5e84: 0x2405014e  addiu       $a1, $zero, 0x14E
    ctx->pc = 0x2e5e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
label_2e5e88:
    // 0x2e5e88: 0xc0886a8  jal         func_221AA0
label_2e5e8c:
    if (ctx->pc == 0x2E5E8Cu) {
        ctx->pc = 0x2E5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E88u;
        // 0x2e5e8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5E90u;
        goto label_2e5e90;
    }
    ctx->pc = 0x2E5E88u;
    SET_GPR_U32(ctx, 31, 0x2E5E90u);
    ctx->pc = 0x2E5E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5E88u;
    // 0x2e5e8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2E5E88u, 0x2E5E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5E90u;
label_2e5e90:
    // 0x2e5e90: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x2e5e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2e5e94:
    // 0x2e5e94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e5e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e5e98:
    // 0x2e5e98: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2e5e9c:
    if (ctx->pc == 0x2E5E9Cu) {
        ctx->pc = 0x2E5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E98u;
        // 0x2e5e9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5EA0u;
        goto label_2e5ea0;
    }
    ctx->pc = 0x2E5E98u;
    {
        const bool branch_taken_0x2e5e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E98u;
        // 0x2e5e9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e98) {
            ctx->pc = 0x2E5EB0u;
            goto label_2e5eb0;
        }
    }
    ctx->pc = 0x2E5EA0u;
label_2e5ea0:
    // 0x2e5ea0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2e5ea4:
    if (ctx->pc == 0x2E5EA4u) {
        ctx->pc = 0x2E5EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EA0u;
        // 0x2e5ea4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5EA8u;
        goto label_2e5ea8;
    }
    ctx->pc = 0x2E5EA0u;
    {
        const bool branch_taken_0x2e5ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EA0u;
        // 0x2e5ea4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ea0) {
            ctx->pc = 0x2E5EB0u;
            goto label_2e5eb0;
        }
    }
    ctx->pc = 0x2E5EA8u;
label_2e5ea8:
    // 0x2e5ea8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_2e5eac:
    if (ctx->pc == 0x2E5EACu) {
        ctx->pc = 0x2E5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EA8u;
        // 0x2e5eac: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5EB0u;
        goto label_2e5eb0;
    }
    ctx->pc = 0x2E5EA8u;
    {
        const bool branch_taken_0x2e5ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e5ea8) {
            ctx->pc = 0x2E5EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5EA8u;
            // 0x2e5eac: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5EC4u;
            goto label_2e5ec4;
        }
    }
    ctx->pc = 0x2E5EB0u;
label_2e5eb0:
    // 0x2e5eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e5eb4:
    // 0x2e5eb4: 0x24050158  addiu       $a1, $zero, 0x158
    ctx->pc = 0x2e5eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
label_2e5eb8:
    // 0x2e5eb8: 0xc0886a8  jal         func_221AA0
label_2e5ebc:
    if (ctx->pc == 0x2E5EBCu) {
        ctx->pc = 0x2E5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EB8u;
        // 0x2e5ebc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5EC0u;
        goto label_2e5ec0;
    }
    ctx->pc = 0x2E5EB8u;
    SET_GPR_U32(ctx, 31, 0x2E5EC0u);
    ctx->pc = 0x2E5EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5EB8u;
    // 0x2e5ebc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2E5EB8u, 0x2E5EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5EC0u;
label_2e5ec0:
    // 0x2e5ec0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2e5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2e5ec4:
    // 0x2e5ec4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_2e5ec8:
    if (ctx->pc == 0x2E5EC8u) {
        ctx->pc = 0x2E5EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EC4u;
        // 0x2e5ec8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5ECCu;
        goto label_2e5ecc;
    }
    ctx->pc = 0x2E5EC4u;
    {
        const bool branch_taken_0x2e5ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5ec4) {
            ctx->pc = 0x2E5EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5EC4u;
            // 0x2e5ec8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5F10u;
            goto label_2e5f10;
        }
    }
    ctx->pc = 0x2E5ECCu;
label_2e5ecc:
    // 0x2e5ecc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e5eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e5ed0:
    // 0x2e5ed0: 0x8c5000dc  lw          $s0, 0xDC($v0)
    ctx->pc = 0x2e5ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_2e5ed4:
    // 0x2e5ed4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e5ed4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e5ed8:
    // 0x2e5ed8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e5edc:
    // 0x2e5edc: 0x40f809  jalr        $v0
label_2e5ee0:
    if (ctx->pc == 0x2E5EE0u) {
        ctx->pc = 0x2E5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EDCu;
        // 0x2e5ee0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5EE4u;
        goto label_2e5ee4;
    }
    ctx->pc = 0x2E5EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E5EE4u);
        ctx->pc = 0x2E5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EDCu;
        // 0x2e5ee0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5EDCu, 0x2E5EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E5EE4u;
label_2e5ee4:
    // 0x2e5ee4: 0x5602000a  bnel        $s0, $v0, . + 4 + (0xA << 2)
label_2e5ee8:
    if (ctx->pc == 0x2E5EE8u) {
        ctx->pc = 0x2E5EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EE4u;
        // 0x2e5ee8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5EECu;
        goto label_2e5eec;
    }
    ctx->pc = 0x2E5EE4u;
    {
        const bool branch_taken_0x2e5ee4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e5ee4) {
            ctx->pc = 0x2E5EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5EE4u;
            // 0x2e5ee8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5F10u;
            goto label_2e5f10;
        }
    }
    ctx->pc = 0x2E5EECu;
label_2e5eec:
    // 0x2e5eec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e5eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e5ef0:
    // 0x2e5ef0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e5ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e5ef4:
    // 0x2e5ef4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e5ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e5ef8:
    // 0x2e5ef8: 0x40f809  jalr        $v0
label_2e5efc:
    if (ctx->pc == 0x2E5EFCu) {
        ctx->pc = 0x2E5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EF8u;
        // 0x2e5efc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F00u;
        goto label_2e5f00;
    }
    ctx->pc = 0x2E5EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E5F00u);
        ctx->pc = 0x2E5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EF8u;
        // 0x2e5efc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5EF8u, 0x2E5F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E5F00u;
label_2e5f00:
    // 0x2e5f00: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x2e5f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2e5f04:
    // 0x2e5f04: 0xc10586e  jal         func_4161B8
label_2e5f08:
    if (ctx->pc == 0x2E5F08u) {
        ctx->pc = 0x2E5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F04u;
        // 0x2e5f08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F0Cu;
        goto label_2e5f0c;
    }
    ctx->pc = 0x2E5F04u;
    SET_GPR_U32(ctx, 31, 0x2E5F0Cu);
    ctx->pc = 0x2E5F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F04u;
    // 0x2e5f08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B8u, 0x2E5F04u, 0x2E5F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F0Cu;
label_2e5f0c:
    // 0x2e5f0c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e5f10:
    // 0x2e5f10: 0xa22001b2  sb          $zero, 0x1B2($s1)
    ctx->pc = 0x2e5f10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 434), (uint8_t)GPR_U32(ctx, 0));
label_2e5f14:
    // 0x2e5f14: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x2e5f14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_2e5f18:
    // 0x2e5f18: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x2e5f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_2e5f1c:
    // 0x2e5f1c: 0x60f809  jalr        $v1
label_2e5f20:
    if (ctx->pc == 0x2E5F20u) {
        ctx->pc = 0x2E5F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F1Cu;
        // 0x2e5f20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F24u;
        goto label_2e5f24;
    }
    ctx->pc = 0x2E5F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E5F24u);
        ctx->pc = 0x2E5F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F1Cu;
        // 0x2e5f20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5F1Cu, 0x2E5F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E5F24u;
label_2e5f24:
    // 0x2e5f24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e5f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e5f28:
    // 0x2e5f28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e5f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5f2c:
    // 0x2e5f2c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e5f2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5f30:
    // 0x2e5f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5f34:
    // 0x2e5f34: 0x3e00008  jr          $ra
label_2e5f38:
    if (ctx->pc == 0x2E5F38u) {
        ctx->pc = 0x2E5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F34u;
        // 0x2e5f38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5F3Cu;
        goto label_2e5f3c;
    }
    ctx->pc = 0x2E5F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F34u;
        // 0x2e5f38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5F3Cu;
label_2e5f3c:
    // 0x2e5f3c: 0x0  nop
    ctx->pc = 0x2e5f3cu;
    // NOP
    ctx->pc = 0x2e5f40u;
}
