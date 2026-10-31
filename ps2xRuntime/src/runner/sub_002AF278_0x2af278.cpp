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

// Function: sub_002AF278
// Address: 0x2af278 - 0x2af528
void sub_002AF278_0x2af278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF278_0x2af278");
#endif

    switch (ctx->pc) {
        case 0x2af2a8u: goto label_2af2a8;
        case 0x2af2ccu: goto label_2af2cc;
        case 0x2af2dcu: goto label_2af2dc;
        case 0x2af318u: goto label_2af318;
        case 0x2af35cu: goto label_2af35c;
        case 0x2af384u: goto label_2af384;
        case 0x2af390u: goto label_2af390;
        case 0x2af3acu: goto label_2af3ac;
        case 0x2af3b8u: goto label_2af3b8;
        case 0x2af3c8u: goto label_2af3c8;
        case 0x2af3d0u: goto label_2af3d0;
        case 0x2af3d8u: goto label_2af3d8;
        case 0x2af40cu: goto label_2af40c;
        case 0x2af418u: goto label_2af418;
        case 0x2af420u: goto label_2af420;
        case 0x2af428u: goto label_2af428;
        case 0x2af438u: goto label_2af438;
        case 0x2af45cu: goto label_2af45c;
        case 0x2af46cu: goto label_2af46c;
        case 0x2af48cu: goto label_2af48c;
        case 0x2af49cu: goto label_2af49c;
        case 0x2af4b0u: goto label_2af4b0;
        case 0x2af4e0u: goto label_2af4e0;
        case 0x2af4ecu: goto label_2af4ec;
        default: break;
    }

    ctx->pc = 0x2af278u;

    // 0x2af278: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2af278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2af27c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2af27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2af280: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2af280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2af284: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2af284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af288: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2af288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2af28c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2af28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2af290: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2af290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2af294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2af294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2af298: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2af298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2af29c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2af29cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af2a0: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2AF2A0u;
    SET_GPR_U32(ctx, 31, 0x2AF2A8u);
    ctx->pc = 0x2AF2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF2A0u;
    // 0x2af2a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2AF2A0u, 0x2AF2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF2A8u;
label_2af2a8:
    // 0x2af2a8: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2AF2A8u;
    {
        const bool branch_taken_0x2af2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af2a8) {
            ctx->pc = 0x2AF2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF2A8u;
            // 0x2af2ac: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF320u;
            goto label_2af320;
        }
    }
    ctx->pc = 0x2AF2B0u;
    // 0x2af2b0: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x2af2b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2af2b4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AF2B4u;
    {
        const bool branch_taken_0x2af2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af2b4) {
            ctx->pc = 0x2AF2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF2B4u;
            // 0x2af2b8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF320u;
            goto label_2af320;
        }
    }
    ctx->pc = 0x2AF2BCu;
    // 0x2af2bc: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x2af2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x2af2c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2af2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af2c4: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x2AF2C4u;
    SET_GPR_U32(ctx, 31, 0x2AF2CCu);
    ctx->pc = 0x2AF2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF2C4u;
    // 0x2af2c8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2AF2C4u, 0x2AF2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF2CCu;
label_2af2cc:
    // 0x2af2cc: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AF2CCu;
    {
        const bool branch_taken_0x2af2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af2cc) {
            ctx->pc = 0x2AF2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF2CCu;
            // 0x2af2d0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF320u;
            goto label_2af320;
        }
    }
    ctx->pc = 0x2AF2D4u;
    // 0x2af2d4: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x2AF2D4u;
    SET_GPR_U32(ctx, 31, 0x2AF2DCu);
    ctx->pc = 0x2AF2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF2D4u;
    // 0x2af2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2AF2D4u, 0x2AF2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF2DCu;
label_2af2dc:
    // 0x2af2dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2af2dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af2e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af2e4: 0x5642000e  bnel        $s2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2AF2E4u;
    {
        const bool branch_taken_0x2af2e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2af2e4) {
            ctx->pc = 0x2AF2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF2E4u;
            // 0x2af2e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF320u;
            goto label_2af320;
        }
    }
    ctx->pc = 0x2AF2ECu;
    // 0x2af2ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2af2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2af2f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2af2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2af2f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2af2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2af2f8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2af2f8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2af2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af300: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2af300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2af304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af308: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2af308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af30c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2af30cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af310: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2AF310u;
    SET_GPR_U32(ctx, 31, 0x2AF318u);
    ctx->pc = 0x2AF314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF310u;
    // 0x2af314: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AF310u, 0x2AF318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF318u;
