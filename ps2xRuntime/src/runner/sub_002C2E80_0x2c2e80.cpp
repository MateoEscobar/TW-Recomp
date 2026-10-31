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

// Function: sub_002C2E80
// Address: 0x2c2e80 - 0x2c2f98
void sub_002C2E80_0x2c2e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2E80_0x2c2e80");
#endif

    switch (ctx->pc) {
        case 0x2c2e80u: goto label_2c2e80;
        case 0x2c2e84u: goto label_2c2e84;
        case 0x2c2e88u: goto label_2c2e88;
        case 0x2c2e8cu: goto label_2c2e8c;
        case 0x2c2e90u: goto label_2c2e90;
        case 0x2c2e94u: goto label_2c2e94;
        case 0x2c2e98u: goto label_2c2e98;
        case 0x2c2e9cu: goto label_2c2e9c;
        case 0x2c2ea0u: goto label_2c2ea0;
        case 0x2c2ea4u: goto label_2c2ea4;
        case 0x2c2ea8u: goto label_2c2ea8;
        case 0x2c2eacu: goto label_2c2eac;
        case 0x2c2eb0u: goto label_2c2eb0;
        case 0x2c2eb4u: goto label_2c2eb4;
        case 0x2c2eb8u: goto label_2c2eb8;
        case 0x2c2ebcu: goto label_2c2ebc;
        case 0x2c2ec0u: goto label_2c2ec0;
        case 0x2c2ec4u: goto label_2c2ec4;
        case 0x2c2ec8u: goto label_2c2ec8;
        case 0x2c2eccu: goto label_2c2ecc;
        case 0x2c2ed0u: goto label_2c2ed0;
        case 0x2c2ed4u: goto label_2c2ed4;
        case 0x2c2ed8u: goto label_2c2ed8;
        case 0x2c2edcu: goto label_2c2edc;
        case 0x2c2ee0u: goto label_2c2ee0;
        case 0x2c2ee4u: goto label_2c2ee4;
        case 0x2c2ee8u: goto label_2c2ee8;
        case 0x2c2eecu: goto label_2c2eec;
        case 0x2c2ef0u: goto label_2c2ef0;
        case 0x2c2ef4u: goto label_2c2ef4;
        case 0x2c2ef8u: goto label_2c2ef8;
        case 0x2c2efcu: goto label_2c2efc;
        case 0x2c2f00u: goto label_2c2f00;
        case 0x2c2f04u: goto label_2c2f04;
        case 0x2c2f08u: goto label_2c2f08;
        case 0x2c2f0cu: goto label_2c2f0c;
        case 0x2c2f10u: goto label_2c2f10;
        case 0x2c2f14u: goto label_2c2f14;
        case 0x2c2f18u: goto label_2c2f18;
        case 0x2c2f1cu: goto label_2c2f1c;
        case 0x2c2f20u: goto label_2c2f20;
        case 0x2c2f24u: goto label_2c2f24;
        case 0x2c2f28u: goto label_2c2f28;
        case 0x2c2f2cu: goto label_2c2f2c;
        case 0x2c2f30u: goto label_2c2f30;
        case 0x2c2f34u: goto label_2c2f34;
        case 0x2c2f38u: goto label_2c2f38;
        case 0x2c2f3cu: goto label_2c2f3c;
        case 0x2c2f40u: goto label_2c2f40;
        case 0x2c2f44u: goto label_2c2f44;
        case 0x2c2f48u: goto label_2c2f48;
        case 0x2c2f4cu: goto label_2c2f4c;
        case 0x2c2f50u: goto label_2c2f50;
        case 0x2c2f54u: goto label_2c2f54;
        case 0x2c2f58u: goto label_2c2f58;
        case 0x2c2f5cu: goto label_2c2f5c;
        case 0x2c2f60u: goto label_2c2f60;
        case 0x2c2f64u: goto label_2c2f64;
        case 0x2c2f68u: goto label_2c2f68;
        case 0x2c2f6cu: goto label_2c2f6c;
        case 0x2c2f70u: goto label_2c2f70;
        case 0x2c2f74u: goto label_2c2f74;
        case 0x2c2f78u: goto label_2c2f78;
        case 0x2c2f7cu: goto label_2c2f7c;
        case 0x2c2f80u: goto label_2c2f80;
        case 0x2c2f84u: goto label_2c2f84;
        case 0x2c2f88u: goto label_2c2f88;
        case 0x2c2f8cu: goto label_2c2f8c;
        case 0x2c2f90u: goto label_2c2f90;
        case 0x2c2f94u: goto label_2c2f94;
        default: break;
    }

    ctx->pc = 0x2c2e80u;

