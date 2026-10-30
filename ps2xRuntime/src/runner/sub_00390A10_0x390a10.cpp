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

// Function: sub_00390A10
// Address: 0x390a10 - 0x390b38
void sub_00390A10_0x390a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390A10_0x390a10");
#endif

    switch (ctx->pc) {
        case 0x390a10u: goto label_390a10;
        case 0x390a14u: goto label_390a14;
        case 0x390a18u: goto label_390a18;
        case 0x390a1cu: goto label_390a1c;
        case 0x390a20u: goto label_390a20;
        case 0x390a24u: goto label_390a24;
        case 0x390a28u: goto label_390a28;
        case 0x390a2cu: goto label_390a2c;
        case 0x390a30u: goto label_390a30;
        case 0x390a34u: goto label_390a34;
        case 0x390a38u: goto label_390a38;
        case 0x390a3cu: goto label_390a3c;
        case 0x390a40u: goto label_390a40;
        case 0x390a44u: goto label_390a44;
        case 0x390a48u: goto label_390a48;
        case 0x390a4cu: goto label_390a4c;
        case 0x390a50u: goto label_390a50;
        case 0x390a54u: goto label_390a54;
        case 0x390a58u: goto label_390a58;
        case 0x390a5cu: goto label_390a5c;
        case 0x390a60u: goto label_390a60;
        case 0x390a64u: goto label_390a64;
        case 0x390a68u: goto label_390a68;
        case 0x390a6cu: goto label_390a6c;
        case 0x390a70u: goto label_390a70;
        case 0x390a74u: goto label_390a74;
        case 0x390a78u: goto label_390a78;
        case 0x390a7cu: goto label_390a7c;
        case 0x390a80u: goto label_390a80;
        case 0x390a84u: goto label_390a84;
        case 0x390a88u: goto label_390a88;
        case 0x390a8cu: goto label_390a8c;
        case 0x390a90u: goto label_390a90;
        case 0x390a94u: goto label_390a94;
        case 0x390a98u: goto label_390a98;
        case 0x390a9cu: goto label_390a9c;
        case 0x390aa0u: goto label_390aa0;
        case 0x390aa4u: goto label_390aa4;
        case 0x390aa8u: goto label_390aa8;
        case 0x390aacu: goto label_390aac;
        case 0x390ab0u: goto label_390ab0;
        case 0x390ab4u: goto label_390ab4;
        case 0x390ab8u: goto label_390ab8;
        case 0x390abcu: goto label_390abc;
        case 0x390ac0u: goto label_390ac0;
        case 0x390ac4u: goto label_390ac4;
        case 0x390ac8u: goto label_390ac8;
        case 0x390accu: goto label_390acc;
        case 0x390ad0u: goto label_390ad0;
        case 0x390ad4u: goto label_390ad4;
        case 0x390ad8u: goto label_390ad8;
        case 0x390adcu: goto label_390adc;
        case 0x390ae0u: goto label_390ae0;
        case 0x390ae4u: goto label_390ae4;
        case 0x390ae8u: goto label_390ae8;
        case 0x390aecu: goto label_390aec;
        case 0x390af0u: goto label_390af0;
        case 0x390af4u: goto label_390af4;
        case 0x390af8u: goto label_390af8;
        case 0x390afcu: goto label_390afc;
        case 0x390b00u: goto label_390b00;
        case 0x390b04u: goto label_390b04;
        case 0x390b08u: goto label_390b08;
        case 0x390b0cu: goto label_390b0c;
        case 0x390b10u: goto label_390b10;
        case 0x390b14u: goto label_390b14;
        case 0x390b18u: goto label_390b18;
        case 0x390b1cu: goto label_390b1c;
        case 0x390b20u: goto label_390b20;
        case 0x390b24u: goto label_390b24;
        case 0x390b28u: goto label_390b28;
        case 0x390b2cu: goto label_390b2c;
        case 0x390b30u: goto label_390b30;
        case 0x390b34u: goto label_390b34;
        default: break;
    }

    ctx->pc = 0x390a10u;

label_390a10:
    // 0x390a10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x390a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_390a14:
    // 0x390a14: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x390a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_390a18:
    // 0x390a18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x390a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_390a1c:
    // 0x390a1c: 0x24425340  addiu       $v0, $v0, 0x5340
    ctx->pc = 0x390a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21312));
label_390a20:
    // 0x390a20: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x390a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_390a24:
    // 0x390a24: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x390a24u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_390a28:
    // 0x390a28: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x390a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_390a2c:
    // 0x390a2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x390a2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_390a30:
    // 0x390a30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x390a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_390a34:
    // 0x390a34: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x390a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_390a38:
    // 0x390a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x390a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_390a3c:
    // 0x390a3c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x390a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_390a40:
    // 0x390a40: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x390a40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_390a44:
    // 0x390a44: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x390a44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_390a48:
    // 0x390a48: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x390a48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_390a4c:
    // 0x390a4c: 0x26100c68  addiu       $s0, $s0, 0xC68
    ctx->pc = 0x390a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3176));
label_390a50:
    // 0x390a50: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x390a50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_390a54:
    // 0x390a54: 0x26310c70  addiu       $s1, $s1, 0xC70
    ctx->pc = 0x390a54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3184));
