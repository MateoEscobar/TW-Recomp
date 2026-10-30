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

// Function: sub_0038D810
// Address: 0x38d810 - 0x38d998
void sub_0038D810_0x38d810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D810_0x38d810");
#endif

    switch (ctx->pc) {
        case 0x38d870u: goto label_38d870;
        case 0x38d89cu: goto label_38d89c;
        case 0x38d8a8u: goto label_38d8a8;
        case 0x38d8b4u: goto label_38d8b4;
        case 0x38d8d0u: goto label_38d8d0;
        case 0x38d8e8u: goto label_38d8e8;
        case 0x38d910u: goto label_38d910;
        case 0x38d93cu: goto label_38d93c;
        default: break;
    }

    ctx->pc = 0x38d810u;

    // 0x38d810: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x38d810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x38d814: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x38d814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x38d818: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x38d818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x38d81c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x38d81cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x38d820: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38d820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d824: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x38d824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x38d828: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x38d828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x38d82c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38d82cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d830: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x38d830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x38d834: 0x263312da  addiu       $s3, $s1, 0x12DA
    ctx->pc = 0x38d834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4826));
    // 0x38d838: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x38d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x38d83c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x38d83cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d840: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x38d840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x38d844: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x38d844u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x38d848: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x38d848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x38d84c: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x38d84cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38d850: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x38d850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x38d854: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x38d854u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d858: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x38d858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x38d85c: 0x245e4b00  addiu       $fp, $v0, 0x4B00
    ctx->pc = 0x38d85cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x38d860: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38d860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x38d864: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38d864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x38d868: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x38d868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x38d86c: 0x0  nop
    ctx->pc = 0x38d86cu;
    // NOP
label_38d870:
    // 0x38d870: 0x8e2211e0  lw          $v0, 0x11E0($s1)
    ctx->pc = 0x38d870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
    // 0x38d874: 0x14570006  bne         $v0, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x38D874u;
    {
        const bool branch_taken_0x38d874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x38D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D874u;
        // 0x38d878: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d874) {
            ctx->pc = 0x38D890u;
            goto label_38d890;
        }
    }
    ctx->pc = 0x38D87Cu;
    // 0x38d87c: 0x2642fffa  addiu       $v0, $s2, -0x6
    ctx->pc = 0x38d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967290));
    // 0x38d880: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x38d880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x38d884: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x38D884u;
    {
        const bool branch_taken_0x38d884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d884) {
            ctx->pc = 0x38D888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D884u;
            // 0x38d888: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D954u;
            goto label_38d954;
        }
    }
    ctx->pc = 0x38D88Cu;
    // 0x38d88c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38d88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38d890:
    // 0x38d890: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x38d890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d894: 0xc0e36d0  jal         func_38DB40
    ctx->pc = 0x38D894u;
    SET_GPR_U32(ctx, 31, 0x38D89Cu);
    ctx->pc = 0x38D898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D894u;
    // 0x38d898: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DB40u, 0x38D894u, 0x38D89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D89Cu;
label_38d89c:
    // 0x38d89c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38d89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d8a0: 0xc0e3682  jal         func_38DA08
    ctx->pc = 0x38D8A0u;
    SET_GPR_U32(ctx, 31, 0x38D8A8u);
    ctx->pc = 0x38D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D8A0u;
    // 0x38d8a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DA08u, 0x38D8A0u, 0x38D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D8A8u;
label_38d8a8:
    // 0x38d8a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38d8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d8ac: 0xc0e32ca  jal         func_38CB28
    ctx->pc = 0x38D8ACu;
    SET_GPR_U32(ctx, 31, 0x38D8B4u);
    ctx->pc = 0x38D8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D8ACu;
    // 0x38d8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CB28u, 0x38D8ACu, 0x38D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D8B4u;
label_38d8b4:
    // 0x38d8b4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x38d8b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38d8b8: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x38d8b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38d8bc: 0x14560024  bne         $v0, $s6, . + 4 + (0x24 << 2)
    ctx->pc = 0x38D8BCu;
    {
        const bool branch_taken_0x38d8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x38D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8BCu;
        // 0x38d8c0: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d8bc) {
            ctx->pc = 0x38D950u;
            goto label_38d950;
        }
    }
    ctx->pc = 0x38D8C4u;
    // 0x38d8c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38d8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d8c8: 0xc0e36a2  jal         func_38DA88
    ctx->pc = 0x38D8C8u;
    SET_GPR_U32(ctx, 31, 0x38D8D0u);
    ctx->pc = 0x38D8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D8C8u;
    // 0x38d8cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DA88u, 0x38D8C8u, 0x38D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D8D0u;
