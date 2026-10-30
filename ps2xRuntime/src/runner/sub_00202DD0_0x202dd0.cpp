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

// Function: sub_00202DD0
// Address: 0x202dd0 - 0x202eb0
void sub_00202DD0_0x202dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202DD0_0x202dd0");
#endif

    switch (ctx->pc) {
        case 0x202dd0u: goto label_202dd0;
        case 0x202dd4u: goto label_202dd4;
        case 0x202dd8u: goto label_202dd8;
        case 0x202ddcu: goto label_202ddc;
        case 0x202de0u: goto label_202de0;
        case 0x202de4u: goto label_202de4;
        case 0x202de8u: goto label_202de8;
        case 0x202decu: goto label_202dec;
        case 0x202df0u: goto label_202df0;
        case 0x202df4u: goto label_202df4;
        case 0x202df8u: goto label_202df8;
        case 0x202dfcu: goto label_202dfc;
        case 0x202e00u: goto label_202e00;
        case 0x202e04u: goto label_202e04;
        case 0x202e08u: goto label_202e08;
        case 0x202e0cu: goto label_202e0c;
        case 0x202e10u: goto label_202e10;
        case 0x202e14u: goto label_202e14;
        case 0x202e18u: goto label_202e18;
        case 0x202e1cu: goto label_202e1c;
        case 0x202e20u: goto label_202e20;
        case 0x202e24u: goto label_202e24;
        case 0x202e28u: goto label_202e28;
        case 0x202e2cu: goto label_202e2c;
        case 0x202e30u: goto label_202e30;
        case 0x202e34u: goto label_202e34;
        case 0x202e38u: goto label_202e38;
        case 0x202e3cu: goto label_202e3c;
        case 0x202e40u: goto label_202e40;
        case 0x202e44u: goto label_202e44;
        case 0x202e48u: goto label_202e48;
        case 0x202e4cu: goto label_202e4c;
        case 0x202e50u: goto label_202e50;
        case 0x202e54u: goto label_202e54;
        case 0x202e58u: goto label_202e58;
        case 0x202e5cu: goto label_202e5c;
        case 0x202e60u: goto label_202e60;
        case 0x202e64u: goto label_202e64;
        case 0x202e68u: goto label_202e68;
        case 0x202e6cu: goto label_202e6c;
        case 0x202e70u: goto label_202e70;
        case 0x202e74u: goto label_202e74;
        case 0x202e78u: goto label_202e78;
        case 0x202e7cu: goto label_202e7c;
        case 0x202e80u: goto label_202e80;
        case 0x202e84u: goto label_202e84;
        case 0x202e88u: goto label_202e88;
        case 0x202e8cu: goto label_202e8c;
        case 0x202e90u: goto label_202e90;
        case 0x202e94u: goto label_202e94;
        case 0x202e98u: goto label_202e98;
        case 0x202e9cu: goto label_202e9c;
        case 0x202ea0u: goto label_202ea0;
        case 0x202ea4u: goto label_202ea4;
        case 0x202ea8u: goto label_202ea8;
        case 0x202eacu: goto label_202eac;
        default: break;
    }

    ctx->pc = 0x202dd0u;

label_202dd0:
    // 0x202dd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x202dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_202dd4:
    // 0x202dd4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x202dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_202dd8:
    // 0x202dd8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x202dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_202ddc:
    // 0x202ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x202ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_202de0:
    // 0x202de0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x202de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_202de4:
    // 0x202de4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x202de4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202de8:
    // 0x202de8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x202de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_202dec:
    // 0x202dec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x202decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_202df0:
    // 0x202df0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x202df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_202df4:
    // 0x202df4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x202df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_202df8:
    // 0x202df8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x202df8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_202dfc:
    // 0x202dfc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x202dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_202e00:
    // 0x202e00: 0x40f809  jalr        $v0
label_202e04:
    if (ctx->pc == 0x202E04u) {
        ctx->pc = 0x202E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E00u;
        // 0x202e04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202E08u;
        goto label_202e08;
    }
    ctx->pc = 0x202E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x202E08u);
        ctx->pc = 0x202E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E00u;
        // 0x202e04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202E00u, 0x202E08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x202E08u;
