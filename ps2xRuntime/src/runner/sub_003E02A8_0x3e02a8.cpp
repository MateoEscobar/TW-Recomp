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

// Function: sub_003E02A8
// Address: 0x3e02a8 - 0x3e03b0
void sub_003E02A8_0x3e02a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E02A8_0x3e02a8");
#endif

    switch (ctx->pc) {
        case 0x3e02a8u: goto label_3e02a8;
        case 0x3e02acu: goto label_3e02ac;
        case 0x3e02b0u: goto label_3e02b0;
        case 0x3e02b4u: goto label_3e02b4;
        case 0x3e02b8u: goto label_3e02b8;
        case 0x3e02bcu: goto label_3e02bc;
        case 0x3e02c0u: goto label_3e02c0;
        case 0x3e02c4u: goto label_3e02c4;
        case 0x3e02c8u: goto label_3e02c8;
        case 0x3e02ccu: goto label_3e02cc;
        case 0x3e02d0u: goto label_3e02d0;
        case 0x3e02d4u: goto label_3e02d4;
        case 0x3e02d8u: goto label_3e02d8;
        case 0x3e02dcu: goto label_3e02dc;
        case 0x3e02e0u: goto label_3e02e0;
        case 0x3e02e4u: goto label_3e02e4;
        case 0x3e02e8u: goto label_3e02e8;
        case 0x3e02ecu: goto label_3e02ec;
        case 0x3e02f0u: goto label_3e02f0;
        case 0x3e02f4u: goto label_3e02f4;
        case 0x3e02f8u: goto label_3e02f8;
        case 0x3e02fcu: goto label_3e02fc;
        case 0x3e0300u: goto label_3e0300;
        case 0x3e0304u: goto label_3e0304;
        case 0x3e0308u: goto label_3e0308;
        case 0x3e030cu: goto label_3e030c;
        case 0x3e0310u: goto label_3e0310;
        case 0x3e0314u: goto label_3e0314;
        case 0x3e0318u: goto label_3e0318;
        case 0x3e031cu: goto label_3e031c;
        case 0x3e0320u: goto label_3e0320;
        case 0x3e0324u: goto label_3e0324;
        case 0x3e0328u: goto label_3e0328;
        case 0x3e032cu: goto label_3e032c;
        case 0x3e0330u: goto label_3e0330;
        case 0x3e0334u: goto label_3e0334;
        case 0x3e0338u: goto label_3e0338;
        case 0x3e033cu: goto label_3e033c;
        case 0x3e0340u: goto label_3e0340;
        case 0x3e0344u: goto label_3e0344;
        case 0x3e0348u: goto label_3e0348;
        case 0x3e034cu: goto label_3e034c;
        case 0x3e0350u: goto label_3e0350;
        case 0x3e0354u: goto label_3e0354;
        case 0x3e0358u: goto label_3e0358;
        case 0x3e035cu: goto label_3e035c;
        case 0x3e0360u: goto label_3e0360;
        case 0x3e0364u: goto label_3e0364;
        case 0x3e0368u: goto label_3e0368;
        case 0x3e036cu: goto label_3e036c;
        case 0x3e0370u: goto label_3e0370;
        case 0x3e0374u: goto label_3e0374;
        case 0x3e0378u: goto label_3e0378;
        case 0x3e037cu: goto label_3e037c;
        case 0x3e0380u: goto label_3e0380;
        case 0x3e0384u: goto label_3e0384;
        case 0x3e0388u: goto label_3e0388;
        case 0x3e038cu: goto label_3e038c;
        case 0x3e0390u: goto label_3e0390;
        case 0x3e0394u: goto label_3e0394;
        case 0x3e0398u: goto label_3e0398;
        case 0x3e039cu: goto label_3e039c;
        case 0x3e03a0u: goto label_3e03a0;
        case 0x3e03a4u: goto label_3e03a4;
        case 0x3e03a8u: goto label_3e03a8;
        case 0x3e03acu: goto label_3e03ac;
        default: break;
    }

    ctx->pc = 0x3e02a8u;