label_38d8d0:
    // 0x38d8d0: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x38D8D0u;
    {
        const bool branch_taken_0x38d8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d8d0) {
            ctx->pc = 0x38D8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D8D0u;
            // 0x38d8d4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D954u;
            goto label_38d954;
        }
    }
    ctx->pc = 0x38D8D8u;
    // 0x38d8d8: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x38d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x38d8dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38d8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d8e0: 0xc1067b8  jal         func_419EE0
    ctx->pc = 0x38D8E0u;
    SET_GPR_U32(ctx, 31, 0x38D8E8u);
    ctx->pc = 0x38D8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D8E0u;
    // 0x38d8e4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x38D8E0u, 0x38D8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D8E8u;
label_38d8e8:
    // 0x38d8e8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x38d8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38d8ec: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x38d8ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38d8f0: 0x0  nop
    ctx->pc = 0x38d8f0u;
    // NOP
    // 0x38d8f4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x38D8F4u;
    {
        const bool branch_taken_0x38d8f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8F4u;
        // 0x38d8f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d8f4) {
            ctx->pc = 0x38D950u;
            goto label_38d950;
        }
    }
    ctx->pc = 0x38D8FCu;
    // 0x38d8fc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x38d8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x38d900: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38d900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d904: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x38d904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38d908: 0xc0937d0  jal         func_24DF40
    ctx->pc = 0x38D908u;
    SET_GPR_U32(ctx, 31, 0x38D910u);
    ctx->pc = 0x38D90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D908u;
    // 0x38d90c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF40u, 0x38D908u, 0x38D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D910u;
label_38d910:
    // 0x38d910: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x38D910u;
    {
        const bool branch_taken_0x38d910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D910u;
        // 0x38d914: 0x26900090  addiu       $s0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d910) {
            ctx->pc = 0x38D950u;
            goto label_38d950;
        }
    }
    ctx->pc = 0x38D918u;
    // 0x38d918: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38d918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d91c: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x38d91cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x38d920: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38d920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38d924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38d928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d92c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x38d92cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x38d930: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x38d930u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x38d934: 0xc09381e  jal         func_24E078
    ctx->pc = 0x38D934u;
    SET_GPR_U32(ctx, 31, 0x38D93Cu);
    ctx->pc = 0x38D938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D934u;
    // 0x38d938: 0x9e2021  addu        $a0, $a0, $fp (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x38D934u, 0x38D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D93Cu;
label_38d93c:
    // 0x38d93c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38D93Cu;
    {
        const bool branch_taken_0x38d93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D93Cu;
        // 0x38d940: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d93c) {
            ctx->pc = 0x38D950u;
            goto label_38d950;
        }
    }
    ctx->pc = 0x38D944u;
    // 0x38d944: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x38d944u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x38d948: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38D948u;
    {
        const bool branch_taken_0x38d948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D948u;
        // 0x38d94c: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d948) {
            ctx->pc = 0x38D964u;
            goto label_38d964;
        }
    }
    ctx->pc = 0x38D950u;
label_38d950:
    // 0x38d950: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38d950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_38d954:
    // 0x38d954: 0x2e42000a  sltiu       $v0, $s2, 0xA
    ctx->pc = 0x38d954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x38d958: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x38D958u;
    {
        const bool branch_taken_0x38d958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D958u;
        // 0x38d95c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d958) {
            ctx->pc = 0x38D870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d870;
        }
    }
    ctx->pc = 0x38D960u;
    // 0x38d960: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x38d960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_38d964:
    // 0x38d964: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x38d964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x38d968: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x38d968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x38d96c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x38d96cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x38d970: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x38d970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38d974: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x38d974u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38d978: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x38d978u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38d97c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x38d97cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38d980: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x38d980u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38d984: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x38d984u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38d988: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38d988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38d98c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x38d98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x38d990: 0x3e00008  jr          $ra
    ctx->pc = 0x38D990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D990u;
        // 0x38d994: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D998u;
}
