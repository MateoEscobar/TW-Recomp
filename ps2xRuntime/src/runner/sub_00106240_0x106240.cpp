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

// Function: sub_00106240
// Address: 0x106240 - 0x106360
void sub_00106240_0x106240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106240_0x106240");
#endif

    switch (ctx->pc) {
        case 0x106240u: goto label_106240;
        case 0x106244u: goto label_106244;
        case 0x106248u: goto label_106248;
        case 0x10624cu: goto label_10624c;
        case 0x106250u: goto label_106250;
        case 0x106254u: goto label_106254;
        case 0x106258u: goto label_106258;
        case 0x10625cu: goto label_10625c;
        case 0x106260u: goto label_106260;
        case 0x106264u: goto label_106264;
        case 0x106268u: goto label_106268;
        case 0x10626cu: goto label_10626c;
        case 0x106270u: goto label_106270;
        case 0x106274u: goto label_106274;
        case 0x106278u: goto label_106278;
        case 0x10627cu: goto label_10627c;
        case 0x106280u: goto label_106280;
        case 0x106284u: goto label_106284;
        case 0x106288u: goto label_106288;
        case 0x10628cu: goto label_10628c;
        case 0x106290u: goto label_106290;
        case 0x106294u: goto label_106294;
        case 0x106298u: goto label_106298;
        case 0x10629cu: goto label_10629c;
        case 0x1062a0u: goto label_1062a0;
        case 0x1062a4u: goto label_1062a4;
        case 0x1062a8u: goto label_1062a8;
        case 0x1062acu: goto label_1062ac;
        case 0x1062b0u: goto label_1062b0;
        case 0x1062b4u: goto label_1062b4;
        case 0x1062b8u: goto label_1062b8;
        case 0x1062bcu: goto label_1062bc;
        case 0x1062c0u: goto label_1062c0;
        case 0x1062c4u: goto label_1062c4;
        case 0x1062c8u: goto label_1062c8;
        case 0x1062ccu: goto label_1062cc;
        case 0x1062d0u: goto label_1062d0;
        case 0x1062d4u: goto label_1062d4;
        case 0x1062d8u: goto label_1062d8;
        case 0x1062dcu: goto label_1062dc;
        case 0x1062e0u: goto label_1062e0;
        case 0x1062e4u: goto label_1062e4;
        case 0x1062e8u: goto label_1062e8;
        case 0x1062ecu: goto label_1062ec;
        case 0x1062f0u: goto label_1062f0;
        case 0x1062f4u: goto label_1062f4;
        case 0x1062f8u: goto label_1062f8;
        case 0x1062fcu: goto label_1062fc;
        case 0x106300u: goto label_106300;
        case 0x106304u: goto label_106304;
        case 0x106308u: goto label_106308;
        case 0x10630cu: goto label_10630c;
        case 0x106310u: goto label_106310;
        case 0x106314u: goto label_106314;
        case 0x106318u: goto label_106318;
        case 0x10631cu: goto label_10631c;
        case 0x106320u: goto label_106320;
        case 0x106324u: goto label_106324;
        case 0x106328u: goto label_106328;
        case 0x10632cu: goto label_10632c;
        case 0x106330u: goto label_106330;
        case 0x106334u: goto label_106334;
        case 0x106338u: goto label_106338;
        case 0x10633cu: goto label_10633c;
        case 0x106340u: goto label_106340;
        case 0x106344u: goto label_106344;
        case 0x106348u: goto label_106348;
        case 0x10634cu: goto label_10634c;
        case 0x106350u: goto label_106350;
        case 0x106354u: goto label_106354;
        case 0x106358u: goto label_106358;
        case 0x10635cu: goto label_10635c;
        default: break;
    }

    ctx->pc = 0x106240u;

label_106240:
    // 0x106240: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x106240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_106244:
    // 0x106244: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x106244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_106248:
    // 0x106248: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x106248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_10624c:
    // 0x10624c: 0x24424e80  addiu       $v0, $v0, 0x4E80
    ctx->pc = 0x10624cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20096));
label_106250:
    // 0x106250: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x106250u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_106254:
    // 0x106254: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_106258:
    // 0x106258: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x106258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_10625c:
    // 0x10625c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x10625cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_106260:
    // 0x106260: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x106260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_106264:
    // 0x106264: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x106264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_106268:
    // 0x106268: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x106268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_10626c:
    // 0x10626c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10626cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_106270:
    // 0x106270: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x106270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_106274:
    // 0x106274: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x106274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_106278:
    // 0x106278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10627c:
    // 0x10627c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x10627cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_106280:
    // 0x106280: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x106280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_106284:
    // 0x106284: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x106284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_106288:
    // 0x106288: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x106288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_10628c:
    // 0x10628c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10628cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_106290:
    // 0x106290: 0xae280034  sw          $t0, 0x34($s1)
    ctx->pc = 0x106290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 8));
label_106294:
    // 0x106294: 0xe62c0024  swc1        $f12, 0x24($s1)
    ctx->pc = 0x106294u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_106298:
    // 0x106298: 0xae270020  sw          $a3, 0x20($s1)
    ctx->pc = 0x106298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 7));
label_10629c:
    // 0x10629c: 0xe6340028  swc1        $f20, 0x28($s1)
    ctx->pc = 0x10629cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_1062a0:
    // 0x1062a0: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1062a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_1062a4:
    // 0x1062a4: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x1062a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_1062a8:
    // 0x1062a8: 0xc04128e  jal         func_104A38
