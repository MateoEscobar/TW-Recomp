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

// Function: sub_003EC3A0
// Address: 0x3ec3a0 - 0x3ec500
void sub_003EC3A0_0x3ec3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC3A0_0x3ec3a0");
#endif

    switch (ctx->pc) {
        case 0x3ec3a0u: goto label_3ec3a0;
        case 0x3ec3a4u: goto label_3ec3a4;
        case 0x3ec3a8u: goto label_3ec3a8;
        case 0x3ec3acu: goto label_3ec3ac;
        case 0x3ec3b0u: goto label_3ec3b0;
        case 0x3ec3b4u: goto label_3ec3b4;
        case 0x3ec3b8u: goto label_3ec3b8;
        case 0x3ec3bcu: goto label_3ec3bc;
        case 0x3ec3c0u: goto label_3ec3c0;
        case 0x3ec3c4u: goto label_3ec3c4;
        case 0x3ec3c8u: goto label_3ec3c8;
        case 0x3ec3ccu: goto label_3ec3cc;
        case 0x3ec3d0u: goto label_3ec3d0;
        case 0x3ec3d4u: goto label_3ec3d4;
        case 0x3ec3d8u: goto label_3ec3d8;
        case 0x3ec3dcu: goto label_3ec3dc;
        case 0x3ec3e0u: goto label_3ec3e0;
        case 0x3ec3e4u: goto label_3ec3e4;
        case 0x3ec3e8u: goto label_3ec3e8;
        case 0x3ec3ecu: goto label_3ec3ec;
        case 0x3ec3f0u: goto label_3ec3f0;
        case 0x3ec3f4u: goto label_3ec3f4;
        case 0x3ec3f8u: goto label_3ec3f8;
        case 0x3ec3fcu: goto label_3ec3fc;
        case 0x3ec400u: goto label_3ec400;
        case 0x3ec404u: goto label_3ec404;
        case 0x3ec408u: goto label_3ec408;
        case 0x3ec40cu: goto label_3ec40c;
        case 0x3ec410u: goto label_3ec410;
        case 0x3ec414u: goto label_3ec414;
        case 0x3ec418u: goto label_3ec418;
        case 0x3ec41cu: goto label_3ec41c;
        case 0x3ec420u: goto label_3ec420;
        case 0x3ec424u: goto label_3ec424;
        case 0x3ec428u: goto label_3ec428;
        case 0x3ec42cu: goto label_3ec42c;
        case 0x3ec430u: goto label_3ec430;
        case 0x3ec434u: goto label_3ec434;
        case 0x3ec438u: goto label_3ec438;
        case 0x3ec43cu: goto label_3ec43c;
        case 0x3ec440u: goto label_3ec440;
        case 0x3ec444u: goto label_3ec444;
        case 0x3ec448u: goto label_3ec448;
        case 0x3ec44cu: goto label_3ec44c;
        case 0x3ec450u: goto label_3ec450;
        case 0x3ec454u: goto label_3ec454;
        case 0x3ec458u: goto label_3ec458;
        case 0x3ec45cu: goto label_3ec45c;
        case 0x3ec460u: goto label_3ec460;
        case 0x3ec464u: goto label_3ec464;
        case 0x3ec468u: goto label_3ec468;
        case 0x3ec46cu: goto label_3ec46c;
        case 0x3ec470u: goto label_3ec470;
        case 0x3ec474u: goto label_3ec474;
        case 0x3ec478u: goto label_3ec478;
        case 0x3ec47cu: goto label_3ec47c;
        case 0x3ec480u: goto label_3ec480;
        case 0x3ec484u: goto label_3ec484;
        case 0x3ec488u: goto label_3ec488;
        case 0x3ec48cu: goto label_3ec48c;
        case 0x3ec490u: goto label_3ec490;
        case 0x3ec494u: goto label_3ec494;
        case 0x3ec498u: goto label_3ec498;
        case 0x3ec49cu: goto label_3ec49c;
        case 0x3ec4a0u: goto label_3ec4a0;
        case 0x3ec4a4u: goto label_3ec4a4;
        case 0x3ec4a8u: goto label_3ec4a8;
        case 0x3ec4acu: goto label_3ec4ac;
        case 0x3ec4b0u: goto label_3ec4b0;
        case 0x3ec4b4u: goto label_3ec4b4;
        case 0x3ec4b8u: goto label_3ec4b8;
        case 0x3ec4bcu: goto label_3ec4bc;
        case 0x3ec4c0u: goto label_3ec4c0;
        case 0x3ec4c4u: goto label_3ec4c4;
        case 0x3ec4c8u: goto label_3ec4c8;
        case 0x3ec4ccu: goto label_3ec4cc;
        case 0x3ec4d0u: goto label_3ec4d0;
        case 0x3ec4d4u: goto label_3ec4d4;
        case 0x3ec4d8u: goto label_3ec4d8;
        case 0x3ec4dcu: goto label_3ec4dc;
        case 0x3ec4e0u: goto label_3ec4e0;
        case 0x3ec4e4u: goto label_3ec4e4;
        case 0x3ec4e8u: goto label_3ec4e8;
        case 0x3ec4ecu: goto label_3ec4ec;
        case 0x3ec4f0u: goto label_3ec4f0;
        case 0x3ec4f4u: goto label_3ec4f4;
        case 0x3ec4f8u: goto label_3ec4f8;
        case 0x3ec4fcu: goto label_3ec4fc;
        default: break;
    }

    ctx->pc = 0x3ec3a0u;

