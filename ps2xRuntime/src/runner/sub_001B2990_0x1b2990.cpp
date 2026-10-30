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

// Function: sub_001B2990
// Address: 0x1b2990 - 0x1b2b18
void sub_001B2990_0x1b2990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2990_0x1b2990");
#endif

    switch (ctx->pc) {
        case 0x1b29fcu: goto label_1b29fc;
        case 0x1b2a18u: goto label_1b2a18;
        case 0x1b2a34u: goto label_1b2a34;
        case 0x1b2a4cu: goto label_1b2a4c;
        case 0x1b2a68u: goto label_1b2a68;
        case 0x1b2a80u: goto label_1b2a80;
        case 0x1b2a9cu: goto label_1b2a9c;
        case 0x1b2ab8u: goto label_1b2ab8;
        case 0x1b2ad4u: goto label_1b2ad4;
        case 0x1b2aecu: goto label_1b2aec;
        default: break;
    }

    ctx->pc = 0x1b2990u;

    // 0x1b2990: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b2990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b2994: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b2994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b2998: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b2998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b299c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b299cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b29a0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1b29a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29a4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b29a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b29a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b29a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b29acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b29b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b29b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29b4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1b29b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1b29b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b29b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29bc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1b29bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1b29c0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1b29c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b29c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b29c8: 0x12020049  beq         $s0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1B29C8u;
    {
        const bool branch_taken_0x1b29c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B29CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B29C8u;
        // 0x1b29cc: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29c8) {
            ctx->pc = 0x1B2AF0u;
            goto label_1b2af0;
        }
    }
    ctx->pc = 0x1B29D0u;
    // 0x1b29d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b29d4: 0x1602003a  bne         $s0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1B29D4u;
    {
        const bool branch_taken_0x1b29d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B29D4u;
        // 0x1b29d8: 0x264415d0  addiu       $a0, $s2, 0x15D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29d4) {
            ctx->pc = 0x1B2AC0u;
            goto label_1b2ac0;
        }
    }
    ctx->pc = 0x1B29DCu;
    // 0x1b29dc: 0x265015d0  addiu       $s0, $s2, 0x15D0
    ctx->pc = 0x1b29dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5584));
    // 0x1b29e0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b29e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b29e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b29e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b29e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29ec: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b29ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b29f0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1b29f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b29f4: 0xc071340  jal         func_1C4D00
    ctx->pc = 0x1B29F4u;
    SET_GPR_U32(ctx, 31, 0x1B29FCu);
    ctx->pc = 0x1B29F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B29F4u;
    // 0x1b29f8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4D00u, 0x1B29F4u, 0x1B29FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B29FCu;
label_1b29fc:
    // 0x1b29fc: 0x26523f10  addiu       $s2, $s2, 0x3F10
    ctx->pc = 0x1b29fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16144));
    // 0x1b2a00: 0xc62cd424  lwc1        $f12, -0x2BDC($s1)
    ctx->pc = 0x1b2a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b2a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a0c: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x1b2a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x1b2a10: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B2A10u;
    SET_GPR_U32(ctx, 31, 0x1B2A18u);
    ctx->pc = 0x1B2A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A10u;
    // 0x1b2a14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B2A10u, 0x1B2A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A18u;
label_1b2a18:
    // 0x1b2a18: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b2a18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b2a1c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b2a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b2a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a28: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b2a28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b2a2c: 0xc071340  jal         func_1C4D00
    ctx->pc = 0x1B2A2Cu;
    SET_GPR_U32(ctx, 31, 0x1B2A34u);
    ctx->pc = 0x1B2A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A2Cu;
    // 0x1b2a30: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4D00u, 0x1B2A2Cu, 0x1B2A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A34u;
label_1b2a34:
    // 0x1b2a34: 0xc62cd424  lwc1        $f12, -0x2BDC($s1)
    ctx->pc = 0x1b2a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b2a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a40: 0x24060167  addiu       $a2, $zero, 0x167
    ctx->pc = 0x1b2a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 359));
    // 0x1b2a44: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B2A44u;
    SET_GPR_U32(ctx, 31, 0x1B2A4Cu);
    ctx->pc = 0x1B2A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A44u;
    // 0x1b2a48: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B2A44u, 0x1B2A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A4Cu;
