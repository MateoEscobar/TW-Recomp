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

// Function: sub_002E0CE0
// Address: 0x2e0ce0 - 0x2e0dc8
void sub_002E0CE0_0x2e0ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0CE0_0x2e0ce0");
#endif

    switch (ctx->pc) {
        case 0x2e0ce0u: goto label_2e0ce0;
        case 0x2e0ce4u: goto label_2e0ce4;
        case 0x2e0ce8u: goto label_2e0ce8;
        case 0x2e0cecu: goto label_2e0cec;
        case 0x2e0cf0u: goto label_2e0cf0;
        case 0x2e0cf4u: goto label_2e0cf4;
        case 0x2e0cf8u: goto label_2e0cf8;
        case 0x2e0cfcu: goto label_2e0cfc;
        case 0x2e0d00u: goto label_2e0d00;
        case 0x2e0d04u: goto label_2e0d04;
        case 0x2e0d08u: goto label_2e0d08;
        case 0x2e0d0cu: goto label_2e0d0c;
        case 0x2e0d10u: goto label_2e0d10;
        case 0x2e0d14u: goto label_2e0d14;
        case 0x2e0d18u: goto label_2e0d18;
        case 0x2e0d1cu: goto label_2e0d1c;
        case 0x2e0d20u: goto label_2e0d20;
        case 0x2e0d24u: goto label_2e0d24;
        case 0x2e0d28u: goto label_2e0d28;
        case 0x2e0d2cu: goto label_2e0d2c;
        case 0x2e0d30u: goto label_2e0d30;
        case 0x2e0d34u: goto label_2e0d34;
        case 0x2e0d38u: goto label_2e0d38;
        case 0x2e0d3cu: goto label_2e0d3c;
        case 0x2e0d40u: goto label_2e0d40;
        case 0x2e0d44u: goto label_2e0d44;
        case 0x2e0d48u: goto label_2e0d48;
        case 0x2e0d4cu: goto label_2e0d4c;
        case 0x2e0d50u: goto label_2e0d50;
        case 0x2e0d54u: goto label_2e0d54;
        case 0x2e0d58u: goto label_2e0d58;
        case 0x2e0d5cu: goto label_2e0d5c;
        case 0x2e0d60u: goto label_2e0d60;
        case 0x2e0d64u: goto label_2e0d64;
        case 0x2e0d68u: goto label_2e0d68;
        case 0x2e0d6cu: goto label_2e0d6c;
        case 0x2e0d70u: goto label_2e0d70;
        case 0x2e0d74u: goto label_2e0d74;
        case 0x2e0d78u: goto label_2e0d78;
        case 0x2e0d7cu: goto label_2e0d7c;
        case 0x2e0d80u: goto label_2e0d80;
        case 0x2e0d84u: goto label_2e0d84;
        case 0x2e0d88u: goto label_2e0d88;
        case 0x2e0d8cu: goto label_2e0d8c;
        case 0x2e0d90u: goto label_2e0d90;
        case 0x2e0d94u: goto label_2e0d94;
        case 0x2e0d98u: goto label_2e0d98;
        case 0x2e0d9cu: goto label_2e0d9c;
        case 0x2e0da0u: goto label_2e0da0;
        case 0x2e0da4u: goto label_2e0da4;
        case 0x2e0da8u: goto label_2e0da8;
        case 0x2e0dacu: goto label_2e0dac;
        case 0x2e0db0u: goto label_2e0db0;
        case 0x2e0db4u: goto label_2e0db4;
        case 0x2e0db8u: goto label_2e0db8;
        case 0x2e0dbcu: goto label_2e0dbc;
        case 0x2e0dc0u: goto label_2e0dc0;
        case 0x2e0dc4u: goto label_2e0dc4;
        default: break;
    }

    ctx->pc = 0x2e0ce0u;

label_2e0ce0:
    // 0x2e0ce0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e0ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2e0ce4:
    // 0x2e0ce4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e0ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2e0ce8:
    // 0x2e0ce8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2e0ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2e0cec:
    // 0x2e0cec: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2e0cecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_2e0cf0:
    // 0x2e0cf0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2e0cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2e0cf4:
    // 0x2e0cf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e0cf8:
    // 0x2e0cf8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2e0cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2e0cfc:
    // 0x2e0cfc: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x2e0cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2e0d00:
    // 0x2e0d00: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e0d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2e0d04:
    // 0x2e0d04: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2e0d04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2e0d08:
    // 0x2e0d08: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x2e0d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e0d0c:
    // 0x2e0d0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e0d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e0d10:
    // 0x2e0d10: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2e0d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e0d14:
    // 0x2e0d14: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2e0d14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e0d18:
    // 0x2e0d18: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x2e0d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
label_2e0d1c:
    // 0x2e0d1c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2e0d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2e0d20:
    // 0x2e0d20: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e0d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e0d24:
    // 0x2e0d24: 0x0  nop
    ctx->pc = 0x2e0d24u;
    // NOP
label_2e0d28:
    // 0x2e0d28: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2e0d28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_2e0d2c:
    // 0x2e0d2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e0d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2e0d30:
    // 0x2e0d30: 0x0  nop
    ctx->pc = 0x2e0d30u;
    // NOP
label_2e0d34:
    // 0x2e0d34: 0x0  nop
    ctx->pc = 0x2e0d34u;
    // NOP
