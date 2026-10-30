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

// Function: sub_0022D030
// Address: 0x22d030 - 0x22d1f8
void sub_0022D030_0x22d030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D030_0x22d030");
#endif

    switch (ctx->pc) {
        case 0x22d030u: goto label_22d030;
        case 0x22d034u: goto label_22d034;
        case 0x22d038u: goto label_22d038;
        case 0x22d03cu: goto label_22d03c;
        case 0x22d040u: goto label_22d040;
        case 0x22d044u: goto label_22d044;
        case 0x22d048u: goto label_22d048;
        case 0x22d04cu: goto label_22d04c;
        case 0x22d050u: goto label_22d050;
        case 0x22d054u: goto label_22d054;
        case 0x22d058u: goto label_22d058;
        case 0x22d05cu: goto label_22d05c;
        case 0x22d060u: goto label_22d060;
        case 0x22d064u: goto label_22d064;
        case 0x22d068u: goto label_22d068;
        case 0x22d06cu: goto label_22d06c;
        case 0x22d070u: goto label_22d070;
        case 0x22d074u: goto label_22d074;
        case 0x22d078u: goto label_22d078;
        case 0x22d07cu: goto label_22d07c;
        case 0x22d080u: goto label_22d080;
        case 0x22d084u: goto label_22d084;
        case 0x22d088u: goto label_22d088;
        case 0x22d08cu: goto label_22d08c;
        case 0x22d090u: goto label_22d090;
        case 0x22d094u: goto label_22d094;
        case 0x22d098u: goto label_22d098;
        case 0x22d09cu: goto label_22d09c;
        case 0x22d0a0u: goto label_22d0a0;
        case 0x22d0a4u: goto label_22d0a4;
        case 0x22d0a8u: goto label_22d0a8;
        case 0x22d0acu: goto label_22d0ac;
        case 0x22d0b0u: goto label_22d0b0;
        case 0x22d0b4u: goto label_22d0b4;
        case 0x22d0b8u: goto label_22d0b8;
        case 0x22d0bcu: goto label_22d0bc;
        case 0x22d0c0u: goto label_22d0c0;
        case 0x22d0c4u: goto label_22d0c4;
        case 0x22d0c8u: goto label_22d0c8;
        case 0x22d0ccu: goto label_22d0cc;
        case 0x22d0d0u: goto label_22d0d0;
        case 0x22d0d4u: goto label_22d0d4;
        case 0x22d0d8u: goto label_22d0d8;
        case 0x22d0dcu: goto label_22d0dc;
        case 0x22d0e0u: goto label_22d0e0;
        case 0x22d0e4u: goto label_22d0e4;
        case 0x22d0e8u: goto label_22d0e8;
        case 0x22d0ecu: goto label_22d0ec;
        case 0x22d0f0u: goto label_22d0f0;
        case 0x22d0f4u: goto label_22d0f4;
        case 0x22d0f8u: goto label_22d0f8;
        case 0x22d0fcu: goto label_22d0fc;
        case 0x22d100u: goto label_22d100;
        case 0x22d104u: goto label_22d104;
        case 0x22d108u: goto label_22d108;
        case 0x22d10cu: goto label_22d10c;
        case 0x22d110u: goto label_22d110;
        case 0x22d114u: goto label_22d114;
        case 0x22d118u: goto label_22d118;
        case 0x22d11cu: goto label_22d11c;
        case 0x22d120u: goto label_22d120;
        case 0x22d124u: goto label_22d124;
        case 0x22d128u: goto label_22d128;
        case 0x22d12cu: goto label_22d12c;
        case 0x22d130u: goto label_22d130;
        case 0x22d134u: goto label_22d134;
        case 0x22d138u: goto label_22d138;
        case 0x22d13cu: goto label_22d13c;
        case 0x22d140u: goto label_22d140;
        case 0x22d144u: goto label_22d144;
        case 0x22d148u: goto label_22d148;
        case 0x22d14cu: goto label_22d14c;
        case 0x22d150u: goto label_22d150;
        case 0x22d154u: goto label_22d154;
        case 0x22d158u: goto label_22d158;
        case 0x22d15cu: goto label_22d15c;
        case 0x22d160u: goto label_22d160;
        case 0x22d164u: goto label_22d164;
        case 0x22d168u: goto label_22d168;
        case 0x22d16cu: goto label_22d16c;
        case 0x22d170u: goto label_22d170;
        case 0x22d174u: goto label_22d174;
        case 0x22d178u: goto label_22d178;
        case 0x22d17cu: goto label_22d17c;
        case 0x22d180u: goto label_22d180;
        case 0x22d184u: goto label_22d184;
        case 0x22d188u: goto label_22d188;
        case 0x22d18cu: goto label_22d18c;
        case 0x22d190u: goto label_22d190;
        case 0x22d194u: goto label_22d194;
        case 0x22d198u: goto label_22d198;
        case 0x22d19cu: goto label_22d19c;
        case 0x22d1a0u: goto label_22d1a0;
        case 0x22d1a4u: goto label_22d1a4;
        case 0x22d1a8u: goto label_22d1a8;
        case 0x22d1acu: goto label_22d1ac;
        case 0x22d1b0u: goto label_22d1b0;
        case 0x22d1b4u: goto label_22d1b4;
        case 0x22d1b8u: goto label_22d1b8;
        case 0x22d1bcu: goto label_22d1bc;
        case 0x22d1c0u: goto label_22d1c0;
        case 0x22d1c4u: goto label_22d1c4;
        case 0x22d1c8u: goto label_22d1c8;
        case 0x22d1ccu: goto label_22d1cc;
        case 0x22d1d0u: goto label_22d1d0;
        case 0x22d1d4u: goto label_22d1d4;
        case 0x22d1d8u: goto label_22d1d8;
        case 0x22d1dcu: goto label_22d1dc;
        case 0x22d1e0u: goto label_22d1e0;
        case 0x22d1e4u: goto label_22d1e4;
        case 0x22d1e8u: goto label_22d1e8;
        case 0x22d1ecu: goto label_22d1ec;
        case 0x22d1f0u: goto label_22d1f0;
        case 0x22d1f4u: goto label_22d1f4;
        default: break;
    }

    ctx->pc = 0x22d030u;