label_3ec3a0:
    // 0x3ec3a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ec3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3ec3a4:
    // 0x3ec3a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ec3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3ec3a8:
    // 0x3ec3a8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3ec3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3ec3ac:
    // 0x3ec3ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ec3acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ec3b0:
    // 0x3ec3b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3ec3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3ec3b4:
    // 0x3ec3b4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3ec3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3ec3b8:
    // 0x3ec3b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ec3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3ec3bc:
    // 0x3ec3bc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3ec3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ec3c0:
    // 0x3ec3c0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ec3c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ec3c4:
    // 0x3ec3c4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ec3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ec3c8:
    // 0x3ec3c8: 0x40f809  jalr        $v0
label_3ec3cc:
    if (ctx->pc == 0x3EC3CCu) {
        ctx->pc = 0x3EC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC3C8u;
        // 0x3ec3cc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC3D0u;
        goto label_3ec3d0;
    }
    ctx->pc = 0x3EC3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EC3D0u);
        ctx->pc = 0x3EC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC3C8u;
        // 0x3ec3cc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC3C8u, 0x3EC3D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EC3D0u;
label_3ec3d0:
    // 0x3ec3d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ec3d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ec3d4:
    // 0x3ec3d4: 0x924200b0  lbu         $v0, 0xB0($s2)
    ctx->pc = 0x3ec3d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 176)));
label_3ec3d8:
    // 0x3ec3d8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3ec3dc:
    if (ctx->pc == 0x3EC3DCu) {
        ctx->pc = 0x3EC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC3D8u;
        // 0x3ec3dc: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC3E0u;
        goto label_3ec3e0;
    }
    ctx->pc = 0x3EC3D8u;
    {
        const bool branch_taken_0x3ec3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec3d8) {
            ctx->pc = 0x3EC3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC3D8u;
            // 0x3ec3dc: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC3E8u;
            goto label_3ec3e8;
        }
    }
    ctx->pc = 0x3EC3E0u;
label_3ec3e0:
    // 0x3ec3e0: 0x1000003f  b           . + 4 + (0x3F << 2)
label_3ec3e4:
    if (ctx->pc == 0x3EC3E4u) {
        ctx->pc = 0x3EC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC3E0u;
        // 0x3ec3e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC3E8u;
        goto label_3ec3e8;
    }
    ctx->pc = 0x3EC3E0u;
    {
        const bool branch_taken_0x3ec3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC3E0u;
        // 0x3ec3e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec3e0) {
            ctx->pc = 0x3EC4E0u;
            goto label_3ec4e0;
        }
    }
    ctx->pc = 0x3EC3E8u;
label_3ec3e8:
    // 0x3ec3e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ec3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ec3ec:
    // 0x3ec3ec: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3ec3f0:
    if (ctx->pc == 0x3EC3F0u) {
        ctx->pc = 0x3EC3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC3ECu;
        // 0x3ec3f0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC3F4u;
        goto label_3ec3f4;
    }
    ctx->pc = 0x3EC3ECu;
    {
        const bool branch_taken_0x3ec3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec3ec) {
            ctx->pc = 0x3EC3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC3ECu;
            // 0x3ec3f0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC404u;
            goto label_3ec404;
        }
    }
    ctx->pc = 0x3EC3F4u;
label_3ec3f4:
    // 0x3ec3f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ec3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ec3f8:
    // 0x3ec3f8: 0xc0e858c  jal         func_3A1630
label_3ec3fc:
    if (ctx->pc == 0x3EC3FCu) {
        ctx->pc = 0x3EC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC3F8u;
        // 0x3ec3fc: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC400u;
        goto label_3ec400;
    }
    ctx->pc = 0x3EC3F8u;
    SET_GPR_U32(ctx, 31, 0x3EC400u);
    ctx->pc = 0x3EC3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC3F8u;
    // 0x3ec3fc: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EC3F8u, 0x3EC400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC400u;
