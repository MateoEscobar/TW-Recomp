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

// Function: sub_0014DE28
// Address: 0x14de28 - 0x14e148
void sub_0014DE28_0x14de28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DE28_0x14de28");
#endif

    switch (ctx->pc) {
        case 0x14de7cu: goto label_14de7c;
        case 0x14de90u: goto label_14de90;
        case 0x14deb8u: goto label_14deb8;
        case 0x14dec4u: goto label_14dec4;
        case 0x14df10u: goto label_14df10;
        case 0x14df1cu: goto label_14df1c;
        case 0x14df58u: goto label_14df58;
        case 0x14df64u: goto label_14df64;
        case 0x14df88u: goto label_14df88;
        case 0x14df98u: goto label_14df98;
        case 0x14dfa4u: goto label_14dfa4;
        case 0x14e000u: goto label_14e000;
        case 0x14e034u: goto label_14e034;
        case 0x14e04cu: goto label_14e04c;
        case 0x14e0acu: goto label_14e0ac;
        case 0x14e0b4u: goto label_14e0b4;
        case 0x14e0c0u: goto label_14e0c0;
        case 0x14e0ccu: goto label_14e0cc;
        case 0x14e0d8u: goto label_14e0d8;
        case 0x14e0e8u: goto label_14e0e8;
        case 0x14e0f8u: goto label_14e0f8;
        case 0x14e104u: goto label_14e104;
        case 0x14e10cu: goto label_14e10c;
        case 0x14e114u: goto label_14e114;
        default: break;
    }

    ctx->pc = 0x14de28u;

    // 0x14de28: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x14de28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x14de2c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x14de2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x14de30: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x14de30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x14de34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14de34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de38: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x14de38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x14de3c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x14de3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de40: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x14de40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x14de44: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x14de44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de48: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x14de48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x14de4c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x14de4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de50: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x14de50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x14de54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14de54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de58: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x14de58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x14de5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14de60: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x14de60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x14de64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14de64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14de68: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x14de68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x14de6c: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x14de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x14de70: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x14de70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x14de74: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14DE74u;
    SET_GPR_U32(ctx, 31, 0x14DE7Cu);
    ctx->pc = 0x14DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DE74u;
    // 0x14de78: 0xafab000c  sw          $t3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14DE74u, 0x14DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DE7Cu;
label_14de7c:
    // 0x14de7c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x14de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14de80: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DE80u;
    {
        const bool branch_taken_0x14de80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE80u;
        // 0x14de84: 0x24020081  addiu       $v0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de80) {
            ctx->pc = 0x14DE98u;
            goto label_14de98;
        }
    }
    ctx->pc = 0x14DE88u;
    // 0x14de88: 0xc053898  jal         func_14E260
    ctx->pc = 0x14DE88u;
    SET_GPR_U32(ctx, 31, 0x14DE90u);
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x14DE88u, 0x14DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DE90u;
label_14de90:
    // 0x14de90: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x14DE90u;
    {
        const bool branch_taken_0x14de90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE90u;
        // 0x14de94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de90) {
            ctx->pc = 0x14DF44u;
            goto label_14df44;
        }
    }
    ctx->pc = 0x14DE98u;
label_14de98:
    // 0x14de98: 0x16020016  bne         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14DE98u;
    {
        const bool branch_taken_0x14de98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE98u;
        // 0x14de9c: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de98) {
            ctx->pc = 0x14DEF4u;
            goto label_14def4;
        }
    }
    ctx->pc = 0x14DEA0u;
    // 0x14dea0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14dea4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x14dea4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x14dea8: 0x2456be68  addiu       $s6, $v0, -0x4198
    ctx->pc = 0x14dea8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950504));
    // 0x14deac: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x14deacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14deb0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x14deb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14deb4: 0x8e45c20c  lw          $a1, -0x3DF4($s2)
    ctx->pc = 0x14deb4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50C20Cu));
