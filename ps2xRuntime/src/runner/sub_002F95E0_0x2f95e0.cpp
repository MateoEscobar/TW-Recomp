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

// Function: sub_002F95E0
// Address: 0x2f95e0 - 0x2f96d0
void sub_002F95E0_0x2f95e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F95E0_0x2f95e0");
#endif

    switch (ctx->pc) {
        case 0x2f9618u: goto label_2f9618;
        case 0x2f9628u: goto label_2f9628;
        case 0x2f9660u: goto label_2f9660;
        case 0x2f9684u: goto label_2f9684;
        case 0x2f9698u: goto label_2f9698;
        case 0x2f96a4u: goto label_2f96a4;
        case 0x2f96acu: goto label_2f96ac;
        default: break;
    }

    ctx->pc = 0x2f95e0u;

    // 0x2f95e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f95e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f95e4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2f95e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2f95e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f95e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2f95ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f95ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f95f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2f95f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2f95f4: 0x24120063  addiu       $s2, $zero, 0x63
    ctx->pc = 0x2f95f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f95f8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2f95f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2f95fc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2f95fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2f9600: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2f9600u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f9604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f9608: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f9608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f960c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2f960cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f9610: 0xc088e88  jal         func_223A20
    ctx->pc = 0x2F9610u;
    SET_GPR_U32(ctx, 31, 0x2F9618u);
    ctx->pc = 0x2F9614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9610u;
    // 0x2f9614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2F9610u, 0x2F9618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9618u;
label_2f9618:
    // 0x2f9618: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f9618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f961c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f961cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9620: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2F9620u;
    SET_GPR_U32(ctx, 31, 0x2F9628u);
    ctx->pc = 0x2F9624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9620u;
    // 0x2f9624: 0x13900a  movz        $s2, $zero, $s3 (Delay Slot)
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2F9620u, 0x2F9628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9628u;
label_2f9628:
    // 0x2f9628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f9628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f962c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F962Cu;
    {
        const bool branch_taken_0x2f962c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F962Cu;
        // 0x2f9630: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f962c) {
            ctx->pc = 0x2F9660u;
            goto label_2f9660;
        }
    }
    ctx->pc = 0x2F9634u;
    // 0x2f9634: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2f9634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f9638: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2f9638u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2f963c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2f963cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9640: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2f9640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2f9644: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2f9644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2f9648: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f9648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f964c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f964cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9650: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2f9650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f9654: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f9654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9658: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2F9658u;
    SET_GPR_U32(ctx, 31, 0x2F9660u);
    ctx->pc = 0x2F965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9658u;
    // 0x2f965c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2F9658u, 0x2F9660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9660u;
label_2f9660:
    // 0x2f9660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9664: 0x1662000f  bne         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F9664u;
    {
        const bool branch_taken_0x2f9664 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F9668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9664u;
        // 0x2f9668: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9664) {
            ctx->pc = 0x2F96A4u;
            goto label_2f96a4;
        }
    }
    ctx->pc = 0x2F966Cu;
    // 0x2f966c: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x2f966cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2f9670: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2f9670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x2f9674: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f9674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9678: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f9678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2f967c: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x2F967Cu;
    SET_GPR_U32(ctx, 31, 0x2F9684u);
    ctx->pc = 0x2F9680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F967Cu;
    // 0x2f9680: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2F967Cu, 0x2F9684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9684u;
label_2f9684:
    // 0x2f9684: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f9684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f9688: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f9688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f968c: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x2f968cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x2f9690: 0xc0a2ab0  jal         func_28AAC0
    ctx->pc = 0x2F9690u;
    SET_GPR_U32(ctx, 31, 0x2F9698u);
    ctx->pc = 0x2F9694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9690u;
    // 0x2f9694: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2F9690u, 0x2F9698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9698u;
label_2f9698:
    // 0x2f9698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f969c: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x2F969Cu;
    SET_GPR_U32(ctx, 31, 0x2F96A4u);
    ctx->pc = 0x2F96A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F969Cu;
    // 0x2f96a0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x2F969Cu, 0x2F96A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F96A4u;
label_2f96a4:
    // 0x2f96a4: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2F96A4u;
    SET_GPR_U32(ctx, 31, 0x2F96ACu);
    ctx->pc = 0x2F96A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F96A4u;
    // 0x2f96a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2F96A4u, 0x2F96ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F96ACu;
label_2f96ac:
    // 0x2f96ac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2f96acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f96b0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2f96b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f96b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f96b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f96b8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2f96b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f96bc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2f96bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f96c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f96c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f96c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F96C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F96C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F96C4u;
        // 0x2f96c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F96C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F96CCu;
    // 0x2f96cc: 0x0  nop
    ctx->pc = 0x2f96ccu;
    // NOP
    ctx->pc = 0x2f96d0u;
}
