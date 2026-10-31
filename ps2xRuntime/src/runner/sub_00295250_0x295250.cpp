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

// Function: sub_00295250
// Address: 0x295250 - 0x2953c8
void sub_00295250_0x295250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295250_0x295250");
#endif

    switch (ctx->pc) {
        case 0x295250u: goto label_295250;
        case 0x295254u: goto label_295254;
        case 0x295258u: goto label_295258;
        case 0x29525cu: goto label_29525c;
        case 0x295260u: goto label_295260;
        case 0x295264u: goto label_295264;
        case 0x295268u: goto label_295268;
        case 0x29526cu: goto label_29526c;
        case 0x295270u: goto label_295270;
        case 0x295274u: goto label_295274;
        case 0x295278u: goto label_295278;
        case 0x29527cu: goto label_29527c;
        case 0x295280u: goto label_295280;
        case 0x295284u: goto label_295284;
        case 0x295288u: goto label_295288;
        case 0x29528cu: goto label_29528c;
        case 0x295290u: goto label_295290;
        case 0x295294u: goto label_295294;
        case 0x295298u: goto label_295298;
        case 0x29529cu: goto label_29529c;
        case 0x2952a0u: goto label_2952a0;
        case 0x2952a4u: goto label_2952a4;
        case 0x2952a8u: goto label_2952a8;
        case 0x2952acu: goto label_2952ac;
        case 0x2952b0u: goto label_2952b0;
        case 0x2952b4u: goto label_2952b4;
        case 0x2952b8u: goto label_2952b8;
        case 0x2952bcu: goto label_2952bc;
        case 0x2952c0u: goto label_2952c0;
        case 0x2952c4u: goto label_2952c4;
        case 0x2952c8u: goto label_2952c8;
        case 0x2952ccu: goto label_2952cc;
        case 0x2952d0u: goto label_2952d0;
        case 0x2952d4u: goto label_2952d4;
        case 0x2952d8u: goto label_2952d8;
        case 0x2952dcu: goto label_2952dc;
        case 0x2952e0u: goto label_2952e0;
        case 0x2952e4u: goto label_2952e4;
        case 0x2952e8u: goto label_2952e8;
        case 0x2952ecu: goto label_2952ec;
        case 0x2952f0u: goto label_2952f0;
        case 0x2952f4u: goto label_2952f4;
        case 0x2952f8u: goto label_2952f8;
        case 0x2952fcu: goto label_2952fc;
        case 0x295300u: goto label_295300;
        case 0x295304u: goto label_295304;
        case 0x295308u: goto label_295308;
        case 0x29530cu: goto label_29530c;
        case 0x295310u: goto label_295310;
        case 0x295314u: goto label_295314;
        case 0x295318u: goto label_295318;
        case 0x29531cu: goto label_29531c;
        case 0x295320u: goto label_295320;
        case 0x295324u: goto label_295324;
        case 0x295328u: goto label_295328;
        case 0x29532cu: goto label_29532c;
        case 0x295330u: goto label_295330;
        case 0x295334u: goto label_295334;
        case 0x295338u: goto label_295338;
        case 0x29533cu: goto label_29533c;
        case 0x295340u: goto label_295340;
        case 0x295344u: goto label_295344;
        case 0x295348u: goto label_295348;
        case 0x29534cu: goto label_29534c;
        case 0x295350u: goto label_295350;
        case 0x295354u: goto label_295354;
        case 0x295358u: goto label_295358;
        case 0x29535cu: goto label_29535c;
        case 0x295360u: goto label_295360;
        case 0x295364u: goto label_295364;
        case 0x295368u: goto label_295368;
        case 0x29536cu: goto label_29536c;
        case 0x295370u: goto label_295370;
        case 0x295374u: goto label_295374;
        case 0x295378u: goto label_295378;
        case 0x29537cu: goto label_29537c;
        case 0x295380u: goto label_295380;
        case 0x295384u: goto label_295384;
        case 0x295388u: goto label_295388;
        case 0x29538cu: goto label_29538c;
        case 0x295390u: goto label_295390;
        case 0x295394u: goto label_295394;
        case 0x295398u: goto label_295398;
        case 0x29539cu: goto label_29539c;
        case 0x2953a0u: goto label_2953a0;
        case 0x2953a4u: goto label_2953a4;
        case 0x2953a8u: goto label_2953a8;
        case 0x2953acu: goto label_2953ac;
        case 0x2953b0u: goto label_2953b0;
        case 0x2953b4u: goto label_2953b4;
        case 0x2953b8u: goto label_2953b8;
        case 0x2953bcu: goto label_2953bc;
        case 0x2953c0u: goto label_2953c0;
        case 0x2953c4u: goto label_2953c4;
        default: break;
    }

    ctx->pc = 0x295250u;

