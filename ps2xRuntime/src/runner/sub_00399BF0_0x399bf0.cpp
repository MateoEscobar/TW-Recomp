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

// Function: sub_00399BF0
// Address: 0x399bf0 - 0x399cd0
void sub_00399BF0_0x399bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399BF0_0x399bf0");
#endif

    switch (ctx->pc) {
        case 0x399bf0u: goto label_399bf0;
        case 0x399bf4u: goto label_399bf4;
        case 0x399bf8u: goto label_399bf8;
        case 0x399bfcu: goto label_399bfc;
        case 0x399c00u: goto label_399c00;
        case 0x399c04u: goto label_399c04;
        case 0x399c08u: goto label_399c08;
        case 0x399c0cu: goto label_399c0c;
        case 0x399c10u: goto label_399c10;
        case 0x399c14u: goto label_399c14;
        case 0x399c18u: goto label_399c18;
        case 0x399c1cu: goto label_399c1c;
        case 0x399c20u: goto label_399c20;
        case 0x399c24u: goto label_399c24;
        case 0x399c28u: goto label_399c28;
        case 0x399c2cu: goto label_399c2c;
        case 0x399c30u: goto label_399c30;
        case 0x399c34u: goto label_399c34;
        case 0x399c38u: goto label_399c38;
        case 0x399c3cu: goto label_399c3c;
        case 0x399c40u: goto label_399c40;
        case 0x399c44u: goto label_399c44;
        case 0x399c48u: goto label_399c48;
        case 0x399c4cu: goto label_399c4c;
        case 0x399c50u: goto label_399c50;
        case 0x399c54u: goto label_399c54;
        case 0x399c58u: goto label_399c58;
        case 0x399c5cu: goto label_399c5c;
        case 0x399c60u: goto label_399c60;
        case 0x399c64u: goto label_399c64;
        case 0x399c68u: goto label_399c68;
        case 0x399c6cu: goto label_399c6c;
        case 0x399c70u: goto label_399c70;
        case 0x399c74u: goto label_399c74;
        case 0x399c78u: goto label_399c78;
        case 0x399c7cu: goto label_399c7c;
        case 0x399c80u: goto label_399c80;
        case 0x399c84u: goto label_399c84;
        case 0x399c88u: goto label_399c88;
        case 0x399c8cu: goto label_399c8c;
        case 0x399c90u: goto label_399c90;
        case 0x399c94u: goto label_399c94;
        case 0x399c98u: goto label_399c98;
        case 0x399c9cu: goto label_399c9c;
        case 0x399ca0u: goto label_399ca0;
        case 0x399ca4u: goto label_399ca4;
        case 0x399ca8u: goto label_399ca8;
        case 0x399cacu: goto label_399cac;
        case 0x399cb0u: goto label_399cb0;
        case 0x399cb4u: goto label_399cb4;
        case 0x399cb8u: goto label_399cb8;
        case 0x399cbcu: goto label_399cbc;
        case 0x399cc0u: goto label_399cc0;
        case 0x399cc4u: goto label_399cc4;
        case 0x399cc8u: goto label_399cc8;
        case 0x399cccu: goto label_399ccc;
        default: break;
    }

    ctx->pc = 0x399bf0u;

label_399bf0:
    // 0x399bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x399bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_399bf4:
    // 0x399bf4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x399bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_399bf8:
    // 0x399bf8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x399bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_399bfc:
    // 0x399bfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x399bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_399c00:
    // 0x399c00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x399c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_399c04:
    // 0x399c04: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_399c08:
    if (ctx->pc == 0x399C08u) {
        ctx->pc = 0x399C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C04u;
        // 0x399c08: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399C0Cu;
        goto label_399c0c;
    }
    ctx->pc = 0x399C04u;
    {
        const bool branch_taken_0x399c04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x399C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C04u;
        // 0x399c08: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399c04) {
            ctx->pc = 0x399C18u;
            goto label_399c18;
        }
    }
    ctx->pc = 0x399C0Cu;
label_399c0c:
    // 0x399c0c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x399c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_399c10:
    // 0x399c10: 0x10000029  b           . + 4 + (0x29 << 2)
label_399c14:
    if (ctx->pc == 0x399C14u) {
        ctx->pc = 0x399C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C10u;
        // 0x399c14: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399C18u;
        goto label_399c18;
    }
    ctx->pc = 0x399C10u;
    {
        const bool branch_taken_0x399c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C10u;
        // 0x399c14: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399c10) {
            ctx->pc = 0x399CB8u;
            goto label_399cb8;
        }
    }
    ctx->pc = 0x399C18u;
label_399c18:
    // 0x399c18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x399c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_399c1c:
    // 0x399c1c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x399c1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_399c20:
    // 0x399c20: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x399c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_399c24:
    // 0x399c24: 0x40f809  jalr        $v0
label_399c28:
    if (ctx->pc == 0x399C28u) {
        ctx->pc = 0x399C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C24u;
        // 0x399c28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399C2Cu;
        goto label_399c2c;
    }
    ctx->pc = 0x399C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399C2Cu);
        ctx->pc = 0x399C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C24u;
        // 0x399c28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399C24u, 0x399C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399C2Cu;
label_399c2c:
    // 0x399c2c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x399c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_399c30:
    // 0x399c30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x399c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_399c34:
    // 0x399c34: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x399c34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_399c38:
    // 0x399c38: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x399c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_399c3c:
    // 0x399c3c: 0x40f809  jalr        $v0
label_399c40:
    if (ctx->pc == 0x399C40u) {
        ctx->pc = 0x399C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C3Cu;
        // 0x399c40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399C44u;
        goto label_399c44;
    }
    ctx->pc = 0x399C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399C44u);
        ctx->pc = 0x399C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C3Cu;
        // 0x399c40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399C3Cu, 0x399C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399C44u;