label_3e02a8:
    // 0x3e02a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3e02a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3e02ac:
    // 0x3e02ac: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3e02acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3e02b0:
    // 0x3e02b0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3e02b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3e02b4:
    // 0x3e02b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e02b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e02b8:
    // 0x3e02b8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3e02b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3e02bc:
    // 0x3e02bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e02bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e02c0:
    // 0x3e02c0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3e02c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3e02c4:
    // 0x3e02c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e02c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e02c8:
    // 0x3e02c8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3e02c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3e02cc:
    // 0x3e02cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e02ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3e02d0:
    // 0x3e02d0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3e02d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3e02d4:
    // 0x3e02d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e02d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e02d8:
    // 0x3e02d8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e02d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e02dc:
    // 0x3e02dc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e02dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e02e0:
    // 0x3e02e0: 0x40f809  jalr        $v0
label_3e02e4:
    if (ctx->pc == 0x3E02E4u) {
        ctx->pc = 0x3E02E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E02E0u;
        // 0x3e02e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E02E8u;
        goto label_3e02e8;
    }
    ctx->pc = 0x3E02E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E02E8u);
        ctx->pc = 0x3E02E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E02E0u;
        // 0x3e02e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E02E0u, 0x3E02E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E02E8u;
label_3e02e8:
    // 0x3e02e8: 0x24030480  addiu       $v1, $zero, 0x480
    ctx->pc = 0x3e02e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
label_3e02ec:
    // 0x3e02ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e02ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e02f0:
    // 0x3e02f0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3e02f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3e02f4:
    // 0x3e02f4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3e02f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3e02f8:
    // 0x3e02f8: 0xc0e858c  jal         func_3A1630
label_3e02fc:
    if (ctx->pc == 0x3E02FCu) {
        ctx->pc = 0x3E02FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E02F8u;
        // 0x3e02fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0300u;
        goto label_3e0300;
    }
    ctx->pc = 0x3E02F8u;
    SET_GPR_U32(ctx, 31, 0x3E0300u);
    ctx->pc = 0x3E02FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E02F8u;
    // 0x3e02fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E02F8u, 0x3E0300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0300u;
label_3e0300:
    // 0x3e0300: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3e0300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3e0304:
    // 0x3e0304: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e0304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e0308:
    // 0x3e0308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e0308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e030c:
    // 0x3e030c: 0xc0ea146  jal         func_3A8518
label_3e0310:
    if (ctx->pc == 0x3E0310u) {
        ctx->pc = 0x3E0310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E030Cu;
        // 0x3e0310: 0xe600008c  swc1        $f0, 0x8C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0314u;
        goto label_3e0314;
    }
    ctx->pc = 0x3E030Cu;
    SET_GPR_U32(ctx, 31, 0x3E0314u);
    ctx->pc = 0x3E0310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E030Cu;
    // 0x3e0310: 0xe600008c  swc1        $f0, 0x8C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E030Cu, 0x3E0314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0314u;
label_3e0314:
    // 0x3e0314: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e0314u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0318:
    // 0x3e0318: 0xc0ea13a  jal         func_3A84E8
label_3e031c:
    if (ctx->pc == 0x3E031Cu) {
        ctx->pc = 0x3E031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0318u;
        // 0x3e031c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0320u;
        goto label_3e0320;
    }
    ctx->pc = 0x3E0318u;
    SET_GPR_U32(ctx, 31, 0x3E0320u);
    ctx->pc = 0x3E031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0318u;
    // 0x3e031c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E0318u, 0x3E0320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0320u;
label_3e0320:
    // 0x3e0320: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e0320u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e0324:
    // 0x3e0324: 0xc0ea146  jal         func_3A8518
label_3e0328:
    if (ctx->pc == 0x3E0328u) {
        ctx->pc = 0x3E0328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0324u;
        // 0x3e0328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E032Cu;
        goto label_3e032c;
    }
    ctx->pc = 0x3E0324u;
    SET_GPR_U32(ctx, 31, 0x3E032Cu);
    ctx->pc = 0x3E0328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0324u;
    // 0x3e0328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E0324u, 0x3E032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E032Cu;
