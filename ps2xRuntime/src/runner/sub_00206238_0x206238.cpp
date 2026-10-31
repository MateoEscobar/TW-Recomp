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

// Function: sub_00206238
// Address: 0x206238 - 0x2063d8
void sub_00206238_0x206238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206238_0x206238");
#endif

    switch (ctx->pc) {
        case 0x206238u: goto label_206238;
        case 0x20623cu: goto label_20623c;
        case 0x206240u: goto label_206240;
        case 0x206244u: goto label_206244;
        case 0x206248u: goto label_206248;
        case 0x20624cu: goto label_20624c;
        case 0x206250u: goto label_206250;
        case 0x206254u: goto label_206254;
        case 0x206258u: goto label_206258;
        case 0x20625cu: goto label_20625c;
        case 0x206260u: goto label_206260;
        case 0x206264u: goto label_206264;
        case 0x206268u: goto label_206268;
        case 0x20626cu: goto label_20626c;
        case 0x206270u: goto label_206270;
        case 0x206274u: goto label_206274;
        case 0x206278u: goto label_206278;
        case 0x20627cu: goto label_20627c;
        case 0x206280u: goto label_206280;
        case 0x206284u: goto label_206284;
        case 0x206288u: goto label_206288;
        case 0x20628cu: goto label_20628c;
        case 0x206290u: goto label_206290;
        case 0x206294u: goto label_206294;
        case 0x206298u: goto label_206298;
        case 0x20629cu: goto label_20629c;
        case 0x2062a0u: goto label_2062a0;
        case 0x2062a4u: goto label_2062a4;
        case 0x2062a8u: goto label_2062a8;
        case 0x2062acu: goto label_2062ac;
        case 0x2062b0u: goto label_2062b0;
        case 0x2062b4u: goto label_2062b4;
        case 0x2062b8u: goto label_2062b8;
        case 0x2062bcu: goto label_2062bc;
        case 0x2062c0u: goto label_2062c0;
        case 0x2062c4u: goto label_2062c4;
        case 0x2062c8u: goto label_2062c8;
        case 0x2062ccu: goto label_2062cc;
        case 0x2062d0u: goto label_2062d0;
        case 0x2062d4u: goto label_2062d4;
        case 0x2062d8u: goto label_2062d8;
        case 0x2062dcu: goto label_2062dc;
        case 0x2062e0u: goto label_2062e0;
        case 0x2062e4u: goto label_2062e4;
        case 0x2062e8u: goto label_2062e8;
        case 0x2062ecu: goto label_2062ec;
        case 0x2062f0u: goto label_2062f0;
        case 0x2062f4u: goto label_2062f4;
        case 0x2062f8u: goto label_2062f8;
        case 0x2062fcu: goto label_2062fc;
        case 0x206300u: goto label_206300;
        case 0x206304u: goto label_206304;
        case 0x206308u: goto label_206308;
        case 0x20630cu: goto label_20630c;
        case 0x206310u: goto label_206310;
        case 0x206314u: goto label_206314;
        case 0x206318u: goto label_206318;
        case 0x20631cu: goto label_20631c;
        case 0x206320u: goto label_206320;
        case 0x206324u: goto label_206324;
        case 0x206328u: goto label_206328;
        case 0x20632cu: goto label_20632c;
        case 0x206330u: goto label_206330;
        case 0x206334u: goto label_206334;
        case 0x206338u: goto label_206338;
        case 0x20633cu: goto label_20633c;
        case 0x206340u: goto label_206340;
        case 0x206344u: goto label_206344;
        case 0x206348u: goto label_206348;
        case 0x20634cu: goto label_20634c;
        case 0x206350u: goto label_206350;
        case 0x206354u: goto label_206354;
        case 0x206358u: goto label_206358;
        case 0x20635cu: goto label_20635c;
        case 0x206360u: goto label_206360;
        case 0x206364u: goto label_206364;
        case 0x206368u: goto label_206368;
        case 0x20636cu: goto label_20636c;
        case 0x206370u: goto label_206370;
        case 0x206374u: goto label_206374;
        case 0x206378u: goto label_206378;
        case 0x20637cu: goto label_20637c;
        case 0x206380u: goto label_206380;
        case 0x206384u: goto label_206384;
        case 0x206388u: goto label_206388;
        case 0x20638cu: goto label_20638c;
        case 0x206390u: goto label_206390;
        case 0x206394u: goto label_206394;
        case 0x206398u: goto label_206398;
        case 0x20639cu: goto label_20639c;
        case 0x2063a0u: goto label_2063a0;
        case 0x2063a4u: goto label_2063a4;
        case 0x2063a8u: goto label_2063a8;
        case 0x2063acu: goto label_2063ac;
        case 0x2063b0u: goto label_2063b0;
        case 0x2063b4u: goto label_2063b4;
        case 0x2063b8u: goto label_2063b8;
        case 0x2063bcu: goto label_2063bc;
        case 0x2063c0u: goto label_2063c0;
        case 0x2063c4u: goto label_2063c4;
        case 0x2063c8u: goto label_2063c8;
        case 0x2063ccu: goto label_2063cc;
        case 0x2063d0u: goto label_2063d0;
        case 0x2063d4u: goto label_2063d4;
        default: break;
    }

    ctx->pc = 0x206238u;