label_1062ac:
    if (ctx->pc == 0x1062ACu) {
        ctx->pc = 0x1062ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062A8u;
        // 0x1062ac: 0x8e4402b8  lw          $a0, 0x2B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1062B0u;
        goto label_1062b0;
    }
    ctx->pc = 0x1062A8u;
    SET_GPR_U32(ctx, 31, 0x1062B0u);
    ctx->pc = 0x1062ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1062A8u;
    // 0x1062ac: 0x8e4402b8  lw          $a0, 0x2B8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A38u, 0x1062A8u, 0x1062B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1062B0u;
label_1062b0:
    // 0x1062b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1062b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1062b4:
    // 0x1062b4: 0x0  nop
    ctx->pc = 0x1062b4u;
    // NOP
label_1062b8:
    // 0x1062b8: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x1062b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1062bc:
    // 0x1062bc: 0x0  nop
    ctx->pc = 0x1062bcu;
    // NOP
label_1062c0:
    // 0x1062c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1062c4:
    if (ctx->pc == 0x1062C4u) {
        ctx->pc = 0x1062C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062C0u;
        // 0x1062c4: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1062C8u;
        goto label_1062c8;
    }
    ctx->pc = 0x1062C0u;
    {
        const bool branch_taken_0x1062c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1062C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062C0u;
        // 0x1062c4: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062c0) {
            ctx->pc = 0x1062D0u;
            goto label_1062d0;
        }
    }
    ctx->pc = 0x1062C8u;
label_1062c8:
    // 0x1062c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1062c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1062cc:
    // 0x1062cc: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1062ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_1062d0:
    // 0x1062d0: 0xae30003c  sw          $s0, 0x3C($s1)
    ctx->pc = 0x1062d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 16));
label_1062d4:
    // 0x1062d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1062d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1062d8:
    // 0x1062d8: 0xc05d462  jal         func_175188
label_1062dc:
    if (ctx->pc == 0x1062DCu) {
        ctx->pc = 0x1062DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062D8u;
        // 0x1062dc: 0xae340038  sw          $s4, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1062E0u;
        goto label_1062e0;
    }
    ctx->pc = 0x1062D8u;
    SET_GPR_U32(ctx, 31, 0x1062E0u);
    ctx->pc = 0x1062DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1062D8u;
    // 0x1062dc: 0xae340038  sw          $s4, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x1062D8u, 0x1062E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1062E0u;
label_1062e0:
    // 0x1062e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1062e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1062e4:
    // 0x1062e4: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x1062e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_1062e8:
    // 0x1062e8: 0x8c65009c  lw          $a1, 0x9C($v1)
    ctx->pc = 0x1062e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_1062ec:
    // 0x1062ec: 0xa0f809  jalr        $a1
label_1062f0:
    if (ctx->pc == 0x1062F0u) {
        ctx->pc = 0x1062F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062ECu;
        // 0x1062f0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1062F4u;
        goto label_1062f4;
    }
    ctx->pc = 0x1062ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1062F4u);
        ctx->pc = 0x1062F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062ECu;
        // 0x1062f0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1062ECu, 0x1062F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1062F4u;
label_1062f4:
    // 0x1062f4: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1062f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_1062f8:
    // 0x1062f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1062f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1062fc:
    // 0x1062fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1062fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106300:
    // 0x106300: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x106300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_106304:
    // 0x106304: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x106304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_106308:
    // 0x106308: 0xc05d420  jal         func_175080
label_10630c:
    if (ctx->pc == 0x10630Cu) {
        ctx->pc = 0x10630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106308u;
        // 0x10630c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106310u;
        goto label_106310;
    }
    ctx->pc = 0x106308u;
    SET_GPR_U32(ctx, 31, 0x106310u);
    ctx->pc = 0x10630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106308u;
    // 0x10630c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x106308u, 0x106310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106310u;
label_106310:
    // 0x106310: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x106310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106314:
    // 0x106314: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x106314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_106318:
    // 0x106318: 0xc042ed8  jal         func_10BB60
label_10631c:
    if (ctx->pc == 0x10631Cu) {
        ctx->pc = 0x10631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106318u;
        // 0x10631c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106320u;
        goto label_106320;
    }
    ctx->pc = 0x106318u;
    SET_GPR_U32(ctx, 31, 0x106320u);
    ctx->pc = 0x10631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106318u;
    // 0x10631c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x106318u, 0x106320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106320u;
label_106320:
    // 0x106320: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_106324:
    // 0x106324: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106328:
    // 0x106328: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x106328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10632c:
    // 0x10632c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x10632cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_106330:
    // 0x106330: 0xc041164  jal         func_104590
label_106334:
    if (ctx->pc == 0x106334u) {
        ctx->pc = 0x106334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106330u;
        // 0x106334: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106338u;
        goto label_106338;
    }
    ctx->pc = 0x106330u;
    SET_GPR_U32(ctx, 31, 0x106338u);
    ctx->pc = 0x106334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106330u;
    // 0x106334: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x106330u, 0x106338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106338u;
label_106338:
    // 0x106338: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x106338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10633c:
    // 0x10633c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10633cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_106340:
    // 0x106340: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x106340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_106344:
    // 0x106344: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x106344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_106348:
    // 0x106348: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x106348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10634c:
    // 0x10634c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x10634cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_106350:
    // 0x106350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_106354:
    // 0x106354: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x106354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_106358:
    // 0x106358: 0x3e00008  jr          $ra
label_10635c:
    if (ctx->pc == 0x10635Cu) {
        ctx->pc = 0x10635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106358u;
        // 0x10635c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106360u;
        goto label_fallthrough_0x106358;
    }
    ctx->pc = 0x106358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106358u;
        // 0x10635c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x106358:
    ctx->pc = 0x106360u;
}