label_22d030:
    // 0x22d030: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22d030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22d034:
    // 0x22d034: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22d034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_22d038:
    // 0x22d038: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22d03c:
    // 0x22d03c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22d03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22d040:
    // 0x22d040: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22d040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d044:
    // 0x22d044: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22d044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_22d048:
    // 0x22d048: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22d048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_22d04c:
    // 0x22d04c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22d050:
    // 0x22d050: 0xc089988  jal         func_226620
label_22d054:
    if (ctx->pc == 0x22D054u) {
        ctx->pc = 0x22D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D050u;
        // 0x22d054: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D058u;
        goto label_22d058;
    }
    ctx->pc = 0x22D050u;
    SET_GPR_U32(ctx, 31, 0x22D058u);
    ctx->pc = 0x22D054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D050u;
    // 0x22d054: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22D050u, 0x22D058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D058u;
label_22d058:
    // 0x22d058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d05c:
    // 0x22d05c: 0xc089988  jal         func_226620
label_22d060:
    if (ctx->pc == 0x22D060u) {
        ctx->pc = 0x22D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D05Cu;
        // 0x22d060: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D064u;
        goto label_22d064;
    }
    ctx->pc = 0x22D05Cu;
    SET_GPR_U32(ctx, 31, 0x22D064u);
    ctx->pc = 0x22D060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D05Cu;
    // 0x22d060: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22D05Cu, 0x22D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D064u;
label_22d064:
    // 0x22d064: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22d064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d068:
    // 0x22d068: 0xc089988  jal         func_226620
label_22d06c:
    if (ctx->pc == 0x22D06Cu) {
        ctx->pc = 0x22D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D068u;
        // 0x22d06c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D070u;
        goto label_22d070;
    }
    ctx->pc = 0x22D068u;
    SET_GPR_U32(ctx, 31, 0x22D070u);
    ctx->pc = 0x22D06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D068u;
    // 0x22d06c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22D068u, 0x22D070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D070u;
label_22d070:
    // 0x22d070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d074:
    // 0x22d074: 0xc089988  jal         func_226620
label_22d078:
    if (ctx->pc == 0x22D078u) {
        ctx->pc = 0x22D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D074u;
        // 0x22d078: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D07Cu;
        goto label_22d07c;
    }
    ctx->pc = 0x22D074u;
    SET_GPR_U32(ctx, 31, 0x22D07Cu);
    ctx->pc = 0x22D078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D074u;
    // 0x22d078: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22D074u, 0x22D07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D07Cu;
