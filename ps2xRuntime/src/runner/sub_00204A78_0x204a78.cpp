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

// Function: sub_00204A78
// Address: 0x204a78 - 0x204ba0
void sub_00204A78_0x204a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204A78_0x204a78");
#endif

    switch (ctx->pc) {
        case 0x204a78u: goto label_204a78;
        case 0x204a7cu: goto label_204a7c;
        case 0x204a80u: goto label_204a80;
        case 0x204a84u: goto label_204a84;
        case 0x204a88u: goto label_204a88;
        case 0x204a8cu: goto label_204a8c;
        case 0x204a90u: goto label_204a90;
        case 0x204a94u: goto label_204a94;
        case 0x204a98u: goto label_204a98;
        case 0x204a9cu: goto label_204a9c;
        case 0x204aa0u: goto label_204aa0;
        case 0x204aa4u: goto label_204aa4;
        case 0x204aa8u: goto label_204aa8;
        case 0x204aacu: goto label_204aac;
        case 0x204ab0u: goto label_204ab0;
        case 0x204ab4u: goto label_204ab4;
        case 0x204ab8u: goto label_204ab8;
        case 0x204abcu: goto label_204abc;
        case 0x204ac0u: goto label_204ac0;
        case 0x204ac4u: goto label_204ac4;
        case 0x204ac8u: goto label_204ac8;
        case 0x204accu: goto label_204acc;
        case 0x204ad0u: goto label_204ad0;
        case 0x204ad4u: goto label_204ad4;
        case 0x204ad8u: goto label_204ad8;
        case 0x204adcu: goto label_204adc;
        case 0x204ae0u: goto label_204ae0;
        case 0x204ae4u: goto label_204ae4;
        case 0x204ae8u: goto label_204ae8;
        case 0x204aecu: goto label_204aec;
        case 0x204af0u: goto label_204af0;
        case 0x204af4u: goto label_204af4;
        case 0x204af8u: goto label_204af8;
        case 0x204afcu: goto label_204afc;
        case 0x204b00u: goto label_204b00;
        case 0x204b04u: goto label_204b04;
        case 0x204b08u: goto label_204b08;
        case 0x204b0cu: goto label_204b0c;
        case 0x204b10u: goto label_204b10;
        case 0x204b14u: goto label_204b14;
        case 0x204b18u: goto label_204b18;
        case 0x204b1cu: goto label_204b1c;
        case 0x204b20u: goto label_204b20;
        case 0x204b24u: goto label_204b24;
        case 0x204b28u: goto label_204b28;
        case 0x204b2cu: goto label_204b2c;
        case 0x204b30u: goto label_204b30;
        case 0x204b34u: goto label_204b34;
        case 0x204b38u: goto label_204b38;
        case 0x204b3cu: goto label_204b3c;
        case 0x204b40u: goto label_204b40;
        case 0x204b44u: goto label_204b44;
        case 0x204b48u: goto label_204b48;
        case 0x204b4cu: goto label_204b4c;
        case 0x204b50u: goto label_204b50;
        case 0x204b54u: goto label_204b54;
        case 0x204b58u: goto label_204b58;
        case 0x204b5cu: goto label_204b5c;
        case 0x204b60u: goto label_204b60;
        case 0x204b64u: goto label_204b64;
        case 0x204b68u: goto label_204b68;
        case 0x204b6cu: goto label_204b6c;
        case 0x204b70u: goto label_204b70;
        case 0x204b74u: goto label_204b74;
        case 0x204b78u: goto label_204b78;
        case 0x204b7cu: goto label_204b7c;
        case 0x204b80u: goto label_204b80;
        case 0x204b84u: goto label_204b84;
        case 0x204b88u: goto label_204b88;
        case 0x204b8cu: goto label_204b8c;
        case 0x204b90u: goto label_204b90;
        case 0x204b94u: goto label_204b94;
        case 0x204b98u: goto label_204b98;
        case 0x204b9cu: goto label_204b9c;
        default: break;
    }

    ctx->pc = 0x204a78u;

