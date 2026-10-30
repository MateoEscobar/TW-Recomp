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

// Function: sub_003DF038
// Address: 0x3df038 - 0x3df1a8
void sub_003DF038_0x3df038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF038_0x3df038");
#endif

    switch (ctx->pc) {
        case 0x3df038u: goto label_3df038;
        case 0x3df03cu: goto label_3df03c;
        case 0x3df040u: goto label_3df040;
        case 0x3df044u: goto label_3df044;
        case 0x3df048u: goto label_3df048;
        case 0x3df04cu: goto label_3df04c;
        case 0x3df050u: goto label_3df050;
        case 0x3df054u: goto label_3df054;
        case 0x3df058u: goto label_3df058;
        case 0x3df05cu: goto label_3df05c;
        case 0x3df060u: goto label_3df060;
        case 0x3df064u: goto label_3df064;
        case 0x3df068u: goto label_3df068;
        case 0x3df06cu: goto label_3df06c;
        case 0x3df070u: goto label_3df070;
        case 0x3df074u: goto label_3df074;
        case 0x3df078u: goto label_3df078;
        case 0x3df07cu: goto label_3df07c;
        case 0x3df080u: goto label_3df080;
        case 0x3df084u: goto label_3df084;
        case 0x3df088u: goto label_3df088;
        case 0x3df08cu: goto label_3df08c;
        case 0x3df090u: goto label_3df090;
        case 0x3df094u: goto label_3df094;
        case 0x3df098u: goto label_3df098;
        case 0x3df09cu: goto label_3df09c;
        case 0x3df0a0u: goto label_3df0a0;
        case 0x3df0a4u: goto label_3df0a4;
        case 0x3df0a8u: goto label_3df0a8;
        case 0x3df0acu: goto label_3df0ac;
        case 0x3df0b0u: goto label_3df0b0;
        case 0x3df0b4u: goto label_3df0b4;
        case 0x3df0b8u: goto label_3df0b8;
        case 0x3df0bcu: goto label_3df0bc;
        case 0x3df0c0u: goto label_3df0c0;
        case 0x3df0c4u: goto label_3df0c4;
        case 0x3df0c8u: goto label_3df0c8;
        case 0x3df0ccu: goto label_3df0cc;
        case 0x3df0d0u: goto label_3df0d0;
        case 0x3df0d4u: goto label_3df0d4;
        case 0x3df0d8u: goto label_3df0d8;
        case 0x3df0dcu: goto label_3df0dc;
        case 0x3df0e0u: goto label_3df0e0;
        case 0x3df0e4u: goto label_3df0e4;
        case 0x3df0e8u: goto label_3df0e8;
        case 0x3df0ecu: goto label_3df0ec;
        case 0x3df0f0u: goto label_3df0f0;
        case 0x3df0f4u: goto label_3df0f4;
        case 0x3df0f8u: goto label_3df0f8;
        case 0x3df0fcu: goto label_3df0fc;
        case 0x3df100u: goto label_3df100;
        case 0x3df104u: goto label_3df104;
        case 0x3df108u: goto label_3df108;
        case 0x3df10cu: goto label_3df10c;
        case 0x3df110u: goto label_3df110;
        case 0x3df114u: goto label_3df114;
        case 0x3df118u: goto label_3df118;
        case 0x3df11cu: goto label_3df11c;
        case 0x3df120u: goto label_3df120;
        case 0x3df124u: goto label_3df124;
        case 0x3df128u: goto label_3df128;
        case 0x3df12cu: goto label_3df12c;
        case 0x3df130u: goto label_3df130;
        case 0x3df134u: goto label_3df134;
        case 0x3df138u: goto label_3df138;
        case 0x3df13cu: goto label_3df13c;
        case 0x3df140u: goto label_3df140;
        case 0x3df144u: goto label_3df144;
        case 0x3df148u: goto label_3df148;
        case 0x3df14cu: goto label_3df14c;
        case 0x3df150u: goto label_3df150;
        case 0x3df154u: goto label_3df154;
        case 0x3df158u: goto label_3df158;
        case 0x3df15cu: goto label_3df15c;
        case 0x3df160u: goto label_3df160;
        case 0x3df164u: goto label_3df164;
        case 0x3df168u: goto label_3df168;
        case 0x3df16cu: goto label_3df16c;
        case 0x3df170u: goto label_3df170;
        case 0x3df174u: goto label_3df174;
        case 0x3df178u: goto label_3df178;
        case 0x3df17cu: goto label_3df17c;
        case 0x3df180u: goto label_3df180;
        case 0x3df184u: goto label_3df184;
        case 0x3df188u: goto label_3df188;
        case 0x3df18cu: goto label_3df18c;
        case 0x3df190u: goto label_3df190;
        case 0x3df194u: goto label_3df194;
        case 0x3df198u: goto label_3df198;
        case 0x3df19cu: goto label_3df19c;
        case 0x3df1a0u: goto label_3df1a0;
        case 0x3df1a4u: goto label_3df1a4;
        default: break;
    }

    ctx->pc = 0x3df038u;