label_22d07c:
    // 0x22d07c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22d07cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_22d080:
    // 0x22d080: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x22d080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
label_22d084:
    // 0x22d084: 0xc089974  jal         func_2265D0
label_22d088:
    if (ctx->pc == 0x22D088u) {
        ctx->pc = 0x22D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D084u;
        // 0x22d088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D08Cu;
        goto label_22d08c;
    }
    ctx->pc = 0x22D084u;
    SET_GPR_U32(ctx, 31, 0x22D08Cu);
    ctx->pc = 0x22D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D084u;
    // 0x22d088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22D084u, 0x22D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D08Cu;
label_22d08c:
    // 0x22d08c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22d08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_22d090:
    // 0x22d090: 0x52e78  dsll        $a1, $a1, 25
    ctx->pc = 0x22d090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 25);
label_22d094:
    // 0x22d094: 0xc089974  jal         func_2265D0
label_22d098:
    if (ctx->pc == 0x22D098u) {
        ctx->pc = 0x22D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D094u;
        // 0x22d098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D09Cu;
        goto label_22d09c;
    }
    ctx->pc = 0x22D094u;
    SET_GPR_U32(ctx, 31, 0x22D09Cu);
    ctx->pc = 0x22D098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D094u;
    // 0x22d098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22D094u, 0x22D09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D09Cu;
label_22d09c:
    // 0x22d09c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d0a0:
    // 0x22d0a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22d0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d0a4:
    // 0x22d0a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22d0a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d0a8:
    // 0x22d0a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22d0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d0ac:
    // 0x22d0ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22d0acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d0b0:
    // 0x22d0b0: 0xc0875a0  jal         func_21D680
label_22d0b4:
    if (ctx->pc == 0x22D0B4u) {
        ctx->pc = 0x22D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0B0u;
        // 0x22d0b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D0B8u;
        goto label_22d0b8;
    }
    ctx->pc = 0x22D0B0u;
    SET_GPR_U32(ctx, 31, 0x22D0B8u);
    ctx->pc = 0x22D0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D0B0u;
    // 0x22d0b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x22D0B0u, 0x22D0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D0B8u;
label_22d0b8:
    // 0x22d0b8: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x22d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_22d0bc:
    // 0x22d0bc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x22d0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_22d0c0:
    // 0x22d0c0: 0xa0400128  sb          $zero, 0x128($v0)
    ctx->pc = 0x22d0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 296), (uint8_t)GPR_U32(ctx, 0));
label_22d0c4:
    // 0x22d0c4: 0x8cc3b734  lw          $v1, -0x48CC($a2)
    ctx->pc = 0x22d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948660)));
label_22d0c8:
    // 0x22d0c8: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x22d0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_22d0cc:
    // 0x22d0cc: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x22d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_22d0d0:
    // 0x22d0d0: 0xac820130  sw          $v0, 0x130($a0)
    ctx->pc = 0x22d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 2));
label_22d0d4:
    // 0x22d0d4: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x22d0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_22d0d8:
    // 0x22d0d8: 0xac60012c  sw          $zero, 0x12C($v1)
    ctx->pc = 0x22d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 0));
label_22d0dc:
    // 0x22d0dc: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x22d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_22d0e0:
    // 0x22d0e0: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x22d0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
label_22d0e4:
    // 0x22d0e4: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x22d0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_22d0e8:
    // 0x22d0e8: 0xa0600128  sb          $zero, 0x128($v1)
    ctx->pc = 0x22d0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 296), (uint8_t)GPR_U32(ctx, 0));
label_22d0ec:
    // 0x22d0ec: 0x8cc4b734  lw          $a0, -0x48CC($a2)
    ctx->pc = 0x22d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948660)));
label_22d0f0:
    // 0x22d0f0: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x22d0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_22d0f4:
    // 0x22d0f4: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x22d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_22d0f8:
    // 0x22d0f8: 0xaca20130  sw          $v0, 0x130($a1)
    ctx->pc = 0x22d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 304), GPR_U32(ctx, 2));
label_22d0fc:
    // 0x22d0fc: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x22d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_22d100:
    // 0x22d100: 0xac60012c  sw          $zero, 0x12C($v1)
    ctx->pc = 0x22d100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 0));
