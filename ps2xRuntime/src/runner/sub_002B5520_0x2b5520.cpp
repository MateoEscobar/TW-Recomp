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

// Function: sub_002B5520
// Address: 0x2b5520 - 0x2b5668
void sub_002B5520_0x2b5520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5520_0x2b5520");
#endif

    switch (ctx->pc) {
        case 0x2b5564u: goto label_2b5564;
        case 0x2b5578u: goto label_2b5578;
        case 0x2b5588u: goto label_2b5588;
        case 0x2b55b0u: goto label_2b55b0;
        case 0x2b55bcu: goto label_2b55bc;
        case 0x2b55d0u: goto label_2b55d0;
        case 0x2b55fcu: goto label_2b55fc;
        case 0x2b5618u: goto label_2b5618;
        default: break;
    }

    ctx->pc = 0x2b5520u;

    // 0x2b5520: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b5520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b5524: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2b5524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2b5528: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b5528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2b552c: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x2b552cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x2b5530: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b5530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b5534: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x2b5534u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
    // 0x2b5538: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2b5538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2b553c: 0x2631b880  addiu       $s1, $s1, -0x4780
    ctx->pc = 0x2b553cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948992));
    // 0x2b5540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5544: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b5544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5548: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2b5548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b554c: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2b554cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2b5550: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2b5550u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2b5554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5558: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2b5558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2b555c: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2B555Cu;
    SET_GPR_U32(ctx, 31, 0x2B5564u);
    ctx->pc = 0x2B5560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B555Cu;
    // 0x2b5560: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2B555Cu, 0x2B5564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5564u;
label_2b5564:
    // 0x2b5564: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b5564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b5568: 0xae700010  sw          $s0, 0x10($s3)
    ctx->pc = 0x2b5568u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
    // 0x2b556c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b556cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b5570: 0xc088d8a  jal         func_223628
    ctx->pc = 0x2B5570u;
    SET_GPR_U32(ctx, 31, 0x2B5578u);
    ctx->pc = 0x2B5574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5570u;
    // 0x2b5574: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223628u, 0x2B5570u, 0x2B5578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5578u;
label_2b5578:
    // 0x2b5578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b557c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2b557cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b5580: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2B5580u;
    SET_GPR_U32(ctx, 31, 0x2B5588u);
    ctx->pc = 0x2B5584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5580u;
    // 0x2b5584: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B5580u, 0x2B5588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5588u;
label_2b5588:
    // 0x2b5588: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x2b5588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2b558c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2b558cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b5590: 0xa2620014  sb          $v0, 0x14($s3)
    ctx->pc = 0x2b5590u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b5594: 0x26040124  addiu       $a0, $s0, 0x124
    ctx->pc = 0x2b5594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x2b5598: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2b5598u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b559c: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2b559cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2b55a0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2b55a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2b55a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b55a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b55a8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B55A8u;
    SET_GPR_U32(ctx, 31, 0x2B55B0u);
    ctx->pc = 0x2B55ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B55A8u;
    // 0x2b55ac: 0xa2620018  sb          $v0, 0x18($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 24), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B55A8u, 0x2B55B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B55B0u;
label_2b55b0:
    // 0x2b55b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b55b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b55b4: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2B55B4u;
    SET_GPR_U32(ctx, 31, 0x2B55BCu);
    ctx->pc = 0x2B55B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B55B4u;
    // 0x2b55b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2B55B4u, 0x2B55BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B55BCu;
label_2b55bc:
    // 0x2b55bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b55bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b55c0: 0x52000022  beql        $s0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B55C0u;
    {
        const bool branch_taken_0x2b55c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b55c0) {
            ctx->pc = 0x2B55C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B55C0u;
            // 0x2b55c4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B564Cu;
            goto label_2b564c;
        }
    }
    ctx->pc = 0x2B55C8u;
    // 0x2b55c8: 0xc088db2  jal         func_2236C8
    ctx->pc = 0x2B55C8u;
    SET_GPR_U32(ctx, 31, 0x2B55D0u);
    ctx->pc = 0x2B55CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B55C8u;
    // 0x2b55cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2236C8u, 0x2B55C8u, 0x2B55D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B55D0u;
label_2b55d0:
    // 0x2b55d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b55d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2b55d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b55d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b55d8: 0x0  nop
    ctx->pc = 0x2b55d8u;
    // NOP
    // 0x2b55dc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2b55dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b55e0: 0x0  nop
    ctx->pc = 0x2b55e0u;
    // NOP
    // 0x2b55e4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2B55E4u;
    {
        const bool branch_taken_0x2b55e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B55E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55E4u;
        // 0x2b55e8: 0x261005d0  addiu       $s0, $s0, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b55e4) {
            ctx->pc = 0x2B5630u;
            goto label_2b5630;
        }
    }
    ctx->pc = 0x2B55ECu;
    // 0x2b55ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b55ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b55f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b55f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b55f4: 0xc1060e6  jal         func_418398
    ctx->pc = 0x2B55F4u;
    SET_GPR_U32(ctx, 31, 0x2B55FCu);
    ctx->pc = 0x2B55F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B55F4u;
    // 0x2b55f8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418398u, 0x2B55F4u, 0x2B55FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B55FCu;
label_2b55fc:
    // 0x2b55fc: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2b55fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5600: 0x0  nop
    ctx->pc = 0x2b5600u;
    // NOP
    // 0x2b5604: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5604u;
    {
        const bool branch_taken_0x2b5604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5604) {
            ctx->pc = 0x2B5608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5604u;
            // 0x2b5608: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B562Cu;
            goto label_2b562c;
        }
    }
    ctx->pc = 0x2B560Cu;
    // 0x2b560c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b560cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5610: 0xc1060e6  jal         func_418398
    ctx->pc = 0x2B5610u;
    SET_GPR_U32(ctx, 31, 0x2B5618u);
    ctx->pc = 0x2B5614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5610u;
    // 0x2b5614: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418398u, 0x2B5610u, 0x2B5618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5618u;
label_2b5618:
    // 0x2b5618: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2b5618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b561c: 0x0  nop
    ctx->pc = 0x2b561cu;
    // NOP
    // 0x2b5620: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5620u;
    {
        const bool branch_taken_0x2b5620 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5620) {
            ctx->pc = 0x2B5624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5620u;
            // 0x2b5624: 0xa2720015  sb          $s2, 0x15($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 21), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5630u;
            goto label_2b5630;
        }
    }
    ctx->pc = 0x2B5628u;
    // 0x2b5628: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2b5628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b562c:
    // 0x2b562c: 0xa2720015  sb          $s2, 0x15($s3)
    ctx->pc = 0x2b562cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 21), (uint8_t)GPR_U32(ctx, 18));
label_2b5630:
    // 0x2b5630: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x2b5630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2b5634: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5634u;
    {
        const bool branch_taken_0x2b5634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5634u;
        // 0x2b5638: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5634) {
            ctx->pc = 0x2B564Cu;
            goto label_2b564c;
        }
    }
    ctx->pc = 0x2B563Cu;
    // 0x2b563c: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2b563cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2b5640: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2b5640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2b5644: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b5644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b5648: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2b5648u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_2b564c:
    // 0x2b564c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b564cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b5650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5654: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2b5654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b565c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2b565cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b5660: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5660u;
        // 0x2b5664: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5668u;
}