label_204a78:
    // 0x204a78: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x204a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_204a7c:
    // 0x204a7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x204a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_204a80:
    // 0x204a80: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x204a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_204a84:
    // 0x204a84: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x204a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_204a88:
    // 0x204a88: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x204a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_204a8c:
    // 0x204a8c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x204a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_204a90:
    // 0x204a90: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x204a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_204a94:
    // 0x204a94: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x204a94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_204a98:
    // 0x204a98: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x204a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_204a9c:
    // 0x204a9c: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x204a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_204aa0:
    // 0x204aa0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x204aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_204aa4:
    // 0x204aa4: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x204aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_204aa8:
    // 0x204aa8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x204aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_204aac:
    // 0x204aac: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x204aacu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_204ab0:
    // 0x204ab0: 0x8c565024  lw          $s6, 0x5024($v0)
    ctx->pc = 0x204ab0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_204ab4:
    // 0x204ab4: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x204ab4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
label_204ab8:
    // 0x204ab8: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x204ab8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_204abc:
    // 0x204abc: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x204abcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_204ac0:
    // 0x204ac0: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x204ac0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
label_204ac4:
    // 0x204ac4: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x204ac4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
label_204ac8:
    // 0x204ac8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x204ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_204acc:
    // 0x204acc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x204accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_204ad0:
    // 0x204ad0: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x204ad0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_204ad4:
    // 0x204ad4: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x204ad4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_204ad8:
    // 0x204ad8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x204ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_204adc:
    // 0x204adc: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x204adcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_204ae0:
    // 0x204ae0: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x204ae0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_204ae4:
    // 0x204ae4: 0xacc5f584  sw          $a1, -0xA7C($a2)
    ctx->pc = 0x204ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294964612), GPR_U32(ctx, 5));
label_204ae8:
    // 0x204ae8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x204ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_204aec:
    // 0x204aec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_204af0:
    // 0x204af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x204af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_204af4:
    // 0x204af4: 0xace0f594  sw          $zero, -0xA6C($a3)
    ctx->pc = 0x204af4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294964628), GPR_U32(ctx, 0));
label_204af8:
    // 0x204af8: 0xa100f1d8  sb          $zero, -0xE28($t0)
    ctx->pc = 0x204af8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294963672), (uint8_t)GPR_U32(ctx, 0));
label_204afc:
    // 0x204afc: 0xad20f598  sw          $zero, -0xA68($t1)
    ctx->pc = 0x204afcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294964632), GPR_U32(ctx, 0));
label_204b00:
    // 0x204b00: 0xad40f59c  sw          $zero, -0xA64($t2)
    ctx->pc = 0x204b00u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294964636), GPR_U32(ctx, 0));
label_204b04:
    // 0x204b04: 0xad60f5a0  sw          $zero, -0xA60($t3)
    ctx->pc = 0x204b04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294964640), GPR_U32(ctx, 0));
label_204b08:
    // 0x204b08: 0xad80f5a4  sw          $zero, -0xA5C($t4)
    ctx->pc = 0x204b08u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294964644), GPR_U32(ctx, 0));
label_204b0c:
    // 0x204b0c: 0xada0f5a8  sw          $zero, -0xA58($t5)
    ctx->pc = 0x204b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294964648), GPR_U32(ctx, 0));
label_204b10:
    // 0x204b10: 0xadc0f5ac  sw          $zero, -0xA54($t6)
    ctx->pc = 0x204b10u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294964652), GPR_U32(ctx, 0));
label_204b14:
    // 0x204b14: 0xade0f5b0  sw          $zero, -0xA50($t7)
    ctx->pc = 0x204b14u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294964656), GPR_U32(ctx, 0));
label_204b18:
    // 0x204b18: 0xac43f590  sw          $v1, -0xA70($v0)
    ctx->pc = 0x204b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964624), GPR_U32(ctx, 3));
label_204b1c:
    // 0x204b1c: 0xaea3f58c  sw          $v1, -0xA74($s5)
    ctx->pc = 0x204b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294964620), GPR_U32(ctx, 3));
label_204b20:
    // 0x204b20: 0xae80f588  sw          $zero, -0xA78($s4)
    ctx->pc = 0x204b20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294964616), GPR_U32(ctx, 0));