label_3ec400:
    // 0x3ec400: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3ec400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ec404:
    // 0x3ec404: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ec404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ec408:
    // 0x3ec408: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_3ec40c:
    if (ctx->pc == 0x3EC40Cu) {
        ctx->pc = 0x3EC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC408u;
        // 0x3ec40c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC410u;
        goto label_3ec410;
    }
    ctx->pc = 0x3EC408u;
    {
        const bool branch_taken_0x3ec408 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3EC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC408u;
        // 0x3ec40c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec408) {
            ctx->pc = 0x3EC424u;
            goto label_3ec424;
        }
    }
    ctx->pc = 0x3EC410u;
label_3ec410:
    // 0x3ec410: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ec410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ec414:
    // 0x3ec414: 0x0  nop
    ctx->pc = 0x3ec414u;
    // NOP
label_3ec418:
    // 0x3ec418: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ec418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ec41c:
    // 0x3ec41c: 0x10000009  b           . + 4 + (0x9 << 2)
label_3ec420:
    if (ctx->pc == 0x3EC420u) {
        ctx->pc = 0x3EC420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC41Cu;
        // 0x3ec420: 0xc6600008  lwc1        $f0, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC424u;
        goto label_3ec424;
    }
    ctx->pc = 0x3EC41Cu;
    {
        const bool branch_taken_0x3ec41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC41Cu;
        // 0x3ec420: 0xc6600008  lwc1        $f0, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec41c) {
            ctx->pc = 0x3EC444u;
            goto label_3ec444;
        }
    }
    ctx->pc = 0x3EC424u;
label_3ec424:
    // 0x3ec424: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3ec424u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3ec428:
    // 0x3ec428: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ec428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3ec42c:
    // 0x3ec42c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ec42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3ec430:
    // 0x3ec430: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ec430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ec434:
    // 0x3ec434: 0x0  nop
    ctx->pc = 0x3ec434u;
    // NOP
label_3ec438:
    // 0x3ec438: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ec438u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ec43c:
    // 0x3ec43c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ec43cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3ec440:
    // 0x3ec440: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x3ec440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ec444:
    // 0x3ec444: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ec444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ec448:
    // 0x3ec448: 0x0  nop
    ctx->pc = 0x3ec448u;
    // NOP
label_3ec44c:
    // 0x3ec44c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_3ec450:
    if (ctx->pc == 0x3EC450u) {
        ctx->pc = 0x3EC450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC44Cu;
        // 0x3ec450: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC454u;
        goto label_3ec454;
    }
    ctx->pc = 0x3EC44Cu;
    {
        const bool branch_taken_0x3ec44c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EC450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC44Cu;
        // 0x3ec450: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec44c) {
            ctx->pc = 0x3EC46Cu;
            goto label_3ec46c;
        }
    }
    ctx->pc = 0x3EC454u;
label_3ec454:
    // 0x3ec454: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x3ec454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3ec458:
    // 0x3ec458: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ec458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ec45c:
    // 0x3ec45c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3ec45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3ec460:
    // 0x3ec460: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ec460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ec464:
    // 0x3ec464: 0xae4300b4  sw          $v1, 0xB4($s2)
    ctx->pc = 0x3ec464u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 3));
label_3ec468:
    // 0x3ec468: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3ec468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3ec46c:
    // 0x3ec46c: 0x8c51489c  lw          $s1, 0x489C($v0)
    ctx->pc = 0x3ec46cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3ec470:
    // 0x3ec470: 0xc136ad6  jal         func_4DAB58
label_3ec474:
    if (ctx->pc == 0x3EC474u) {
        ctx->pc = 0x3EC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC470u;
        // 0x3ec474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC478u;
        goto label_3ec478;
    }
    ctx->pc = 0x3EC470u;
    SET_GPR_U32(ctx, 31, 0x3EC478u);
    ctx->pc = 0x3EC474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC470u;
    // 0x3ec474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x3EC470u, 0x3EC478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC478u;
label_3ec478:
    // 0x3ec478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ec478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ec47c:
    // 0x3ec47c: 0xc136ad4  jal         func_4DAB50
label_3ec480:
    if (ctx->pc == 0x3EC480u) {
        ctx->pc = 0x3EC480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC47Cu;
        // 0x3ec480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC484u;
        goto label_3ec484;
    }
    ctx->pc = 0x3EC47Cu;
    SET_GPR_U32(ctx, 31, 0x3EC484u);
    ctx->pc = 0x3EC480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC47Cu;
    // 0x3ec480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x3EC47Cu, 0x3EC484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC484u;
