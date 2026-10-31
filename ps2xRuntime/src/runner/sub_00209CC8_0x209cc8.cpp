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

// Function: sub_00209CC8
// Address: 0x209cc8 - 0x209da8
void sub_00209CC8_0x209cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209CC8_0x209cc8");
#endif

    switch (ctx->pc) {
        case 0x209cc8u: goto label_209cc8;
        case 0x209cccu: goto label_209ccc;
        case 0x209cd0u: goto label_209cd0;
        case 0x209cd4u: goto label_209cd4;
        case 0x209cd8u: goto label_209cd8;
        case 0x209cdcu: goto label_209cdc;
        case 0x209ce0u: goto label_209ce0;
        case 0x209ce4u: goto label_209ce4;
        case 0x209ce8u: goto label_209ce8;
        case 0x209cecu: goto label_209cec;
        case 0x209cf0u: goto label_209cf0;
        case 0x209cf4u: goto label_209cf4;
        case 0x209cf8u: goto label_209cf8;
        case 0x209cfcu: goto label_209cfc;
        case 0x209d00u: goto label_209d00;
        case 0x209d04u: goto label_209d04;
        case 0x209d08u: goto label_209d08;
        case 0x209d0cu: goto label_209d0c;
        case 0x209d10u: goto label_209d10;
        case 0x209d14u: goto label_209d14;
        case 0x209d18u: goto label_209d18;
        case 0x209d1cu: goto label_209d1c;
        case 0x209d20u: goto label_209d20;
        case 0x209d24u: goto label_209d24;
        case 0x209d28u: goto label_209d28;
        case 0x209d2cu: goto label_209d2c;
        case 0x209d30u: goto label_209d30;
        case 0x209d34u: goto label_209d34;
        case 0x209d38u: goto label_209d38;
        case 0x209d3cu: goto label_209d3c;
        case 0x209d40u: goto label_209d40;
        case 0x209d44u: goto label_209d44;
        case 0x209d48u: goto label_209d48;
        case 0x209d4cu: goto label_209d4c;
        case 0x209d50u: goto label_209d50;
        case 0x209d54u: goto label_209d54;
        case 0x209d58u: goto label_209d58;
        case 0x209d5cu: goto label_209d5c;
        case 0x209d60u: goto label_209d60;
        case 0x209d64u: goto label_209d64;
        case 0x209d68u: goto label_209d68;
        case 0x209d6cu: goto label_209d6c;
        case 0x209d70u: goto label_209d70;
        case 0x209d74u: goto label_209d74;
        case 0x209d78u: goto label_209d78;
        case 0x209d7cu: goto label_209d7c;
        case 0x209d80u: goto label_209d80;
        case 0x209d84u: goto label_209d84;
        case 0x209d88u: goto label_209d88;
        case 0x209d8cu: goto label_209d8c;
        case 0x209d90u: goto label_209d90;
        case 0x209d94u: goto label_209d94;
        case 0x209d98u: goto label_209d98;
        case 0x209d9cu: goto label_209d9c;
        case 0x209da0u: goto label_209da0;
        case 0x209da4u: goto label_209da4;
        default: break;
    }

    ctx->pc = 0x209cc8u;

label_209cc8:
    // 0x209cc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x209cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_209ccc:
    // 0x209ccc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x209cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_209cd0:
    // 0x209cd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x209cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_209cd4:
    // 0x209cd4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x209cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_209cd8:
    // 0x209cd8: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x209cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_209cdc:
    // 0x209cdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209ce0:
    // 0x209ce0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x209ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_209ce4:
    // 0x209ce4: 0x2442e360  addiu       $v0, $v0, -0x1CA0
    ctx->pc = 0x209ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959968));
label_209ce8:
    // 0x209ce8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x209ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_209cec:
    // 0x209cec: 0x2463e388  addiu       $v1, $v1, -0x1C78
    ctx->pc = 0x209cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960008));
label_209cf0:
    // 0x209cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_209cf4:
    // 0x209cf4: 0x24c6e3b8  addiu       $a2, $a2, -0x1C48
    ctx->pc = 0x209cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960056));
label_209cf8:
    // 0x209cf8: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x209cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_209cfc:
    // 0x209cfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x209cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_209d00:
    // 0x209d00: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x209d00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_209d04:
    // 0x209d04: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x209d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_209d08:
    // 0x209d08: 0xc082856  jal         func_20A158
