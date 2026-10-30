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

// Function: sub_00105F78
// Address: 0x105f78 - 0x106088
void sub_00105F78_0x105f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105F78_0x105f78");
#endif

    switch (ctx->pc) {
        case 0x105f78u: goto label_105f78;
        case 0x105f7cu: goto label_105f7c;
        case 0x105f80u: goto label_105f80;
        case 0x105f84u: goto label_105f84;
        case 0x105f88u: goto label_105f88;
        case 0x105f8cu: goto label_105f8c;
        case 0x105f90u: goto label_105f90;
        case 0x105f94u: goto label_105f94;
        case 0x105f98u: goto label_105f98;
        case 0x105f9cu: goto label_105f9c;
        case 0x105fa0u: goto label_105fa0;
        case 0x105fa4u: goto label_105fa4;
        case 0x105fa8u: goto label_105fa8;
        case 0x105facu: goto label_105fac;
        case 0x105fb0u: goto label_105fb0;
        case 0x105fb4u: goto label_105fb4;
        case 0x105fb8u: goto label_105fb8;
        case 0x105fbcu: goto label_105fbc;
        case 0x105fc0u: goto label_105fc0;
        case 0x105fc4u: goto label_105fc4;
        case 0x105fc8u: goto label_105fc8;
        case 0x105fccu: goto label_105fcc;
        case 0x105fd0u: goto label_105fd0;
        case 0x105fd4u: goto label_105fd4;
        case 0x105fd8u: goto label_105fd8;
        case 0x105fdcu: goto label_105fdc;
        case 0x105fe0u: goto label_105fe0;
        case 0x105fe4u: goto label_105fe4;
        case 0x105fe8u: goto label_105fe8;
        case 0x105fecu: goto label_105fec;
        case 0x105ff0u: goto label_105ff0;
        case 0x105ff4u: goto label_105ff4;
        case 0x105ff8u: goto label_105ff8;
        case 0x105ffcu: goto label_105ffc;
        case 0x106000u: goto label_106000;
        case 0x106004u: goto label_106004;
        case 0x106008u: goto label_106008;
        case 0x10600cu: goto label_10600c;
        case 0x106010u: goto label_106010;
        case 0x106014u: goto label_106014;
        case 0x106018u: goto label_106018;
        case 0x10601cu: goto label_10601c;
        case 0x106020u: goto label_106020;
        case 0x106024u: goto label_106024;
        case 0x106028u: goto label_106028;
        case 0x10602cu: goto label_10602c;
        case 0x106030u: goto label_106030;
        case 0x106034u: goto label_106034;
        case 0x106038u: goto label_106038;
        case 0x10603cu: goto label_10603c;
        case 0x106040u: goto label_106040;
        case 0x106044u: goto label_106044;
        case 0x106048u: goto label_106048;
        case 0x10604cu: goto label_10604c;
        case 0x106050u: goto label_106050;
        case 0x106054u: goto label_106054;
        case 0x106058u: goto label_106058;
        case 0x10605cu: goto label_10605c;
        case 0x106060u: goto label_106060;
        case 0x106064u: goto label_106064;
        case 0x106068u: goto label_106068;
        case 0x10606cu: goto label_10606c;
        case 0x106070u: goto label_106070;
        case 0x106074u: goto label_106074;
        case 0x106078u: goto label_106078;
        case 0x10607cu: goto label_10607c;
        case 0x106080u: goto label_106080;
        case 0x106084u: goto label_106084;
        default: break;
    }

    ctx->pc = 0x105f78u;

label_105f78:
    // 0x105f78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x105f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_105f7c:
    // 0x105f7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x105f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_105f80:
    // 0x105f80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x105f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_105f84:
    // 0x105f84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_105f88:
    // 0x105f88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_105f8c:
    // 0x105f8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x105f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_105f90:
    // 0x105f90: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x105f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_105f94:
    // 0x105f94: 0xc0e409a  jal         func_390268
label_105f98:
    if (ctx->pc == 0x105F98u) {
        ctx->pc = 0x105F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F94u;
        // 0x105f98: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105F9Cu;
        goto label_105f9c;
    }
    ctx->pc = 0x105F94u;
    SET_GPR_U32(ctx, 31, 0x105F9Cu);
    ctx->pc = 0x105F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105F94u;
    // 0x105f98: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x105F94u, 0x105F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F9Cu;
