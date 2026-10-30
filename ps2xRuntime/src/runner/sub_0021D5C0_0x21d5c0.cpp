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

// Function: sub_0021D5C0
// Address: 0x21d5c0 - 0x21d680
void sub_0021D5C0_0x21d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D5C0_0x21d5c0");
#endif

    switch (ctx->pc) {
        case 0x21d5c0u: goto label_21d5c0;
        case 0x21d5c4u: goto label_21d5c4;
        case 0x21d5c8u: goto label_21d5c8;
        case 0x21d5ccu: goto label_21d5cc;
        case 0x21d5d0u: goto label_21d5d0;
        case 0x21d5d4u: goto label_21d5d4;
        case 0x21d5d8u: goto label_21d5d8;
        case 0x21d5dcu: goto label_21d5dc;
        case 0x21d5e0u: goto label_21d5e0;
        case 0x21d5e4u: goto label_21d5e4;
        case 0x21d5e8u: goto label_21d5e8;
        case 0x21d5ecu: goto label_21d5ec;
        case 0x21d5f0u: goto label_21d5f0;
        case 0x21d5f4u: goto label_21d5f4;
        case 0x21d5f8u: goto label_21d5f8;
        case 0x21d5fcu: goto label_21d5fc;
        case 0x21d600u: goto label_21d600;
        case 0x21d604u: goto label_21d604;
        case 0x21d608u: goto label_21d608;
        case 0x21d60cu: goto label_21d60c;
        case 0x21d610u: goto label_21d610;
        case 0x21d614u: goto label_21d614;
        case 0x21d618u: goto label_21d618;
        case 0x21d61cu: goto label_21d61c;
        case 0x21d620u: goto label_21d620;
        case 0x21d624u: goto label_21d624;
        case 0x21d628u: goto label_21d628;
        case 0x21d62cu: goto label_21d62c;
        case 0x21d630u: goto label_21d630;
        case 0x21d634u: goto label_21d634;
        case 0x21d638u: goto label_21d638;
        case 0x21d63cu: goto label_21d63c;
        case 0x21d640u: goto label_21d640;
        case 0x21d644u: goto label_21d644;
        case 0x21d648u: goto label_21d648;
        case 0x21d64cu: goto label_21d64c;
        case 0x21d650u: goto label_21d650;
        case 0x21d654u: goto label_21d654;
        case 0x21d658u: goto label_21d658;
        case 0x21d65cu: goto label_21d65c;
        case 0x21d660u: goto label_21d660;
        case 0x21d664u: goto label_21d664;
        case 0x21d668u: goto label_21d668;
        case 0x21d66cu: goto label_21d66c;
        case 0x21d670u: goto label_21d670;
        case 0x21d674u: goto label_21d674;
        case 0x21d678u: goto label_21d678;
        case 0x21d67cu: goto label_21d67c;
        default: break;
    }

    ctx->pc = 0x21d5c0u;

label_21d5c0:
    // 0x21d5c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21d5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_21d5c4:
    // 0x21d5c4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x21d5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_21d5c8:
    // 0x21d5c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x21d5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_21d5cc:
    // 0x21d5cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21d5d0:
    // 0x21d5d0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x21d5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_21d5d4:
    // 0x21d5d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21d5d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21d5d8:
    // 0x21d5d8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x21d5d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_21d5dc:
    // 0x21d5dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21d5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_21d5e0:
    // 0x21d5e0: 0xc087502  jal         func_21D408
label_21d5e4:
    if (ctx->pc == 0x21D5E4u) {
        ctx->pc = 0x21D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D5E0u;
        // 0x21d5e4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D5E8u;
        goto label_21d5e8;
    }
    ctx->pc = 0x21D5E0u;
    SET_GPR_U32(ctx, 31, 0x21D5E8u);
    ctx->pc = 0x21D5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5E0u;
    // 0x21d5e4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x21D5E0u, 0x21D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D5E8u;
label_21d5e8:
    // 0x21d5e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21d5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21d5ec:
    // 0x21d5ec: 0xc0a2fc0  jal         func_28BF00
label_21d5f0:
    if (ctx->pc == 0x21D5F0u) {
        ctx->pc = 0x21D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D5ECu;
        // 0x21d5f0: 0xc454012c  lwc1        $f20, 0x12C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D5F4u;
        goto label_21d5f4;
    }
    ctx->pc = 0x21D5ECu;
    SET_GPR_U32(ctx, 31, 0x21D5F4u);
    ctx->pc = 0x21D5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5ECu;
    // 0x21d5f0: 0xc454012c  lwc1        $f20, 0x12C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x21D5ECu, 0x21D5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D5F4u;
