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

// Function: sub_00462338
// Address: 0x462338 - 0x4624a0
void sub_00462338_0x462338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00462338_0x462338");
#endif

    switch (ctx->pc) {
        case 0x46236cu: goto label_46236c;
        case 0x462388u: goto label_462388;
        case 0x4623bcu: goto label_4623bc;
        case 0x4623d0u: goto label_4623d0;
        case 0x4623e8u: goto label_4623e8;
        case 0x462400u: goto label_462400;
        case 0x462410u: goto label_462410;
        case 0x462424u: goto label_462424;
        case 0x462438u: goto label_462438;
        case 0x462470u: goto label_462470;
        default: break;
    }

    ctx->pc = 0x462338u;

    // 0x462338: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x462338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x46233c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x46233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x462340: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x462340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x462344: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x462344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462348: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x462348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x46234c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x46234cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462350: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x462350u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462354: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x462354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x462358: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x462358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x46235c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46235cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x462360: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x462360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x462364: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x462364u;
    SET_GPR_U32(ctx, 31, 0x46236Cu);
    ctx->pc = 0x462368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x462364u;
    // 0x462368: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x462364u, 0x46236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46236Cu;
label_46236c:
    // 0x46236c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x46236Cu;
    {
        const bool branch_taken_0x46236c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x462370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46236Cu;
        // 0x462370: 0x8f828890  lw          $v0, -0x7770($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46236c) {
            ctx->pc = 0x462458u;
            goto label_462458;
        }
    }
    ctx->pc = 0x462374u;
    // 0x462374: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x462374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462378: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x462378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x46237c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x46237cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x462380: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x462380u;
    SET_GPR_U32(ctx, 31, 0x462388u);
    ctx->pc = 0x462384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x462380u;
    // 0x462384: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x462380u, 0x462388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462388u;
label_462388:
    // 0x462388: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x462388u;
    {
        const bool branch_taken_0x462388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462388) {
            ctx->pc = 0x46238Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x462388u;
            // 0x46238c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x462480u;
            goto label_462480;
        }
    }
    ctx->pc = 0x462390u;
    // 0x462390: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x462390u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x462394: 0x52200032  beql        $s1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x462394u;
    {
        const bool branch_taken_0x462394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x462394) {
            ctx->pc = 0x462398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x462394u;
            // 0x462398: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x462460u;
            goto label_462460;
        }
    }
    ctx->pc = 0x46239Cu;
    // 0x46239c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x46239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4623a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4623a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4623a4: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x4623A4u;
    {
        const bool branch_taken_0x4623a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4623a4) {
            ctx->pc = 0x4623A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4623A4u;
            // 0x4623a8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x462460u;
            goto label_462460;
        }
    }
    ctx->pc = 0x4623ACu;
    // 0x4623ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4623acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4623b0: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x4623b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4623b4: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x4623B4u;
    SET_GPR_U32(ctx, 31, 0x4623BCu);
    ctx->pc = 0x4623B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4623B4u;
    // 0x4623b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x4623B4u, 0x4623BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4623BCu;
label_4623bc:
    // 0x4623bc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4623BCu;
    {
        const bool branch_taken_0x4623bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4623C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4623BCu;
        // 0x4623c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4623bc) {
            ctx->pc = 0x462458u;
            goto label_462458;
        }
    }
    ctx->pc = 0x4623C4u;
    // 0x4623c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4623c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4623c8: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x4623C8u;
    SET_GPR_U32(ctx, 31, 0x4623D0u);
    ctx->pc = 0x4623CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4623C8u;
    // 0x4623cc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x4623C8u, 0x4623D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4623D0u;
label_4623d0:
    // 0x4623d0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4623D0u;
    {
        const bool branch_taken_0x4623d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4623D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4623D0u;
        // 0x4623d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4623d0) {
            ctx->pc = 0x462458u;
            goto label_462458;
        }
    }
    ctx->pc = 0x4623D8u;
    // 0x4623d8: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x4623d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x4623dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4623dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4623e0: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x4623E0u;
    SET_GPR_U32(ctx, 31, 0x4623E8u);
    ctx->pc = 0x4623E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4623E0u;
    // 0x4623e4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x4623E0u, 0x4623E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4623E8u;
