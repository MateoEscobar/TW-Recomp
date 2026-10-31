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

// Function: sub_004DB5B0
// Address: 0x4db5b0 - 0x4db698
void sub_004DB5B0_0x4db5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB5B0_0x4db5b0");
#endif

    switch (ctx->pc) {
        case 0x4db5b0u: goto label_4db5b0;
        case 0x4db5b4u: goto label_4db5b4;
        case 0x4db5b8u: goto label_4db5b8;
        case 0x4db5bcu: goto label_4db5bc;
        case 0x4db5c0u: goto label_4db5c0;
        case 0x4db5c4u: goto label_4db5c4;
        case 0x4db5c8u: goto label_4db5c8;
        case 0x4db5ccu: goto label_4db5cc;
        case 0x4db5d0u: goto label_4db5d0;
        case 0x4db5d4u: goto label_4db5d4;
        case 0x4db5d8u: goto label_4db5d8;
        case 0x4db5dcu: goto label_4db5dc;
        case 0x4db5e0u: goto label_4db5e0;
        case 0x4db5e4u: goto label_4db5e4;
        case 0x4db5e8u: goto label_4db5e8;
        case 0x4db5ecu: goto label_4db5ec;
        case 0x4db5f0u: goto label_4db5f0;
        case 0x4db5f4u: goto label_4db5f4;
        case 0x4db5f8u: goto label_4db5f8;
        case 0x4db5fcu: goto label_4db5fc;
        case 0x4db600u: goto label_4db600;
        case 0x4db604u: goto label_4db604;
        case 0x4db608u: goto label_4db608;
        case 0x4db60cu: goto label_4db60c;
        case 0x4db610u: goto label_4db610;
        case 0x4db614u: goto label_4db614;
        case 0x4db618u: goto label_4db618;
        case 0x4db61cu: goto label_4db61c;
        case 0x4db620u: goto label_4db620;
        case 0x4db624u: goto label_4db624;
        case 0x4db628u: goto label_4db628;
        case 0x4db62cu: goto label_4db62c;
        case 0x4db630u: goto label_4db630;
        case 0x4db634u: goto label_4db634;
        case 0x4db638u: goto label_4db638;
        case 0x4db63cu: goto label_4db63c;
        case 0x4db640u: goto label_4db640;
        case 0x4db644u: goto label_4db644;
        case 0x4db648u: goto label_4db648;
        case 0x4db64cu: goto label_4db64c;
        case 0x4db650u: goto label_4db650;
        case 0x4db654u: goto label_4db654;
        case 0x4db658u: goto label_4db658;
        case 0x4db65cu: goto label_4db65c;
        case 0x4db660u: goto label_4db660;
        case 0x4db664u: goto label_4db664;
        case 0x4db668u: goto label_4db668;
        case 0x4db66cu: goto label_4db66c;
        case 0x4db670u: goto label_4db670;
        case 0x4db674u: goto label_4db674;
        case 0x4db678u: goto label_4db678;
        case 0x4db67cu: goto label_4db67c;
        case 0x4db680u: goto label_4db680;
        case 0x4db684u: goto label_4db684;
        case 0x4db688u: goto label_4db688;
        case 0x4db68cu: goto label_4db68c;
        case 0x4db690u: goto label_4db690;
        case 0x4db694u: goto label_4db694;
        default: break;
    }

    ctx->pc = 0x4db5b0u;

label_4db5b0:
    // 0x4db5b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4db5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4db5b4:
    // 0x4db5b4: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x4db5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_4db5b8:
    // 0x4db5b8: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x4db5b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_4db5bc:
    // 0x4db5bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4db5bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4db5c0:
    // 0x4db5c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4db5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4db5c4:
    // 0x4db5c4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4db5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4db5c8:
    // 0x4db5c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4db5c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4db5cc:
    // 0x4db5cc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4db5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4db5d0:
    // 0x4db5d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4db5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4db5d4:
    // 0x4db5d4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4db5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4db5d8:
    // 0x4db5d8: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4db5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_4db5dc:
    // 0x4db5dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4db5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4db5e0:
    // 0x4db5e0: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x4db5e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
label_4db5e4:
    // 0x4db5e4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4db5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4db5e8:
    // 0x4db5e8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4db5e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4db5ec:
    // 0x4db5ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4db5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4db5f0:
    // 0x4db5f0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4db5f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4db5f4:
    // 0x4db5f4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x4db5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_4db5f8:
    // 0x4db5f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4db5f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4db5fc:
    // 0x4db5fc: 0x0  nop
    ctx->pc = 0x4db5fcu;
    // NOP
label_4db600:
    // 0x4db600: 0xc0e4060  jal         func_390180
label_4db604:
    if (ctx->pc == 0x4DB604u) {
        ctx->pc = 0x4DB604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB600u;
        // 0x4db604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DB608u;
        goto label_4db608;
    }
    ctx->pc = 0x4DB600u;
    SET_GPR_U32(ctx, 31, 0x4DB608u);
    ctx->pc = 0x4DB604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB600u;
    // 0x4db604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4DB600u, 0x4DB608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB608u;