label_105f9c:
    // 0x105f9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x105f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105fa0:
    // 0x105fa0: 0x52200028  beql        $s1, $zero, . + 4 + (0x28 << 2)
label_105fa4:
    if (ctx->pc == 0x105FA4u) {
        ctx->pc = 0x105FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FA0u;
        // 0x105fa4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105FA8u;
        goto label_105fa8;
    }
    ctx->pc = 0x105FA0u;
    {
        const bool branch_taken_0x105fa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x105fa0) {
            ctx->pc = 0x105FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105FA0u;
            // 0x105fa4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106044u;
            goto label_106044;
        }
    }
    ctx->pc = 0x105FA8u;
label_105fa8:
    // 0x105fa8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x105fa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_105fac:
    // 0x105fac: 0x52df8  dsll        $a1, $a1, 23
    ctx->pc = 0x105facu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 23);
label_105fb0:
    // 0x105fb0: 0xc089988  jal         func_226620
label_105fb4:
    if (ctx->pc == 0x105FB4u) {
        ctx->pc = 0x105FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FB0u;
        // 0x105fb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105FB8u;
        goto label_105fb8;
    }
    ctx->pc = 0x105FB0u;
    SET_GPR_U32(ctx, 31, 0x105FB8u);
    ctx->pc = 0x105FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105FB0u;
    // 0x105fb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x105FB0u, 0x105FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FB8u;
label_105fb8:
    // 0x105fb8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x105fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_105fbc:
    // 0x105fbc: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_105fc0:
    if (ctx->pc == 0x105FC0u) {
        ctx->pc = 0x105FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FBCu;
        // 0x105fc0: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105FC4u;
        goto label_105fc4;
    }
    ctx->pc = 0x105FBCu;
    {
        const bool branch_taken_0x105fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x105fbc) {
            ctx->pc = 0x105FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105FBCu;
            // 0x105fc0: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105FD8u;
            goto label_105fd8;
        }
    }
    ctx->pc = 0x105FC4u;
label_105fc4:
    // 0x105fc4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x105fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_105fc8:
    // 0x105fc8: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_105fcc:
    if (ctx->pc == 0x105FCCu) {
        ctx->pc = 0x105FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FC8u;
        // 0x105fcc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105FD0u;
        goto label_105fd0;
    }
    ctx->pc = 0x105FC8u;
    {
        const bool branch_taken_0x105fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105fc8) {
            ctx->pc = 0x105FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105FC8u;
            // 0x105fcc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106044u;
            goto label_106044;
        }
    }
    ctx->pc = 0x105FD0u;
label_105fd0:
    // 0x105fd0: 0x10000017  b           . + 4 + (0x17 << 2)
label_105fd4:
    if (ctx->pc == 0x105FD4u) {
        ctx->pc = 0x105FD8u;
        goto label_105fd8;
    }
    ctx->pc = 0x105FD0u;
    {
        const bool branch_taken_0x105fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105fd0) {
            ctx->pc = 0x106030u;
            goto label_106030;
        }
    }
    ctx->pc = 0x105FD8u;
label_105fd8:
    // 0x105fd8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x105fd8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_105fdc:
    // 0x105fdc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x105fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_105fe0:
    // 0x105fe0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x105fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_105fe4:
    // 0x105fe4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x105fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_105fe8:
    // 0x105fe8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x105fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_105fec:
    // 0x105fec: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x105fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_105ff0:
    // 0x105ff0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x105ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_105ff4:
    // 0x105ff4: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
label_105ff8:
    if (ctx->pc == 0x105FF8u) {
        ctx->pc = 0x105FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FF4u;
        // 0x105ff8: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105FFCu;
        goto label_105ffc;
    }
    ctx->pc = 0x105FF4u;
    {
        const bool branch_taken_0x105ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x105ff4) {
            ctx->pc = 0x105FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105FF4u;
            // 0x105ff8: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106030u;
            goto label_106030;
        }
    }
    ctx->pc = 0x105FFCu;
label_105ffc:
    // 0x105ffc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x105ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_106000:
    // 0x106000: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x106000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_106004:
    // 0x106004: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x106004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_106008:
    // 0x106008: 0x40f809  jalr        $v0
label_10600c:
    if (ctx->pc == 0x10600Cu) {
        ctx->pc = 0x10600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106008u;
        // 0x10600c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106010u;
        goto label_106010;
    }
    ctx->pc = 0x106008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x106010u);
        ctx->pc = 0x10600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106008u;
        // 0x10600c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106008u, 0x106010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106010u;