label_14deb8:
    // 0x14deb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14deb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14debc: 0xc0538b6  jal         func_14E2D8
    ctx->pc = 0x14DEBCu;
    SET_GPR_U32(ctx, 31, 0x14DEC4u);
    ctx->pc = 0x14DEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DEBCu;
    // 0x14dec0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E2D8u, 0x14DEBCu, 0x14DEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DEC4u;
label_14dec4:
    // 0x14dec4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14dec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dec8: 0x12150004  beq         $s0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DEC8u;
    {
        const bool branch_taken_0x14dec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x14DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DEC8u;
        // 0x14decc: 0x2161021  addu        $v0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dec8) {
            ctx->pc = 0x14DEDCu;
            goto label_14dedc;
        }
    }
    ctx->pc = 0x14DED0u;
    // 0x14ded0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x14ded0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ded4: 0x1074001b  beq         $v1, $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x14DED4u;
    {
        const bool branch_taken_0x14ded4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x14ded4) {
            ctx->pc = 0x14DF44u;
            goto label_14df44;
        }
    }
    ctx->pc = 0x14DEDCu;
label_14dedc:
    // 0x14dedc: 0x8e42c20c  lw          $v0, -0x3DF4($s2)
    ctx->pc = 0x14dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951436)));
    // 0x14dee0: 0x26110001  addiu       $s1, $s0, 0x1
    ctx->pc = 0x14dee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14dee4: 0x5622fff4  bnel        $s1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14DEE4u;
    {
        const bool branch_taken_0x14dee4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x14dee4) {
            ctx->pc = 0x14DEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DEE4u;
            // 0x14dee8: 0x8e45c20c  lw          $a1, -0x3DF4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14deb8;
        }
    }
    ctx->pc = 0x14DEECu;
    // 0x14deec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14DEECu;
    {
        const bool branch_taken_0x14deec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14deec) {
            ctx->pc = 0x14DF44u;
            goto label_14df44;
        }
    }
    ctx->pc = 0x14DEF4u;
label_14def4:
    // 0x14def4: 0x16020013  bne         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14DEF4u;
    {
        const bool branch_taken_0x14def4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DEF4u;
        // 0x14def8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14def4) {
            ctx->pc = 0x14DF44u;
            goto label_14df44;
        }
    }
    ctx->pc = 0x14DEFCu;
    // 0x14defc: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x14defcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x14df00: 0x2455be68  addiu       $s5, $v0, -0x4198
    ctx->pc = 0x14df00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950504));
    // 0x14df04: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x14df04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14df08: 0x8e45c20c  lw          $a1, -0x3DF4($s2)
    ctx->pc = 0x14df08u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50C20Cu));
    // 0x14df0c: 0x0  nop
    ctx->pc = 0x14df0cu;
    // NOP
label_14df10:
    // 0x14df10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14df10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14df14: 0xc0538b6  jal         func_14E2D8
    ctx->pc = 0x14DF14u;
    SET_GPR_U32(ctx, 31, 0x14DF1Cu);
    ctx->pc = 0x14DF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DF14u;
    // 0x14df18: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E2D8u, 0x14DF14u, 0x14DF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF1Cu;
label_14df1c:
    // 0x14df1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14df1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14df20: 0x12140004  beq         $s0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DF20u;
    {
        const bool branch_taken_0x14df20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x14DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF20u;
        // 0x14df24: 0x2151021  addu        $v0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df20) {
            ctx->pc = 0x14DF34u;
            goto label_14df34;
        }
    }
    ctx->pc = 0x14DF28u;
    // 0x14df28: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x14df28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14df2c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DF2Cu;
    {
        const bool branch_taken_0x14df2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14df2c) {
            ctx->pc = 0x14DF44u;
            goto label_14df44;
        }
    }
    ctx->pc = 0x14DF34u;
