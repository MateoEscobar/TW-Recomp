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

// Function: sub_002E33D0
// Address: 0x2e33d0 - 0x2e3588
void sub_002E33D0_0x2e33d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E33D0_0x2e33d0");
#endif

    switch (ctx->pc) {
        case 0x2e3468u: goto label_2e3468;
        case 0x2e3488u: goto label_2e3488;
        case 0x2e3494u: goto label_2e3494;
        case 0x2e34f0u: goto label_2e34f0;
        case 0x2e3534u: goto label_2e3534;
        default: break;
    }

    ctx->pc = 0x2e33d0u;

    // 0x2e33d0: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x2e33d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x2e33d4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2e33d8: 0x7fb00290  sq          $s0, 0x290($sp)
    ctx->pc = 0x2e33d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 16));
    // 0x2e33dc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2e33dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e33e0: 0x7fb20270  sq          $s2, 0x270($sp)
    ctx->pc = 0x2e33e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 18));
    // 0x2e33e4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2e33e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e33e8: 0x7fb40250  sq          $s4, 0x250($sp)
    ctx->pc = 0x2e33e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 20));
    // 0x2e33ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e33ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e33f0: 0x7fb50240  sq          $s5, 0x240($sp)
    ctx->pc = 0x2e33f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 21));
    // 0x2e33f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e33f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e33f8: 0x7fb70220  sq          $s7, 0x220($sp)
    ctx->pc = 0x2e33f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 23));
    // 0x2e33fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e33fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3400: 0x7fbe0210  sq          $fp, 0x210($sp)
    ctx->pc = 0x2e3400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 30));
    // 0x2e3404: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2e3404u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3408: 0xe7b402a0  swc1        $f20, 0x2A0($sp)
    ctx->pc = 0x2e3408u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2e340c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2e340cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3410: 0x7fb10280  sq          $s1, 0x280($sp)
    ctx->pc = 0x2e3410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 17));
    // 0x2e3414: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2e3414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2e3418: 0x7fb30260  sq          $s3, 0x260($sp)
    ctx->pc = 0x2e3418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 19));
    // 0x2e341c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2e341cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e3420: 0x7fb60230  sq          $s6, 0x230($sp)
    ctx->pc = 0x2e3420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 22));
    // 0x2e3424: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2e3424u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3428: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x2e3428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
    // 0x2e342c: 0xe7b502a8  swc1        $f21, 0x2A8($sp)
    ctx->pc = 0x2e342cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x2e3430: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2e3430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x2e3434: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2e3434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x2e3438: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e3438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e343c: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x2e343cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e3440: 0xc68c0038  lwc1        $f12, 0x38($s4)
    ctx->pc = 0x2e3440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3444: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x2e3444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2e3448: 0x84c30092  lh          $v1, 0x92($a2)
    ctx->pc = 0x2e3448u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
    // 0x2e344c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e344cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e3450: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e3450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e3454: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2e3454u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e3458: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2e3458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2e345c: 0x8d23020c  lw          $v1, 0x20C($t1)
    ctx->pc = 0x2e345cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 524)));
    // 0x2e3460: 0xc089d2a  jal         func_2274A8
    ctx->pc = 0x2E3460u;
    SET_GPR_U32(ctx, 31, 0x2E3468u);
    ctx->pc = 0x2E3464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3460u;
    // 0x2e3464: 0x8c76002c  lw          $s6, 0x2C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x2E3460u, 0x2E3468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3468u;
label_2e3468:
    // 0x2e3468: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e3468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e346c: 0x12400037  beqz        $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x2E346Cu;
    {
        const bool branch_taken_0x2e346c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E346Cu;
        // 0x2e3470: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e346c) {
            ctx->pc = 0x2E354Cu;
            goto label_2e354c;
        }
    }
    ctx->pc = 0x2E3474u;
    // 0x2e3474: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x2e3474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3478: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E3478u;
    {
        const bool branch_taken_0x2e3478 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3478u;
        // 0x2e347c: 0x46000542  mul.s       $f21, $f0, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3478) {
            ctx->pc = 0x2E34DCu;
            goto label_2e34dc;
        }
    }
    ctx->pc = 0x2E3480u;
    // 0x2e3480: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2e3480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3484: 0x0  nop
    ctx->pc = 0x2e3484u;
    // NOP
label_2e3488:
    // 0x2e3488: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2e3488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e348c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2E348Cu;
    SET_GPR_U32(ctx, 31, 0x2E3494u);
    ctx->pc = 0x2E3490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E348Cu;
    // 0x2e3490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E348Cu, 0x2E3494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3494u;
