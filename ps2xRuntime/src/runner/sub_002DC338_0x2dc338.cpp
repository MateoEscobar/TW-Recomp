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

// Function: sub_002DC338
// Address: 0x2dc338 - 0x2dc458
void sub_002DC338_0x2dc338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC338_0x2dc338");
#endif

    switch (ctx->pc) {
        case 0x2dc35cu: goto label_2dc35c;
        case 0x2dc368u: goto label_2dc368;
        case 0x2dc3d4u: goto label_2dc3d4;
        case 0x2dc408u: goto label_2dc408;
        case 0x2dc438u: goto label_2dc438;
        default: break;
    }

    ctx->pc = 0x2dc338u;

    // 0x2dc338: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dc338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dc33c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2dc33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2dc340: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2dc340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2dc344: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dc344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dc348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dc34c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2dc34cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2dc350: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2dc350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dc354: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2DC354u;
    SET_GPR_U32(ctx, 31, 0x2DC35Cu);
    ctx->pc = 0x2DC358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC354u;
    // 0x2dc358: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2DC354u, 0x2DC35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC35Cu;
label_2dc35c:
    // 0x2dc35c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2dc35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dc360: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2DC360u;
    SET_GPR_U32(ctx, 31, 0x2DC368u);
    ctx->pc = 0x2DC364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC360u;
    // 0x2dc364: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2DC360u, 0x2DC368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC368u;
label_2dc368:
    // 0x2dc368: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2DC368u;
    {
        const bool branch_taken_0x2dc368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC368u;
        // 0x2dc36c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc368) {
            ctx->pc = 0x2DC43Cu;
            goto label_2dc43c;
        }
    }
    ctx->pc = 0x2DC370u;
    // 0x2dc370: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2dc370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2dc374: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2dc374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2dc378: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2dc378u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2dc37c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2dc37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2dc380: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2dc380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2dc384: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2DC384u;
    {
        const bool branch_taken_0x2dc384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC384u;
        // 0x2dc388: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc384) {
            ctx->pc = 0x2DC43Cu;
            goto label_2dc43c;
        }
    }
    ctx->pc = 0x2DC38Cu;
    // 0x2dc38c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2dc38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dc390: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2dc390u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2dc394: 0x5c400029  bgtzl       $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2DC394u;
    {
        const bool branch_taken_0x2dc394 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2dc394) {
            ctx->pc = 0x2DC398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC394u;
            // 0x2dc398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC43Cu;
            goto label_2dc43c;
        }
    }
    ctx->pc = 0x2DC39Cu;
    // 0x2dc39c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dc39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc3a0: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2dc3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x2dc3a4: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2dc3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
    // 0x2dc3a8: 0xc6140024  lwc1        $f20, 0x24($s0)
    ctx->pc = 0x2dc3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dc3ac: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x2dc3acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2dc3b0: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2dc3b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2dc3b4: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2dc3b4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2dc3b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dc3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc3bc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2dc3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2dc3c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dc3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc3c4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2dc3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2dc3c8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2dc3c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc3cc: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2DC3CCu;
    SET_GPR_U32(ctx, 31, 0x2DC3D4u);
    ctx->pc = 0x2DC3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC3CCu;
    // 0x2dc3d0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DC3CCu, 0x2DC3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC3D4u;
label_2dc3d4:
    // 0x2dc3d4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2dc3d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc3d8: 0x0  nop
    ctx->pc = 0x2dc3d8u;
    // NOP
    // 0x2dc3dc: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x2DC3DCu;
    {
        const bool branch_taken_0x2dc3dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DC3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3DCu;
        // 0x2dc3e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3dc) {
            ctx->pc = 0x2DC43Cu;
            goto label_2dc43c;
        }
    }
    ctx->pc = 0x2DC3E4u;
    // 0x2dc3e4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2dc3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2dc3e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dc3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dc3ec: 0x2c430004  sltiu       $v1, $v0, 0x4
    ctx->pc = 0x2dc3ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2dc3f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC3F0u;
    {
        const bool branch_taken_0x2dc3f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3F0u;
        // 0x2dc3f4: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3f0) {
            ctx->pc = 0x2DC400u;
            goto label_2dc400;
        }
    }
    ctx->pc = 0x2DC3F8u;
    // 0x2dc3f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DC3F8u;
    {
        const bool branch_taken_0x2dc3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC3F8u;
        // 0x2dc3fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc3f8) {
            ctx->pc = 0x2DC43Cu;
            goto label_2dc43c;
        }
    }
    ctx->pc = 0x2DC400u;
label_2dc400:
    // 0x2dc400: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2DC400u;
    SET_GPR_U32(ctx, 31, 0x2DC408u);
    ctx->pc = 0x2DC404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC400u;
    // 0x2dc404: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DC400u, 0x2DC408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC408u;
label_2dc408:
    // 0x2dc408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc40c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DC40Cu;
    {
        const bool branch_taken_0x2dc40c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC40Cu;
        // 0x2dc410: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc40c) {
            ctx->pc = 0x2DC438u;
            goto label_2dc438;
        }
    }
    ctx->pc = 0x2DC414u;
    // 0x2dc414: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x2dc414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dc418: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2dc418u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2dc41c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2dc41cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc420: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2dc420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dc424: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dc424u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc428: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x2dc428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2dc42c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dc42cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc430: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2DC430u;
    SET_GPR_U32(ctx, 31, 0x2DC438u);
    ctx->pc = 0x2DC434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC430u;
    // 0x2dc434: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2DC430u, 0x2DC438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC438u;
label_2dc438:
    // 0x2dc438: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dc438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc43c:
    // 0x2dc43c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2dc43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc440: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2dc440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc444: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dc444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc448: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2dc448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dc44c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC44Cu;
        // 0x2dc450: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC454u;
    // 0x2dc454: 0x0  nop
    ctx->pc = 0x2dc454u;
    // NOP
    ctx->pc = 0x2dc458u;
}