label_4db608:
    // 0x4db608: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4db608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4db60c:
    // 0x4db60c: 0x50c00014  beql        $a2, $zero, . + 4 + (0x14 << 2)
label_4db610:
    if (ctx->pc == 0x4DB610u) {
        ctx->pc = 0x4DB610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB60Cu;
        // 0x4db610: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DB614u;
        goto label_4db614;
    }
    ctx->pc = 0x4DB60Cu;
    {
        const bool branch_taken_0x4db60c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4db60c) {
            ctx->pc = 0x4DB610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DB60Cu;
            // 0x4db610: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DB660u;
            goto label_4db660;
        }
    }
    ctx->pc = 0x4DB614u;
label_4db614:
    // 0x4db614: 0x10d40011  beq         $a2, $s4, . + 4 + (0x11 << 2)
label_4db618:
    if (ctx->pc == 0x4DB618u) {
        ctx->pc = 0x4DB618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB614u;
        // 0x4db618: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DB61Cu;
        goto label_4db61c;
    }
    ctx->pc = 0x4DB614u;
    {
        const bool branch_taken_0x4db614 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 20));
        ctx->pc = 0x4DB618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB614u;
        // 0x4db618: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db614) {
            ctx->pc = 0x4DB65Cu;
            goto label_4db65c;
        }
    }
    ctx->pc = 0x4DB61Cu;
label_4db61c:
    // 0x4db61c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4db61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4db620:
    // 0x4db620: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x4db620u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_4db624:
    // 0x4db624: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x4db624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_4db628:
    // 0x4db628: 0x60f809  jalr        $v1
label_4db62c:
    if (ctx->pc == 0x4DB62Cu) {
        ctx->pc = 0x4DB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB628u;
        // 0x4db62c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DB630u;
        goto label_4db630;
    }
    ctx->pc = 0x4DB628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DB630u);
        ctx->pc = 0x4DB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB628u;
        // 0x4db62c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB628u, 0x4DB630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DB630u;
label_4db630:
    // 0x4db630: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4db630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4db634:
    // 0x4db634: 0xc0cdb38  jal         func_336CE0
label_4db638:
    if (ctx->pc == 0x4DB638u) {
        ctx->pc = 0x4DB638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB634u;
        // 0x4db638: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DB63Cu;
        goto label_4db63c;
    }
    ctx->pc = 0x4DB634u;
    SET_GPR_U32(ctx, 31, 0x4DB63Cu);
    ctx->pc = 0x4DB638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB634u;
    // 0x4db638: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x4DB634u, 0x4DB63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB63Cu;
label_4db63c:
    // 0x4db63c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x4db63cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_4db640:
    // 0x4db640: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x4db640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4db644:
    // 0x4db644: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4db644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4db648:
    // 0x4db648: 0x0  nop
    ctx->pc = 0x4db648u;
    // NOP
label_4db64c:
    // 0x4db64c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_4db650:
    if (ctx->pc == 0x4DB650u) {
        ctx->pc = 0x4DB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB64Cu;
        // 0x4db650: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DB654u;
        goto label_4db654;
    }
    ctx->pc = 0x4DB64Cu;
    {
        const bool branch_taken_0x4db64c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4db64c) {
            ctx->pc = 0x4DB650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DB64Cu;
            // 0x4db650: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DB660u;
            goto label_4db660;
        }
    }
    ctx->pc = 0x4DB654u;
label_4db654:
    // 0x4db654: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x4db654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_4db658:
    // 0x4db658: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x4db658u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4db65c:
    // 0x4db65c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4db65cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4db660:
    // 0x4db660: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x4db660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_4db664:
    // 0x4db664: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_4db668:
    if (ctx->pc == 0x4DB668u) {
        ctx->pc = 0x4DB668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB664u;
        // 0x4db668: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DB66Cu;
        goto label_4db66c;
    }
    ctx->pc = 0x4DB664u;
    {
        const bool branch_taken_0x4db664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DB668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB664u;
        // 0x4db668: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db664) {
            ctx->pc = 0x4DB600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4db600;
        }
    }
    ctx->pc = 0x4DB66Cu;
label_4db66c:
    // 0x4db66c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4db66cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4db670:
    // 0x4db670: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4db670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4db674:
    // 0x4db674: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4db674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4db678:
    // 0x4db678: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4db678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4db67c:
    // 0x4db67c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4db67cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4db680:
    // 0x4db680: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4db680u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4db684:
    // 0x4db684: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4db684u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4db688:
    // 0x4db688: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4db688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4db68c:
    // 0x4db68c: 0x3e00008  jr          $ra
label_4db690:
    if (ctx->pc == 0x4DB690u) {
        ctx->pc = 0x4DB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB68Cu;
        // 0x4db690: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DB694u;
        goto label_4db694;
    }
    ctx->pc = 0x4DB68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB68Cu;
        // 0x4db690: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB694u;
label_4db694:
    // 0x4db694: 0x0  nop
    ctx->pc = 0x4db694u;
    // NOP
    ctx->pc = 0x4db698u;
}