label_2e3494:
    // 0x2e3494: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2e3494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2e3498: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e3498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2e349c: 0x5456000c  bnel        $v0, $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x2E349Cu;
    {
        const bool branch_taken_0x2e349c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2e349c) {
            ctx->pc = 0x2E34A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E349Cu;
            // 0x2e34a0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E34D0u;
            goto label_2e34d0;
        }
    }
    ctx->pc = 0x2E34A4u;
    // 0x2e34a4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2e34a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e34a8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2e34a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e34ac: 0x0  nop
    ctx->pc = 0x2e34acu;
    // NOP
    // 0x2e34b0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2E34B0u;
    {
        const bool branch_taken_0x2e34b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E34B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E34B0u;
        // 0x2e34b4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e34b0) {
            ctx->pc = 0x2E34D0u;
            goto label_2e34d0;
        }
    }
    ctx->pc = 0x2E34B8u;
    // 0x2e34b8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e34b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e34bc: 0x0  nop
    ctx->pc = 0x2e34bcu;
    // NOP
    // 0x2e34c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E34C0u;
    {
        const bool branch_taken_0x2e34c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e34c0) {
            ctx->pc = 0x2E34D0u;
            goto label_2e34d0;
        }
    }
    ctx->pc = 0x2E34C8u;
    // 0x2e34c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e34c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e34cc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2e34ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e34d0:
    // 0x2e34d0: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x2e34d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2e34d4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2E34D4u;
    {
        const bool branch_taken_0x2e34d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E34D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E34D4u;
        // 0x2e34d8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e34d4) {
            ctx->pc = 0x2E3488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3488;
        }
    }
    ctx->pc = 0x2E34DCu;
label_2e34dc:
    // 0x2e34dc: 0x12a0001c  beqz        $s5, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E34DCu;
    {
        const bool branch_taken_0x2e34dc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E34E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E34DCu;
        // 0x2e34e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e34dc) {
            ctx->pc = 0x2E3550u;
            goto label_2e3550;
        }
    }
    ctx->pc = 0x2E34E4u;
    // 0x2e34e4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2e34e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e34e8: 0xc0a3fd6  jal         func_28FF58
    ctx->pc = 0x2E34E8u;
    SET_GPR_U32(ctx, 31, 0x2E34F0u);
    ctx->pc = 0x2E34ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E34E8u;
    // 0x2e34ec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF58u, 0x2E34E8u, 0x2E34F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E34F0u;
label_2e34f0:
    // 0x2e34f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e34f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e34f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e34f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e34f8: 0x16020015  bne         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E34F8u;
    {
        const bool branch_taken_0x2e34f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E34F8u;
        // 0x2e34fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e34f8) {
            ctx->pc = 0x2E3550u;
            goto label_2e3550;
        }
    }
    ctx->pc = 0x2E3500u;
    // 0x2e3500: 0x86a20092  lh          $v0, 0x92($s5)
    ctx->pc = 0x2e3500u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
    // 0x2e3504: 0x27c34b00  addiu       $v1, $fp, 0x4B00
    ctx->pc = 0x2e3504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
    // 0x2e3508: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e3508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e350c: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2e350cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2e3510: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e3510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e3514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e3514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e3518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e351c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e351cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3520: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2e3520u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3524: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e3524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3528: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x2e3528u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e352c: 0xc09381e  jal         func_24E078
    ctx->pc = 0x2E352Cu;
    SET_GPR_U32(ctx, 31, 0x2E3534u);
    ctx->pc = 0x2E3530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E352Cu;
    // 0x2e3530: 0x7fa301f0  sq          $v1, 0x1F0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2E352Cu, 0x2E3534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3534u;
label_2e3534:
    // 0x2e3534: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E3534u;
    {
        const bool branch_taken_0x2e3534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2E3538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3534u;
        // 0x2e3538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3534) {
            ctx->pc = 0x2E3550u;
            goto label_2e3550;
        }
    }
    ctx->pc = 0x2E353Cu;
    // 0x2e353c: 0x7ba301f0  lq          $v1, 0x1F0($sp)
    ctx->pc = 0x2e353cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2e3540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3544: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3544u;
    {
        const bool branch_taken_0x2e3544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3544u;
        // 0x2e3548: 0x7ee30000  sq          $v1, 0x0($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3544) {
            ctx->pc = 0x2E3550u;
            goto label_2e3550;
        }
    }
    ctx->pc = 0x2E354Cu;
label_2e354c:
    // 0x2e354c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e354cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3550:
    // 0x2e3550: 0x7bb00290  lq          $s0, 0x290($sp)
    ctx->pc = 0x2e3550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2e3554: 0x7bb10280  lq          $s1, 0x280($sp)
    ctx->pc = 0x2e3554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2e3558: 0x7bb20270  lq          $s2, 0x270($sp)
    ctx->pc = 0x2e3558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2e355c: 0x7bb30260  lq          $s3, 0x260($sp)
    ctx->pc = 0x2e355cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2e3560: 0x7bb40250  lq          $s4, 0x250($sp)
    ctx->pc = 0x2e3560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2e3564: 0x7bb50240  lq          $s5, 0x240($sp)
    ctx->pc = 0x2e3564u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2e3568: 0x7bb60230  lq          $s6, 0x230($sp)
    ctx->pc = 0x2e3568u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2e356c: 0x7bb70220  lq          $s7, 0x220($sp)
    ctx->pc = 0x2e356cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2e3570: 0x7bbe0210  lq          $fp, 0x210($sp)
    ctx->pc = 0x2e3570u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2e3574: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x2e3574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2e3578: 0xc7b502a8  lwc1        $f21, 0x2A8($sp)
    ctx->pc = 0x2e3578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e357c: 0xc7b402a0  lwc1        $f20, 0x2A0($sp)
    ctx->pc = 0x2e357cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e3580: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3580u;
        // 0x2e3584: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3588u;
}