label_209d0c:
    if (ctx->pc == 0x209D0Cu) {
        ctx->pc = 0x209D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D08u;
        // 0x209d0c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D10u;
        goto label_209d10;
    }
    ctx->pc = 0x209D08u;
    SET_GPR_U32(ctx, 31, 0x209D10u);
    ctx->pc = 0x209D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D08u;
    // 0x209d0c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A158u, 0x209D08u, 0x209D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D10u;
label_209d10:
    // 0x209d10: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x209d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_209d14:
    // 0x209d14: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x209d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_209d18:
    // 0x209d18: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x209d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_209d1c:
    // 0x209d1c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x209d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_209d20:
    // 0x209d20: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_209d24:
    if (ctx->pc == 0x209D24u) {
        ctx->pc = 0x209D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D20u;
        // 0x209d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D28u;
        goto label_209d28;
    }
    ctx->pc = 0x209D20u;
    {
        const bool branch_taken_0x209d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D20u;
        // 0x209d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d20) {
            ctx->pc = 0x209D50u;
            goto label_209d50;
        }
    }
    ctx->pc = 0x209D28u;
label_209d28:
    // 0x209d28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x209d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_209d2c:
    // 0x209d2c: 0xc1376d6  jal         func_4DDB58
label_209d30:
    if (ctx->pc == 0x209D30u) {
        ctx->pc = 0x209D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D2Cu;
        // 0x209d30: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D34u;
        goto label_209d34;
    }
    ctx->pc = 0x209D2Cu;
    SET_GPR_U32(ctx, 31, 0x209D34u);
    ctx->pc = 0x209D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D2Cu;
    // 0x209d30: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x209D2Cu, 0x209D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D34u;
label_209d34:
    // 0x209d34: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x209d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_209d38:
    // 0x209d38: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x209d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_209d3c:
    // 0x209d3c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x209d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_209d40:
    // 0x209d40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x209d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_209d44:
    // 0x209d44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x209d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_209d48:
    // 0x209d48: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x209d48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_209d4c:
    // 0x209d4c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x209d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_209d50:
    // 0x209d50: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x209d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_209d54:
    // 0x209d54: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_209d58:
    if (ctx->pc == 0x209D58u) {
        ctx->pc = 0x209D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D54u;
        // 0x209d58: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D5Cu;
        goto label_209d5c;
    }
    ctx->pc = 0x209D54u;
    {
        const bool branch_taken_0x209d54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D54u;
        // 0x209d58: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d54) {
            ctx->pc = 0x209D80u;
            goto label_209d80;
        }
    }
    ctx->pc = 0x209D5Cu;
label_209d5c:
    // 0x209d5c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x209d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_209d60:
    // 0x209d60: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x209d60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_209d64:
    // 0x209d64: 0x24c68eb8  addiu       $a2, $a2, -0x7148
    ctx->pc = 0x209d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938296));
label_209d68:
    // 0x209d68: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x209d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_209d6c:
    // 0x209d6c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x209d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_209d70:
    // 0x209d70: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x209d70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_209d74:
    // 0x209d74: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x209d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_209d78:
    // 0x209d78: 0x60f809  jalr        $v1
label_209d7c:
    if (ctx->pc == 0x209D7Cu) {
        ctx->pc = 0x209D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D78u;
        // 0x209d7c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D80u;
        goto label_209d80;
    }
    ctx->pc = 0x209D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209D80u);
        ctx->pc = 0x209D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D78u;
        // 0x209d7c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209D78u, 0x209D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209D80u;
label_209d80:
    // 0x209d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209d84:
    // 0x209d84: 0xc06a39e  jal         func_1A8E78
label_209d88:
    if (ctx->pc == 0x209D88u) {
        ctx->pc = 0x209D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D84u;
        // 0x209d88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D8Cu;
        goto label_209d8c;
    }
    ctx->pc = 0x209D84u;
    SET_GPR_U32(ctx, 31, 0x209D8Cu);
    ctx->pc = 0x209D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D84u;
    // 0x209d88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x209D84u, 0x209D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D8Cu;
label_209d8c:
    // 0x209d8c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x209d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_209d90:
    // 0x209d90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x209d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_209d94:
    // 0x209d94: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x209d94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_209d98:
    // 0x209d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209d9c:
    // 0x209d9c: 0x3e00008  jr          $ra
label_209da0:
    if (ctx->pc == 0x209DA0u) {
        ctx->pc = 0x209DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D9Cu;
        // 0x209da0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DA4u;
        goto label_209da4;
    }
    ctx->pc = 0x209D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D9Cu;
        // 0x209da0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209DA4u;
label_209da4:
    // 0x209da4: 0x0  nop
    ctx->pc = 0x209da4u;
    // NOP
    ctx->pc = 0x209da8u;
}