label_2c2e80:
    // 0x2c2e80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c2e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2c2e84:
    // 0x2c2e84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c2e88:
    // 0x2c2e88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c2e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2c2e8c:
    // 0x2c2e8c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c2e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2c2e90:
    // 0x2c2e90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c2e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c2e94:
    // 0x2c2e94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c2e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c2e98:
    // 0x2c2e98: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c2e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c2e9c:
    // 0x2c2e9c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2c2e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2c2ea0:
    // 0x2c2ea0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2c2ea4:
    if (ctx->pc == 0x2C2EA4u) {
        ctx->pc = 0x2C2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EA0u;
        // 0x2c2ea4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2EA8u;
        goto label_2c2ea8;
    }
    ctx->pc = 0x2C2EA0u;
    {
        const bool branch_taken_0x2c2ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EA0u;
        // 0x2c2ea4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ea0) {
            ctx->pc = 0x2C2EC0u;
            goto label_2c2ec0;
        }
    }
    ctx->pc = 0x2C2EA8u;
label_2c2ea8:
    // 0x2c2ea8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c2eac:
    // 0x2c2eac: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2c2eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2c2eb0:
    // 0x2c2eb0: 0x94830322  lhu         $v1, 0x322($a0)
    ctx->pc = 0x2c2eb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 802)));
label_2c2eb4:
    // 0x2c2eb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c2eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2c2eb8:
    // 0x2c2eb8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2c2ebc:
    if (ctx->pc == 0x2C2EBCu) {
        ctx->pc = 0x2C2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EB8u;
        // 0x2c2ebc: 0xa4830322  sh          $v1, 0x322($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 802), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2EC0u;
        goto label_2c2ec0;
    }
    ctx->pc = 0x2C2EB8u;
    {
        const bool branch_taken_0x2c2eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EB8u;
        // 0x2c2ebc: 0xa4830322  sh          $v1, 0x322($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 802), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2eb8) {
            ctx->pc = 0x2C2F30u;
            goto label_2c2f30;
        }
    }
    ctx->pc = 0x2C2EC0u;
label_2c2ec0:
    // 0x2c2ec0: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
label_2c2ec4:
    if (ctx->pc == 0x2C2EC4u) {
        ctx->pc = 0x2C2EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EC0u;
        // 0x2c2ec4: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2EC8u;
        goto label_2c2ec8;
    }
    ctx->pc = 0x2C2EC0u;
    {
        const bool branch_taken_0x2c2ec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c2ec0) {
            ctx->pc = 0x2C2EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2EC0u;
            // 0x2c2ec4: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2F34u;
            goto label_2c2f34;
        }
    }
    ctx->pc = 0x2C2EC8u;
label_2c2ec8:
    // 0x2c2ec8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2c2ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c2ecc:
    // 0x2c2ecc: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2c2eccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_2c2ed0:
    // 0x2c2ed0: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x2c2ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_2c2ed4:
    // 0x2c2ed4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c2ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c2ed8:
    // 0x2c2ed8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c2ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c2edc:
    // 0x2c2edc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c2edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c2ee0:
    // 0x2c2ee0: 0x40f809  jalr        $v0
label_2c2ee4:
    if (ctx->pc == 0x2C2EE4u) {
        ctx->pc = 0x2C2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EE0u;
        // 0x2c2ee4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2EE8u;
        goto label_2c2ee8;
    }
    ctx->pc = 0x2C2EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C2EE8u);
        ctx->pc = 0x2C2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EE0u;
        // 0x2c2ee4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2EE0u, 0x2C2EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C2EE8u;
label_2c2ee8:
    // 0x2c2ee8: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x2c2ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
label_2c2eec:
    // 0x2c2eec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c2eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2ef0:
    // 0x2c2ef0: 0x34c680ff  ori         $a2, $a2, 0x80FF
    ctx->pc = 0x2c2ef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33023);
label_2c2ef4:
    // 0x2c2ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2ef8:
    // 0x2c2ef8: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2c2ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2c2efc:
    // 0x2c2efc: 0xc06ca64  jal         func_1B2990
label_2c2f00:
    if (ctx->pc == 0x2C2F00u) {
        ctx->pc = 0x2C2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EFCu;
        // 0x2c2f00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2F04u;
        goto label_2c2f04;
    }
    ctx->pc = 0x2C2EFCu;
    SET_GPR_U32(ctx, 31, 0x2C2F04u);
    ctx->pc = 0x2C2F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2EFCu;
    // 0x2c2f00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2990u, 0x2C2EFCu, 0x2C2F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F04u;
label_2c2f04:
    // 0x2c2f04: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c2f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c2f08:
    // 0x2c2f08: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2c2f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c2f0c:
    // 0x2c2f0c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2c2f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2c2f10:
    // 0x2c2f10: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x2c2f10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_2c2f14:
    // 0x2c2f14: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2c2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2c2f18:
    // 0x2c2f18: 0x40f809  jalr        $v0
label_2c2f1c:
    if (ctx->pc == 0x2C2F1Cu) {
        ctx->pc = 0x2C2F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F18u;
        // 0x2c2f1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2F20u;
        goto label_2c2f20;
    }
    ctx->pc = 0x2C2F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C2F20u);
        ctx->pc = 0x2C2F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F18u;
        // 0x2c2f1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2F18u, 0x2C2F20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C2F20u;
