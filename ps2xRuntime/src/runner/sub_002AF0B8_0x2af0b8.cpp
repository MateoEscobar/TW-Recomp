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

// Function: sub_002AF0B8
// Address: 0x2af0b8 - 0x2af278
void sub_002AF0B8_0x2af0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF0B8_0x2af0b8");
#endif

    switch (ctx->pc) {
        case 0x2af0f8u: goto label_2af0f8;
        case 0x2af100u: goto label_2af100;
        case 0x2af114u: goto label_2af114;
        case 0x2af124u: goto label_2af124;
        case 0x2af138u: goto label_2af138;
        case 0x2af148u: goto label_2af148;
        case 0x2af178u: goto label_2af178;
        case 0x2af184u: goto label_2af184;
        case 0x2af18cu: goto label_2af18c;
        case 0x2af198u: goto label_2af198;
        case 0x2af1c0u: goto label_2af1c0;
        case 0x2af1d4u: goto label_2af1d4;
        case 0x2af1e4u: goto label_2af1e4;
        case 0x2af1f8u: goto label_2af1f8;
        case 0x2af200u: goto label_2af200;
        case 0x2af208u: goto label_2af208;
        case 0x2af230u: goto label_2af230;
        case 0x2af238u: goto label_2af238;
        case 0x2af244u: goto label_2af244;
        default: break;
    }

    ctx->pc = 0x2af0b8u;

    // 0x2af0b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2af0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2af0bc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2af0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2af0c0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2af0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2af0c4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2af0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2af0c8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2af0c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af0cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2af0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2af0d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2af0d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af0d4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2af0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2af0d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2af0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2af0dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2af0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af0e0: 0xa05102d3  sb          $s1, 0x2D3($v0)
    ctx->pc = 0x2af0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 723), (uint8_t)GPR_U32(ctx, 17));
    // 0x2af0e4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2af0e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af0e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2af0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af0ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2af0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af0f0: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2AF0F0u;
    SET_GPR_U32(ctx, 31, 0x2AF0F8u);
    ctx->pc = 0x2AF0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF0F0u;
    // 0x2af0f4: 0xa04002e5  sb          $zero, 0x2E5($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 741), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2AF0F0u, 0x2AF0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF0F8u;
label_2af0f8:
    // 0x2af0f8: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2AF0F8u;
    SET_GPR_U32(ctx, 31, 0x2AF100u);
    ctx->pc = 0x2AF0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF0F8u;
    // 0x2af0fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2AF0F8u, 0x2AF100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF100u;
label_2af100:
    // 0x2af100: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2af100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2af104: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2af104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af108: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2af108u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af10c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2AF10Cu;
    SET_GPR_U32(ctx, 31, 0x2AF114u);
    ctx->pc = 0x2AF110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF10Cu;
    // 0x2af110: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AF10Cu, 0x2AF114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF114u;
label_2af114:
    // 0x2af114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af118: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2af118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af11c: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2AF11Cu;
    SET_GPR_U32(ctx, 31, 0x2AF124u);
    ctx->pc = 0x2AF120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF11Cu;
    // 0x2af120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2AF11Cu, 0x2AF124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF124u;
label_2af124:
    // 0x2af124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2af124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af128: 0x5200004b  beql        $s0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x2AF128u;
    {
        const bool branch_taken_0x2af128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af128) {
            ctx->pc = 0x2AF12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF128u;
            // 0x2af12c: 0xa2400029  sb          $zero, 0x29($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF258u;
            goto label_2af258;
        }
    }
    ctx->pc = 0x2AF130u;
    // 0x2af130: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x2AF130u;
    SET_GPR_U32(ctx, 31, 0x2AF138u);
    ctx->pc = 0x2AF134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF130u;
    // 0x2af134: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x2AF130u, 0x2AF138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF138u;
