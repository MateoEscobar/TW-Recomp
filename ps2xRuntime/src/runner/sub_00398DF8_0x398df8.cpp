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

// Function: sub_00398DF8
// Address: 0x398df8 - 0x398ec8
void sub_00398DF8_0x398df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398DF8_0x398df8");
#endif

    switch (ctx->pc) {
        case 0x398df8u: goto label_398df8;
        case 0x398dfcu: goto label_398dfc;
        case 0x398e00u: goto label_398e00;
        case 0x398e04u: goto label_398e04;
        case 0x398e08u: goto label_398e08;
        case 0x398e0cu: goto label_398e0c;
        case 0x398e10u: goto label_398e10;
        case 0x398e14u: goto label_398e14;
        case 0x398e18u: goto label_398e18;
        case 0x398e1cu: goto label_398e1c;
        case 0x398e20u: goto label_398e20;
        case 0x398e24u: goto label_398e24;
        case 0x398e28u: goto label_398e28;
        case 0x398e2cu: goto label_398e2c;
        case 0x398e30u: goto label_398e30;
        case 0x398e34u: goto label_398e34;
        case 0x398e38u: goto label_398e38;
        case 0x398e3cu: goto label_398e3c;
        case 0x398e40u: goto label_398e40;
        case 0x398e44u: goto label_398e44;
        case 0x398e48u: goto label_398e48;
        case 0x398e4cu: goto label_398e4c;
        case 0x398e50u: goto label_398e50;
        case 0x398e54u: goto label_398e54;
        case 0x398e58u: goto label_398e58;
        case 0x398e5cu: goto label_398e5c;
        case 0x398e60u: goto label_398e60;
        case 0x398e64u: goto label_398e64;
        case 0x398e68u: goto label_398e68;
        case 0x398e6cu: goto label_398e6c;
        case 0x398e70u: goto label_398e70;
        case 0x398e74u: goto label_398e74;
        case 0x398e78u: goto label_398e78;
        case 0x398e7cu: goto label_398e7c;
        case 0x398e80u: goto label_398e80;
        case 0x398e84u: goto label_398e84;
        case 0x398e88u: goto label_398e88;
        case 0x398e8cu: goto label_398e8c;
        case 0x398e90u: goto label_398e90;
        case 0x398e94u: goto label_398e94;
        case 0x398e98u: goto label_398e98;
        case 0x398e9cu: goto label_398e9c;
        case 0x398ea0u: goto label_398ea0;
        case 0x398ea4u: goto label_398ea4;
        case 0x398ea8u: goto label_398ea8;
        case 0x398eacu: goto label_398eac;
        case 0x398eb0u: goto label_398eb0;
        case 0x398eb4u: goto label_398eb4;
        case 0x398eb8u: goto label_398eb8;
        case 0x398ebcu: goto label_398ebc;
        case 0x398ec0u: goto label_398ec0;
        case 0x398ec4u: goto label_398ec4;
        default: break;
    }

    ctx->pc = 0x398df8u;

label_398df8:
    // 0x398df8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x398df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_398dfc:
    // 0x398dfc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x398dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_398e00:
    // 0x398e00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x398e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_398e04:
    // 0x398e04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x398e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398e08:
    // 0x398e08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x398e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_398e0c:
    // 0x398e0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x398e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_398e10:
    // 0x398e10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x398e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_398e14:
    // 0x398e14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x398e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_398e18:
    // 0x398e18: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x398e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_398e1c:
    // 0x398e1c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x398e1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_398e20:
    // 0x398e20: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x398e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_398e24:
    // 0x398e24: 0x40f809  jalr        $v0
label_398e28:
    if (ctx->pc == 0x398E28u) {
        ctx->pc = 0x398E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E24u;
        // 0x398e28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398E2Cu;
        goto label_398e2c;
    }
    ctx->pc = 0x398E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398E2Cu);
        ctx->pc = 0x398E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E24u;
        // 0x398e28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398E24u, 0x398E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398E2Cu;
label_398e2c:
    // 0x398e2c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x398e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_398e30:
    // 0x398e30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x398e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398e34:
    // 0x398e34: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x398e34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_398e38:
    // 0x398e38: 0x96030018  lhu         $v1, 0x18($s0)
    ctx->pc = 0x398e38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_398e3c:
    // 0x398e3c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x398e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_398e40:
    // 0x398e40: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_398e44:
    if (ctx->pc == 0x398E44u) {
        ctx->pc = 0x398E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E40u;
        // 0x398e44: 0x24403  sra         $t0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398E48u;
        goto label_398e48;
    }
    ctx->pc = 0x398E40u;
    {
        const bool branch_taken_0x398e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x398E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E40u;
        // 0x398e44: 0x24403  sra         $t0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398e40) {
            ctx->pc = 0x398EACu;
            goto label_398eac;
        }
    }
    ctx->pc = 0x398E48u;