label_3ec484:
    // 0x3ec484: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x3ec484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_3ec488:
    // 0x3ec488: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ec488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ec48c:
    // 0x3ec48c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3ec48cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3ec490:
    // 0x3ec490: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ec490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3ec494:
    // 0x3ec494: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3ec494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ec498:
    // 0x3ec498: 0x10440011  beq         $v0, $a0, . + 4 + (0x11 << 2)
label_3ec49c:
    if (ctx->pc == 0x3EC49Cu) {
        ctx->pc = 0x3EC49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC498u;
        // 0x3ec49c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC4A0u;
        goto label_3ec4a0;
    }
    ctx->pc = 0x3EC498u;
    {
        const bool branch_taken_0x3ec498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3EC49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC498u;
        // 0x3ec49c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec498) {
            ctx->pc = 0x3EC4E0u;
            goto label_3ec4e0;
        }
    }
    ctx->pc = 0x3EC4A0u;
label_3ec4a0:
    // 0x3ec4a0: 0xc0e9694  jal         func_3A5A50
label_3ec4a4:
    if (ctx->pc == 0x3EC4A4u) {
        ctx->pc = 0x3EC4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC4A0u;
        // 0x3ec4a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC4A8u;
        goto label_3ec4a8;
    }
    ctx->pc = 0x3EC4A0u;
    SET_GPR_U32(ctx, 31, 0x3EC4A8u);
    ctx->pc = 0x3EC4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC4A0u;
    // 0x3ec4a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3EC4A0u, 0x3EC4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC4A8u;
label_3ec4a8:
    // 0x3ec4a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3ec4ac:
    if (ctx->pc == 0x3EC4ACu) {
        ctx->pc = 0x3EC4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC4A8u;
        // 0x3ec4ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC4B0u;
        goto label_3ec4b0;
    }
    ctx->pc = 0x3EC4A8u;
    {
        const bool branch_taken_0x3ec4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC4A8u;
        // 0x3ec4ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec4a8) {
            ctx->pc = 0x3EC4C8u;
            goto label_3ec4c8;
        }
    }
    ctx->pc = 0x3EC4B0u;
label_3ec4b0:
    // 0x3ec4b0: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3ec4b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3ec4b4:
    // 0x3ec4b4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3ec4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3ec4b8:
    // 0x3ec4b8: 0xc0e94a0  jal         func_3A5280
label_3ec4bc:
    if (ctx->pc == 0x3EC4BCu) {
        ctx->pc = 0x3EC4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC4B8u;
        // 0x3ec4bc: 0xc66c0004  lwc1        $f12, 0x4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC4C0u;
        goto label_3ec4c0;
    }
    ctx->pc = 0x3EC4B8u;
    SET_GPR_U32(ctx, 31, 0x3EC4C0u);
    ctx->pc = 0x3EC4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC4B8u;
    // 0x3ec4bc: 0xc66c0004  lwc1        $f12, 0x4($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3EC4B8u, 0x3EC4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC4C0u;
label_3ec4c0:
    // 0x3ec4c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3ec4c4:
    if (ctx->pc == 0x3EC4C4u) {
        ctx->pc = 0x3EC4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC4C0u;
        // 0x3ec4c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC4C8u;
        goto label_3ec4c8;
    }
    ctx->pc = 0x3EC4C0u;
    {
        const bool branch_taken_0x3ec4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC4C0u;
        // 0x3ec4c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec4c0) {
            ctx->pc = 0x3EC4E0u;
            goto label_3ec4e0;
        }
    }
    ctx->pc = 0x3EC4C8u;
label_3ec4c8:
    // 0x3ec4c8: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x3ec4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3ec4cc:
    // 0x3ec4cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ec4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ec4d0:
    // 0x3ec4d0: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3ec4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3ec4d4:
    // 0x3ec4d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ec4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ec4d8:
    // 0x3ec4d8: 0xae4300b4  sw          $v1, 0xB4($s2)
    ctx->pc = 0x3ec4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 3));
label_3ec4dc:
    // 0x3ec4dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ec4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec4e0:
    // 0x3ec4e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3ec4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ec4e4:
    // 0x3ec4e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3ec4e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ec4e8:
    // 0x3ec4e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ec4e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ec4ec:
    // 0x3ec4ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3ec4ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ec4f0:
    // 0x3ec4f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ec4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ec4f4:
    // 0x3ec4f4: 0x3e00008  jr          $ra
label_3ec4f8:
    if (ctx->pc == 0x3EC4F8u) {
        ctx->pc = 0x3EC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC4F4u;
        // 0x3ec4f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC4FCu;
        goto label_3ec4fc;
    }
    ctx->pc = 0x3EC4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC4F4u;
        // 0x3ec4f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC4FCu;
label_3ec4fc:
    // 0x3ec4fc: 0x0  nop
    ctx->pc = 0x3ec4fcu;
    // NOP
    ctx->pc = 0x3ec500u;
}