label_3e032c:
    // 0x3e032c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e032cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0330:
    // 0x3e0330: 0xc0ea146  jal         func_3A8518
label_3e0334:
    if (ctx->pc == 0x3E0334u) {
        ctx->pc = 0x3E0334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0330u;
        // 0x3e0334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0338u;
        goto label_3e0338;
    }
    ctx->pc = 0x3E0330u;
    SET_GPR_U32(ctx, 31, 0x3E0338u);
    ctx->pc = 0x3E0334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0330u;
    // 0x3e0334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E0330u, 0x3E0338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0338u;
label_3e0338:
    // 0x3e0338: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e0338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e033c:
    // 0x3e033c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3e033cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e0340:
    // 0x3e0340: 0xc0ea12a  jal         func_3A84A8
label_3e0344:
    if (ctx->pc == 0x3E0344u) {
        ctx->pc = 0x3E0344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0340u;
        // 0x3e0344: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0348u;
        goto label_3e0348;
    }
    ctx->pc = 0x3E0340u;
    SET_GPR_U32(ctx, 31, 0x3E0348u);
    ctx->pc = 0x3E0344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0340u;
    // 0x3e0344: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E0340u, 0x3E0348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0348u;
label_3e0348:
    // 0x3e0348: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3e0348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3e034c:
    // 0x3e034c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e034cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0350:
    // 0x3e0350: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3e0350u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e0354:
    // 0x3e0354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e0354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e0358:
    // 0x3e0358: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3e0358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3e035c:
    // 0x3e035c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3e035cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3e0360:
    // 0x3e0360: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3e0360u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3e0364:
    // 0x3e0364: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3e0364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3e0368:
    // 0x3e0368: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x3e0368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
label_3e036c:
    // 0x3e036c: 0xae530008  sw          $s3, 0x8($s2)
    ctx->pc = 0x3e036cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
label_3e0370:
    // 0x3e0370: 0xae130080  sw          $s3, 0x80($s0)
    ctx->pc = 0x3e0370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 19));
label_3e0374:
    // 0x3e0374: 0xe6140090  swc1        $f20, 0x90($s0)
    ctx->pc = 0x3e0374u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_3e0378:
    // 0x3e0378: 0xe614008c  swc1        $f20, 0x8C($s0)
    ctx->pc = 0x3e0378u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3e037c:
    // 0x3e037c: 0xc0e896c  jal         func_3A25B0
label_3e0380:
    if (ctx->pc == 0x3E0380u) {
        ctx->pc = 0x3E0380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E037Cu;
        // 0x3e0380: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0384u;
        goto label_3e0384;
    }
    ctx->pc = 0x3E037Cu;
    SET_GPR_U32(ctx, 31, 0x3E0384u);
    ctx->pc = 0x3E0380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E037Cu;
    // 0x3e0380: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3E037Cu, 0x3E0384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0384u;
label_3e0384:
    // 0x3e0384: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x3e0384u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
label_3e0388:
    // 0x3e0388: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3e0388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e038c:
    // 0x3e038c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3e038cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e0390:
    // 0x3e0390: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3e0390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e0394:
    // 0x3e0394: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3e0394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e0398:
    // 0x3e0398: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e0398u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e039c:
    // 0x3e039c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3e039cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e03a0:
    // 0x3e03a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e03a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e03a4:
    // 0x3e03a4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3e03a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e03a8:
    // 0x3e03a8: 0x3e00008  jr          $ra
label_3e03ac:
    if (ctx->pc == 0x3E03ACu) {
        ctx->pc = 0x3E03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E03A8u;
        // 0x3e03ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E03B0u;
        goto label_fallthrough_0x3e03a8;
    }
    ctx->pc = 0x3E03A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E03A8u;
        // 0x3e03ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E03A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e03a8:
    ctx->pc = 0x3E03B0u;
}