label_398e48:
    // 0x398e48: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x398e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_398e4c:
    // 0x398e4c: 0x3c07fffe  lui         $a3, 0xFFFE
    ctx->pc = 0x398e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65534 << 16));
label_398e50:
    // 0x398e50: 0x24c00  sll         $t1, $v0, 16
    ctx->pc = 0x398e50u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_398e54:
    // 0x398e54: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x398e54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_398e58:
    // 0x398e58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x398e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398e5c:
    // 0x398e5c: 0x0  nop
    ctx->pc = 0x398e5cu;
    // NOP
label_398e60:
    // 0x398e60: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x398e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_398e64:
    // 0x398e64: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x398e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_398e68:
    // 0x398e68: 0x94a30024  lhu         $v1, 0x24($a1)
    ctx->pc = 0x398e68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
label_398e6c:
    // 0x398e6c: 0x5468000b  bnel        $v1, $t0, . + 4 + (0xB << 2)
label_398e70:
    if (ctx->pc == 0x398E70u) {
        ctx->pc = 0x398E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E6Cu;
        // 0x398e70: 0x96020018  lhu         $v0, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398E74u;
        goto label_398e74;
    }
    ctx->pc = 0x398E6Cu;
    {
        const bool branch_taken_0x398e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x398e6c) {
            ctx->pc = 0x398E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398E6Cu;
            // 0x398e70: 0x96020018  lhu         $v0, 0x18($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398E9Cu;
            goto label_398e9c;
        }
    }
    ctx->pc = 0x398E74u;
label_398e74:
    // 0x398e74: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x398e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_398e78:
    // 0x398e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x398e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_398e7c:
    // 0x398e7c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x398e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_398e80:
    // 0x398e80: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x398e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_398e84:
    // 0x398e84: 0xc0e57ce  jal         func_395F38
label_398e88:
    if (ctx->pc == 0x398E88u) {
        ctx->pc = 0x398E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E84u;
        // 0x398e88: 0xaca20024  sw          $v0, 0x24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398E8Cu;
        goto label_398e8c;
    }
    ctx->pc = 0x398E84u;
    SET_GPR_U32(ctx, 31, 0x398E8Cu);
    ctx->pc = 0x398E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398E84u;
    // 0x398e88: 0xaca20024  sw          $v0, 0x24($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x398E84u, 0x398E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398E8Cu;
label_398e8c:
    // 0x398e8c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_398e90:
    if (ctx->pc == 0x398E90u) {
        ctx->pc = 0x398E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E8Cu;
        // 0x398e90: 0xa052010f  sb          $s2, 0x10F($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 271), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398E94u;
        goto label_398e94;
    }
    ctx->pc = 0x398E8Cu;
    {
        const bool branch_taken_0x398e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398e8c) {
            ctx->pc = 0x398E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398E8Cu;
            // 0x398e90: 0xa052010f  sb          $s2, 0x10F($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 271), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398EACu;
            goto label_398eac;
        }
    }
    ctx->pc = 0x398E94u;
label_398e94:
    // 0x398e94: 0x10000006  b           . + 4 + (0x6 << 2)
label_398e98:
    if (ctx->pc == 0x398E98u) {
        ctx->pc = 0x398E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E94u;
        // 0x398e98: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398E9Cu;
        goto label_398e9c;
    }
    ctx->pc = 0x398E94u;
    {
        const bool branch_taken_0x398e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E94u;
        // 0x398e98: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398e94) {
            ctx->pc = 0x398EB0u;
            goto label_398eb0;
        }
    }
    ctx->pc = 0x398E9Cu;
label_398e9c:
    // 0x398e9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x398e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_398ea0:
    // 0x398ea0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x398ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_398ea4:
    // 0x398ea4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_398ea8:
    if (ctx->pc == 0x398EA8u) {
        ctx->pc = 0x398EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398EA4u;
        // 0x398ea8: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398EACu;
        goto label_398eac;
    }
    ctx->pc = 0x398EA4u;
    {
        const bool branch_taken_0x398ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398EA4u;
        // 0x398ea8: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398ea4) {
            ctx->pc = 0x398E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398e60;
        }
    }
    ctx->pc = 0x398EACu;
label_398eac:
    // 0x398eac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x398eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_398eb0:
    // 0x398eb0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x398eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_398eb4:
    // 0x398eb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x398eb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_398eb8:
    // 0x398eb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_398ebc:
    // 0x398ebc: 0x3e00008  jr          $ra
label_398ec0:
    if (ctx->pc == 0x398EC0u) {
        ctx->pc = 0x398EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398EBCu;
        // 0x398ec0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398EC4u;
        goto label_398ec4;
    }
    ctx->pc = 0x398EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398EBCu;
        // 0x398ec0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398EC4u;
label_398ec4:
    // 0x398ec4: 0x0  nop
    ctx->pc = 0x398ec4u;
    // NOP
    ctx->pc = 0x398ec8u;
}