label_202e08:
    // 0x202e08: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x202e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_202e0c:
    // 0x202e0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x202e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202e10:
    // 0x202e10: 0x2473ef80  addiu       $s3, $v1, -0x1080
    ctx->pc = 0x202e10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963072));
label_202e14:
    // 0x202e14: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x202e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_202e18:
    // 0x202e18: 0x43940  sll         $a3, $a0, 5
    ctx->pc = 0x202e18u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_202e1c:
    // 0x202e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x202e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202e20:
    // 0x202e20: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x202e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_202e24:
    // 0x202e24: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x202e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_202e28:
    // 0x202e28: 0xb23004  sllv        $a2, $s2, $a1
    ctx->pc = 0x202e28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 5) & 0x1F));
label_202e2c:
    // 0x202e2c: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x202e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_202e30:
    // 0x202e30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x202e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_202e34:
    // 0x202e34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x202e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_202e38:
    // 0x202e38: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x202e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_202e3c:
    // 0x202e3c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x202e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_202e40:
    // 0x202e40: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x202e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
label_202e44:
    // 0x202e44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x202e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_202e48:
    // 0x202e48: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x202e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_202e4c:
    // 0x202e4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_202e50:
    if (ctx->pc == 0x202E50u) {
        ctx->pc = 0x202E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E4Cu;
        // 0x202e50: 0x2ca30020  sltiu       $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x202E54u;
        goto label_202e54;
    }
    ctx->pc = 0x202E4Cu;
    {
        const bool branch_taken_0x202e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x202E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E4Cu;
        // 0x202e50: 0x2ca30020  sltiu       $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e4c) {
            ctx->pc = 0x202E60u;
            goto label_202e60;
        }
    }
    ctx->pc = 0x202E54u;
label_202e54:
    // 0x202e54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x202e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_202e58:
    // 0x202e58: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x202e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_202e5c:
    // 0x202e5c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x202e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_202e60:
    // 0x202e60: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_202e64:
    if (ctx->pc == 0x202E64u) {
        ctx->pc = 0x202E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E60u;
        // 0x202e64: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202E68u;
        goto label_202e68;
    }
    ctx->pc = 0x202E60u;
    {
        const bool branch_taken_0x202e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E60u;
        // 0x202e64: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e60) {
            ctx->pc = 0x202E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202e28;
        }
    }
    ctx->pc = 0x202E68u;
label_202e68:
    // 0x202e68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x202e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_202e6c:
    // 0x202e6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x202e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_202e70:
    // 0x202e70: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x202e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_202e74:
    // 0x202e74: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x202e74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_202e78:
    // 0x202e78: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x202e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_202e7c:
    // 0x202e7c: 0x40f809  jalr        $v0
label_202e80:
    if (ctx->pc == 0x202E80u) {
        ctx->pc = 0x202E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E7Cu;
        // 0x202e80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202E84u;
        goto label_202e84;
    }
    ctx->pc = 0x202E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x202E84u);
        ctx->pc = 0x202E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E7Cu;
        // 0x202e80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202E7Cu, 0x202E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x202E84u;
label_202e84:
    // 0x202e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_202e88:
    // 0x202e88: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x202e88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_202e8c:
    // 0x202e8c: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
label_202e90:
    if (ctx->pc == 0x202E90u) {
        ctx->pc = 0x202E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E8Cu;
        // 0x202e90: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202E94u;
        goto label_202e94;
    }
    ctx->pc = 0x202E8Cu;
    {
        const bool branch_taken_0x202e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202e8c) {
            ctx->pc = 0x202E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202E8Cu;
            // 0x202e90: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202e18;
        }
    }
    ctx->pc = 0x202E94u;
label_202e94:
    // 0x202e94: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x202e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_202e98:
    // 0x202e98: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x202e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_202e9c:
    // 0x202e9c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x202e9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_202ea0:
    // 0x202ea0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x202ea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_202ea4:
    // 0x202ea4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x202ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_202ea8:
    // 0x202ea8: 0x3e00008  jr          $ra
label_202eac:
    if (ctx->pc == 0x202EACu) {
        ctx->pc = 0x202EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EA8u;
        // 0x202eac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202EB0u;
        goto label_fallthrough_0x202ea8;
    }
    ctx->pc = 0x202EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EA8u;
        // 0x202eac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x202ea8:
    ctx->pc = 0x202EB0u;
}