label_2af318:
    // 0x2af318: 0xa2320028  sb          $s2, 0x28($s1)
    ctx->pc = 0x2af318u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 18));
    // 0x2af31c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2af31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2af320:
    // 0x2af320: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2af320u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x2af324: 0x1c600074  bgtz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x2AF324u;
    {
        const bool branch_taken_0x2af324 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2AF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF324u;
        // 0x2af328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af324) {
            ctx->pc = 0x2AF4F8u;
            goto label_2af4f8;
        }
    }
    ctx->pc = 0x2AF32Cu;
    // 0x2af32c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2af32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2af330: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x2af330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2af334: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2af334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2af338: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2AF338u;
    {
        const bool branch_taken_0x2af338 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF338u;
        // 0x2af33c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af338) {
            ctx->pc = 0x2AF370u;
            goto label_2af370;
        }
    }
    ctx->pc = 0x2AF340u;
    // 0x2af340: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2af340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2af344: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2af344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2af348: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2af348u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2af34c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF34Cu;
    {
        const bool branch_taken_0x2af34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af34c) {
            ctx->pc = 0x2AF350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF34Cu;
            // 0x2af350: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF374u;
            goto label_2af374;
        }
    }
    ctx->pc = 0x2AF354u;
    // 0x2af354: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2AF354u;
    SET_GPR_U32(ctx, 31, 0x2AF35Cu);
    ctx->pc = 0x2AF358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF354u;
    // 0x2af358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2AF354u, 0x2AF35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF35Cu;
label_2af35c:
    // 0x2af35c: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x2AF35Cu;
    {
        const bool branch_taken_0x2af35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF35Cu;
        // 0x2af360: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af35c) {
            ctx->pc = 0x2AF4F8u;
            goto label_2af4f8;
        }
    }
    ctx->pc = 0x2AF364u;
    // 0x2af364: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x2af364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x2af368: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2AF368u;
    {
        const bool branch_taken_0x2af368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF368u;
        // 0x2af36c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af368) {
            ctx->pc = 0x2AF4F8u;
            goto label_2af4f8;
        }
    }
    ctx->pc = 0x2AF370u;
label_2af370:
    // 0x2af370: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2af370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2af374:
    // 0x2af374: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2af374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2af378: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2af378u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2af37c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2AF37Cu;
    SET_GPR_U32(ctx, 31, 0x2AF384u);
    ctx->pc = 0x2AF380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF37Cu;
    // 0x2af380: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AF37Cu, 0x2AF384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF384u;
label_2af384:
    // 0x2af384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af388: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2AF388u;
    SET_GPR_U32(ctx, 31, 0x2AF390u);
    ctx->pc = 0x2AF38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF388u;
    // 0x2af38c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2AF388u, 0x2AF390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF390u;
label_2af390:
    // 0x2af390: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2af390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af394: 0x12400057  beqz        $s2, . + 4 + (0x57 << 2)
    ctx->pc = 0x2AF394u;
    {
        const bool branch_taken_0x2af394 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF394u;
        // 0x2af398: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af394) {
            ctx->pc = 0x2AF4F4u;
            goto label_2af4f4;
        }
    }
    ctx->pc = 0x2AF39Cu;
    // 0x2af39c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2af39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2af3a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af3a4: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2AF3A4u;
    SET_GPR_U32(ctx, 31, 0x2AF3ACu);
    ctx->pc = 0x2AF3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF3A4u;
    // 0x2af3a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2AF3A4u, 0x2AF3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF3ACu;
label_2af3ac:
    // 0x2af3ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2af3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2af3b0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2AF3B0u;
    SET_GPR_U32(ctx, 31, 0x2AF3B8u);
    ctx->pc = 0x2AF3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF3B0u;
    // 0x2af3b4: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AF3B0u, 0x2AF3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF3B8u;
label_2af3b8:
    // 0x2af3b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2af3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2af3bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2af3bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af3c0: 0x247301a4  addiu       $s3, $v1, 0x1A4
    ctx->pc = 0x2af3c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 420));
    // 0x2af3c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2af3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2af3c8:
    // 0x2af3c8: 0xc137866  jal         func_4DE198
    ctx->pc = 0x2AF3C8u;
    SET_GPR_U32(ctx, 31, 0x2AF3D0u);
    ctx->pc = 0x2AF3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF3C8u;
    // 0x2af3cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x2AF3C8u, 0x2AF3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF3D0u;
label_2af3d0:
    // 0x2af3d0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2AF3D0u;
    SET_GPR_U32(ctx, 31, 0x2AF3D8u);
    ctx->pc = 0x2AF3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF3D0u;
    // 0x2af3d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AF3D0u, 0x2AF3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF3D8u;