label_14df34:
    // 0x14df34: 0x8e42c20c  lw          $v0, -0x3DF4($s2)
    ctx->pc = 0x14df34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951436)));
    // 0x14df38: 0x26110001  addiu       $s1, $s0, 0x1
    ctx->pc = 0x14df38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14df3c: 0x5622fff4  bnel        $s1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14DF3Cu;
    {
        const bool branch_taken_0x14df3c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x14df3c) {
            ctx->pc = 0x14DF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DF3Cu;
            // 0x14df40: 0x8e45c20c  lw          $a1, -0x3DF4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14df10;
        }
    }
    ctx->pc = 0x14DF44u;
label_14df44:
    // 0x14df44: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14DF44u;
    {
        const bool branch_taken_0x14df44 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x14DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF44u;
        // 0x14df48: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df44) {
            ctx->pc = 0x14DF6Cu;
            goto label_14df6c;
        }
    }
    ctx->pc = 0x14DF4Cu;
    // 0x14df4c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14df4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14df50: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DF50u;
    SET_GPR_U32(ctx, 31, 0x14DF58u);
    ctx->pc = 0x14DF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DF50u;
    // 0x14df54: 0x2484b9e0  addiu       $a0, $a0, -0x4620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DF50u, 0x14DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF58u;
label_14df58:
    // 0x14df58: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14df58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14df5c: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DF5Cu;
    SET_GPR_U32(ctx, 31, 0x14DF64u);
    ctx->pc = 0x14DF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DF5Cu;
    // 0x14df60: 0x2484b9f8  addiu       $a0, $a0, -0x4608 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DF5Cu, 0x14DF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF64u;
label_14df64:
    // 0x14df64: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x14DF64u;
    {
        const bool branch_taken_0x14df64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14df64) {
            ctx->pc = 0x14DFF8u;
            goto label_14dff8;
        }
    }
    ctx->pc = 0x14DF6Cu;
label_14df6c:
    // 0x14df6c: 0x8c62c20c  lw          $v0, -0x3DF4($v1)
    ctx->pc = 0x14df6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951436)));
    // 0x14df70: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x14df70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14df74: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14DF74u;
    {
        const bool branch_taken_0x14df74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF74u;
        // 0x14df78: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df74) {
            ctx->pc = 0x14DFACu;
            goto label_14dfac;
        }
    }
    ctx->pc = 0x14DF7Cu;
    // 0x14df7c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14df80: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DF80u;
    SET_GPR_U32(ctx, 31, 0x14DF88u);
    ctx->pc = 0x14DF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DF80u;
    // 0x14df84: 0x2484ba18  addiu       $a0, $a0, -0x45E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DF80u, 0x14DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF88u;
label_14df88:
    // 0x14df88: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14df88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14df8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14df8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14df90: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DF90u;
    SET_GPR_U32(ctx, 31, 0x14DF98u);
    ctx->pc = 0x14DF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DF90u;
    // 0x14df94: 0x2484ba38  addiu       $a0, $a0, -0x45C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DF90u, 0x14DF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF98u;
label_14df98:
    // 0x14df98: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14df98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14df9c: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DF9Cu;
    SET_GPR_U32(ctx, 31, 0x14DFA4u);
    ctx->pc = 0x14DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DF9Cu;
    // 0x14dfa0: 0x2484ba58  addiu       $a0, $a0, -0x45A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DF9Cu, 0x14DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DFA4u;
label_14dfa4:
    // 0x14dfa4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14DFA4u;
    {
        const bool branch_taken_0x14dfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dfa4) {
            ctx->pc = 0x14DFF8u;
            goto label_14dff8;
        }
    }
    ctx->pc = 0x14DFACu;
