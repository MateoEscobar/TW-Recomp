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

// Function: sub_002C7EE0
// Address: 0x2c7ee0 - 0x2c7fd8
void sub_002C7EE0_0x2c7ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7EE0_0x2c7ee0");
#endif

    switch (ctx->pc) {
        case 0x2c7ee0u: goto label_2c7ee0;
        case 0x2c7ee4u: goto label_2c7ee4;
        case 0x2c7ee8u: goto label_2c7ee8;
        case 0x2c7eecu: goto label_2c7eec;
        case 0x2c7ef0u: goto label_2c7ef0;
        case 0x2c7ef4u: goto label_2c7ef4;
        case 0x2c7ef8u: goto label_2c7ef8;
        case 0x2c7efcu: goto label_2c7efc;
        case 0x2c7f00u: goto label_2c7f00;
        case 0x2c7f04u: goto label_2c7f04;
        case 0x2c7f08u: goto label_2c7f08;
        case 0x2c7f0cu: goto label_2c7f0c;
        case 0x2c7f10u: goto label_2c7f10;
        case 0x2c7f14u: goto label_2c7f14;
        case 0x2c7f18u: goto label_2c7f18;
        case 0x2c7f1cu: goto label_2c7f1c;
        case 0x2c7f20u: goto label_2c7f20;
        case 0x2c7f24u: goto label_2c7f24;
        case 0x2c7f28u: goto label_2c7f28;
        case 0x2c7f2cu: goto label_2c7f2c;
        case 0x2c7f30u: goto label_2c7f30;
        case 0x2c7f34u: goto label_2c7f34;
        case 0x2c7f38u: goto label_2c7f38;
        case 0x2c7f3cu: goto label_2c7f3c;
        case 0x2c7f40u: goto label_2c7f40;
        case 0x2c7f44u: goto label_2c7f44;
        case 0x2c7f48u: goto label_2c7f48;
        case 0x2c7f4cu: goto label_2c7f4c;
        case 0x2c7f50u: goto label_2c7f50;
        case 0x2c7f54u: goto label_2c7f54;
        case 0x2c7f58u: goto label_2c7f58;
        case 0x2c7f5cu: goto label_2c7f5c;
        case 0x2c7f60u: goto label_2c7f60;
        case 0x2c7f64u: goto label_2c7f64;
        case 0x2c7f68u: goto label_2c7f68;
        case 0x2c7f6cu: goto label_2c7f6c;
        case 0x2c7f70u: goto label_2c7f70;
        case 0x2c7f74u: goto label_2c7f74;
        case 0x2c7f78u: goto label_2c7f78;
        case 0x2c7f7cu: goto label_2c7f7c;
        case 0x2c7f80u: goto label_2c7f80;
        case 0x2c7f84u: goto label_2c7f84;
        case 0x2c7f88u: goto label_2c7f88;
        case 0x2c7f8cu: goto label_2c7f8c;
        case 0x2c7f90u: goto label_2c7f90;
        case 0x2c7f94u: goto label_2c7f94;
        case 0x2c7f98u: goto label_2c7f98;
        case 0x2c7f9cu: goto label_2c7f9c;
        case 0x2c7fa0u: goto label_2c7fa0;
        case 0x2c7fa4u: goto label_2c7fa4;
        case 0x2c7fa8u: goto label_2c7fa8;
        case 0x2c7facu: goto label_2c7fac;
        case 0x2c7fb0u: goto label_2c7fb0;
        case 0x2c7fb4u: goto label_2c7fb4;
        case 0x2c7fb8u: goto label_2c7fb8;
        case 0x2c7fbcu: goto label_2c7fbc;
        case 0x2c7fc0u: goto label_2c7fc0;
        case 0x2c7fc4u: goto label_2c7fc4;
        case 0x2c7fc8u: goto label_2c7fc8;
        case 0x2c7fccu: goto label_2c7fcc;
        case 0x2c7fd0u: goto label_2c7fd0;
        case 0x2c7fd4u: goto label_2c7fd4;
        default: break;
    }

    ctx->pc = 0x2c7ee0u;

label_2c7ee0:
    // 0x2c7ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c7ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c7ee4:
    // 0x2c7ee4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c7ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2c7ee8:
    // 0x2c7ee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c7ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c7eec:
    // 0x2c7eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c7eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7ef0:
    // 0x2c7ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c7ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c7ef4:
    // 0x2c7ef4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c7ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c7ef8:
    // 0x2c7ef8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c7ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c7efc:
    // 0x2c7efc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c7efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c7f00:
    // 0x2c7f00: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c7f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c7f04:
    // 0x2c7f04: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c7f08:
    // 0x2c7f08: 0x40f809  jalr        $v0