label_2af3d8:
    // 0x2af3d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF3D8u;
    {
        const bool branch_taken_0x2af3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF3D8u;
        // 0x2af3dc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af3d8) {
            ctx->pc = 0x2AF3F0u;
            goto label_2af3f0;
        }
    }
    ctx->pc = 0x2AF3E0u;
    // 0x2af3e0: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x2af3e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x2af3e4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2af3e4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2af3e8: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2AF3E8u;
    {
        const bool branch_taken_0x2af3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF3E8u;
        // 0x2af3ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af3e8) {
            ctx->pc = 0x2AF4F8u;
            goto label_2af4f8;
        }
    }
    ctx->pc = 0x2AF3F0u;
label_2af3f0:
    // 0x2af3f0: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x2af3f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2af3f4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2AF3F4u;
    {
        const bool branch_taken_0x2af3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af3f4) {
            ctx->pc = 0x2AF3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF3F4u;
            // 0x2af3f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af3c8;
        }
    }
    ctx->pc = 0x2AF3FCu;
    // 0x2af3fc: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x2AF3FCu;
    {
        const bool branch_taken_0x2af3fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF3FCu;
        // 0x2af400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af3fc) {
            ctx->pc = 0x2AF494u;
            goto label_2af494;
        }
    }
    ctx->pc = 0x2AF404u;
    // 0x2af404: 0xc087502  jal         func_21D408
    ctx->pc = 0x2AF404u;
    SET_GPR_U32(ctx, 31, 0x2AF40Cu);
    ctx->pc = 0x2AF408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF404u;
    // 0x2af408: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AF404u, 0x2AF40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF40Cu;
label_2af40c:
    // 0x2af40c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2af40cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af410: 0x269301a4  addiu       $s3, $s4, 0x1A4
    ctx->pc = 0x2af410u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 420));
    // 0x2af414: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2af414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2af418:
    // 0x2af418: 0xc137866  jal         func_4DE198
    ctx->pc = 0x2AF418u;
    SET_GPR_U32(ctx, 31, 0x2AF420u);
    ctx->pc = 0x2AF41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF418u;
    // 0x2af41c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x2AF418u, 0x2AF420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF420u;
label_2af420:
    // 0x2af420: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2AF420u;
    SET_GPR_U32(ctx, 31, 0x2AF428u);
    ctx->pc = 0x2AF424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF420u;
    // 0x2af424: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AF420u, 0x2AF428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF428u;
label_2af428:
    // 0x2af428: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF428u;
    {
        const bool branch_taken_0x2af428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af428) {
            ctx->pc = 0x2AF42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF428u;
            // 0x2af42c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF448u;
            goto label_2af448;
        }
    }
    ctx->pc = 0x2AF430u;
    // 0x2af430: 0xc087502  jal         func_21D408
    ctx->pc = 0x2AF430u;
    SET_GPR_U32(ctx, 31, 0x2AF438u);
    ctx->pc = 0x2AF434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF430u;
    // 0x2af434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AF430u, 0x2AF438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF438u;
label_2af438:
    // 0x2af438: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2af438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2af43c: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x2af43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x2af440: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2AF440u;
    {
        const bool branch_taken_0x2af440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF440u;
        // 0x2af444: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af440) {
            ctx->pc = 0x2AF4F4u;
            goto label_2af4f4;
        }
    }
    ctx->pc = 0x2AF448u;
label_2af448:
    // 0x2af448: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x2af448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2af44c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2AF44Cu;
    {
        const bool branch_taken_0x2af44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF44Cu;
        // 0x2af450: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af44c) {
            ctx->pc = 0x2AF418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af418;
        }
    }
    ctx->pc = 0x2AF454u;
    // 0x2af454: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2AF454u;
    SET_GPR_U32(ctx, 31, 0x2AF45Cu);
    ctx->pc = 0x2AF458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF454u;
    // 0x2af458: 0x26840124  addiu       $a0, $s4, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AF454u, 0x2AF45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF45Cu;
label_2af45c:
    // 0x2af45c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF45Cu;
    {
        const bool branch_taken_0x2af45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af45c) {
            ctx->pc = 0x2AF47Cu;
            goto label_2af47c;
        }
    }
    ctx->pc = 0x2AF464u;
    // 0x2af464: 0xc087502  jal         func_21D408
    ctx->pc = 0x2AF464u;
    SET_GPR_U32(ctx, 31, 0x2AF46Cu);
    ctx->pc = 0x2AF468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF464u;
    // 0x2af468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AF464u, 0x2AF46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF46Cu;
