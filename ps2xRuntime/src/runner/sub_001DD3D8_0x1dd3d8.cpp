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

// Function: sub_001DD3D8
// Address: 0x1dd3d8 - 0x1dd4d0
void sub_001DD3D8_0x1dd3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD3D8_0x1dd3d8");
#endif

    switch (ctx->pc) {
        case 0x1dd3d8u: goto label_1dd3d8;
        case 0x1dd3dcu: goto label_1dd3dc;
        case 0x1dd3e0u: goto label_1dd3e0;
        case 0x1dd3e4u: goto label_1dd3e4;
        case 0x1dd3e8u: goto label_1dd3e8;
        case 0x1dd3ecu: goto label_1dd3ec;
        case 0x1dd3f0u: goto label_1dd3f0;
        case 0x1dd3f4u: goto label_1dd3f4;
        case 0x1dd3f8u: goto label_1dd3f8;
        case 0x1dd3fcu: goto label_1dd3fc;
        case 0x1dd400u: goto label_1dd400;
        case 0x1dd404u: goto label_1dd404;
        case 0x1dd408u: goto label_1dd408;
        case 0x1dd40cu: goto label_1dd40c;
        case 0x1dd410u: goto label_1dd410;
        case 0x1dd414u: goto label_1dd414;
        case 0x1dd418u: goto label_1dd418;
        case 0x1dd41cu: goto label_1dd41c;
        case 0x1dd420u: goto label_1dd420;
        case 0x1dd424u: goto label_1dd424;
        case 0x1dd428u: goto label_1dd428;
        case 0x1dd42cu: goto label_1dd42c;
        case 0x1dd430u: goto label_1dd430;
        case 0x1dd434u: goto label_1dd434;
        case 0x1dd438u: goto label_1dd438;
        case 0x1dd43cu: goto label_1dd43c;
        case 0x1dd440u: goto label_1dd440;
        case 0x1dd444u: goto label_1dd444;
        case 0x1dd448u: goto label_1dd448;
        case 0x1dd44cu: goto label_1dd44c;
        case 0x1dd450u: goto label_1dd450;
        case 0x1dd454u: goto label_1dd454;
        case 0x1dd458u: goto label_1dd458;
        case 0x1dd45cu: goto label_1dd45c;
        case 0x1dd460u: goto label_1dd460;
        case 0x1dd464u: goto label_1dd464;
        case 0x1dd468u: goto label_1dd468;
        case 0x1dd46cu: goto label_1dd46c;
        case 0x1dd470u: goto label_1dd470;
        case 0x1dd474u: goto label_1dd474;
        case 0x1dd478u: goto label_1dd478;
        case 0x1dd47cu: goto label_1dd47c;
        case 0x1dd480u: goto label_1dd480;
        case 0x1dd484u: goto label_1dd484;
        case 0x1dd488u: goto label_1dd488;
        case 0x1dd48cu: goto label_1dd48c;
        case 0x1dd490u: goto label_1dd490;
        case 0x1dd494u: goto label_1dd494;
        case 0x1dd498u: goto label_1dd498;
        case 0x1dd49cu: goto label_1dd49c;
        case 0x1dd4a0u: goto label_1dd4a0;
        case 0x1dd4a4u: goto label_1dd4a4;
        case 0x1dd4a8u: goto label_1dd4a8;
        case 0x1dd4acu: goto label_1dd4ac;
        case 0x1dd4b0u: goto label_1dd4b0;
        case 0x1dd4b4u: goto label_1dd4b4;
        case 0x1dd4b8u: goto label_1dd4b8;
        case 0x1dd4bcu: goto label_1dd4bc;
        case 0x1dd4c0u: goto label_1dd4c0;
        case 0x1dd4c4u: goto label_1dd4c4;
        case 0x1dd4c8u: goto label_1dd4c8;
        case 0x1dd4ccu: goto label_1dd4cc;
        default: break;
    }

    ctx->pc = 0x1dd3d8u;