label_2c7f0c:
    if (ctx->pc == 0x2C7F0Cu) {
        ctx->pc = 0x2C7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F08u;
        // 0x2c7f0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F10u;
        goto label_2c7f10;
    }
    ctx->pc = 0x2C7F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C7F10u);
        ctx->pc = 0x2C7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F08u;
        // 0x2c7f0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7F08u, 0x2C7F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C7F10u;
label_2c7f10:
    // 0x2c7f10: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2c7f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2c7f14:
    // 0x2c7f14: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_2c7f18:
    if (ctx->pc == 0x2C7F18u) {
        ctx->pc = 0x2C7F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F14u;
        // 0x2c7f18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F1Cu;
        goto label_2c7f1c;
    }
    ctx->pc = 0x2C7F14u;
    {
        const bool branch_taken_0x2c7f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F14u;
        // 0x2c7f18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f14) {
            ctx->pc = 0x2C7F48u;
            goto label_2c7f48;
        }
    }
    ctx->pc = 0x2C7F1Cu;
label_2c7f1c:
    // 0x2c7f1c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2c7f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_2c7f20:
    // 0x2c7f20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c7f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7f24:
    // 0x2c7f24: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x2c7f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_2c7f28:
    // 0x2c7f28: 0xc06cb9a  jal         func_1B2E68
label_2c7f2c:
    if (ctx->pc == 0x2C7F2Cu) {
        ctx->pc = 0x2C7F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F28u;
        // 0x2c7f2c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F30u;
        goto label_2c7f30;
    }
    ctx->pc = 0x2C7F28u;
    SET_GPR_U32(ctx, 31, 0x2C7F30u);
    ctx->pc = 0x2C7F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7F28u;
    // 0x2c7f2c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2E68u, 0x2C7F28u, 0x2C7F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7F30u;
label_2c7f30:
    // 0x2c7f30: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2c7f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_2c7f34:
    // 0x2c7f34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c7f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c7f38:
    // 0x2c7f38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c7f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c7f3c:
    // 0x2c7f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7f40:
    // 0x2c7f40: 0x1000000e  b           . + 4 + (0xE << 2)
label_2c7f44:
    if (ctx->pc == 0x2C7F44u) {
        ctx->pc = 0x2C7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F40u;
        // 0x2c7f44: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F48u;
        goto label_2c7f48;
    }
    ctx->pc = 0x2C7F40u;
    {
        const bool branch_taken_0x2c7f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F40u;
        // 0x2c7f44: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f40) {
            ctx->pc = 0x2C7F7Cu;
            goto label_2c7f7c;
        }
    }
    ctx->pc = 0x2C7F48u;
label_2c7f48:
    // 0x2c7f48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7f4c:
    // 0x2c7f4c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_2c7f50:
    if (ctx->pc == 0x2C7F50u) {
        ctx->pc = 0x2C7F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F4Cu;
        // 0x2c7f50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F54u;
        goto label_2c7f54;
    }
    ctx->pc = 0x2C7F4Cu;
    {
        const bool branch_taken_0x2c7f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C7F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F4Cu;
        // 0x2c7f50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f4c) {
            ctx->pc = 0x2C7F8Cu;
            goto label_2c7f8c;
        }
    }
    ctx->pc = 0x2C7F54u;
label_2c7f54:
    // 0x2c7f54: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2c7f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_2c7f58:
    // 0x2c7f58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c7f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7f5c:
    // 0x2c7f5c: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x2c7f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_2c7f60:
    // 0x2c7f60: 0xc06cb9a  jal         func_1B2E68
label_2c7f64:
    if (ctx->pc == 0x2C7F64u) {
        ctx->pc = 0x2C7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F60u;
        // 0x2c7f64: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F68u;
        goto label_2c7f68;
    }
    ctx->pc = 0x2C7F60u;
    SET_GPR_U32(ctx, 31, 0x2C7F68u);
    ctx->pc = 0x2C7F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7F60u;
    // 0x2c7f64: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2E68u, 0x2C7F60u, 0x2C7F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7F68u;
