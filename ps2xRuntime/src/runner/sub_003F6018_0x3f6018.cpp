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

// Function: sub_003F6018
// Address: 0x3f6018 - 0x3f60f8
void sub_003F6018_0x3f6018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6018_0x3f6018");
#endif

    switch (ctx->pc) {
        case 0x3f6018u: goto label_3f6018;
        case 0x3f601cu: goto label_3f601c;
        case 0x3f6020u: goto label_3f6020;
        case 0x3f6024u: goto label_3f6024;
        case 0x3f6028u: goto label_3f6028;
        case 0x3f602cu: goto label_3f602c;
        case 0x3f6030u: goto label_3f6030;
        case 0x3f6034u: goto label_3f6034;
        case 0x3f6038u: goto label_3f6038;
        case 0x3f603cu: goto label_3f603c;
        case 0x3f6040u: goto label_3f6040;
        case 0x3f6044u: goto label_3f6044;
        case 0x3f6048u: goto label_3f6048;
        case 0x3f604cu: goto label_3f604c;
        case 0x3f6050u: goto label_3f6050;
        case 0x3f6054u: goto label_3f6054;
        case 0x3f6058u: goto label_3f6058;
        case 0x3f605cu: goto label_3f605c;
        case 0x3f6060u: goto label_3f6060;
        case 0x3f6064u: goto label_3f6064;
        case 0x3f6068u: goto label_3f6068;
        case 0x3f606cu: goto label_3f606c;
        case 0x3f6070u: goto label_3f6070;
        case 0x3f6074u: goto label_3f6074;
        case 0x3f6078u: goto label_3f6078;
        case 0x3f607cu: goto label_3f607c;
        case 0x3f6080u: goto label_3f6080;
        case 0x3f6084u: goto label_3f6084;
        case 0x3f6088u: goto label_3f6088;
        case 0x3f608cu: goto label_3f608c;
        case 0x3f6090u: goto label_3f6090;
        case 0x3f6094u: goto label_3f6094;
        case 0x3f6098u: goto label_3f6098;
        case 0x3f609cu: goto label_3f609c;
        case 0x3f60a0u: goto label_3f60a0;
        case 0x3f60a4u: goto label_3f60a4;
        case 0x3f60a8u: goto label_3f60a8;
        case 0x3f60acu: goto label_3f60ac;
        case 0x3f60b0u: goto label_3f60b0;
        case 0x3f60b4u: goto label_3f60b4;
        case 0x3f60b8u: goto label_3f60b8;
        case 0x3f60bcu: goto label_3f60bc;
        case 0x3f60c0u: goto label_3f60c0;
        case 0x3f60c4u: goto label_3f60c4;
        case 0x3f60c8u: goto label_3f60c8;
        case 0x3f60ccu: goto label_3f60cc;
        case 0x3f60d0u: goto label_3f60d0;
        case 0x3f60d4u: goto label_3f60d4;
        case 0x3f60d8u: goto label_3f60d8;
        case 0x3f60dcu: goto label_3f60dc;
        case 0x3f60e0u: goto label_3f60e0;
        case 0x3f60e4u: goto label_3f60e4;
        case 0x3f60e8u: goto label_3f60e8;
        case 0x3f60ecu: goto label_3f60ec;
        case 0x3f60f0u: goto label_3f60f0;
        case 0x3f60f4u: goto label_3f60f4;
        default: break;
    }

    ctx->pc = 0x3f6018u;

label_3f6018:
    // 0x3f6018: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3f6018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3f601c:
    // 0x3f601c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3f601cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3f6020:
    // 0x3f6020: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3f6020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3f6024:
    // 0x3f6024: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f6024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f6028:
    // 0x3f6028: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3f6028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3f602c:
    // 0x3f602c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f602cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f6030:
    // 0x3f6030: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3f6030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3f6034:
    // 0x3f6034: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f6034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f6038:
    // 0x3f6038: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f6038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f603c:
    // 0x3f603c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f603cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f6040:
    // 0x3f6040: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f6040u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f6044:
    // 0x3f6044: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f6044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f6048:
    // 0x3f6048: 0x40f809  jalr        $v0
label_3f604c:
    if (ctx->pc == 0x3F604Cu) {
        ctx->pc = 0x3F604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6048u;
        // 0x3f604c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6050u;
        goto label_3f6050;
    }
    ctx->pc = 0x3F6048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F6050u);
        ctx->pc = 0x3F604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6048u;
        // 0x3f604c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6048u, 0x3F6050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F6050u;
label_3f6050:
    // 0x3f6050: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x3f6050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3f6054:
    // 0x3f6054: 0xc0e858c  jal         func_3A1630
label_3f6058:
    if (ctx->pc == 0x3F6058u) {
        ctx->pc = 0x3F6058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6054u;
        // 0x3f6058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F605Cu;
        goto label_3f605c;
    }
    ctx->pc = 0x3F6054u;
    SET_GPR_U32(ctx, 31, 0x3F605Cu);
    ctx->pc = 0x3F6058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6054u;
    // 0x3f6058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F6054u, 0x3F605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F605Cu;
label_3f605c:
    // 0x3f605c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f6060:
    // 0x3f6060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f6060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f6064:
    // 0x3f6064: 0xc0ea146  jal         func_3A8518
label_3f6068:
    if (ctx->pc == 0x3F6068u) {
        ctx->pc = 0x3F6068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6064u;
        // 0x3f6068: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F606Cu;
        goto label_3f606c;
    }
    ctx->pc = 0x3F6064u;
    SET_GPR_U32(ctx, 31, 0x3F606Cu);
    ctx->pc = 0x3F6068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6064u;
    // 0x3f6068: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F6064u, 0x3F606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F606Cu;