label_21d5f4:
    // 0x21d5f4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x21d5f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_21d5f8:
    // 0x21d5f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21d5f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_21d5fc:
    // 0x21d5fc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x21d5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_21d600:
    // 0x21d600: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x21d600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_21d604:
    // 0x21d604: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x21d604u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_21d608:
    // 0x21d608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d60c:
    // 0x21d60c: 0xc0888fa  jal         func_2223E8
label_21d610:
    if (ctx->pc == 0x21D610u) {
        ctx->pc = 0x21D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D60Cu;
        // 0x21d610: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D614u;
        goto label_21d614;
    }
    ctx->pc = 0x21D60Cu;
    SET_GPR_U32(ctx, 31, 0x21D614u);
    ctx->pc = 0x21D610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D60Cu;
    // 0x21d610: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x21D60Cu, 0x21D614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D614u;
label_21d614:
    // 0x21d614: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d618:
    // 0x21d618: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_21d61c:
    if (ctx->pc == 0x21D61Cu) {
        ctx->pc = 0x21D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D618u;
        // 0x21d61c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D620u;
        goto label_21d620;
    }
    ctx->pc = 0x21D618u;
    {
        const bool branch_taken_0x21d618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D618u;
        // 0x21d61c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d618) {
            ctx->pc = 0x21D648u;
            goto label_21d648;
        }
    }
    ctx->pc = 0x21D620u;
label_21d620:
    // 0x21d620: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x21d620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_21d624:
    // 0x21d624: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x21d624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_21d628:
    // 0x21d628: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21d628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21d62c:
    // 0x21d62c: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x21d62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
label_21d630:
    // 0x21d630: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x21d630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
label_21d634:
    // 0x21d634: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21d634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21d638:
    // 0x21d638: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x21d638u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_21d63c:
    // 0x21d63c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x21d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_21d640:
    // 0x21d640: 0x40f809  jalr        $v0
label_21d644:
    if (ctx->pc == 0x21D644u) {
        ctx->pc = 0x21D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D640u;
        // 0x21d644: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D648u;
        goto label_21d648;
    }
    ctx->pc = 0x21D640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D648u);
        ctx->pc = 0x21D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D640u;
        // 0x21d644: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D640u, 0x21D648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D648u;
label_21d648:
    // 0x21d648: 0xc088edc  jal         func_223B70
label_21d64c:
    if (ctx->pc == 0x21D64Cu) {
        ctx->pc = 0x21D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D648u;
        // 0x21d64c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D650u;
        goto label_21d650;
    }
    ctx->pc = 0x21D648u;
    SET_GPR_U32(ctx, 31, 0x21D650u);
    ctx->pc = 0x21D64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D648u;
    // 0x21d64c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x21D648u, 0x21D650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D650u;
label_21d650:
    // 0x21d650: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_21d654:
    if (ctx->pc == 0x21D654u) {
        ctx->pc = 0x21D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D650u;
        // 0x21d654: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D658u;
        goto label_21d658;
    }
    ctx->pc = 0x21D650u;
    {
        const bool branch_taken_0x21d650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d650) {
            ctx->pc = 0x21D654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D650u;
            // 0x21d654: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D664u;
            goto label_21d664;
        }
    }
    ctx->pc = 0x21D658u;
label_21d658:
    // 0x21d658: 0xc093390  jal         func_24CE40
label_21d65c:
    if (ctx->pc == 0x21D65Cu) {
        ctx->pc = 0x21D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D658u;
        // 0x21d65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D660u;
        goto label_21d660;
    }
    ctx->pc = 0x21D658u;
    SET_GPR_U32(ctx, 31, 0x21D660u);
    ctx->pc = 0x21D65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D658u;
    // 0x21d65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CE40u, 0x21D658u, 0x21D660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D660u;
label_21d660:
    // 0x21d660: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x21d660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21d664:
    // 0x21d664: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x21d664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21d668:
    // 0x21d668: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x21d668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21d66c:
    // 0x21d66c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21d66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_21d670:
    // 0x21d670: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x21d670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_21d674:
    // 0x21d674: 0x3e00008  jr          $ra
label_21d678:
    if (ctx->pc == 0x21D678u) {
        ctx->pc = 0x21D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D674u;
        // 0x21d678: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D67Cu;
        goto label_21d67c;
    }
    ctx->pc = 0x21D674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D674u;
        // 0x21d678: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D67Cu;
label_21d67c:
    // 0x21d67c: 0x0  nop
    ctx->pc = 0x21d67cu;
    // NOP
    ctx->pc = 0x21d680u;
}