label_295250:
    // 0x295250: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x295250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_295254:
    // 0x295254: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x295254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_295258:
    // 0x295258: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x295258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_29525c:
    // 0x29525c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x29525cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_295260:
    // 0x295260: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x295260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_295264:
    // 0x295264: 0x26d501b0  addiu       $s5, $s6, 0x1B0
    ctx->pc = 0x295264u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 432));
label_295268:
    // 0x295268: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x295268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_29526c:
    // 0x29526c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x29526cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295270:
    // 0x295270: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x295270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_295274:
    // 0x295274: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x295274u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_295278:
    // 0x295278: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x295278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_29527c:
    // 0x29527c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x29527cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_295280:
    // 0x295280: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x295280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_295284:
    // 0x295284: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x295284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_295288:
    // 0x295288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x295288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29528c:
    // 0x29528c: 0x0  nop
    ctx->pc = 0x29528cu;
    // NOP
label_295290:
    // 0x295290: 0xc0e409a  jal         func_390268
label_295294:
    if (ctx->pc == 0x295294u) {
        ctx->pc = 0x295294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295290u;
        // 0x295294: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295298u;
        goto label_295298;
    }
    ctx->pc = 0x295290u;
    SET_GPR_U32(ctx, 31, 0x295298u);
    ctx->pc = 0x295294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295290u;
    // 0x295294: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x295290u, 0x295298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295298u;
label_295298:
    // 0x295298: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x295298u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29529c:
    // 0x29529c: 0x5280003a  beql        $s4, $zero, . + 4 + (0x3A << 2)
label_2952a0:
    if (ctx->pc == 0x2952A0u) {
        ctx->pc = 0x2952A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29529Cu;
        // 0x2952a0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2952A4u;
        goto label_2952a4;
    }
    ctx->pc = 0x29529Cu;
    {
        const bool branch_taken_0x29529c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x29529c) {
            ctx->pc = 0x2952A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29529Cu;
            // 0x2952a0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295388u;
            goto label_295388;
        }
    }
    ctx->pc = 0x2952A4u;
label_2952a4:
    // 0x2952a4: 0xc087502  jal         func_21D408
label_2952a8:
    if (ctx->pc == 0x2952A8u) {
        ctx->pc = 0x2952A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952A4u;
        // 0x2952a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2952ACu;
        goto label_2952ac;
    }
    ctx->pc = 0x2952A4u;
    SET_GPR_U32(ctx, 31, 0x2952ACu);
    ctx->pc = 0x2952A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2952A4u;
    // 0x2952a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2952A4u, 0x2952ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2952ACu;
label_2952ac:
    // 0x2952ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2952acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2952b0:
    // 0x2952b0: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x2952b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_2952b4:
    // 0x2952b4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2952b8:
    if (ctx->pc == 0x2952B8u) {
        ctx->pc = 0x2952B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952B4u;
        // 0x2952b8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2952BCu;
        goto label_2952bc;
    }
    ctx->pc = 0x2952B4u;
    {
        const bool branch_taken_0x2952b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2952B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952B4u;
        // 0x2952b8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952b4) {
            ctx->pc = 0x2952C8u;
            goto label_2952c8;
        }
    }
    ctx->pc = 0x2952BCu;
label_2952bc:
    // 0x2952bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2952bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2952c0:
    // 0x2952c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2952c4:
    if (ctx->pc == 0x2952C4u) {
        ctx->pc = 0x2952C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952C0u;
        // 0x2952c4: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2952C8u;
        goto label_2952c8;
    }
    ctx->pc = 0x2952C0u;
    {
        const bool branch_taken_0x2952c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2952C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952C0u;
        // 0x2952c4: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952c0) {
            ctx->pc = 0x2952CCu;
            goto label_2952cc;
        }
    }
    ctx->pc = 0x2952C8u;
label_2952c8:
    // 0x2952c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2952c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2952cc:
    // 0x2952cc: 0x50a0002e  beql        $a1, $zero, . + 4 + (0x2E << 2)
label_2952d0:
    if (ctx->pc == 0x2952D0u) {
        ctx->pc = 0x2952D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952CCu;
        // 0x2952d0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2952D4u;
        goto label_2952d4;
    }
    ctx->pc = 0x2952CCu;
    {
        const bool branch_taken_0x2952cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2952cc) {
            ctx->pc = 0x2952D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2952CCu;
            // 0x2952d0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295388u;
            goto label_295388;
        }
    }
    ctx->pc = 0x2952D4u;