label_4623e8:
    // 0x4623e8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4623E8u;
    {
        const bool branch_taken_0x4623e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4623ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4623E8u;
        // 0x4623ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4623e8) {
            ctx->pc = 0x462458u;
            goto label_462458;
        }
    }
    ctx->pc = 0x4623F0u;
    // 0x4623f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4623f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4623f4: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4623F4u;
    {
        const bool branch_taken_0x4623f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4623F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4623F4u;
        // 0x4623f8: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4623f4) {
            ctx->pc = 0x46247Cu;
            goto label_46247c;
        }
    }
    ctx->pc = 0x4623FCu;
    // 0x4623fc: 0x0  nop
    ctx->pc = 0x4623fcu;
    // NOP
label_462400:
    // 0x462400: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x462400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462404: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x462404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462408: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x462408u;
    SET_GPR_U32(ctx, 31, 0x462410u);
    ctx->pc = 0x46240Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x462408u;
    // 0x46240c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x462408u, 0x462410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462410u;
label_462410:
    // 0x462410: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x462410u;
    {
        const bool branch_taken_0x462410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x462414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462410u;
        // 0x462414: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462410) {
            ctx->pc = 0x462458u;
            goto label_462458;
        }
    }
    ctx->pc = 0x462418u;
    // 0x462418: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x462418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x46241c: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x46241Cu;
    SET_GPR_U32(ctx, 31, 0x462424u);
    ctx->pc = 0x462420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46241Cu;
    // 0x462420: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x46241Cu, 0x462424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462424u;
label_462424:
    // 0x462424: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x462424u;
    {
        const bool branch_taken_0x462424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x462428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462424u;
        // 0x462428: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462424) {
            ctx->pc = 0x462458u;
            goto label_462458;
        }
    }
    ctx->pc = 0x46242Cu;
    // 0x46242c: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x46242cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x462430: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x462430u;
    SET_GPR_U32(ctx, 31, 0x462438u);
    ctx->pc = 0x462434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x462430u;
    // 0x462434: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x462430u, 0x462438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462438u;
label_462438:
    // 0x462438: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x462438u;
    {
        const bool branch_taken_0x462438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462438u;
        // 0x46243c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462438) {
            ctx->pc = 0x462458u;
            goto label_462458;
        }
    }
    ctx->pc = 0x462440u;
    // 0x462440: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x462440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x462444: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x462444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x462448: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x462448u;
    {
        const bool branch_taken_0x462448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462448u;
        // 0x46244c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462448) {
            ctx->pc = 0x462400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_462400;
        }
    }
    ctx->pc = 0x462450u;
    // 0x462450: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x462450u;
    {
        const bool branch_taken_0x462450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x462454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462450u;
        // 0x462454: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462450) {
            ctx->pc = 0x462480u;
            goto label_462480;
        }
    }
    ctx->pc = 0x462458u;
label_462458:
    // 0x462458: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x462458u;
    {
        const bool branch_taken_0x462458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462458u;
        // 0x46245c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462458) {
            ctx->pc = 0x462480u;
            goto label_462480;
        }
    }
    ctx->pc = 0x462460u;
label_462460:
    // 0x462460: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x462460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462464: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x462464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x462468: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x462468u;
    SET_GPR_U32(ctx, 31, 0x462470u);
    ctx->pc = 0x46246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x462468u;
    // 0x46246c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x462468u, 0x462470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462470u;
label_462470:
    // 0x462470: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x462470u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462474: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x462474u;
    {
        const bool branch_taken_0x462474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x462478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462474u;
        // 0x462478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462474) {
            ctx->pc = 0x462480u;
            goto label_462480;
        }
    }
    ctx->pc = 0x46247Cu;
label_46247c:
    // 0x46247c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x46247cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_462480:
    // 0x462480: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x462480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x462484: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x462484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x462488: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x462488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46248c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x46248cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x462490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x462490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x462494: 0x3e00008  jr          $ra
    ctx->pc = 0x462494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462494u;
        // 0x462498: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46249Cu;
    // 0x46249c: 0x0  nop
    ctx->pc = 0x46249cu;
    // NOP
    ctx->pc = 0x4624a0u;
}