label_1b2a4c:
    // 0x1b2a4c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b2a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b2a50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b2a50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b2a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a5c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b2a5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b2a60: 0xc071340  jal         func_1C4D00
    ctx->pc = 0x1B2A60u;
    SET_GPR_U32(ctx, 31, 0x1B2A68u);
    ctx->pc = 0x1B2A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A60u;
    // 0x1b2a64: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4D00u, 0x1B2A60u, 0x1B2A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A68u;
label_1b2a68:
    // 0x1b2a68: 0xc62cd424  lwc1        $f12, -0x2BDC($s1)
    ctx->pc = 0x1b2a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2a6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b2a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a74: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x1b2a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x1b2a78: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B2A78u;
    SET_GPR_U32(ctx, 31, 0x1B2A80u);
    ctx->pc = 0x1B2A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A78u;
    // 0x1b2a7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B2A78u, 0x1B2A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A80u;
label_1b2a80:
    // 0x1b2a80: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1b2a80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1b2a84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b2a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a8c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b2a8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b2a90: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1b2a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b2a94: 0xc071340  jal         func_1C4D00
    ctx->pc = 0x1B2A94u;
    SET_GPR_U32(ctx, 31, 0x1B2A9Cu);
    ctx->pc = 0x1B2A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A94u;
    // 0x1b2a98: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4D00u, 0x1B2A94u, 0x1B2A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A9Cu;
label_1b2a9c:
    // 0x1b2a9c: 0xc62cd424  lwc1        $f12, -0x2BDC($s1)
    ctx->pc = 0x1b2a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2aa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2aa4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b2aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2aa8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b2aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2aac: 0x24060167  addiu       $a2, $zero, 0x167
    ctx->pc = 0x1b2aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 359));
    // 0x1b2ab0: 0xc0711da  jal         func_1C4768
    ctx->pc = 0x1B2AB0u;
    SET_GPR_U32(ctx, 31, 0x1B2AB8u);
    ctx->pc = 0x1B2AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2AB0u;
    // 0x1b2ab4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x1B2AB0u, 0x1B2AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2AB8u;
label_1b2ab8:
    // 0x1b2ab8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B2AB8u;
    {
        const bool branch_taken_0x1b2ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2AB8u;
        // 0x1b2abc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ab8) {
            ctx->pc = 0x1B2AF4u;
            goto label_1b2af4;
        }
    }
    ctx->pc = 0x1B2AC0u;
label_1b2ac0:
    // 0x1b2ac0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b2ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ac4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b2ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ac8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b2ac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2acc: 0xc071340  jal         func_1C4D00
    ctx->pc = 0x1B2ACCu;
    SET_GPR_U32(ctx, 31, 0x1B2AD4u);
    ctx->pc = 0x1B2AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2ACCu;
    // 0x1b2ad0: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4D00u, 0x1B2ACCu, 0x1B2AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2AD4u;
label_1b2ad4:
    // 0x1b2ad4: 0x26443f10  addiu       $a0, $s2, 0x3F10
    ctx->pc = 0x1b2ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16144));
    // 0x1b2ad8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b2ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2adc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b2adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ae0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b2ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ae4: 0xc071340  jal         func_1C4D00
    ctx->pc = 0x1B2AE4u;
    SET_GPR_U32(ctx, 31, 0x1B2AECu);
    ctx->pc = 0x1B2AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2AE4u;
    // 0x1b2ae8: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4D00u, 0x1B2AE4u, 0x1B2AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2AECu;
label_1b2aec:
    // 0x1b2aec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b2aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b2af0:
    // 0x1b2af0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b2af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b2af4:
    // 0x1b2af4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b2af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b2af8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b2af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2afc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b2afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2b00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b2b00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2b04: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1b2b04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2b08: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1b2b08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2b0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2b10: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B10u;
        // 0x1b2b14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2B18u;
}