label_1dd3d8:
    // 0x1dd3d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dd3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1dd3dc:
    // 0x1dd3dc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1dd3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1dd3e0:
    // 0x1dd3e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dd3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1dd3e4:
    // 0x1dd3e4: 0x24842af0  addiu       $a0, $a0, 0x2AF0
    ctx->pc = 0x1dd3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10992));
label_1dd3e8:
    // 0x1dd3e8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1dd3e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1dd3ec:
    // 0x1dd3ec: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1dd3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dd3f0:
    // 0x1dd3f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dd3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1dd3f4:
    // 0x1dd3f4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1dd3f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1dd3f8:
    // 0x1dd3f8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1dd3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1dd3fc:
    // 0x1dd3fc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1dd3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dd400:
    // 0x1dd400: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1dd400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1dd404:
    // 0x1dd404: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x1dd404u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1dd408:
    // 0x1dd408: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1dd408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1dd40c:
    // 0x1dd40c: 0x60f809  jalr        $v1
label_1dd410:
    if (ctx->pc == 0x1DD410u) {
        ctx->pc = 0x1DD410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD40Cu;
        // 0x1dd410: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD414u;
        goto label_1dd414;
    }
    ctx->pc = 0x1DD40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD414u);
        ctx->pc = 0x1DD410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD40Cu;
        // 0x1dd410: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD40Cu, 0x1DD414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD414u;
label_1dd414:
    // 0x1dd414: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1dd414u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd418:
    // 0x1dd418: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1dd418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1dd41c:
    // 0x1dd41c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1dd41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd420:
    // 0x1dd420: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1dd420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd424:
    // 0x1dd424: 0x0  nop
    ctx->pc = 0x1dd424u;
    // NOP
label_1dd428:
    // 0x1dd428: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_1dd42c:
    if (ctx->pc == 0x1DD42Cu) {
        ctx->pc = 0x1DD42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD428u;
        // 0x1dd42c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD430u;
        goto label_1dd430;
    }
    ctx->pc = 0x1DD428u;
    {
        const bool branch_taken_0x1dd428 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD428u;
        // 0x1dd42c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd428) {
            ctx->pc = 0x1DD474u;
            goto label_1dd474;
        }
    }
    ctx->pc = 0x1DD430u;
label_1dd430:
    // 0x1dd430: 0xc440ee20  lwc1        $f0, -0x11E0($v0)
    ctx->pc = 0x1dd430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd434:
    // 0x1dd434: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dd434u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1dd438:
    // 0x1dd438: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1dd438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd43c:
    // 0x1dd43c: 0x0  nop
    ctx->pc = 0x1dd43cu;
    // NOP
label_1dd440:
    // 0x1dd440: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dd444:
    if (ctx->pc == 0x1DD444u) {
        ctx->pc = 0x1DD444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD440u;
        // 0x1dd444: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD448u;
        goto label_1dd448;
    }
    ctx->pc = 0x1DD440u;
    {
        const bool branch_taken_0x1dd440 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD440u;
        // 0x1dd444: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd440) {
            ctx->pc = 0x1DD44Cu;
            goto label_1dd44c;
        }
    }
    ctx->pc = 0x1DD448u;
label_1dd448:
    // 0x1dd448: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1dd448u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1dd44c:
    // 0x1dd44c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1dd44cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dd450:
    // 0x1dd450: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dd450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dd454:
    // 0x1dd454: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd458:
    // 0x1dd458: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dd458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1dd45c:
    // 0x1dd45c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1dd45cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1dd460:
    // 0x1dd460: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1dd460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1dd464:
    // 0x1dd464: 0x60f809  jalr        $v1
label_1dd468:
    if (ctx->pc == 0x1DD468u) {
        ctx->pc = 0x1DD468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD464u;
        // 0x1dd468: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD46Cu;
        goto label_1dd46c;
    }
    ctx->pc = 0x1DD464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD46Cu);
        ctx->pc = 0x1DD468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD464u;
        // 0x1dd468: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD464u, 0x1DD46Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD46Cu;