label_204b24:
    // 0x204b24: 0xae20f5b4  sw          $zero, -0xA4C($s1)
    ctx->pc = 0x204b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294964660), GPR_U32(ctx, 0));
label_204b28:
    // 0x204b28: 0xae40f5bc  sw          $zero, -0xA44($s2)
    ctx->pc = 0x204b28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294964668), GPR_U32(ctx, 0));
label_204b2c:
    // 0x204b2c: 0xae60f5c0  sw          $zero, -0xA40($s3)
    ctx->pc = 0x204b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294964672), GPR_U32(ctx, 0));
label_204b30:
    // 0x204b30: 0xc080ee6  jal         func_203B98
label_204b34:
    if (ctx->pc == 0x204B34u) {
        ctx->pc = 0x204B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B30u;
        // 0x204b34: 0xaec00124  sw          $zero, 0x124($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204B38u;
        goto label_204b38;
    }
    ctx->pc = 0x204B30u;
    SET_GPR_U32(ctx, 31, 0x204B38u);
    ctx->pc = 0x204B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B30u;
    // 0x204b34: 0xaec00124  sw          $zero, 0x124($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 292), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B98u, 0x204B30u, 0x204B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B38u;
label_204b38:
    // 0x204b38: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204b3c:
    // 0x204b3c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x204b3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_204b40:
    // 0x204b40: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x204b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_204b44:
    // 0x204b44: 0x60f809  jalr        $v1
label_204b48:
    if (ctx->pc == 0x204B48u) {
        ctx->pc = 0x204B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B44u;
        // 0x204b48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204B4Cu;
        goto label_204b4c;
    }
    ctx->pc = 0x204B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x204B4Cu);
        ctx->pc = 0x204B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B44u;
        // 0x204b48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204B44u, 0x204B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204B4Cu;
label_204b4c:
    // 0x204b4c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x204b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_204b50:
    // 0x204b50: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x204b50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_204b54:
    // 0x204b54: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x204b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_204b58:
    // 0x204b58: 0x60f809  jalr        $v1
label_204b5c:
    if (ctx->pc == 0x204B5Cu) {
        ctx->pc = 0x204B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B58u;
        // 0x204b5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204B60u;
        goto label_204b60;
    }
    ctx->pc = 0x204B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x204B60u);
        ctx->pc = 0x204B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B58u;
        // 0x204b5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204B58u, 0x204B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204B60u;
label_204b60:
    // 0x204b60: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x204b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_204b64:
    // 0x204b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_204b68:
    // 0x204b68: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x204b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_204b6c:
    // 0x204b6c: 0xc072032  jal         func_1C80C8
label_204b70:
    if (ctx->pc == 0x204B70u) {
        ctx->pc = 0x204B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B6Cu;
        // 0x204b70: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204B74u;
        goto label_204b74;
    }
    ctx->pc = 0x204B6Cu;
    SET_GPR_U32(ctx, 31, 0x204B74u);
    ctx->pc = 0x204B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B6Cu;
    // 0x204b70: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80C8u, 0x204B6Cu, 0x204B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B74u;
label_204b74:
    // 0x204b74: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x204b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_204b78:
    // 0x204b78: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x204b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_204b7c:
    // 0x204b7c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x204b7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_204b80:
    // 0x204b80: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x204b80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_204b84:
    // 0x204b84: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x204b84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_204b88:
    // 0x204b88: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x204b88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_204b8c:
    // 0x204b8c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x204b8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_204b90:
    // 0x204b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204b94:
    // 0x204b94: 0x3e00008  jr          $ra
label_204b98:
    if (ctx->pc == 0x204B98u) {
        ctx->pc = 0x204B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B94u;
        // 0x204b98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204B9Cu;
        goto label_204b9c;
    }
    ctx->pc = 0x204B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B94u;
        // 0x204b98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204B9Cu;
label_204b9c:
    // 0x204b9c: 0x0  nop
    ctx->pc = 0x204b9cu;
    // NOP
    ctx->pc = 0x204ba0u;
}