label_2952d4:
    // 0x2952d4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2952d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2952d8:
    // 0x2952d8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2952d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2952dc:
    // 0x2952dc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2952dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2952e0:
    // 0x2952e0: 0x40f809  jalr        $v0
label_2952e4:
    if (ctx->pc == 0x2952E4u) {
        ctx->pc = 0x2952E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952E0u;
        // 0x2952e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2952E8u;
        goto label_2952e8;
    }
    ctx->pc = 0x2952E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2952E8u);
        ctx->pc = 0x2952E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952E0u;
        // 0x2952e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2952E0u, 0x2952E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2952E8u;
label_2952e8:
    // 0x2952e8: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x2952e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_2952ec:
    // 0x2952ec: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_2952f0:
    if (ctx->pc == 0x2952F0u) {
        ctx->pc = 0x2952F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952ECu;
        // 0x2952f0: 0x24030069  addiu       $v1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2952F4u;
        goto label_2952f4;
    }
    ctx->pc = 0x2952ECu;
    {
        const bool branch_taken_0x2952ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2952F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952ECu;
        // 0x2952f0: 0x24030069  addiu       $v1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952ec) {
            ctx->pc = 0x295304u;
            goto label_295304;
        }
    }
    ctx->pc = 0x2952F4u;
label_2952f4:
    // 0x2952f4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_2952f8:
    if (ctx->pc == 0x2952F8u) {
        ctx->pc = 0x2952F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952F4u;
        // 0x2952f8: 0x24030073  addiu       $v1, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2952FCu;
        goto label_2952fc;
    }
    ctx->pc = 0x2952F4u;
    {
        const bool branch_taken_0x2952f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2952F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952F4u;
        // 0x2952f8: 0x24030073  addiu       $v1, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952f4) {
            ctx->pc = 0x295304u;
            goto label_295304;
        }
    }
    ctx->pc = 0x2952FCu;
label_2952fc:
    // 0x2952fc: 0x54430022  bnel        $v0, $v1, . + 4 + (0x22 << 2)
label_295300:
    if (ctx->pc == 0x295300u) {
        ctx->pc = 0x295300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952FCu;
        // 0x295300: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295304u;
        goto label_295304;
    }
    ctx->pc = 0x2952FCu;
    {
        const bool branch_taken_0x2952fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2952fc) {
            ctx->pc = 0x295300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2952FCu;
            // 0x295300: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295388u;
            goto label_295388;
        }
    }
    ctx->pc = 0x295304u;
label_295304:
    // 0x295304: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x295304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
label_295308:
    // 0x295308: 0x2902a  slt         $s2, $zero, $v0
    ctx->pc = 0x295308u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_29530c:
    // 0x29530c: 0x565e001e  bnel        $s2, $fp, . + 4 + (0x1E << 2)
label_295310:
    if (ctx->pc == 0x295310u) {
        ctx->pc = 0x295310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29530Cu;
        // 0x295310: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295314u;
        goto label_295314;
    }
    ctx->pc = 0x29530Cu;
    {
        const bool branch_taken_0x29530c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 30));
        if (branch_taken_0x29530c) {
            ctx->pc = 0x295310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29530Cu;
            // 0x295310: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295388u;
            goto label_295388;
        }
    }
    ctx->pc = 0x295314u;
label_295314:
    // 0x295314: 0xc0a36c2  jal         func_28DB08
label_295318:
    if (ctx->pc == 0x295318u) {
        ctx->pc = 0x295318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295314u;
        // 0x295318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29531Cu;
        goto label_29531c;
    }
    ctx->pc = 0x295314u;
    SET_GPR_U32(ctx, 31, 0x29531Cu);
    ctx->pc = 0x295318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295314u;
    // 0x295318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x295314u, 0x29531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29531Cu;
label_29531c:
    // 0x29531c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29531cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295320:
    // 0x295320: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x295320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_295324:
    // 0x295324: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x295324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_295328:
    // 0x295328: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x295328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_29532c:
    // 0x29532c: 0x40f809  jalr        $v0
label_295330:
    if (ctx->pc == 0x295330u) {
        ctx->pc = 0x295330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29532Cu;
        // 0x295330: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295334u;
        goto label_295334;
    }
    ctx->pc = 0x29532Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x295334u);
        ctx->pc = 0x295330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29532Cu;
        // 0x295330: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29532Cu, 0x295334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x295334u;
label_295334:
    // 0x295334: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x295334u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295338:
    // 0x295338: 0x56720013  bnel        $s3, $s2, . + 4 + (0x13 << 2)
