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

// Function: sub_003E5BF8
// Address: 0x3e5bf8 - 0x3e5d00
void sub_003E5BF8_0x3e5bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5BF8_0x3e5bf8");
#endif

    switch (ctx->pc) {
        case 0x3e5bf8u: goto label_3e5bf8;
        case 0x3e5bfcu: goto label_3e5bfc;
        case 0x3e5c00u: goto label_3e5c00;
        case 0x3e5c04u: goto label_3e5c04;
        case 0x3e5c08u: goto label_3e5c08;
        case 0x3e5c0cu: goto label_3e5c0c;
        case 0x3e5c10u: goto label_3e5c10;
        case 0x3e5c14u: goto label_3e5c14;
        case 0x3e5c18u: goto label_3e5c18;
        case 0x3e5c1cu: goto label_3e5c1c;
        case 0x3e5c20u: goto label_3e5c20;
        case 0x3e5c24u: goto label_3e5c24;
        case 0x3e5c28u: goto label_3e5c28;
        case 0x3e5c2cu: goto label_3e5c2c;
        case 0x3e5c30u: goto label_3e5c30;
        case 0x3e5c34u: goto label_3e5c34;
        case 0x3e5c38u: goto label_3e5c38;
        case 0x3e5c3cu: goto label_3e5c3c;
        case 0x3e5c40u: goto label_3e5c40;
        case 0x3e5c44u: goto label_3e5c44;
        case 0x3e5c48u: goto label_3e5c48;
        case 0x3e5c4cu: goto label_3e5c4c;
        case 0x3e5c50u: goto label_3e5c50;
        case 0x3e5c54u: goto label_3e5c54;
        case 0x3e5c58u: goto label_3e5c58;
        case 0x3e5c5cu: goto label_3e5c5c;
        case 0x3e5c60u: goto label_3e5c60;
        case 0x3e5c64u: goto label_3e5c64;
        case 0x3e5c68u: goto label_3e5c68;
        case 0x3e5c6cu: goto label_3e5c6c;
        case 0x3e5c70u: goto label_3e5c70;
        case 0x3e5c74u: goto label_3e5c74;
        case 0x3e5c78u: goto label_3e5c78;
        case 0x3e5c7cu: goto label_3e5c7c;
        case 0x3e5c80u: goto label_3e5c80;
        case 0x3e5c84u: goto label_3e5c84;
        case 0x3e5c88u: goto label_3e5c88;
        case 0x3e5c8cu: goto label_3e5c8c;
        case 0x3e5c90u: goto label_3e5c90;
        case 0x3e5c94u: goto label_3e5c94;
        case 0x3e5c98u: goto label_3e5c98;
        case 0x3e5c9cu: goto label_3e5c9c;
        case 0x3e5ca0u: goto label_3e5ca0;
        case 0x3e5ca4u: goto label_3e5ca4;
        case 0x3e5ca8u: goto label_3e5ca8;
        case 0x3e5cacu: goto label_3e5cac;
        case 0x3e5cb0u: goto label_3e5cb0;
        case 0x3e5cb4u: goto label_3e5cb4;
        case 0x3e5cb8u: goto label_3e5cb8;
        case 0x3e5cbcu: goto label_3e5cbc;
        case 0x3e5cc0u: goto label_3e5cc0;
        case 0x3e5cc4u: goto label_3e5cc4;
        case 0x3e5cc8u: goto label_3e5cc8;
        case 0x3e5cccu: goto label_3e5ccc;
        case 0x3e5cd0u: goto label_3e5cd0;
        case 0x3e5cd4u: goto label_3e5cd4;
        case 0x3e5cd8u: goto label_3e5cd8;
        case 0x3e5cdcu: goto label_3e5cdc;
        case 0x3e5ce0u: goto label_3e5ce0;
        case 0x3e5ce4u: goto label_3e5ce4;
        case 0x3e5ce8u: goto label_3e5ce8;
        case 0x3e5cecu: goto label_3e5cec;
        case 0x3e5cf0u: goto label_3e5cf0;
        case 0x3e5cf4u: goto label_3e5cf4;
        case 0x3e5cf8u: goto label_3e5cf8;
        case 0x3e5cfcu: goto label_3e5cfc;
        default: break;
    }

    ctx->pc = 0x3e5bf8u;