label_2c2f20:
    // 0x2c2f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2f24:
    // 0x2c2f24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c2f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2f28:
    // 0x2c2f28: 0xc06ccb8  jal         func_1B32E0
label_2c2f2c:
    if (ctx->pc == 0x2C2F2Cu) {
        ctx->pc = 0x2C2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F28u;
        // 0x2c2f2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2F30u;
        goto label_2c2f30;
    }
    ctx->pc = 0x2C2F28u;
    SET_GPR_U32(ctx, 31, 0x2C2F30u);
    ctx->pc = 0x2C2F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2F28u;
    // 0x2c2f2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B32E0u, 0x2C2F28u, 0x2C2F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F30u;
label_2c2f30:
    // 0x2c2f30: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2c2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2c2f34:
    // 0x2c2f34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c2f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c2f38:
    // 0x2c2f38: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2c2f38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c2f3c:
    // 0x2c2f3c: 0xc0e409a  jal         func_390268
label_2c2f40:
    if (ctx->pc == 0x2C2F40u) {
        ctx->pc = 0x2C2F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F3Cu;
        // 0x2c2f40: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2F44u;
        goto label_2c2f44;
    }
    ctx->pc = 0x2C2F3Cu;
    SET_GPR_U32(ctx, 31, 0x2C2F44u);
    ctx->pc = 0x2C2F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2F3Cu;
    // 0x2c2f40: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C2F3Cu, 0x2C2F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F44u;
label_2c2f44:
    // 0x2c2f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2f48:
    // 0x2c2f48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c2f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2f4c:
    // 0x2c2f4c: 0xc0a352c  jal         func_28D4B0
label_2c2f50:
    if (ctx->pc == 0x2C2F50u) {
        ctx->pc = 0x2C2F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F4Cu;
        // 0x2c2f50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2F54u;
        goto label_2c2f54;
    }
    ctx->pc = 0x2C2F4Cu;
    SET_GPR_U32(ctx, 31, 0x2C2F54u);
    ctx->pc = 0x2C2F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2F4Cu;
    // 0x2c2f50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2C2F4Cu, 0x2C2F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F54u;
label_2c2f54:
    // 0x2c2f54: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2c2f58:
    if (ctx->pc == 0x2C2F58u) {
        ctx->pc = 0x2C2F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F54u;
        // 0x2c2f58: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2F5Cu;
        goto label_2c2f5c;
    }
    ctx->pc = 0x2C2F54u;
    {
        const bool branch_taken_0x2c2f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2f54) {
            ctx->pc = 0x2C2F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2F54u;
            // 0x2c2f58: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2F70u;
            goto label_2c2f70;
        }
    }
    ctx->pc = 0x2C2F5Cu;
label_2c2f5c:
    // 0x2c2f5c: 0xc087420  jal         func_21D080
label_2c2f60:
    if (ctx->pc == 0x2C2F60u) {
        ctx->pc = 0x2C2F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F5Cu;
        // 0x2c2f60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2F64u;
        goto label_2c2f64;
    }
    ctx->pc = 0x2C2F5Cu;
    SET_GPR_U32(ctx, 31, 0x2C2F64u);
    ctx->pc = 0x2C2F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2F5Cu;
    // 0x2c2f60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2C2F5Cu, 0x2C2F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F64u;
label_2c2f64:
    // 0x2c2f64: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2c2f64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2c2f68:
    // 0x2c2f68: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x2c2f68u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_2c2f6c:
    // 0x2c2f6c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2c2f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c2f70:
    // 0x2c2f70: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2c2f70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2c2f74:
    // 0x2c2f74: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2c2f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2c2f78:
    // 0x2c2f78: 0x60f809  jalr        $v1
label_2c2f7c:
    if (ctx->pc == 0x2C2F7Cu) {
        ctx->pc = 0x2C2F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F78u;
        // 0x2c2f7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2F80u;
        goto label_2c2f80;
    }
    ctx->pc = 0x2C2F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C2F80u);
        ctx->pc = 0x2C2F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F78u;
        // 0x2c2f7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2F78u, 0x2C2F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C2F80u;
label_2c2f80:
    // 0x2c2f80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c2f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c2f84:
    // 0x2c2f84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c2f84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c2f88:
    // 0x2c2f88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c2f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c2f8c:
    // 0x2c2f8c: 0x3e00008  jr          $ra
label_2c2f90:
    if (ctx->pc == 0x2C2F90u) {
        ctx->pc = 0x2C2F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F8Cu;
        // 0x2c2f90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2F94u;
        goto label_2c2f94;
    }
    ctx->pc = 0x2C2F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F8Cu;
        // 0x2c2f90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2F94u;
label_2c2f94:
    // 0x2c2f94: 0x0  nop
    ctx->pc = 0x2c2f94u;
    // NOP
    ctx->pc = 0x2c2f98u;
}