label_29533c:
    if (ctx->pc == 0x29533Cu) {
        ctx->pc = 0x29533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295338u;
        // 0x29533c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295340u;
        goto label_295340;
    }
    ctx->pc = 0x295338u;
    {
        const bool branch_taken_0x295338 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        if (branch_taken_0x295338) {
            ctx->pc = 0x29533Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295338u;
            // 0x29533c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295388u;
            goto label_295388;
        }
    }
    ctx->pc = 0x295340u;
label_295340:
    // 0x295340: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x295340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_295344:
    // 0x295344: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x295344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_295348:
    // 0x295348: 0xc0a578e  jal         func_295E38
label_29534c:
    if (ctx->pc == 0x29534Cu) {
        ctx->pc = 0x29534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295348u;
        // 0x29534c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295350u;
        goto label_295350;
    }
    ctx->pc = 0x295348u;
    SET_GPR_U32(ctx, 31, 0x295350u);
    ctx->pc = 0x29534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295348u;
    // 0x29534c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x295348u, 0x295350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295350u;
label_295350:
    // 0x295350: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x295350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295354:
    // 0x295354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x295354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_295358:
    // 0x295358: 0xc0beefa  jal         func_2FBBE8
label_29535c:
    if (ctx->pc == 0x29535Cu) {
        ctx->pc = 0x29535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295358u;
        // 0x29535c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295360u;
        goto label_295360;
    }
    ctx->pc = 0x295358u;
    SET_GPR_U32(ctx, 31, 0x295360u);
    ctx->pc = 0x29535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295358u;
    // 0x29535c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBE8u, 0x295358u, 0x295360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295360u;
label_295360:
    // 0x295360: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x295360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_295364:
    // 0x295364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x295364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_295368:
    // 0x295368: 0x56130006  bnel        $s0, $s3, . + 4 + (0x6 << 2)
label_29536c:
    if (ctx->pc == 0x29536Cu) {
        ctx->pc = 0x29536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295368u;
        // 0x29536c: 0xe620002c  swc1        $f0, 0x2C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x295370u;
        goto label_295370;
    }
    ctx->pc = 0x295368u;
    {
        const bool branch_taken_0x295368 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x295368) {
            ctx->pc = 0x29536Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295368u;
            // 0x29536c: 0xe620002c  swc1        $f0, 0x2C($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x295384u;
            goto label_295384;
        }
    }
    ctx->pc = 0x295370u;
label_295370:
    // 0x295370: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x295370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_295374:
    // 0x295374: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x295374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_295378:
    // 0x295378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x295378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29537c:
    // 0x29537c: 0x0  nop
    ctx->pc = 0x29537cu;
    // NOP
label_295380:
    // 0x295380: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x295380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_295384:
    // 0x295384: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x295384u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_295388:
    // 0x295388: 0x2ee20009  sltiu       $v0, $s7, 0x9
    ctx->pc = 0x295388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_29538c:
    // 0x29538c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
label_295390:
    if (ctx->pc == 0x295390u) {
        ctx->pc = 0x295390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29538Cu;
        // 0x295390: 0x26b5000c  addiu       $s5, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295394u;
        goto label_295394;
    }
    ctx->pc = 0x29538Cu;
    {
        const bool branch_taken_0x29538c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29538Cu;
        // 0x295390: 0x26b5000c  addiu       $s5, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29538c) {
            ctx->pc = 0x295290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295290;
        }
    }
    ctx->pc = 0x295394u;
label_295394:
    // 0x295394: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x295394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_295398:
    // 0x295398: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x295398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_29539c:
    // 0x29539c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x29539cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2953a0:
    // 0x2953a0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2953a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2953a4:
    // 0x2953a4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2953a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2953a8:
    // 0x2953a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2953a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2953ac:
    // 0x2953ac: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2953acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2953b0:
    // 0x2953b0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2953b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2953b4:
    // 0x2953b4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2953b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2953b8:
    // 0x2953b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2953b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2953bc:
    // 0x2953bc: 0x3e00008  jr          $ra
label_2953c0:
    if (ctx->pc == 0x2953C0u) {
        ctx->pc = 0x2953C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2953BCu;
        // 0x2953c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2953C4u;
        goto label_2953c4;
    }
    ctx->pc = 0x2953BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2953C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2953BCu;
        // 0x2953c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2953BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2953C4u;
label_2953c4:
    // 0x2953c4: 0x0  nop
    ctx->pc = 0x2953c4u;
    // NOP
    ctx->pc = 0x2953c8u;
}