label_14dfac:
    // 0x14dfac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14dfb0: 0x2623824  and         $a3, $s3, $v0
    ctx->pc = 0x14dfb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x14dfb4: 0x2463be08  addiu       $v1, $v1, -0x41F8
    ctx->pc = 0x14dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950408));
    // 0x14dfb8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x14dfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x14dfbc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x14dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14dfc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14dfc4: 0x24843ac8  addiu       $a0, $a0, 0x3AC8
    ctx->pc = 0x14dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15048));
    // 0x14dfc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14dfcc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x14dfccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x14dfd0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x14dfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x14dfd4: 0x24a53b88  addiu       $a1, $a1, 0x3B88
    ctx->pc = 0x14dfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15240));
    // 0x14dfd8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x14dfd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x14dfdc: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x14dfdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x14dfe0: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x14dfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x14dfe4: 0x3273ffff  andi        $s3, $s3, 0xFFFF
    ctx->pc = 0x14dfe4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x14dfe8: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x14dfe8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x14dfec: 0x2e630030  sltiu       $v1, $s3, 0x30
    ctx->pc = 0x14dfecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x14dff0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DFF0u;
    {
        const bool branch_taken_0x14dff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DFF0u;
        // 0x14dff4: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dff0) {
            ctx->pc = 0x14E008u;
            goto label_14e008;
        }
    }
    ctx->pc = 0x14DFF8u;
label_14dff8:
    // 0x14dff8: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14DFF8u;
    SET_GPR_U32(ctx, 31, 0x14E000u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14DFF8u, 0x14E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E000u;
label_14e000:
    // 0x14e000: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x14E000u;
    {
        const bool branch_taken_0x14e000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E000u;
        // 0x14e004: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e000) {
            ctx->pc = 0x14E118u;
            goto label_14e118;
        }
    }
    ctx->pc = 0x14E008u;
label_14e008:
    // 0x14e008: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x14e008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14e00c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x14e00cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14e010: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14E010u;
    {
        const bool branch_taken_0x14e010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E010u;
        // 0x14e014: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e010) {
            ctx->pc = 0x14E05Cu;
            goto label_14e05c;
        }
    }
    ctx->pc = 0x14E018u;
    // 0x14e018: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14e018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e01c: 0x2442c248  addiu       $v0, $v0, -0x3DB8
    ctx->pc = 0x14e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951496));
    // 0x14e020: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x14e020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e024: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x14e024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x14e028: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14e028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e02c: 0xc05446a  jal         func_1511A8
    ctx->pc = 0x14E02Cu;
    SET_GPR_U32(ctx, 31, 0x14E034u);
    ctx->pc = 0x14E030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E02Cu;
    // 0x14e030: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1511A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1511A8u, 0x14E02Cu, 0x14E034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E034u;
label_14e034:
    // 0x14e034: 0x172c00  sll         $a1, $s7, 16
    ctx->pc = 0x14e034u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x14e038: 0x1e3400  sll         $a2, $fp, 16
    ctx->pc = 0x14e038u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 16));
    // 0x14e03c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x14e03cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x14e040: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x14e040u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x14e044: 0xc054494  jal         func_151250
    ctx->pc = 0x14E044u;
    SET_GPR_U32(ctx, 31, 0x14E04Cu);
    ctx->pc = 0x14E048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E044u;
    // 0x14e048: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151250u, 0x14E044u, 0x14E04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E04Cu;
label_14e04c:
    // 0x14e04c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14e050: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14e050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14e054: 0x8c5741a8  lw          $s7, 0x41A8($v0)
    ctx->pc = 0x14e054u;
    SET_GPR_S32(ctx, 23, (int32_t)FAST_READ32(0x5E41A8u));
    // 0x14e058: 0x8c7e41ac  lw          $fp, 0x41AC($v1)
    ctx->pc = 0x14e058u;
    SET_GPR_S32(ctx, 30, (int32_t)FAST_READ32(0x5E41ACu));