label_22d104:
    // 0x22d104: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x22d104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_22d108:
    // 0x22d108: 0xac800138  sw          $zero, 0x138($a0)
    ctx->pc = 0x22d108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 0));
label_22d10c:
    // 0x22d10c: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x22d10cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_22d110:
    // 0x22d110: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22d110u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_22d114:
    // 0x22d114: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_22d118:
    if (ctx->pc == 0x22D118u) {
        ctx->pc = 0x22D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D114u;
        // 0x22d118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D11Cu;
        goto label_22d11c;
    }
    ctx->pc = 0x22D114u;
    {
        const bool branch_taken_0x22d114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D114u;
        // 0x22d118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d114) {
            ctx->pc = 0x22D138u;
            goto label_22d138;
        }
    }
    ctx->pc = 0x22D11Cu;
label_22d11c:
    // 0x22d11c: 0xc0a0ada  jal         func_282B68
label_22d120:
    if (ctx->pc == 0x22D120u) {
        ctx->pc = 0x22D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D11Cu;
        // 0x22d120: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D124u;
        goto label_22d124;
    }
    ctx->pc = 0x22D11Cu;
    SET_GPR_U32(ctx, 31, 0x22D124u);
    ctx->pc = 0x22D120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D11Cu;
    // 0x22d120: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282B68u, 0x22D11Cu, 0x22D124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D124u;
label_22d124:
    // 0x22d124: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x22d124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_22d128:
    // 0x22d128: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x22d128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_22d12c:
    // 0x22d12c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x22d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_22d130:
    // 0x22d130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22d134:
    // 0x22d134: 0xac820134  sw          $v0, 0x134($a0)
    ctx->pc = 0x22d134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 2));
label_22d138:
    // 0x22d138: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x22d138u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_22d13c:
    // 0x22d13c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22d13cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_22d140:
    // 0x22d140: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_22d144:
    if (ctx->pc == 0x22D144u) {
        ctx->pc = 0x22D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D140u;
        // 0x22d144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D148u;
        goto label_22d148;
    }
    ctx->pc = 0x22D140u;
    {
        const bool branch_taken_0x22d140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D140u;
        // 0x22d144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d140) {
            ctx->pc = 0x22D1D0u;
            goto label_22d1d0;
        }
    }
    ctx->pc = 0x22D148u;
label_22d148:
    // 0x22d148: 0xc0a0c1e  jal         func_283078
label_22d14c:
    if (ctx->pc == 0x22D14Cu) {
        ctx->pc = 0x22D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D148u;
        // 0x22d14c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D150u;
        goto label_22d150;
    }
    ctx->pc = 0x22D148u;
    SET_GPR_U32(ctx, 31, 0x22D150u);
    ctx->pc = 0x22D14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D148u;
    // 0x22d14c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283078u, 0x22D148u, 0x22D150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D150u;
label_22d150:
    // 0x22d150: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x22d150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_22d154:
    // 0x22d154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22d154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d158:
    // 0x22d158: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x22d158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_22d15c:
    // 0x22d15c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x22d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_22d160:
    // 0x22d160: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x22d160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_22d164:
    // 0x22d164: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22d164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_22d168:
    // 0x22d168: 0xac620134  sw          $v0, 0x134($v1)
    ctx->pc = 0x22d168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 2));
label_22d16c:
    // 0x22d16c: 0xc047f9a  jal         func_11FE68
label_22d170:
    if (ctx->pc == 0x22D170u) {
        ctx->pc = 0x22D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D16Cu;
        // 0x22d170: 0x820401b0  lb          $a0, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D174u;
        goto label_22d174;
    }
    ctx->pc = 0x22D16Cu;
    SET_GPR_U32(ctx, 31, 0x22D174u);
    ctx->pc = 0x22D170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D16Cu;
    // 0x22d170: 0x820401b0  lb          $a0, 0x1B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE68u, 0x22D16Cu, 0x22D174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D174u;
label_22d174:
    // 0x22d174: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22d174u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d178:
    // 0x22d178: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
label_22d17c:
    if (ctx->pc == 0x22D17Cu) {
        ctx->pc = 0x22D180u;
        goto label_22d180;
    }
    ctx->pc = 0x22D178u;
    {
        const bool branch_taken_0x22d178 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d178) {
            ctx->pc = 0x22D1D0u;
            goto label_22d1d0;
        }
    }
    ctx->pc = 0x22D180u;