label_206238:
    // 0x206238: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x206238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20623c:
    // 0x20623c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x20623cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_206240:
    // 0x206240: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x206240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_206244:
    // 0x206244: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x206244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_206248:
    // 0x206248: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x206248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20624c:
    // 0x20624c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x20624cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_206250:
    // 0x206250: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x206250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_206254:
    // 0x206254: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x206254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_206258:
    // 0x206258: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x206258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_20625c:
    // 0x20625c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20625cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206260:
    // 0x206260: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x206260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_206264:
    // 0x206264: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x206264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_206268:
    // 0x206268: 0xc46001d8  lwc1        $f0, 0x1D8($v1)
    ctx->pc = 0x206268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20626c:
    // 0x20626c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x20626cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_206270:
    // 0x206270: 0x0  nop
    ctx->pc = 0x206270u;
    // NOP
label_206274:
    // 0x206274: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
label_206278:
    if (ctx->pc == 0x206278u) {
        ctx->pc = 0x206278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206274u;
        // 0x206278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20627Cu;
        goto label_20627c;
    }
    ctx->pc = 0x206274u;
    {
        const bool branch_taken_0x206274 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206274u;
        // 0x206278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206274) {
            ctx->pc = 0x2063B4u;
            goto label_2063b4;
        }
    }
    ctx->pc = 0x20627Cu;
label_20627c:
    // 0x20627c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20627cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_206280:
    // 0x206280: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
label_206284:
    if (ctx->pc == 0x206284u) {
        ctx->pc = 0x206284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206280u;
        // 0x206284: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206288u;
        goto label_206288;
    }
    ctx->pc = 0x206280u;
    {
        const bool branch_taken_0x206280 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x206284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206280u;
        // 0x206284: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206280) {
            ctx->pc = 0x2062A4u;
            goto label_2062a4;
        }
    }
    ctx->pc = 0x206288u;
label_206288:
    // 0x206288: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x206288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_20628c:
    // 0x20628c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20628cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_206290:
    // 0x206290: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x206290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_206294:
    // 0x206294: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x206294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_206298:
    // 0x206298: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x206298u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_20629c:
    // 0x20629c: 0x10000042  b           . + 4 + (0x42 << 2)
label_2062a0:
    if (ctx->pc == 0x2062A0u) {
        ctx->pc = 0x2062A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20629Cu;
        // 0x2062a0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2062A4u;
        goto label_2062a4;
    }
    ctx->pc = 0x20629Cu;
    {
        const bool branch_taken_0x20629c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2062A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20629Cu;
        // 0x2062a0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20629c) {
            ctx->pc = 0x2063A8u;
            goto label_2063a8;
        }
    }
    ctx->pc = 0x2062A4u;
label_2062a4:
    // 0x2062a4: 0x14a20043  bne         $a1, $v0, . + 4 + (0x43 << 2)
label_2062a8:
    if (ctx->pc == 0x2062A8u) {
        ctx->pc = 0x2062A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062A4u;
        // 0x2062a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2062ACu;
        goto label_2062ac;
    }
    ctx->pc = 0x2062A4u;
    {
        const bool branch_taken_0x2062a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2062A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062A4u;
        // 0x2062a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2062a4) {
            ctx->pc = 0x2063B4u;
            goto label_2063b4;
        }
    }
    ctx->pc = 0x2062ACu;
label_2062ac:
    // 0x2062ac: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x2062acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_2062b0:
    // 0x2062b0: 0xc0750fa  jal         func_1D43E8
label_2062b4:
    if (ctx->pc == 0x2062B4u) {
        ctx->pc = 0x2062B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062B0u;
        // 0x2062b4: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2062B8u;
        goto label_2062b8;
    }
    ctx->pc = 0x2062B0u;
    SET_GPR_U32(ctx, 31, 0x2062B8u);
    ctx->pc = 0x2062B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062B0u;
    // 0x2062b4: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x2062B0u, 0x2062B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062B8u;
label_2062b8:
    // 0x2062b8: 0x8e915024  lw          $s1, 0x5024($s4)
    ctx->pc = 0x2062b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20516)));