label_2af46c:
    // 0x2af46c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2af46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2af470: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x2af470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x2af474: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2AF474u;
    {
        const bool branch_taken_0x2af474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF474u;
        // 0x2af478: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af474) {
            ctx->pc = 0x2AF4F8u;
            goto label_2af4f8;
        }
    }
    ctx->pc = 0x2AF47Cu;
label_2af47c:
    // 0x2af47c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF47Cu;
    {
        const bool branch_taken_0x2af47c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF47Cu;
        // 0x2af480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af47c) {
            ctx->pc = 0x2AF494u;
            goto label_2af494;
        }
    }
    ctx->pc = 0x2AF484u;
    // 0x2af484: 0xc0ab8ba  jal         func_2AE2E8
    ctx->pc = 0x2AF484u;
    SET_GPR_U32(ctx, 31, 0x2AF48Cu);
    ctx->pc = 0x2AF488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF484u;
    // 0x2af488: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE2E8u, 0x2AF484u, 0x2AF48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF48Cu;
label_2af48c:
    // 0x2af48c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2AF48Cu;
    {
        const bool branch_taken_0x2af48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF48Cu;
        // 0x2af490: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af48c) {
            ctx->pc = 0x2AF4FCu;
            goto label_2af4fc;
        }
    }
    ctx->pc = 0x2AF494u;
label_2af494:
    // 0x2af494: 0xc0a4486  jal         func_291218
    ctx->pc = 0x2AF494u;
    SET_GPR_U32(ctx, 31, 0x2AF49Cu);
    ctx->pc = 0x2AF498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF494u;
    // 0x2af498: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291218u, 0x2AF494u, 0x2AF49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF49Cu;
label_2af49c:
    // 0x2af49c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2af49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af4a0: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AF4A0u;
    {
        const bool branch_taken_0x2af4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AF4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF4A0u;
        // 0x2af4a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af4a0) {
            ctx->pc = 0x2AF4F8u;
            goto label_2af4f8;
        }
    }
    ctx->pc = 0x2AF4A8u;
    // 0x2af4a8: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2AF4A8u;
    SET_GPR_U32(ctx, 31, 0x2AF4B0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2AF4A8u, 0x2AF4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF4B0u;
label_2af4b0:
    // 0x2af4b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2af4b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af4b4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AF4B4u;
    {
        const bool branch_taken_0x2af4b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF4B4u;
        // 0x2af4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af4b4) {
            ctx->pc = 0x2AF4E0u;
            goto label_2af4e0;
        }
    }
    ctx->pc = 0x2AF4BCu;
    // 0x2af4bc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2af4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2af4c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2af4c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2af4c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2af4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af4c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2af4c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af4cc: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x2af4ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2af4d0: 0x24090bb8  addiu       $t1, $zero, 0xBB8
    ctx->pc = 0x2af4d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x2af4d4: 0x240a07d0  addiu       $t2, $zero, 0x7D0
    ctx->pc = 0x2af4d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x2af4d8: 0xc0ad026  jal         func_2B4098
    ctx->pc = 0x2AF4D8u;
    SET_GPR_U32(ctx, 31, 0x2AF4E0u);
    ctx->pc = 0x2AF4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF4D8u;
    // 0x2af4dc: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4098u, 0x2AF4D8u, 0x2AF4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF4E0u;
label_2af4e0:
    // 0x2af4e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2af4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2af4e4: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2AF4E4u;
    SET_GPR_U32(ctx, 31, 0x2AF4ECu);
    ctx->pc = 0x2AF4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF4E4u;
    // 0x2af4e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2AF4E4u, 0x2AF4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF4ECu;
label_2af4ec:
    // 0x2af4ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF4ECu;
    {
        const bool branch_taken_0x2af4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF4ECu;
        // 0x2af4f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af4ec) {
            ctx->pc = 0x2AF4F8u;
            goto label_2af4f8;
        }
    }
    ctx->pc = 0x2AF4F4u;
label_2af4f4:
    // 0x2af4f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2af4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2af4f8:
    // 0x2af4f8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2af4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2af4fc:
    // 0x2af4fc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2af4fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2af500: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2af500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2af504: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2af504u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2af508: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2af508u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af50c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2af50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af510: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF510u;
        // 0x2af514: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF518u;
    // 0x2af518: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2af518u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2af51c: 0x0  nop
    ctx->pc = 0x2af51cu;
    // NOP
    // 0x2af520: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2af520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2af524: 0x0  nop
    ctx->pc = 0x2af524u;
    // NOP
    ctx->pc = 0x2af528u;
}