label_3df038:
    // 0x3df038: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3df038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3df03c:
    // 0x3df03c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3df03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_3df040:
    // 0x3df040: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3df040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_3df044:
    // 0x3df044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3df044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3df048:
    // 0x3df048: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3df048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_3df04c:
    // 0x3df04c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3df04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3df050:
    // 0x3df050: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3df050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3df054:
    // 0x3df054: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3df054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3df058:
    // 0x3df058: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3df058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3df05c:
    // 0x3df05c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3df05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3df060:
    // 0x3df060: 0x40f809  jalr        $v0
label_3df064:
    if (ctx->pc == 0x3DF064u) {
        ctx->pc = 0x3DF064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF060u;
        // 0x3df064: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF068u;
        goto label_3df068;
    }
    ctx->pc = 0x3DF060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DF068u);
        ctx->pc = 0x3DF064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF060u;
        // 0x3df064: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF060u, 0x3DF068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DF068u;
label_3df068:
    // 0x3df068: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3df068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3df06c:
    // 0x3df06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3df06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df070:
    // 0x3df070: 0xc0e858c  jal         func_3A1630
label_3df074:
    if (ctx->pc == 0x3DF074u) {
        ctx->pc = 0x3DF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF070u;
        // 0x3df074: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF078u;
        goto label_3df078;
    }
    ctx->pc = 0x3DF070u;
    SET_GPR_U32(ctx, 31, 0x3DF078u);
    ctx->pc = 0x3DF074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF070u;
    // 0x3df074: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DF070u, 0x3DF078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF078u;
label_3df078:
    // 0x3df078: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3df078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3df07c:
    // 0x3df07c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3df07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3df080:
    // 0x3df080: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3df080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3df084:
    // 0x3df084: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3df084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3df088:
    // 0x3df088: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3df088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3df08c:
    // 0x3df08c: 0xc0ea12a  jal         func_3A84A8
label_3df090:
    if (ctx->pc == 0x3DF090u) {
        ctx->pc = 0x3DF090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF08Cu;
        // 0x3df090: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF094u;
        goto label_3df094;
    }
    ctx->pc = 0x3DF08Cu;
    SET_GPR_U32(ctx, 31, 0x3DF094u);
    ctx->pc = 0x3DF090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF08Cu;
    // 0x3df090: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DF08Cu, 0x3DF094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF094u;
label_3df094:
    // 0x3df094: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3df094u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3df098:
    // 0x3df098: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3df098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3df09c:
    // 0x3df09c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3df09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df0a0:
    // 0x3df0a0: 0xc0ea12a  jal         func_3A84A8
label_3df0a4:
    if (ctx->pc == 0x3DF0A4u) {
        ctx->pc = 0x3DF0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF0A0u;
        // 0x3df0a4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF0A8u;
        goto label_3df0a8;
    }
    ctx->pc = 0x3DF0A0u;
    SET_GPR_U32(ctx, 31, 0x3DF0A8u);
    ctx->pc = 0x3DF0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF0A0u;
    // 0x3df0a4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DF0A0u, 0x3DF0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF0A8u;
label_3df0a8:
    // 0x3df0a8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3df0a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3df0ac:
    // 0x3df0ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3df0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3df0b0:
    // 0x3df0b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3df0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df0b4:
    // 0x3df0b4: 0xc0ea12a  jal         func_3A84A8
label_3df0b8:
    if (ctx->pc == 0x3DF0B8u) {
        ctx->pc = 0x3DF0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF0B4u;
        // 0x3df0b8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF0BCu;
        goto label_3df0bc;
    }
    ctx->pc = 0x3DF0B4u;
    SET_GPR_U32(ctx, 31, 0x3DF0BCu);
    ctx->pc = 0x3DF0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF0B4u;
    // 0x3df0b8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DF0B4u, 0x3DF0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF0BCu;
label_3df0bc:
    // 0x3df0bc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3df0bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3df0c0:
    // 0x3df0c0: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3df0c0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3df0c4:
    // 0x3df0c4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3df0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3df0c8:
    // 0x3df0c8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3df0c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3df0cc:
    // 0x3df0cc: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x3df0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_3df0d0:
    // 0x3df0d0: 0x342104f7  ori         $at, $at, 0x4F7
    ctx->pc = 0x3df0d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1271);