label_1dd46c:
    // 0x1dd46c: 0x10000014  b           . + 4 + (0x14 << 2)
label_1dd470:
    if (ctx->pc == 0x1DD470u) {
        ctx->pc = 0x1DD470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD46Cu;
        // 0x1dd470: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD474u;
        goto label_1dd474;
    }
    ctx->pc = 0x1DD46Cu;
    {
        const bool branch_taken_0x1dd46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD46Cu;
        // 0x1dd470: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd46c) {
            ctx->pc = 0x1DD4C0u;
            goto label_1dd4c0;
        }
    }
    ctx->pc = 0x1DD474u;
label_1dd474:
    // 0x1dd474: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1dd474u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd478:
    // 0x1dd478: 0x0  nop
    ctx->pc = 0x1dd478u;
    // NOP
label_1dd47c:
    // 0x1dd47c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1dd480:
    if (ctx->pc == 0x1DD480u) {
        ctx->pc = 0x1DD480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD47Cu;
        // 0x1dd480: 0xc440ee20  lwc1        $f0, -0x11E0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD484u;
        goto label_1dd484;
    }
    ctx->pc = 0x1DD47Cu;
    {
        const bool branch_taken_0x1dd47c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD47Cu;
        // 0x1dd480: 0xc440ee20  lwc1        $f0, -0x11E0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd47c) {
            ctx->pc = 0x1DD4BCu;
            goto label_1dd4bc;
        }
    }
    ctx->pc = 0x1DD484u;
label_1dd484:
    // 0x1dd484: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dd484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1dd488:
    // 0x1dd488: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1dd488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd48c:
    // 0x1dd48c: 0x0  nop
    ctx->pc = 0x1dd48cu;
    // NOP
label_1dd490:
    // 0x1dd490: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dd494:
    if (ctx->pc == 0x1DD494u) {
        ctx->pc = 0x1DD494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD490u;
        // 0x1dd494: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD498u;
        goto label_1dd498;
    }
    ctx->pc = 0x1DD490u;
    {
        const bool branch_taken_0x1dd490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD490u;
        // 0x1dd494: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd490) {
            ctx->pc = 0x1DD49Cu;
            goto label_1dd49c;
        }
    }
    ctx->pc = 0x1DD498u;
label_1dd498:
    // 0x1dd498: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1dd498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1dd49c:
    // 0x1dd49c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1dd49cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dd4a0:
    // 0x1dd4a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dd4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dd4a4:
    // 0x1dd4a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd4a8:
    // 0x1dd4a8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dd4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1dd4ac:
    // 0x1dd4ac: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1dd4acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1dd4b0:
    // 0x1dd4b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1dd4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1dd4b4:
    // 0x1dd4b4: 0x60f809  jalr        $v1
label_1dd4b8:
    if (ctx->pc == 0x1DD4B8u) {
        ctx->pc = 0x1DD4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4B4u;
        // 0x1dd4b8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD4BCu;
        goto label_1dd4bc;
    }
    ctx->pc = 0x1DD4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD4BCu);
        ctx->pc = 0x1DD4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4B4u;
        // 0x1dd4b8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD4B4u, 0x1DD4BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD4BCu;
label_1dd4bc:
    // 0x1dd4bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dd4bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dd4c0:
    // 0x1dd4c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dd4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd4c4:
    // 0x1dd4c4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1dd4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1dd4c8:
    // 0x1dd4c8: 0x3e00008  jr          $ra
label_1dd4cc:
    if (ctx->pc == 0x1DD4CCu) {
        ctx->pc = 0x1DD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4C8u;
        // 0x1dd4cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD4D0u;
        goto label_fallthrough_0x1dd4c8;
    }
    ctx->pc = 0x1DD4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4C8u;
        // 0x1dd4cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dd4c8:
    ctx->pc = 0x1DD4D0u;
}