label_106010:
    // 0x106010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106014:
    // 0x106014: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_106018:
    if (ctx->pc == 0x106018u) {
        ctx->pc = 0x106018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106014u;
        // 0x106018: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10601Cu;
        goto label_10601c;
    }
    ctx->pc = 0x106014u;
    {
        const bool branch_taken_0x106014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x106014) {
            ctx->pc = 0x106018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106014u;
            // 0x106018: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106030u;
            goto label_106030;
        }
    }
    ctx->pc = 0x10601Cu;
label_10601c:
    // 0x10601c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x10601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_106020:
    // 0x106020: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x106020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_106024:
    // 0x106024: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x106024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_106028:
    // 0x106028: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x106028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_10602c:
    // 0x10602c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x10602cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_106030:
    // 0x106030: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_106034:
    if (ctx->pc == 0x106034u) {
        ctx->pc = 0x106034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106030u;
        // 0x106034: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106038u;
        goto label_106038;
    }
    ctx->pc = 0x106030u;
    {
        const bool branch_taken_0x106030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106030) {
            ctx->pc = 0x106034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106030u;
            // 0x106034: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106044u;
            goto label_106044;
        }
    }
    ctx->pc = 0x106038u;
label_106038:
    // 0x106038: 0x40f809  jalr        $v0
label_10603c:
    if (ctx->pc == 0x10603Cu) {
        ctx->pc = 0x10603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106038u;
        // 0x10603c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106040u;
        goto label_106040;
    }
    ctx->pc = 0x106038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x106040u);
        ctx->pc = 0x10603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106038u;
        // 0x10603c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106038u, 0x106040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106040u;
label_106040:
    // 0x106040: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x106040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_106044:
    // 0x106044: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_106048:
    if (ctx->pc == 0x106048u) {
        ctx->pc = 0x106048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106044u;
        // 0x106048: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10604Cu;
        goto label_10604c;
    }
    ctx->pc = 0x106044u;
    {
        const bool branch_taken_0x106044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x106044) {
            ctx->pc = 0x106048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106044u;
            // 0x106048: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106058u;
            goto label_106058;
        }
    }
    ctx->pc = 0x10604Cu;
label_10604c:
    // 0x10604c: 0xc041544  jal         func_105510
label_106050:
    if (ctx->pc == 0x106050u) {
        ctx->pc = 0x106054u;
        goto label_106054;
    }
    ctx->pc = 0x10604Cu;
    SET_GPR_U32(ctx, 31, 0x106054u);
    ctx->pc = 0x105510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105510u, 0x10604Cu, 0x106054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106054u;
label_106054:
    // 0x106054: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x106054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_106058:
    // 0x106058: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x106058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10605c:
    // 0x10605c: 0xc05d448  jal         func_175120
label_106060:
    if (ctx->pc == 0x106060u) {
        ctx->pc = 0x106060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10605Cu;
        // 0x106060: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106064u;
        goto label_106064;
    }
    ctx->pc = 0x10605Cu;
    SET_GPR_U32(ctx, 31, 0x106064u);
    ctx->pc = 0x106060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10605Cu;
    // 0x106060: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x10605Cu, 0x106064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106064u;
label_106064:
    // 0x106064: 0xc042ef4  jal         func_10BBD0
label_106068:
    if (ctx->pc == 0x106068u) {
        ctx->pc = 0x106068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106064u;
        // 0x106068: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10606Cu;
        goto label_10606c;
    }
    ctx->pc = 0x106064u;
    SET_GPR_U32(ctx, 31, 0x10606Cu);
    ctx->pc = 0x106068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106064u;
    // 0x106068: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x106064u, 0x10606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10606Cu;
label_10606c:
    // 0x10606c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x10606cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_106070:
    // 0x106070: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x106070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_106074:
    // 0x106074: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x106074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_106078:
    // 0x106078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10607c:
    // 0x10607c: 0x3e00008  jr          $ra
label_106080:
    if (ctx->pc == 0x106080u) {
        ctx->pc = 0x106080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10607Cu;
        // 0x106080: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106084u;
        goto label_106084;
    }
    ctx->pc = 0x10607Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10607Cu;
        // 0x106080: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10607Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106084u;
label_106084:
    // 0x106084: 0x0  nop
    ctx->pc = 0x106084u;
    // NOP
    ctx->pc = 0x106088u;
}