label_399c44:
    // 0x399c44: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x399c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_399c48:
    // 0x399c48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x399c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399c4c:
    // 0x399c4c: 0xc10d74c  jal         func_435D30
label_399c50:
    if (ctx->pc == 0x399C50u) {
        ctx->pc = 0x399C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C4Cu;
        // 0x399c50: 0x24a51250  addiu       $a1, $a1, 0x1250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399C54u;
        goto label_399c54;
    }
    ctx->pc = 0x399C4Cu;
    SET_GPR_U32(ctx, 31, 0x399C54u);
    ctx->pc = 0x399C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399C4Cu;
    // 0x399c50: 0x24a51250  addiu       $a1, $a1, 0x1250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x399C4Cu, 0x399C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C54u;
label_399c54:
    // 0x399c54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_399c58:
    if (ctx->pc == 0x399C58u) {
        ctx->pc = 0x399C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C54u;
        // 0x399c58: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399C5Cu;
        goto label_399c5c;
    }
    ctx->pc = 0x399C54u;
    {
        const bool branch_taken_0x399c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C54u;
        // 0x399c58: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399c54) {
            ctx->pc = 0x399C74u;
            goto label_399c74;
        }
    }
    ctx->pc = 0x399C5Cu;
label_399c5c:
    // 0x399c5c: 0x10000017  b           . + 4 + (0x17 << 2)
label_399c60:
    if (ctx->pc == 0x399C60u) {
        ctx->pc = 0x399C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C5Cu;
        // 0x399c60: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399C64u;
        goto label_399c64;
    }
    ctx->pc = 0x399C5Cu;
    {
        const bool branch_taken_0x399c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C5Cu;
        // 0x399c60: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399c5c) {
            ctx->pc = 0x399CBCu;
            goto label_399cbc;
        }
    }
    ctx->pc = 0x399C64u;
label_399c64:
    // 0x399c64: 0xa7a00000  sh          $zero, 0x0($sp)
    ctx->pc = 0x399c64u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
label_399c68:
    // 0x399c68: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x399c68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_399c6c:
    // 0x399c6c: 0x10000011  b           . + 4 + (0x11 << 2)
label_399c70:
    if (ctx->pc == 0x399C70u) {
        ctx->pc = 0x399C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C6Cu;
        // 0x399c70: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399C74u;
        goto label_399c74;
    }
    ctx->pc = 0x399C6Cu;
    {
        const bool branch_taken_0x399c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C6Cu;
        // 0x399c70: 0xa7a20002  sh          $v0, 0x2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399c6c) {
            ctx->pc = 0x399CB4u;
            goto label_399cb4;
        }
    }
    ctx->pc = 0x399C74u;
label_399c74:
    // 0x399c74: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x399c74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_399c78:
    // 0x399c78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x399c78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399c7c:
    // 0x399c7c: 0x96240018  lhu         $a0, 0x18($s1)
    ctx->pc = 0x399c7cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_399c80:
    // 0x399c80: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x399c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_399c84:
    // 0x399c84: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_399c88:
    if (ctx->pc == 0x399C88u) {
        ctx->pc = 0x399C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C84u;
        // 0x399c88: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399C8Cu;
        goto label_399c8c;
    }
    ctx->pc = 0x399C84u;
    {
        const bool branch_taken_0x399c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x399C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C84u;
        // 0x399c88: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399c84) {
            ctx->pc = 0x399CB4u;
            goto label_399cb4;
        }
    }
    ctx->pc = 0x399C8Cu;
label_399c8c:
    // 0x399c8c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x399c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_399c90:
    // 0x399c90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x399c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_399c94:
    // 0x399c94: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x399c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_399c98:
    // 0x399c98: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x399c98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_399c9c:
    // 0x399c9c: 0x1046fff1  beq         $v0, $a2, . + 4 + (-0xF << 2)
label_399ca0:
    if (ctx->pc == 0x399CA0u) {
        ctx->pc = 0x399CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C9Cu;
        // 0x399ca0: 0x31400  sll         $v0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399CA4u;
        goto label_399ca4;
    }
    ctx->pc = 0x399C9Cu;
    {
        const bool branch_taken_0x399c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x399CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C9Cu;
        // 0x399ca0: 0x31400  sll         $v0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399c9c) {
            ctx->pc = 0x399C64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399c64;
        }
    }
    ctx->pc = 0x399CA4u;
label_399ca4:
    // 0x399ca4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x399ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_399ca8:
    // 0x399ca8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x399ca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_399cac:
    // 0x399cac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_399cb0:
    if (ctx->pc == 0x399CB0u) {
        ctx->pc = 0x399CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399CACu;
        // 0x399cb0: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399CB4u;
        goto label_399cb4;
    }
    ctx->pc = 0x399CACu;
    {
        const bool branch_taken_0x399cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399CACu;
        // 0x399cb0: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399cac) {
            ctx->pc = 0x399C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399c98;
        }
    }
    ctx->pc = 0x399CB4u;
label_399cb4:
    // 0x399cb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x399cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_399cb8:
    // 0x399cb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x399cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_399cbc:
    // 0x399cbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x399cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_399cc0:
    // 0x399cc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x399cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_399cc4:
    // 0x399cc4: 0x3e00008  jr          $ra
label_399cc8:
    if (ctx->pc == 0x399CC8u) {
        ctx->pc = 0x399CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399CC4u;
        // 0x399cc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399CCCu;
        goto label_399ccc;
    }
    ctx->pc = 0x399CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399CC4u;
        // 0x399cc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399CCCu;
label_399ccc:
    // 0x399ccc: 0x0  nop
    ctx->pc = 0x399cccu;
    // NOP
    ctx->pc = 0x399cd0u;
}