label_14e05c:
    // 0x14e05c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x14e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14e060: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14e060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14e064: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x14e064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x14e068: 0x2463c278  addiu       $v1, $v1, -0x3D88
    ctx->pc = 0x14e068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951544));
    // 0x14e06c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x14e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x14e070: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x14e070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x14e074: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x14e074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14e078: 0xa0700000  sb          $s0, 0x0($v1)
    ctx->pc = 0x14e078u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x14e07c: 0x102200  sll         $a0, $s0, 8
    ctx->pc = 0x14e07cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x14e080: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x14e080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14e084: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x14e084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x14e088: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14E088u;
    {
        const bool branch_taken_0x14e088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E088u;
        // 0x14e08c: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e088) {
            ctx->pc = 0x14E0A4u;
            goto label_14e0a4;
        }
    }
    ctx->pc = 0x14E090u;
    // 0x14e090: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14e090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14e094: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14e094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14e098: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x14e098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x14e09c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14e0a0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x14e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_14e0a4:
    // 0x14e0a4: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14E0A4u;
    SET_GPR_U32(ctx, 31, 0x14E0ACu);
    ctx->pc = 0x14E0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E0A4u;
    // 0x14e0a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14E0A4u, 0x14E0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E0ACu;
label_14e0ac:
    // 0x14e0ac: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x14E0ACu;
    SET_GPR_U32(ctx, 31, 0x14E0B4u);
    ctx->pc = 0x14E0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E0ACu;
    // 0x14e0b0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x14E0ACu, 0x14E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E0B4u;
label_14e0b4:
    // 0x14e0b4: 0x132400  sll         $a0, $s3, 16
    ctx->pc = 0x14e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x14e0b8: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E0B8u;
    SET_GPR_U32(ctx, 31, 0x14E0C0u);
    ctx->pc = 0x14E0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E0B8u;
    // 0x14e0bc: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E0B8u, 0x14E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E0C0u;
label_14e0c0:
    // 0x14e0c0: 0x172400  sll         $a0, $s7, 16
    ctx->pc = 0x14e0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x14e0c4: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E0C4u;
    SET_GPR_U32(ctx, 31, 0x14E0CCu);
    ctx->pc = 0x14E0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E0C4u;
    // 0x14e0c8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E0C4u, 0x14E0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E0CCu;
label_14e0cc:
    // 0x14e0cc: 0x1e2400  sll         $a0, $fp, 16
    ctx->pc = 0x14e0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 16));
    // 0x14e0d0: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E0D0u;
    SET_GPR_U32(ctx, 31, 0x14E0D8u);
    ctx->pc = 0x14E0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E0D0u;
    // 0x14e0d4: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E0D0u, 0x14E0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E0D8u;
label_14e0d8:
    // 0x14e0d8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x14e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14e0dc: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x14e0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x14e0e0: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E0E0u;
    SET_GPR_U32(ctx, 31, 0x14E0E8u);
    ctx->pc = 0x14E0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E0E0u;
    // 0x14e0e4: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E0E0u, 0x14E0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E0E8u;
label_14e0e8:
    // 0x14e0e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x14e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14e0ec: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x14e0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x14e0f0: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E0F0u;
    SET_GPR_U32(ctx, 31, 0x14E0F8u);
    ctx->pc = 0x14E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E0F0u;
    // 0x14e0f4: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E0F0u, 0x14E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E0F8u;
label_14e0f8:
    // 0x14e0f8: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x14e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x14e0fc: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E0FCu;
    SET_GPR_U32(ctx, 31, 0x14E104u);
    ctx->pc = 0x14E100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E0FCu;
    // 0x14e100: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E0FCu, 0x14E104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E104u;
label_14e104:
    // 0x14e104: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14E104u;
    SET_GPR_U32(ctx, 31, 0x14E10Cu);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14E104u, 0x14E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E10Cu;
label_14e10c:
    // 0x14e10c: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E10Cu;
    SET_GPR_U32(ctx, 31, 0x14E114u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E10Cu, 0x14E114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E114u;
label_14e114:
    // 0x14e114: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14e114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e118:
    // 0x14e118: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x14e118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14e11c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x14e11cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14e120: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x14e120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14e124: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x14e124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14e128: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x14e128u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14e12c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14e12cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14e130: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x14e130u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e134: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x14e134u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e138: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x14e138u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e13c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14e13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e140: 0x3e00008  jr          $ra
    ctx->pc = 0x14E140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E140u;
        // 0x14e144: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E148u;
}