label_2af138:
    // 0x2af138: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AF138u;
    {
        const bool branch_taken_0x2af138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af138) {
            ctx->pc = 0x2AF13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF138u;
            // 0x2af13c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF17Cu;
            goto label_2af17c;
        }
    }
    ctx->pc = 0x2AF140u;
    // 0x2af140: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x2AF140u;
    SET_GPR_U32(ctx, 31, 0x2AF148u);
    ctx->pc = 0x2AF144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF140u;
    // 0x2af144: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2AF140u, 0x2AF148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF148u;
label_2af148:
    // 0x2af148: 0x5451000c  bnel        $v0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2AF148u;
    {
        const bool branch_taken_0x2af148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2af148) {
            ctx->pc = 0x2AF14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF148u;
            // 0x2af14c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF17Cu;
            goto label_2af17c;
        }
    }
    ctx->pc = 0x2AF150u;
    // 0x2af150: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2af150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2af154: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2af154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2af158: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2af158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af15c: 0x8e490020  lw          $t1, 0x20($s2)
    ctx->pc = 0x2af15cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2af160: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x2af160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2af164: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af168: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2af168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af16c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2af16cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af170: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2AF170u;
    SET_GPR_U32(ctx, 31, 0x2AF178u);
    ctx->pc = 0x2AF174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF170u;
    // 0x2af174: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AF170u, 0x2AF178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF178u;
label_2af178:
    // 0x2af178: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2af178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2af17c:
    // 0x2af17c: 0xc0a35a8  jal         func_28D6A0
    ctx->pc = 0x2AF17Cu;
    SET_GPR_U32(ctx, 31, 0x2AF184u);
    ctx->pc = 0x2AF180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF17Cu;
    // 0x2af180: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D6A0u, 0x2AF17Cu, 0x2AF184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF184u;
label_2af184:
    // 0x2af184: 0xc087502  jal         func_21D408
    ctx->pc = 0x2AF184u;
    SET_GPR_U32(ctx, 31, 0x2AF18Cu);
    ctx->pc = 0x2AF188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF184u;
    // 0x2af188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AF184u, 0x2AF18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF18Cu;
label_2af18c:
    // 0x2af18c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af190: 0xc0a35a8  jal         func_28D6A0
    ctx->pc = 0x2AF190u;
    SET_GPR_U32(ctx, 31, 0x2AF198u);
    ctx->pc = 0x2AF194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF190u;
    // 0x2af194: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D6A0u, 0x2AF190u, 0x2AF198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF198u;
label_2af198:
    // 0x2af198: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x2af198u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2af19c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2af19cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2af1a0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2AF1A0u;
    {
        const bool branch_taken_0x2af1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF1A0u;
        // 0x2af1a4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af1a0) {
            ctx->pc = 0x2AF254u;
            goto label_2af254;
        }
    }
    ctx->pc = 0x2AF1A8u;
    // 0x2af1a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2af1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af1ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2af1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2af1b0: 0x54640029  bnel        $v1, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2AF1B0u;
    {
        const bool branch_taken_0x2af1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2af1b0) {
            ctx->pc = 0x2AF1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF1B0u;
            // 0x2af1b4: 0xa2400029  sb          $zero, 0x29($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF258u;
            goto label_2af258;
        }
    }
    ctx->pc = 0x2AF1B8u;
    // 0x2af1b8: 0xc087502  jal         func_21D408
    ctx->pc = 0x2AF1B8u;
    SET_GPR_U32(ctx, 31, 0x2AF1C0u);
    ctx->pc = 0x2AF1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF1B8u;
    // 0x2af1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AF1B8u, 0x2AF1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF1C0u;
label_2af1c0:
    // 0x2af1c0: 0x904302e4  lbu         $v1, 0x2E4($v0)
    ctx->pc = 0x2af1c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 740)));
    // 0x2af1c4: 0x24440124  addiu       $a0, $v0, 0x124
    ctx->pc = 0x2af1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    // 0x2af1c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2af1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2af1cc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2AF1CCu;
    SET_GPR_U32(ctx, 31, 0x2AF1D4u);
    ctx->pc = 0x2AF1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF1CCu;
    // 0x2af1d0: 0xa04302e4  sb          $v1, 0x2E4($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 740), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AF1CCu, 0x2AF1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF1D4u;