label_3df0d4:
    // 0x3df0d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3df0d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3df0d8:
    // 0x3df0d8: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3df0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3df0dc:
    // 0x3df0dc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3df0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3df0e0:
    // 0x3df0e0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3df0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3df0e4:
    // 0x3df0e4: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3df0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3df0e8:
    // 0x3df0e8: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3df0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3df0ec:
    // 0x3df0ec: 0x7e040030  sq          $a0, 0x30($s0)
    ctx->pc = 0x3df0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 4));
label_3df0f0:
    // 0x3df0f0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3df0f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3df0f4:
    // 0x3df0f4: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3df0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3df0f8:
    // 0x3df0f8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3df0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3df0fc:
    // 0x3df0fc: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3df0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3df100:
    // 0x3df100: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3df100u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3df104:
    // 0x3df104: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3df104u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3df108:
    // 0x3df108: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3df108u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3df10c:
    // 0x3df10c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3df10cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3df110:
    // 0x3df110: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3df110u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3df114:
    // 0x3df114: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3df114u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3df118:
    // 0x3df118: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3df118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3df11c:
    // 0x3df11c: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3df11cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3df120:
    // 0x3df120: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3df120u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3df124:
    // 0x3df124: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3df124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3df128:
    // 0x3df128: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3df128u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3df12c:
    // 0x3df12c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3df12cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3df130:
    // 0x3df130: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3df130u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3df134:
    // 0x3df134: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3df134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3df138:
    // 0x3df138: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x3df138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_3df13c:
    // 0x3df13c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3df13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df140:
    // 0x3df140: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3df140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3df144:
    // 0x3df144: 0x34a5002d  ori         $a1, $a1, 0x2D
    ctx->pc = 0x3df144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45);
label_3df148:
    // 0x3df148: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3df148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3df14c:
    // 0x3df14c: 0xc0e9404  jal         func_3A5010
label_3df150:
    if (ctx->pc == 0x3DF150u) {
        ctx->pc = 0x3DF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF14Cu;
        // 0x3df150: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF154u;
        goto label_3df154;
    }
    ctx->pc = 0x3DF14Cu;
    SET_GPR_U32(ctx, 31, 0x3DF154u);
    ctx->pc = 0x3DF150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF14Cu;
    // 0x3df150: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3DF14Cu, 0x3DF154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF154u;
label_3df154:
    // 0x3df154: 0x3c03a4a4  lui         $v1, 0xA4A4
    ctx->pc = 0x3df154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42148 << 16));
label_3df158:
    // 0x3df158: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3df158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3df15c:
    // 0x3df15c: 0x3463a4ff  ori         $v1, $v1, 0xA4FF
    ctx->pc = 0x3df15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)42239);
label_3df160:
    // 0x3df160: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3df160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3df164:
    // 0x3df164: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3df164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3df168:
    // 0x3df168: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3df168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3df16c:
    // 0x3df16c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3df16cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3df170:
    // 0x3df170: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3df170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3df174:
    // 0x3df174: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x3df174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_3df178:
    // 0x3df178: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3df178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3df17c:
    // 0x3df17c: 0xc0cd518  jal         func_335460
label_3df180:
    if (ctx->pc == 0x3DF180u) {
        ctx->pc = 0x3DF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF17Cu;
        // 0x3df180: 0xae0300b0  sw          $v1, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF184u;
        goto label_3df184;
    }
    ctx->pc = 0x3DF17Cu;
    SET_GPR_U32(ctx, 31, 0x3DF184u);
    ctx->pc = 0x3DF180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF17Cu;
    // 0x3df180: 0xae0300b0  sw          $v1, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DF17Cu, 0x3DF184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF184u;
label_3df184:
    // 0x3df184: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3df184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3df188:
    // 0x3df188: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x3df188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3df18c:
    // 0x3df18c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3df18cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3df190:
    // 0x3df190: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3df190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3df194:
    // 0x3df194: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3df194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3df198:
    // 0x3df198: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3df198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3df19c:
    // 0x3df19c: 0x3e00008  jr          $ra
label_3df1a0:
    if (ctx->pc == 0x3DF1A0u) {
        ctx->pc = 0x3DF1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF19Cu;
        // 0x3df1a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF1A4u;
        goto label_3df1a4;
    }
    ctx->pc = 0x3DF19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF19Cu;
        // 0x3df1a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF1A4u;
label_3df1a4:
    // 0x3df1a4: 0x0  nop
    ctx->pc = 0x3df1a4u;
    // NOP
    ctx->pc = 0x3df1a8u;
}