label_2062bc:
    // 0x2062bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2062bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2062c0:
    // 0x2062c0: 0x8e300128  lw          $s0, 0x128($s1)
    ctx->pc = 0x2062c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_2062c4:
    // 0x2062c4: 0x86020078  lh          $v0, 0x78($s0)
    ctx->pc = 0x2062c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
label_2062c8:
    // 0x2062c8: 0x26100078  addiu       $s0, $s0, 0x78
    ctx->pc = 0x2062c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_2062cc:
    // 0x2062cc: 0xc081022  jal         func_204088
label_2062d0:
    if (ctx->pc == 0x2062D0u) {
        ctx->pc = 0x2062D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062CCu;
        // 0x2062d0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2062D4u;
        goto label_2062d4;
    }
    ctx->pc = 0x2062CCu;
    SET_GPR_U32(ctx, 31, 0x2062D4u);
    ctx->pc = 0x2062D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062CCu;
    // 0x2062d0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204088u, 0x2062CCu, 0x2062D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062D4u;
label_2062d4:
    // 0x2062d4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2062d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2062d8:
    // 0x2062d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2062d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2062dc:
    // 0x2062dc: 0x60f809  jalr        $v1
label_2062e0:
    if (ctx->pc == 0x2062E0u) {
        ctx->pc = 0x2062E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062DCu;
        // 0x2062e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2062E4u;
        goto label_2062e4;
    }
    ctx->pc = 0x2062DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2062E4u);
        ctx->pc = 0x2062E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062DCu;
        // 0x2062e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2062DCu, 0x2062E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2062E4u;
label_2062e4:
    // 0x2062e4: 0x1640002a  bnez        $s2, . + 4 + (0x2A << 2)
label_2062e8:
    if (ctx->pc == 0x2062E8u) {
        ctx->pc = 0x2062E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062E4u;
        // 0x2062e8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2062ECu;
        goto label_2062ec;
    }
    ctx->pc = 0x2062E4u;
    {
        const bool branch_taken_0x2062e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2062E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062E4u;
        // 0x2062e8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2062e4) {
            ctx->pc = 0x206390u;
            goto label_206390;
        }
    }
    ctx->pc = 0x2062ECu;
label_2062ec:
    // 0x2062ec: 0x8e915024  lw          $s1, 0x5024($s4)
    ctx->pc = 0x2062ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20516)));
label_2062f0:
    // 0x2062f0: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x2062f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_2062f4:
    // 0x2062f4: 0x8e300128  lw          $s0, 0x128($s1)
    ctx->pc = 0x2062f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_2062f8:
    // 0x2062f8: 0x86020050  lh          $v0, 0x50($s0)
    ctx->pc = 0x2062f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_2062fc:
    // 0x2062fc: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x2062fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_206300:
    // 0x206300: 0xc081022  jal         func_204088
label_206304:
    if (ctx->pc == 0x206304u) {
        ctx->pc = 0x206304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206300u;
        // 0x206304: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206308u;
        goto label_206308;
    }
    ctx->pc = 0x206300u;
    SET_GPR_U32(ctx, 31, 0x206308u);
    ctx->pc = 0x206304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206300u;
    // 0x206304: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204088u, 0x206300u, 0x206308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206308u;
label_206308:
    // 0x206308: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x206308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20630c:
    // 0x20630c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20630cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206310:
    // 0x206310: 0x60f809  jalr        $v1
label_206314:
    if (ctx->pc == 0x206314u) {
        ctx->pc = 0x206314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206310u;
        // 0x206314: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206318u;
        goto label_206318;
    }
    ctx->pc = 0x206310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206318u);
        ctx->pc = 0x206314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206310u;
        // 0x206314: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206310u, 0x206318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206318u;
label_206318:
    // 0x206318: 0x8e915024  lw          $s1, 0x5024($s4)
    ctx->pc = 0x206318u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20516)));
label_20631c:
    // 0x20631c: 0x8e300128  lw          $s0, 0x128($s1)
    ctx->pc = 0x20631cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_206320:
    // 0x206320: 0x86020188  lh          $v0, 0x188($s0)
    ctx->pc = 0x206320u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 392)));
label_206324:
    // 0x206324: 0x26100188  addiu       $s0, $s0, 0x188
    ctx->pc = 0x206324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
label_206328:
    // 0x206328: 0xc081022  jal         func_204088
label_20632c:
    if (ctx->pc == 0x20632Cu) {
        ctx->pc = 0x20632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206328u;
        // 0x20632c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206330u;
        goto label_206330;
    }
    ctx->pc = 0x206328u;
    SET_GPR_U32(ctx, 31, 0x206330u);
    ctx->pc = 0x20632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206328u;
    // 0x20632c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204088u, 0x206328u, 0x206330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206330u;