label_2af1d4:
    // 0x2af1d4: 0x54530004  bnel        $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF1D4u;
    {
        const bool branch_taken_0x2af1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2af1d4) {
            ctx->pc = 0x2AF1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF1D4u;
            // 0x2af1d8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF1E8u;
            goto label_2af1e8;
        }
    }
    ctx->pc = 0x2AF1DCu;
    // 0x2af1dc: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2AF1DCu;
    SET_GPR_U32(ctx, 31, 0x2AF1E4u);
    ctx->pc = 0x2AF1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF1DCu;
    // 0x2af1e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2AF1DCu, 0x2AF1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF1E4u;
label_2af1e4:
    // 0x2af1e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2af1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2af1e8:
    // 0x2af1e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2af1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af1ec: 0x24540164  addiu       $s4, $v0, 0x164
    ctx->pc = 0x2af1ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
    // 0x2af1f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2af1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af1f4: 0x0  nop
    ctx->pc = 0x2af1f4u;
    // NOP
label_2af1f8:
    // 0x2af1f8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x2AF1F8u;
    SET_GPR_U32(ctx, 31, 0x2AF200u);
    ctx->pc = 0x2AF1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF1F8u;
    // 0x2af1fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2AF1F8u, 0x2AF200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF200u;
label_2af200:
    // 0x2af200: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2AF200u;
    SET_GPR_U32(ctx, 31, 0x2AF208u);
    ctx->pc = 0x2AF204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF200u;
    // 0x2af204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AF200u, 0x2AF208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF208u;
label_2af208:
    // 0x2af208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2af208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af20c: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2AF20Cu;
    {
        const bool branch_taken_0x2af20c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af20c) {
            ctx->pc = 0x2AF210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF20Cu;
            // 0x2af210: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF248u;
            goto label_2af248;
        }
    }
    ctx->pc = 0x2AF214u;
    // 0x2af214: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x2af214u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2af218: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2af218u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2af21c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2AF21Cu;
    {
        const bool branch_taken_0x2af21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af21c) {
            ctx->pc = 0x2AF220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF21Cu;
            // 0x2af220: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF248u;
            goto label_2af248;
        }
    }
    ctx->pc = 0x2AF224u;
    // 0x2af224: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2af224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af228: 0xc0a35a8  jal         func_28D6A0
    ctx->pc = 0x2AF228u;
    SET_GPR_U32(ctx, 31, 0x2AF230u);
    ctx->pc = 0x2AF22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF228u;
    // 0x2af22c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D6A0u, 0x2AF228u, 0x2AF230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF230u;
label_2af230:
    // 0x2af230: 0xc087502  jal         func_21D408
    ctx->pc = 0x2AF230u;
    SET_GPR_U32(ctx, 31, 0x2AF238u);
    ctx->pc = 0x2AF234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF230u;
    // 0x2af234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AF230u, 0x2AF238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF238u;
label_2af238:
    // 0x2af238: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af23c: 0xc0a35a8  jal         func_28D6A0
    ctx->pc = 0x2AF23Cu;
    SET_GPR_U32(ctx, 31, 0x2AF244u);
    ctx->pc = 0x2AF240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF23Cu;
    // 0x2af240: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D6A0u, 0x2AF23Cu, 0x2AF244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF244u;
label_2af244:
    // 0x2af244: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2af244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2af248:
    // 0x2af248: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x2af248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2af24c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2AF24Cu;
    {
        const bool branch_taken_0x2af24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF24Cu;
        // 0x2af250: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af24c) {
            ctx->pc = 0x2AF1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af1f8;
        }
    }
    ctx->pc = 0x2AF254u;
label_2af254:
    // 0x2af254: 0xa2400029  sb          $zero, 0x29($s2)
    ctx->pc = 0x2af254u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 0));
label_2af258:
    // 0x2af258: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2af258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2af25c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2af25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2af260: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2af260u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2af264: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2af264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2af268: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2af268u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af26c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2af26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af270: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF270u;
        // 0x2af274: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF278u;
}
