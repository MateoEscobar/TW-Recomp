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

// Function: sub_00105E90
// Address: 0x105e90 - 0x105f78
void sub_00105E90_0x105e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105E90_0x105e90");
#endif

    switch (ctx->pc) {
        case 0x105e90u: goto label_105e90;
        case 0x105e94u: goto label_105e94;
        case 0x105e98u: goto label_105e98;
        case 0x105e9cu: goto label_105e9c;
        case 0x105ea0u: goto label_105ea0;
        case 0x105ea4u: goto label_105ea4;
        case 0x105ea8u: goto label_105ea8;
        case 0x105eacu: goto label_105eac;
        case 0x105eb0u: goto label_105eb0;
        case 0x105eb4u: goto label_105eb4;
        case 0x105eb8u: goto label_105eb8;
        case 0x105ebcu: goto label_105ebc;
        case 0x105ec0u: goto label_105ec0;
        case 0x105ec4u: goto label_105ec4;
        case 0x105ec8u: goto label_105ec8;
        case 0x105eccu: goto label_105ecc;
        case 0x105ed0u: goto label_105ed0;
        case 0x105ed4u: goto label_105ed4;
        case 0x105ed8u: goto label_105ed8;
        case 0x105edcu: goto label_105edc;
        case 0x105ee0u: goto label_105ee0;
        case 0x105ee4u: goto label_105ee4;
        case 0x105ee8u: goto label_105ee8;
        case 0x105eecu: goto label_105eec;
        case 0x105ef0u: goto label_105ef0;
        case 0x105ef4u: goto label_105ef4;
        case 0x105ef8u: goto label_105ef8;
        case 0x105efcu: goto label_105efc;
        case 0x105f00u: goto label_105f00;
        case 0x105f04u: goto label_105f04;
        case 0x105f08u: goto label_105f08;
        case 0x105f0cu: goto label_105f0c;
        case 0x105f10u: goto label_105f10;
        case 0x105f14u: goto label_105f14;
        case 0x105f18u: goto label_105f18;
        case 0x105f1cu: goto label_105f1c;
        case 0x105f20u: goto label_105f20;
        case 0x105f24u: goto label_105f24;
        case 0x105f28u: goto label_105f28;
        case 0x105f2cu: goto label_105f2c;
        case 0x105f30u: goto label_105f30;
        case 0x105f34u: goto label_105f34;
        case 0x105f38u: goto label_105f38;
        case 0x105f3cu: goto label_105f3c;
        case 0x105f40u: goto label_105f40;
        case 0x105f44u: goto label_105f44;
        case 0x105f48u: goto label_105f48;
        case 0x105f4cu: goto label_105f4c;
        case 0x105f50u: goto label_105f50;
        case 0x105f54u: goto label_105f54;
        case 0x105f58u: goto label_105f58;
        case 0x105f5cu: goto label_105f5c;
        case 0x105f60u: goto label_105f60;
        case 0x105f64u: goto label_105f64;
        case 0x105f68u: goto label_105f68;
        case 0x105f6cu: goto label_105f6c;
        case 0x105f70u: goto label_105f70;
        case 0x105f74u: goto label_105f74;
        default: break;
    }

    ctx->pc = 0x105e90u;

label_105e90:
    // 0x105e90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x105e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_105e94:
    // 0x105e94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x105e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_105e98:
    // 0x105e98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x105e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_105e9c:
    // 0x105e9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_105ea0:
    // 0x105ea0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_105ea4:
    // 0x105ea4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x105ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_105ea8:
    // 0x105ea8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x105ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_105eac:
    // 0x105eac: 0xc0e409a  jal         func_390268
label_105eb0:
    if (ctx->pc == 0x105EB0u) {
        ctx->pc = 0x105EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EACu;
        // 0x105eb0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105EB4u;
        goto label_105eb4;
    }
    ctx->pc = 0x105EACu;
    SET_GPR_U32(ctx, 31, 0x105EB4u);
    ctx->pc = 0x105EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105EACu;
    // 0x105eb0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x105EACu, 0x105EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EB4u;
label_105eb4:
    // 0x105eb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x105eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105eb8:
    // 0x105eb8: 0x52200028  beql        $s1, $zero, . + 4 + (0x28 << 2)
label_105ebc:
    if (ctx->pc == 0x105EBCu) {
        ctx->pc = 0x105EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EB8u;
        // 0x105ebc: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105EC0u;
        goto label_105ec0;
    }
    ctx->pc = 0x105EB8u;
    {
        const bool branch_taken_0x105eb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x105eb8) {
            ctx->pc = 0x105EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105EB8u;
            // 0x105ebc: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105F5Cu;
            goto label_105f5c;
        }
    }
    ctx->pc = 0x105EC0u;
label_105ec0:
    // 0x105ec0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x105ec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_105ec4:
    // 0x105ec4: 0x52df8  dsll        $a1, $a1, 23
    ctx->pc = 0x105ec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 23);
label_105ec8:
    // 0x105ec8: 0xc089988  jal         func_226620
label_105ecc:
    if (ctx->pc == 0x105ECCu) {
        ctx->pc = 0x105ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EC8u;
        // 0x105ecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105ED0u;
        goto label_105ed0;
    }
    ctx->pc = 0x105EC8u;
    SET_GPR_U32(ctx, 31, 0x105ED0u);
    ctx->pc = 0x105ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105EC8u;
    // 0x105ecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x105EC8u, 0x105ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105ED0u;