label_2c7f68:
    // 0x2c7f68: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2c7f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_2c7f6c:
    // 0x2c7f6c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c7f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c7f70:
    // 0x2c7f70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c7f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c7f74:
    // 0x2c7f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7f78:
    // 0x2c7f78: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2c7f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2c7f7c:
    // 0x2c7f7c: 0xc06d00e  jal         func_1B4038
label_2c7f80:
    if (ctx->pc == 0x2C7F80u) {
        ctx->pc = 0x2C7F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F7Cu;
        // 0x2c7f80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F84u;
        goto label_2c7f84;
    }
    ctx->pc = 0x2C7F7Cu;
    SET_GPR_U32(ctx, 31, 0x2C7F84u);
    ctx->pc = 0x2C7F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7F7Cu;
    // 0x2c7f80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4038u, 0x2C7F7Cu, 0x2C7F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7F84u;
label_2c7f84:
    // 0x2c7f84: 0x10000010  b           . + 4 + (0x10 << 2)
label_2c7f88:
    if (ctx->pc == 0x2C7F88u) {
        ctx->pc = 0x2C7F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F84u;
        // 0x2c7f88: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F8Cu;
        goto label_2c7f8c;
    }
    ctx->pc = 0x2C7F84u;
    {
        const bool branch_taken_0x2c7f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F84u;
        // 0x2c7f88: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f84) {
            ctx->pc = 0x2C7FC8u;
            goto label_2c7fc8;
        }
    }
    ctx->pc = 0x2C7F8Cu;
label_2c7f8c:
    // 0x2c7f8c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_2c7f90:
    if (ctx->pc == 0x2C7F90u) {
        ctx->pc = 0x2C7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F8Cu;
        // 0x2c7f90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7F94u;
        goto label_2c7f94;
    }
    ctx->pc = 0x2C7F8Cu;
    {
        const bool branch_taken_0x2c7f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F8Cu;
        // 0x2c7f90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f8c) {
            ctx->pc = 0x2C7FC8u;
            goto label_2c7fc8;
        }
    }
    ctx->pc = 0x2C7F94u;
label_2c7f94:
    // 0x2c7f94: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2c7f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_2c7f98:
    // 0x2c7f98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c7f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7f9c:
    // 0x2c7f9c: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x2c7f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_2c7fa0:
    // 0x2c7fa0: 0xc06cb9a  jal         func_1B2E68
label_2c7fa4:
    if (ctx->pc == 0x2C7FA4u) {
        ctx->pc = 0x2C7FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FA0u;
        // 0x2c7fa4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7FA8u;
        goto label_2c7fa8;
    }
    ctx->pc = 0x2C7FA0u;
    SET_GPR_U32(ctx, 31, 0x2C7FA8u);
    ctx->pc = 0x2C7FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7FA0u;
    // 0x2c7fa4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2E68u, 0x2C7FA0u, 0x2C7FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7FA8u;
label_2c7fa8:
    // 0x2c7fa8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2c7fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_2c7fac:
    // 0x2c7fac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c7facu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c7fb0:
    // 0x2c7fb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c7fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c7fb4:
    // 0x2c7fb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7fb8:
    // 0x2c7fb8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2c7fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2c7fbc:
    // 0x2c7fbc: 0xc06d00e  jal         func_1B4038
label_2c7fc0:
    if (ctx->pc == 0x2C7FC0u) {
        ctx->pc = 0x2C7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FBCu;
        // 0x2c7fc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7FC4u;
        goto label_2c7fc4;
    }
    ctx->pc = 0x2C7FBCu;
    SET_GPR_U32(ctx, 31, 0x2C7FC4u);
    ctx->pc = 0x2C7FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7FBCu;
    // 0x2c7fc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4038u, 0x2C7FBCu, 0x2C7FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7FC4u;
label_2c7fc4:
    // 0x2c7fc4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c7fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7fc8:
    // 0x2c7fc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c7fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7fcc:
    // 0x2c7fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c7fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7fd0:
    // 0x2c7fd0: 0x3e00008  jr          $ra
label_2c7fd4:
    if (ctx->pc == 0x2C7FD4u) {
        ctx->pc = 0x2C7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FD0u;
        // 0x2c7fd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7FD8u;
        goto label_fallthrough_0x2c7fd0;
    }
    ctx->pc = 0x2C7FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FD0u;
        // 0x2c7fd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c7fd0:
    ctx->pc = 0x2C7FD8u;
}