label_2e0d38:
    // 0x2e0d38: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
label_2e0d3c:
    if (ctx->pc == 0x2E0D3Cu) {
        ctx->pc = 0x2E0D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D38u;
        // 0x2e0d3c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0D40u;
        goto label_2e0d40;
    }
    ctx->pc = 0x2E0D38u;
    {
        const bool branch_taken_0x2e0d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E0D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D38u;
        // 0x2e0d3c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d38) {
            ctx->pc = 0x2E0D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0d28;
        }
    }
    ctx->pc = 0x2E0D40u;
label_2e0d40:
    // 0x2e0d40: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2e0d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_2e0d44:
    // 0x2e0d44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e0d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e0d48:
    // 0x2e0d48: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x2e0d48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_2e0d4c:
    // 0x2e0d4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e0d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e0d50:
    // 0x2e0d50: 0x24e7be58  addiu       $a3, $a3, -0x41A8
    ctx->pc = 0x2e0d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950488));
label_2e0d54:
    // 0x2e0d54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0d58:
    // 0x2e0d58: 0xc0a71b4  jal         func_29C6D0
label_2e0d5c:
    if (ctx->pc == 0x2E0D5Cu) {
        ctx->pc = 0x2E0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D58u;
        // 0x2e0d5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0D60u;
        goto label_2e0d60;
    }
    ctx->pc = 0x2E0D58u;
    SET_GPR_U32(ctx, 31, 0x2E0D60u);
    ctx->pc = 0x2E0D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0D58u;
    // 0x2e0d5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C6D0u, 0x2E0D58u, 0x2E0D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D60u;
label_2e0d60:
    // 0x2e0d60: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x2e0d60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2e0d64:
    // 0x2e0d64: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2e0d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2e0d68:
    // 0x2e0d68: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2e0d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2e0d6c:
    // 0x2e0d6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e0d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e0d70:
    // 0x2e0d70: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2e0d74:
    // 0x2e0d74: 0xc13b782  jal         func_4EDE08
label_2e0d78:
    if (ctx->pc == 0x2E0D78u) {
        ctx->pc = 0x2E0D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D74u;
        // 0x2e0d78: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0D7Cu;
        goto label_2e0d7c;
    }
    ctx->pc = 0x2E0D74u;
    SET_GPR_U32(ctx, 31, 0x2E0D7Cu);
    ctx->pc = 0x2E0D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0D74u;
    // 0x2e0d78: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x2E0D74u, 0x2E0D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D7Cu;
label_2e0d7c:
    // 0x2e0d7c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2e0d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2e0d80:
    // 0x2e0d80: 0xc0e409a  jal         func_390268
label_2e0d84:
    if (ctx->pc == 0x2E0D84u) {
        ctx->pc = 0x2E0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D80u;
        // 0x2e0d84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0D88u;
        goto label_2e0d88;
    }
    ctx->pc = 0x2E0D80u;
    SET_GPR_U32(ctx, 31, 0x2E0D88u);
    ctx->pc = 0x2E0D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0D80u;
    // 0x2e0d84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E0D80u, 0x2E0D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0D88u;
label_2e0d88:
    // 0x2e0d88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e0d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e0d8c:
    // 0x2e0d8c: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_2e0d90:
    if (ctx->pc == 0x2E0D90u) {
        ctx->pc = 0x2E0D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D8Cu;
        // 0x2e0d90: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0D94u;
        goto label_2e0d94;
    }
    ctx->pc = 0x2E0D8Cu;
    {
        const bool branch_taken_0x2e0d8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d8c) {
            ctx->pc = 0x2E0D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0D8Cu;
            // 0x2e0d90: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0DB0u;
            goto label_2e0db0;
        }
    }
    ctx->pc = 0x2E0D94u;
label_2e0d94:
    // 0x2e0d94: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2e0d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e0d98:
    // 0x2e0d98: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e0d98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e0d9c:
    // 0x2e0d9c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e0da0:
    // 0x2e0da0: 0x40f809  jalr        $v0
label_2e0da4:
    if (ctx->pc == 0x2E0DA4u) {
        ctx->pc = 0x2E0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0DA0u;
        // 0x2e0da4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0DA8u;
        goto label_2e0da8;
    }
    ctx->pc = 0x2E0DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E0DA8u);
        ctx->pc = 0x2E0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0DA0u;
        // 0x2e0da4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0DA0u, 0x2E0DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E0DA8u;
label_2e0da8:
    // 0x2e0da8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2e0da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_2e0dac:
    // 0x2e0dac: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2e0dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e0db0:
    // 0x2e0db0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2e0db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e0db4:
    // 0x2e0db4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2e0db4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e0db8:
    // 0x2e0db8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e0db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e0dbc:
    // 0x2e0dbc: 0x3e00008  jr          $ra
label_2e0dc0:
    if (ctx->pc == 0x2E0DC0u) {
        ctx->pc = 0x2E0DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0DBCu;
        // 0x2e0dc0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0DC4u;
        goto label_2e0dc4;
    }
    ctx->pc = 0x2E0DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0DBCu;
        // 0x2e0dc0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0DC4u;
label_2e0dc4:
    // 0x2e0dc4: 0x0  nop
    ctx->pc = 0x2e0dc4u;
    // NOP
    ctx->pc = 0x2e0dc8u;
}