label_105ed0:
    // 0x105ed0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x105ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_105ed4:
    // 0x105ed4: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_105ed8:
    if (ctx->pc == 0x105ED8u) {
        ctx->pc = 0x105ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105ED4u;
        // 0x105ed8: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105EDCu;
        goto label_105edc;
    }
    ctx->pc = 0x105ED4u;
    {
        const bool branch_taken_0x105ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x105ed4) {
            ctx->pc = 0x105ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105ED4u;
            // 0x105ed8: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105EF0u;
            goto label_105ef0;
        }
    }
    ctx->pc = 0x105EDCu;
label_105edc:
    // 0x105edc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x105edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_105ee0:
    // 0x105ee0: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_105ee4:
    if (ctx->pc == 0x105EE4u) {
        ctx->pc = 0x105EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EE0u;
        // 0x105ee4: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105EE8u;
        goto label_105ee8;
    }
    ctx->pc = 0x105EE0u;
    {
        const bool branch_taken_0x105ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105ee0) {
            ctx->pc = 0x105EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105EE0u;
            // 0x105ee4: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105F5Cu;
            goto label_105f5c;
        }
    }
    ctx->pc = 0x105EE8u;
label_105ee8:
    // 0x105ee8: 0x10000017  b           . + 4 + (0x17 << 2)
label_105eec:
    if (ctx->pc == 0x105EECu) {
        ctx->pc = 0x105EF0u;
        goto label_105ef0;
    }
    ctx->pc = 0x105EE8u;
    {
        const bool branch_taken_0x105ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105ee8) {
            ctx->pc = 0x105F48u;
            goto label_105f48;
        }
    }
    ctx->pc = 0x105EF0u;
label_105ef0:
    // 0x105ef0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x105ef0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_105ef4:
    // 0x105ef4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x105ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_105ef8:
    // 0x105ef8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x105ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_105efc:
    // 0x105efc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x105efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_105f00:
    // 0x105f00: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x105f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_105f04:
    // 0x105f04: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x105f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_105f08:
    // 0x105f08: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x105f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_105f0c:
    // 0x105f0c: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
label_105f10:
    if (ctx->pc == 0x105F10u) {
        ctx->pc = 0x105F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F0Cu;
        // 0x105f10: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105F14u;
        goto label_105f14;
    }
    ctx->pc = 0x105F0Cu;
    {
        const bool branch_taken_0x105f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x105f0c) {
            ctx->pc = 0x105F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105F0Cu;
            // 0x105f10: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105F48u;
            goto label_105f48;
        }
    }
    ctx->pc = 0x105F14u;
label_105f14:
    // 0x105f14: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x105f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_105f18:
    // 0x105f18: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x105f18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_105f1c:
    // 0x105f1c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x105f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_105f20:
    // 0x105f20: 0x40f809  jalr        $v0
label_105f24:
    if (ctx->pc == 0x105F24u) {
        ctx->pc = 0x105F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F20u;
        // 0x105f24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105F28u;
        goto label_105f28;
    }
    ctx->pc = 0x105F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x105F28u);
        ctx->pc = 0x105F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F20u;
        // 0x105f24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105F20u, 0x105F28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105F28u;
label_105f28:
    // 0x105f28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105f2c:
    // 0x105f2c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_105f30:
    if (ctx->pc == 0x105F30u) {
        ctx->pc = 0x105F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F2Cu;
        // 0x105f30: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105F34u;
        goto label_105f34;
    }
    ctx->pc = 0x105F2Cu;
    {
        const bool branch_taken_0x105f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x105f2c) {
            ctx->pc = 0x105F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105F2Cu;
            // 0x105f30: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105F48u;
            goto label_105f48;
        }
    }
    ctx->pc = 0x105F34u;
label_105f34:
    // 0x105f34: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x105f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_105f38:
    // 0x105f38: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x105f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_105f3c:
    // 0x105f3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x105f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_105f40:
    // 0x105f40: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x105f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_105f44:
    // 0x105f44: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x105f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_105f48:
    // 0x105f48: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_105f4c:
    if (ctx->pc == 0x105F4Cu) {
        ctx->pc = 0x105F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F48u;
        // 0x105f4c: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105F50u;
        goto label_105f50;
    }
    ctx->pc = 0x105F48u;
    {
        const bool branch_taken_0x105f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105f48) {
            ctx->pc = 0x105F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105F48u;
            // 0x105f4c: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105F5Cu;
            goto label_105f5c;
        }
    }
    ctx->pc = 0x105F50u;
label_105f50:
    // 0x105f50: 0x40f809  jalr        $v0
label_105f54:
    if (ctx->pc == 0x105F54u) {
        ctx->pc = 0x105F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F50u;
        // 0x105f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105F58u;
        goto label_105f58;
    }
    ctx->pc = 0x105F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x105F58u);
        ctx->pc = 0x105F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F50u;
        // 0x105f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105F50u, 0x105F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105F58u;
label_105f58:
    // 0x105f58: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x105f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_105f5c:
    // 0x105f5c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x105f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_105f60:
    // 0x105f60: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x105f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_105f64:
    // 0x105f64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x105f64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_105f68:
    // 0x105f68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_105f6c:
    // 0x105f6c: 0x3e00008  jr          $ra
label_105f70:
    if (ctx->pc == 0x105F70u) {
        ctx->pc = 0x105F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F6Cu;
        // 0x105f70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105F74u;
        goto label_105f74;
    }
    ctx->pc = 0x105F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F6Cu;
        // 0x105f70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105F74u;
label_105f74:
    // 0x105f74: 0x0  nop
    ctx->pc = 0x105f74u;
    // NOP
    ctx->pc = 0x105f78u;
}