label_390a58:
    // 0x390a58: 0x8e4b27e4  lw          $t3, 0x27E4($s2)
    ctx->pc = 0x390a58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_390a5c:
    // 0x390a5c: 0x24061340  addiu       $a2, $zero, 0x1340
    ctx->pc = 0x390a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
label_390a60:
    // 0x390a60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x390a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_390a64:
    // 0x390a64: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x390a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_390a68:
    // 0x390a68: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x390a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_390a6c:
    // 0x390a6c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x390a6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_390a70:
    // 0x390a70: 0x2409001b  addiu       $t1, $zero, 0x1B
    ctx->pc = 0x390a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_390a74:
    // 0x390a74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x390a74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390a78:
    // 0x390a78: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x390a78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_390a7c:
    // 0x390a7c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x390a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_390a80:
    // 0x390a80: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x390a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_390a84:
    // 0x390a84: 0x40f809  jalr        $v0
label_390a88:
    if (ctx->pc == 0x390A88u) {
        ctx->pc = 0x390A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A84u;
        // 0x390a88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390A8Cu;
        goto label_390a8c;
    }
    ctx->pc = 0x390A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390A8Cu);
        ctx->pc = 0x390A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A84u;
        // 0x390a88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390A84u, 0x390A8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390A8Cu;
label_390a8c:
    // 0x390a8c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x390a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_390a90:
    // 0x390a90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x390a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_390a94:
    // 0x390a94: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x390a94u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_390a98:
    // 0x390a98: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x390a98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_390a9c:
    // 0x390a9c: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x390a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_390aa0:
    // 0x390aa0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x390aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_390aa4:
    // 0x390aa4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x390aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_390aa8:
    // 0x390aa8: 0x2409001c  addiu       $t1, $zero, 0x1C
    ctx->pc = 0x390aa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_390aac:
    // 0x390aac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x390aacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_390ab0:
    // 0x390ab0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x390ab0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390ab4:
    // 0x390ab4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x390ab4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_390ab8:
    // 0x390ab8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x390ab8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390abc:
    // 0x390abc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x390abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_390ac0:
    // 0x390ac0: 0x40f809  jalr        $v0
label_390ac4:
    if (ctx->pc == 0x390AC4u) {
        ctx->pc = 0x390AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390AC0u;
        // 0x390ac4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390AC8u;
        goto label_390ac8;
    }
    ctx->pc = 0x390AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390AC8u);
        ctx->pc = 0x390AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390AC0u;
        // 0x390ac4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390AC0u, 0x390AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390AC8u;
label_390ac8:
    // 0x390ac8: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x390ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_390acc:
    // 0x390acc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x390accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390ad0:
    // 0x390ad0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_390ad4:
    if (ctx->pc == 0x390AD4u) {
        ctx->pc = 0x390AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390AD0u;
        // 0x390ad4: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390AD8u;
        goto label_390ad8;
    }
    ctx->pc = 0x390AD0u;
    {
        const bool branch_taken_0x390ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x390AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390AD0u;
        // 0x390ad4: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390ad0) {
            ctx->pc = 0x390B0Cu;
            goto label_390b0c;
        }
    }
    ctx->pc = 0x390AD8u;
label_390ad8:
    // 0x390ad8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x390ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390adc:
    // 0x390adc: 0x0  nop
    ctx->pc = 0x390adcu;
    // NOP
label_390ae0:
    // 0x390ae0: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x390ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_390ae4:
    // 0x390ae4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x390ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_390ae8:
    // 0x390ae8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x390ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_390aec:
    // 0x390aec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x390aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_390af0:
    // 0x390af0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x390af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_390af4:
    // 0x390af4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x390af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_390af8:
    // 0x390af8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x390af8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_390afc:
    // 0x390afc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x390afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_390b00:
    // 0x390b00: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x390b00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_390b04:
    // 0x390b04: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_390b08:
    if (ctx->pc == 0x390B08u) {
        ctx->pc = 0x390B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B04u;
        // 0x390b08: 0x24c600b0  addiu       $a2, $a2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390B0Cu;
        goto label_390b0c;
    }
    ctx->pc = 0x390B04u;
    {
        const bool branch_taken_0x390b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B04u;
        // 0x390b08: 0x24c600b0  addiu       $a2, $a2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390b04) {
            ctx->pc = 0x390AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390ae0;
        }
    }
    ctx->pc = 0x390B0Cu;
label_390b0c:
    // 0x390b0c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x390b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_390b10:
    // 0x390b10: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x390b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_390b14:
    // 0x390b14: 0x246352e0  addiu       $v1, $v1, 0x52E0
    ctx->pc = 0x390b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21216));
label_390b18:
    // 0x390b18: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x390b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_390b1c:
    // 0x390b1c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x390b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_390b20:
    // 0x390b20: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x390b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_390b24:
    // 0x390b24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x390b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_390b28:
    // 0x390b28: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x390b28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_390b2c:
    // 0x390b2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x390b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_390b30:
    // 0x390b30: 0x3e00008  jr          $ra
label_390b34:
    if (ctx->pc == 0x390B34u) {
        ctx->pc = 0x390B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B30u;
        // 0x390b34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390B38u;
        goto label_fallthrough_0x390b30;
    }
    ctx->pc = 0x390B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B30u;
        // 0x390b34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x390b30:
    ctx->pc = 0x390B38u;
}