label_3e5bf8:
    // 0x3e5bf8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e5bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3e5bfc:
    // 0x3e5bfc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3e5bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3e5c00:
    // 0x3e5c00: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3e5c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3e5c04:
    // 0x3e5c04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e5c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c08:
    // 0x3e5c08: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3e5c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3e5c0c:
    // 0x3e5c0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e5c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c10:
    // 0x3e5c10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e5c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e5c14:
    // 0x3e5c14: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3e5c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3e5c18:
    // 0x3e5c18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e5c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3e5c1c:
    // 0x3e5c1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e5c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e5c20:
    // 0x3e5c20: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e5c20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e5c24:
    // 0x3e5c24: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e5c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e5c28:
    // 0x3e5c28: 0x40f809  jalr        $v0
label_3e5c2c:
    if (ctx->pc == 0x3E5C2Cu) {
        ctx->pc = 0x3E5C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C28u;
        // 0x3e5c2c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5C30u;
        goto label_3e5c30;
    }
    ctx->pc = 0x3E5C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E5C30u);
        ctx->pc = 0x3E5C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C28u;
        // 0x3e5c2c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5C28u, 0x3E5C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E5C30u;
label_3e5c30:
    // 0x3e5c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c34:
    // 0x3e5c34: 0xc0ea146  jal         func_3A8518
label_3e5c38:
    if (ctx->pc == 0x3E5C38u) {
        ctx->pc = 0x3E5C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C34u;
        // 0x3e5c38: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5C3Cu;
        goto label_3e5c3c;
    }
    ctx->pc = 0x3E5C34u;
    SET_GPR_U32(ctx, 31, 0x3E5C3Cu);
    ctx->pc = 0x3E5C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5C34u;
    // 0x3e5c38: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E5C34u, 0x3E5C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5C3Cu;
label_3e5c3c:
    // 0x3e5c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c40:
    // 0x3e5c40: 0xc0ea146  jal         func_3A8518
label_3e5c44:
    if (ctx->pc == 0x3E5C44u) {
        ctx->pc = 0x3E5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C40u;
        // 0x3e5c44: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5C48u;
        goto label_3e5c48;
    }
    ctx->pc = 0x3E5C40u;
    SET_GPR_U32(ctx, 31, 0x3E5C48u);
    ctx->pc = 0x3E5C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5C40u;
    // 0x3e5c44: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E5C40u, 0x3E5C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5C48u;
label_3e5c48:
    // 0x3e5c48: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e5c48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c4c:
    // 0x3e5c4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e5c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c50:
    // 0x3e5c50: 0xc0ea12a  jal         func_3A84A8
label_3e5c54:
    if (ctx->pc == 0x3E5C54u) {
        ctx->pc = 0x3E5C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C50u;
        // 0x3e5c54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5C58u;
        goto label_3e5c58;
    }
    ctx->pc = 0x3E5C50u;
    SET_GPR_U32(ctx, 31, 0x3E5C58u);
    ctx->pc = 0x3E5C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5C50u;
    // 0x3e5c54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E5C50u, 0x3E5C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5C58u;
label_3e5c58:
    // 0x3e5c58: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3e5c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3e5c5c:
    // 0x3e5c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e5c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e5c60:
    // 0x3e5c60: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x3e5c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
label_3e5c64:
    // 0x3e5c64: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x3e5c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3e5c68:
    // 0x3e5c68: 0xc0e858c  jal         func_3A1630
label_3e5c6c:
    if (ctx->pc == 0x3E5C6Cu) {
        ctx->pc = 0x3E5C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C68u;
        // 0x3e5c6c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5C70u;
        goto label_3e5c70;
    }
    ctx->pc = 0x3E5C68u;
    SET_GPR_U32(ctx, 31, 0x3E5C70u);
    ctx->pc = 0x3E5C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5C68u;
    // 0x3e5c6c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E5C68u, 0x3E5C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5C70u;