label_22d180:
    // 0x22d180: 0xc047e72  jal         func_11F9C8
label_22d184:
    if (ctx->pc == 0x22D184u) {
        ctx->pc = 0x22D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D180u;
        // 0x22d184: 0x820401b0  lb          $a0, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D188u;
        goto label_22d188;
    }
    ctx->pc = 0x22D180u;
    SET_GPR_U32(ctx, 31, 0x22D188u);
    ctx->pc = 0x22D184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D180u;
    // 0x22d184: 0x820401b0  lb          $a0, 0x1B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x22D180u, 0x22D188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D188u;
label_22d188:
    // 0x22d188: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22d188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22d18c:
    // 0x22d18c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22d18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d190:
    // 0x22d190: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22d190u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22d194:
    // 0x22d194: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22d194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22d198:
    // 0x22d198: 0x40f809  jalr        $v0
label_22d19c:
    if (ctx->pc == 0x22D19Cu) {
        ctx->pc = 0x22D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D198u;
        // 0x22d19c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D1A0u;
        goto label_22d1a0;
    }
    ctx->pc = 0x22D198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D1A0u);
        ctx->pc = 0x22D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D198u;
        // 0x22d19c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D198u, 0x22D1A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D1A0u;
label_22d1a0:
    // 0x22d1a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22d1a4:
    // 0x22d1a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22d1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d1a8:
    // 0x22d1a8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22d1a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22d1ac:
    // 0x22d1ac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22d1b0:
    // 0x22d1b0: 0x40f809  jalr        $v0
label_22d1b4:
    if (ctx->pc == 0x22D1B4u) {
        ctx->pc = 0x22D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1B0u;
        // 0x22d1b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D1B8u;
        goto label_22d1b8;
    }
    ctx->pc = 0x22D1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D1B8u);
        ctx->pc = 0x22D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1B0u;
        // 0x22d1b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D1B0u, 0x22D1B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D1B8u;
label_22d1b8:
    // 0x22d1b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22d1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22d1bc:
    // 0x22d1bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22d1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d1c0:
    // 0x22d1c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22d1c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d1c4:
    // 0x22d1c4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x22d1c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d1c8:
    // 0x22d1c8: 0xc04d86a  jal         func_1361A8
label_22d1cc:
    if (ctx->pc == 0x22D1CCu) {
        ctx->pc = 0x22D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1C8u;
        // 0x22d1cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D1D0u;
        goto label_22d1d0;
    }
    ctx->pc = 0x22D1C8u;
    SET_GPR_U32(ctx, 31, 0x22D1D0u);
    ctx->pc = 0x22D1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D1C8u;
    // 0x22d1cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A8u, 0x22D1C8u, 0x22D1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D1D0u;
label_22d1d0:
    // 0x22d1d0: 0xc0984ea  jal         func_2613A8
label_22d1d4:
    if (ctx->pc == 0x22D1D4u) {
        ctx->pc = 0x22D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1D0u;
        // 0x22d1d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D1D8u;
        goto label_22d1d8;
    }
    ctx->pc = 0x22D1D0u;
    SET_GPR_U32(ctx, 31, 0x22D1D8u);
    ctx->pc = 0x22D1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D1D0u;
    // 0x22d1d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2613A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2613A8u, 0x22D1D0u, 0x22D1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D1D8u;
label_22d1d8:
    // 0x22d1d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22d1d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22d1dc:
    // 0x22d1dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22d1dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22d1e0:
    // 0x22d1e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22d1e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22d1e4:
    // 0x22d1e4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22d1e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22d1e8:
    // 0x22d1e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22d1ec:
    // 0x22d1ec: 0x3e00008  jr          $ra
label_22d1f0:
    if (ctx->pc == 0x22D1F0u) {
        ctx->pc = 0x22D1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1ECu;
        // 0x22d1f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D1F4u;
        goto label_22d1f4;
    }
    ctx->pc = 0x22D1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1ECu;
        // 0x22d1f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D1F4u;
label_22d1f4:
    // 0x22d1f4: 0x0  nop
    ctx->pc = 0x22d1f4u;
    // NOP
    ctx->pc = 0x22d1f8u;
}