label_3f606c:
    // 0x3f606c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3f606cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f6070:
    // 0x3f6070: 0xc0ea146  jal         func_3A8518
label_3f6074:
    if (ctx->pc == 0x3F6074u) {
        ctx->pc = 0x3F6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6070u;
        // 0x3f6074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6078u;
        goto label_3f6078;
    }
    ctx->pc = 0x3F6070u;
    SET_GPR_U32(ctx, 31, 0x3F6078u);
    ctx->pc = 0x3F6074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6070u;
    // 0x3f6074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F6070u, 0x3F6078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6078u;
label_3f6078:
    // 0x3f6078: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f6078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f607c:
    // 0x3f607c: 0xc0ea146  jal         func_3A8518
label_3f6080:
    if (ctx->pc == 0x3F6080u) {
        ctx->pc = 0x3F6080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F607Cu;
        // 0x3f6080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6084u;
        goto label_3f6084;
    }
    ctx->pc = 0x3F607Cu;
    SET_GPR_U32(ctx, 31, 0x3F6084u);
    ctx->pc = 0x3F6080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F607Cu;
    // 0x3f6080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F607Cu, 0x3F6084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6084u;
label_3f6084:
    // 0x3f6084: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f6084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f6088:
    // 0x3f6088: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f6088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f608c:
    // 0x3f608c: 0xc0ea12a  jal         func_3A84A8
label_3f6090:
    if (ctx->pc == 0x3F6090u) {
        ctx->pc = 0x3F6090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F608Cu;
        // 0x3f6090: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6094u;
        goto label_3f6094;
    }
    ctx->pc = 0x3F608Cu;
    SET_GPR_U32(ctx, 31, 0x3F6094u);
    ctx->pc = 0x3F6090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F608Cu;
    // 0x3f6090: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F608Cu, 0x3F6094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6094u;
label_3f6094:
    // 0x3f6094: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f6094u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f6098:
    // 0x3f6098: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f6098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f609c:
    // 0x3f609c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f609cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f60a0:
    // 0x3f60a0: 0xc0ea12a  jal         func_3A84A8
label_3f60a4:
    if (ctx->pc == 0x3F60A4u) {
        ctx->pc = 0x3F60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F60A0u;
        // 0x3f60a4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F60A8u;
        goto label_3f60a8;
    }
    ctx->pc = 0x3F60A0u;
    SET_GPR_U32(ctx, 31, 0x3F60A8u);
    ctx->pc = 0x3F60A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F60A0u;
    // 0x3f60a4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F60A0u, 0x3F60A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F60A8u;
label_3f60a8:
    // 0x3f60a8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f60a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f60ac:
    // 0x3f60ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f60acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f60b0:
    // 0x3f60b0: 0xae1200d8  sw          $s2, 0xD8($s0)
    ctx->pc = 0x3f60b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 18));
label_3f60b4:
    // 0x3f60b4: 0xae1300dc  sw          $s3, 0xDC($s0)
    ctx->pc = 0x3f60b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 19));
label_3f60b8:
    // 0x3f60b8: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x3f60b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_3f60bc:
    // 0x3f60bc: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3f60bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3f60c0:
    // 0x3f60c0: 0xc0e91da  jal         func_3A4768
label_3f60c4:
    if (ctx->pc == 0x3F60C4u) {
        ctx->pc = 0x3F60C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F60C0u;
        // 0x3f60c4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F60C8u;
        goto label_3f60c8;
    }
    ctx->pc = 0x3F60C0u;
    SET_GPR_U32(ctx, 31, 0x3F60C8u);
    ctx->pc = 0x3F60C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F60C0u;
    // 0x3f60c4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3F60C0u, 0x3F60C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F60C8u;
label_3f60c8:
    // 0x3f60c8: 0xc0e91da  jal         func_3A4768
label_3f60cc:
    if (ctx->pc == 0x3F60CCu) {
        ctx->pc = 0x3F60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F60C8u;
        // 0x3f60cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F60D0u;
        goto label_3f60d0;
    }
    ctx->pc = 0x3F60C8u;
    SET_GPR_U32(ctx, 31, 0x3F60D0u);
    ctx->pc = 0x3F60CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F60C8u;
    // 0x3f60cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3F60C8u, 0x3F60D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F60D0u;
label_3f60d0:
    // 0x3f60d0: 0xae1400e0  sw          $s4, 0xE0($s0)
    ctx->pc = 0x3f60d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 20));
label_3f60d4:
    // 0x3f60d4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3f60d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f60d8:
    // 0x3f60d8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3f60d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f60dc:
    // 0x3f60dc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3f60dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f60e0:
    // 0x3f60e0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3f60e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f60e4:
    // 0x3f60e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f60e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f60e8:
    // 0x3f60e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f60e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f60ec:
    // 0x3f60ec: 0x3e00008  jr          $ra
label_3f60f0:
    if (ctx->pc == 0x3F60F0u) {
        ctx->pc = 0x3F60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F60ECu;
        // 0x3f60f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F60F4u;
        goto label_3f60f4;
    }
    ctx->pc = 0x3F60ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F60ECu;
        // 0x3f60f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F60ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F60F4u;
label_3f60f4:
    // 0x3f60f4: 0x0  nop
    ctx->pc = 0x3f60f4u;
    // NOP
    ctx->pc = 0x3f60f8u;
}