label_206330:
    // 0x206330: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x206330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_206334:
    // 0x206334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x206334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206338:
    // 0x206338: 0x60f809  jalr        $v1
label_20633c:
    if (ctx->pc == 0x20633Cu) {
        ctx->pc = 0x20633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206338u;
        // 0x20633c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206340u;
        goto label_206340;
    }
    ctx->pc = 0x206338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206340u);
        ctx->pc = 0x20633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206338u;
        // 0x20633c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206338u, 0x206340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206340u;
label_206340:
    // 0x206340: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x206340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_206344:
    // 0x206344: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x206344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_206348:
    // 0x206348: 0x24a588b8  addiu       $a1, $a1, -0x7748
    ctx->pc = 0x206348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936760));
label_20634c:
    // 0x20634c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20634cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_206350:
    // 0x206350: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x206350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_206354:
    // 0x206354: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x206354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_206358:
    // 0x206358: 0x40f809  jalr        $v0
label_20635c:
    if (ctx->pc == 0x20635Cu) {
        ctx->pc = 0x20635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206358u;
        // 0x20635c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206360u;
        goto label_206360;
    }
    ctx->pc = 0x206358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206360u);
        ctx->pc = 0x20635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206358u;
        // 0x20635c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206358u, 0x206360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206360u;
label_206360:
    // 0x206360: 0x8e472b04  lw          $a3, 0x2B04($s2)
    ctx->pc = 0x206360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_206364:
    // 0x206364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x206364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206368:
    // 0x206368: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x206368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20636c:
    // 0x20636c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x20636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_206370:
    // 0x206370: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x206370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_206374:
    // 0x206374: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x206374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_206378:
    // 0x206378: 0x60f809  jalr        $v1
label_20637c:
    if (ctx->pc == 0x20637Cu) {
        ctx->pc = 0x20637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206378u;
        // 0x20637c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206380u;
        goto label_206380;
    }
    ctx->pc = 0x206378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206380u);
        ctx->pc = 0x20637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206378u;
        // 0x20637c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206378u, 0x206380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206380u;
label_206380:
    // 0x206380: 0x52a00006  beql        $s5, $zero, . + 4 + (0x6 << 2)
label_206384:
    if (ctx->pc == 0x206384u) {
        ctx->pc = 0x206384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206380u;
        // 0x206384: 0xae600074  sw          $zero, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206388u;
        goto label_206388;
    }
    ctx->pc = 0x206380u;
    {
        const bool branch_taken_0x206380 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x206380) {
            ctx->pc = 0x206384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206380u;
            // 0x206384: 0xae600074  sw          $zero, 0x74($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20639Cu;
            goto label_20639c;
        }
    }
    ctx->pc = 0x206388u;
label_206388:
    // 0x206388: 0x10000003  b           . + 4 + (0x3 << 2)
label_20638c:
    if (ctx->pc == 0x20638Cu) {
        ctx->pc = 0x20638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206388u;
        // 0x20638c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206390u;
        goto label_206390;
    }
    ctx->pc = 0x206388u;
    {
        const bool branch_taken_0x206388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206388u;
        // 0x20638c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206388) {
            ctx->pc = 0x206398u;
            goto label_206398;
        }
    }
    ctx->pc = 0x206390u;
label_206390:
    // 0x206390: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x206390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_206394:
    // 0x206394: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x206394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_206398:
    // 0x206398: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x206398u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_20639c:
    // 0x20639c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20639cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2063a0:
    // 0x2063a0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2063a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2063a4:
    // 0x2063a4: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x2063a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_2063a8:
    // 0x2063a8: 0xc043f0c  jal         func_10FC30
label_2063ac:
    if (ctx->pc == 0x2063ACu) {
        ctx->pc = 0x2063B0u;
        goto label_2063b0;
    }
    ctx->pc = 0x2063A8u;
    SET_GPR_U32(ctx, 31, 0x2063B0u);
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x2063A8u, 0x2063B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2063B0u;
label_2063b0:
    // 0x2063b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2063b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2063b4:
    // 0x2063b4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2063b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2063b8:
    // 0x2063b8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2063b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2063bc:
    // 0x2063bc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2063bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2063c0:
    // 0x2063c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2063c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2063c4:
    // 0x2063c4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2063c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2063c8:
    // 0x2063c8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2063c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2063cc:
    // 0x2063cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2063ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2063d0:
    // 0x2063d0: 0x3e00008  jr          $ra
label_2063d4:
    if (ctx->pc == 0x2063D4u) {
        ctx->pc = 0x2063D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063D0u;
        // 0x2063d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2063D8u;
        goto label_fallthrough_0x2063d0;
    }
    ctx->pc = 0x2063D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2063D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063D0u;
        // 0x2063d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2063D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2063d0:
    ctx->pc = 0x2063D8u;
}