label_3e5c70:
    // 0x3e5c70: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e5c74:
    // 0x3e5c74: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x3e5c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_3e5c78:
    // 0x3e5c78: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3e5c78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3e5c7c:
    // 0x3e5c7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e5c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e5c80:
    // 0x3e5c80: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3e5c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3e5c84:
    // 0x3e5c84: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x3e5c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
label_3e5c88:
    // 0x3e5c88: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x3e5c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_3e5c8c:
    // 0x3e5c8c: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x3e5c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
label_3e5c90:
    // 0x3e5c90: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3e5c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3e5c94:
    // 0x3e5c94: 0xae3400b4  sw          $s4, 0xB4($s1)
    ctx->pc = 0x3e5c94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 20));
label_3e5c98:
    // 0x3e5c98: 0x16630003  bne         $s3, $v1, . + 4 + (0x3 << 2)
label_3e5c9c:
    if (ctx->pc == 0x3E5C9Cu) {
        ctx->pc = 0x3E5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C98u;
        // 0x3e5c9c: 0xae2000bc  sw          $zero, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5CA0u;
        goto label_3e5ca0;
    }
    ctx->pc = 0x3E5C98u;
    {
        const bool branch_taken_0x3e5c98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5C98u;
        // 0x3e5c9c: 0xae2000bc  sw          $zero, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5c98) {
            ctx->pc = 0x3E5CA8u;
            goto label_3e5ca8;
        }
    }
    ctx->pc = 0x3E5CA0u;
label_3e5ca0:
    // 0x3e5ca0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e5ca4:
    if (ctx->pc == 0x3E5CA4u) {
        ctx->pc = 0x3E5CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5CA0u;
        // 0x3e5ca4: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5CA8u;
        goto label_3e5ca8;
    }
    ctx->pc = 0x3E5CA0u;
    {
        const bool branch_taken_0x3e5ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5CA0u;
        // 0x3e5ca4: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5ca0) {
            ctx->pc = 0x3E5CB0u;
            goto label_3e5cb0;
        }
    }
    ctx->pc = 0x3E5CA8u;
label_3e5ca8:
    // 0x3e5ca8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e5ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e5cac:
    // 0x3e5cac: 0x2621824  and         $v1, $s3, $v0
    ctx->pc = 0x3e5cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_3e5cb0:
    // 0x3e5cb0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e5cb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e5cb4:
    // 0x3e5cb4: 0x34630045  ori         $v1, $v1, 0x45
    ctx->pc = 0x3e5cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)69);
label_3e5cb8:
    // 0x3e5cb8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x3e5cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_3e5cbc:
    // 0x3e5cbc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3e5cbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3e5cc0:
    // 0x3e5cc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e5cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e5cc4:
    // 0x3e5cc4: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3e5cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3e5cc8:
    // 0x3e5cc8: 0xae2300c4  sw          $v1, 0xC4($s1)
    ctx->pc = 0x3e5cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
label_3e5ccc:
    // 0x3e5ccc: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x3e5cccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
label_3e5cd0:
    // 0x3e5cd0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x3e5cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_3e5cd4:
    // 0x3e5cd4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3e5cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_3e5cd8:
    // 0x3e5cd8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3e5cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3e5cdc:
    // 0x3e5cdc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3e5cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e5ce0:
    // 0x3e5ce0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3e5ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e5ce4:
    // 0x3e5ce4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3e5ce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e5ce8:
    // 0x3e5ce8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e5ce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e5cec:
    // 0x3e5cec: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3e5cecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e5cf0:
    // 0x3e5cf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e5cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e5cf4:
    // 0x3e5cf4: 0x3e00008  jr          $ra
label_3e5cf8:
    if (ctx->pc == 0x3E5CF8u) {
        ctx->pc = 0x3E5CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5CF4u;
        // 0x3e5cf8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E5CFCu;
        goto label_3e5cfc;
    }
    ctx->pc = 0x3E5CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5CF4u;
        // 0x3e5cf8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E5CFCu;
label_3e5cfc:
    // 0x3e5cfc: 0x0  nop
    ctx->pc = 0x3e5cfcu;
    // NOP
    ctx->pc = 0x3e5d00u;
}
