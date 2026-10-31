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

// Function: sub_003EA350
// Address: 0x3ea350 - 0x3ea488
void sub_003EA350_0x3ea350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA350_0x3ea350");
#endif

    switch (ctx->pc) {
        case 0x3ea350u: goto label_3ea350;
        case 0x3ea354u: goto label_3ea354;
        case 0x3ea358u: goto label_3ea358;
        case 0x3ea35cu: goto label_3ea35c;
        case 0x3ea360u: goto label_3ea360;
        case 0x3ea364u: goto label_3ea364;
        case 0x3ea368u: goto label_3ea368;
        case 0x3ea36cu: goto label_3ea36c;
        case 0x3ea370u: goto label_3ea370;
        case 0x3ea374u: goto label_3ea374;
        case 0x3ea378u: goto label_3ea378;
        case 0x3ea37cu: goto label_3ea37c;
        case 0x3ea380u: goto label_3ea380;
        case 0x3ea384u: goto label_3ea384;
        case 0x3ea388u: goto label_3ea388;
        case 0x3ea38cu: goto label_3ea38c;
        case 0x3ea390u: goto label_3ea390;
        case 0x3ea394u: goto label_3ea394;
        case 0x3ea398u: goto label_3ea398;
        case 0x3ea39cu: goto label_3ea39c;
        case 0x3ea3a0u: goto label_3ea3a0;
        case 0x3ea3a4u: goto label_3ea3a4;
        case 0x3ea3a8u: goto label_3ea3a8;
        case 0x3ea3acu: goto label_3ea3ac;
        case 0x3ea3b0u: goto label_3ea3b0;
        case 0x3ea3b4u: goto label_3ea3b4;
        case 0x3ea3b8u: goto label_3ea3b8;
        case 0x3ea3bcu: goto label_3ea3bc;
        case 0x3ea3c0u: goto label_3ea3c0;
        case 0x3ea3c4u: goto label_3ea3c4;
        case 0x3ea3c8u: goto label_3ea3c8;
        case 0x3ea3ccu: goto label_3ea3cc;
        case 0x3ea3d0u: goto label_3ea3d0;
        case 0x3ea3d4u: goto label_3ea3d4;
        case 0x3ea3d8u: goto label_3ea3d8;
        case 0x3ea3dcu: goto label_3ea3dc;
        case 0x3ea3e0u: goto label_3ea3e0;
        case 0x3ea3e4u: goto label_3ea3e4;
        case 0x3ea3e8u: goto label_3ea3e8;
        case 0x3ea3ecu: goto label_3ea3ec;
        case 0x3ea3f0u: goto label_3ea3f0;
        case 0x3ea3f4u: goto label_3ea3f4;
        case 0x3ea3f8u: goto label_3ea3f8;
        case 0x3ea3fcu: goto label_3ea3fc;
        case 0x3ea400u: goto label_3ea400;
        case 0x3ea404u: goto label_3ea404;
        case 0x3ea408u: goto label_3ea408;
        case 0x3ea40cu: goto label_3ea40c;
        case 0x3ea410u: goto label_3ea410;
        case 0x3ea414u: goto label_3ea414;
        case 0x3ea418u: goto label_3ea418;
        case 0x3ea41cu: goto label_3ea41c;
        case 0x3ea420u: goto label_3ea420;
        case 0x3ea424u: goto label_3ea424;
        case 0x3ea428u: goto label_3ea428;
        case 0x3ea42cu: goto label_3ea42c;
        case 0x3ea430u: goto label_3ea430;
        case 0x3ea434u: goto label_3ea434;
        case 0x3ea438u: goto label_3ea438;
        case 0x3ea43cu: goto label_3ea43c;
        case 0x3ea440u: goto label_3ea440;
        case 0x3ea444u: goto label_3ea444;
        case 0x3ea448u: goto label_3ea448;
        case 0x3ea44cu: goto label_3ea44c;
        case 0x3ea450u: goto label_3ea450;
        case 0x3ea454u: goto label_3ea454;
        case 0x3ea458u: goto label_3ea458;
        case 0x3ea45cu: goto label_3ea45c;
        case 0x3ea460u: goto label_3ea460;
        case 0x3ea464u: goto label_3ea464;
        case 0x3ea468u: goto label_3ea468;
        case 0x3ea46cu: goto label_3ea46c;
        case 0x3ea470u: goto label_3ea470;
        case 0x3ea474u: goto label_3ea474;
        case 0x3ea478u: goto label_3ea478;
        case 0x3ea47cu: goto label_3ea47c;
        case 0x3ea480u: goto label_3ea480;
        case 0x3ea484u: goto label_3ea484;
        default: break;
    }

    ctx->pc = 0x3ea350u;

label_3ea350:
    // 0x3ea350: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3ea350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3ea354:
    // 0x3ea354: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3ea354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3ea358:
    // 0x3ea358: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3ea358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3ea35c:
    // 0x3ea35c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ea35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ea360:
    // 0x3ea360: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3ea360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3ea364:
    // 0x3ea364: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ea364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ea368:
    // 0x3ea368: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3ea368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3ea36c:
    // 0x3ea36c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ea36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ea370:
    // 0x3ea370: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ea370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ea374:
    // 0x3ea374: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ea374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ea378:
    // 0x3ea378: 0x40f809  jalr        $v0
label_3ea37c:
    if (ctx->pc == 0x3EA37Cu) {
        ctx->pc = 0x3EA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA378u;
        // 0x3ea37c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA380u;
        goto label_3ea380;
    }
    ctx->pc = 0x3EA378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA380u);
        ctx->pc = 0x3EA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA378u;
        // 0x3ea37c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA378u, 0x3EA380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA380u;
label_3ea380:
    // 0x3ea380: 0x24030401  addiu       $v1, $zero, 0x401
    ctx->pc = 0x3ea380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_3ea384:
    // 0x3ea384: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ea384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ea388:
    // 0x3ea388: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3ea388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3ea38c:
    // 0x3ea38c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3ea38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3ea390:
    // 0x3ea390: 0xc0e858c  jal         func_3A1630
label_3ea394:
    if (ctx->pc == 0x3EA394u) {
        ctx->pc = 0x3EA394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA390u;
        // 0x3ea394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA398u;
        goto label_3ea398;
    }
    ctx->pc = 0x3EA390u;
    SET_GPR_U32(ctx, 31, 0x3EA398u);
    ctx->pc = 0x3EA394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA390u;
    // 0x3ea394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EA390u, 0x3EA398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA398u;
label_3ea398:
    // 0x3ea398: 0xc0ea14c  jal         func_3A8530
label_3ea39c:
    if (ctx->pc == 0x3EA39Cu) {
        ctx->pc = 0x3EA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA398u;
        // 0x3ea39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA3A0u;
        goto label_3ea3a0;
    }
    ctx->pc = 0x3EA398u;
    SET_GPR_U32(ctx, 31, 0x3EA3A0u);
    ctx->pc = 0x3EA39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA398u;
    // 0x3ea39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EA398u, 0x3EA3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA3A0u;
label_3ea3a0:
    // 0x3ea3a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ea3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ea3a4:
    // 0x3ea3a4: 0xc0ea12a  jal         func_3A84A8
label_3ea3a8:
    if (ctx->pc == 0x3EA3A8u) {
        ctx->pc = 0x3EA3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA3A4u;
        // 0x3ea3a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA3ACu;
        goto label_3ea3ac;
    }
    ctx->pc = 0x3EA3A4u;
    SET_GPR_U32(ctx, 31, 0x3EA3ACu);
    ctx->pc = 0x3EA3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA3A4u;
    // 0x3ea3a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EA3A4u, 0x3EA3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA3ACu;
label_3ea3ac:
    // 0x3ea3ac: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ea3acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ea3b0:
    // 0x3ea3b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ea3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ea3b4:
    // 0x3ea3b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ea3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea3b8:
    // 0x3ea3b8: 0xc0ea12a  jal         func_3A84A8
label_3ea3bc:
    if (ctx->pc == 0x3EA3BCu) {
        ctx->pc = 0x3EA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA3B8u;
        // 0x3ea3bc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA3C0u;
        goto label_3ea3c0;
    }
    ctx->pc = 0x3EA3B8u;
    SET_GPR_U32(ctx, 31, 0x3EA3C0u);
    ctx->pc = 0x3EA3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA3B8u;
    // 0x3ea3bc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EA3B8u, 0x3EA3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA3C0u;
label_3ea3c0:
    // 0x3ea3c0: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3ea3c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ea3c4:
    // 0x3ea3c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ea3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ea3c8:
    // 0x3ea3c8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ea3c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ea3cc:
    // 0x3ea3cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ea3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea3d0:
    // 0x3ea3d0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3ea3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3ea3d4:
    // 0x3ea3d4: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x3ea3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_3ea3d8:
    // 0x3ea3d8: 0xc0e9132  jal         func_3A44C8
label_3ea3dc:
    if (ctx->pc == 0x3EA3DCu) {
        ctx->pc = 0x3EA3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA3D8u;
        // 0x3ea3dc: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA3E0u;
        goto label_3ea3e0;
    }
    ctx->pc = 0x3EA3D8u;
    SET_GPR_U32(ctx, 31, 0x3EA3E0u);
    ctx->pc = 0x3EA3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA3D8u;
    // 0x3ea3dc: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3EA3D8u, 0x3EA3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA3E0u;
label_3ea3e0:
    // 0x3ea3e0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3ea3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3ea3e4:
    // 0x3ea3e4: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3ea3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3ea3e8:
    // 0x3ea3e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3ea3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3ea3ec:
    // 0x3ea3ec: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x3ea3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
label_3ea3f0:
    // 0x3ea3f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ea3f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ea3f4:
    // 0x3ea3f4: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x3ea3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
label_3ea3f8:
    // 0x3ea3f8: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x3ea3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3ea3fc:
    // 0x3ea3fc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x3ea3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_3ea400:
    // 0x3ea400: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3ea400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3ea404:
    // 0x3ea404: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3ea404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3ea408:
    // 0x3ea408: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3ea408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3ea40c:
    // 0x3ea40c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ea40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ea410:
    // 0x3ea410: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ea410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ea414:
    // 0x3ea414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ea414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea418:
    // 0x3ea418: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3ea418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3ea41c:
    // 0x3ea41c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3ea41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3ea420:
    // 0x3ea420: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x3ea420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3ea424:
    // 0x3ea424: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x3ea424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3ea428:
    // 0x3ea428: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3ea428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ea42c:
    // 0x3ea42c: 0xc136b30  jal         func_4DACC0
label_3ea430:
    if (ctx->pc == 0x3EA430u) {
        ctx->pc = 0x3EA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA42Cu;
        // 0x3ea430: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA434u;
        goto label_3ea434;
    }
    ctx->pc = 0x3EA42Cu;
    SET_GPR_U32(ctx, 31, 0x3EA434u);
    ctx->pc = 0x3EA430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA42Cu;
    // 0x3ea430: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x3EA42Cu, 0x3EA434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA434u;
label_3ea434:
    // 0x3ea434: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3ea434u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ea438:
    // 0x3ea438: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ea438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ea43c:
    // 0x3ea43c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ea43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ea440:
    // 0x3ea440: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3ea440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ea444:
    // 0x3ea444: 0xc136b18  jal         func_4DAC60
label_3ea448:
    if (ctx->pc == 0x3EA448u) {
        ctx->pc = 0x3EA448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA444u;
        // 0x3ea448: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA44Cu;
        goto label_3ea44c;
    }
    ctx->pc = 0x3EA444u;
    SET_GPR_U32(ctx, 31, 0x3EA44Cu);
    ctx->pc = 0x3EA448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA444u;
    // 0x3ea448: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3EA444u, 0x3EA44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA44Cu;
label_3ea44c:
    // 0x3ea44c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3ea44cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ea450:
    // 0x3ea450: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ea450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ea454:
    // 0x3ea454: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x3ea454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_3ea458:
    // 0x3ea458: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ea458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ea45c:
    // 0x3ea45c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3ea45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ea460:
    // 0x3ea460: 0xc0f17ea  jal         func_3C5FA8
label_3ea464:
    if (ctx->pc == 0x3EA464u) {
        ctx->pc = 0x3EA464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA460u;
        // 0x3ea464: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA468u;
        goto label_3ea468;
    }
    ctx->pc = 0x3EA460u;
    SET_GPR_U32(ctx, 31, 0x3EA468u);
    ctx->pc = 0x3EA464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA460u;
    // 0x3ea464: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5FA8u, 0x3EA460u, 0x3EA468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA468u;
label_3ea468:
    // 0x3ea468: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x3ea468u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_3ea46c:
    // 0x3ea46c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3ea46cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ea470:
    // 0x3ea470: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3ea470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ea474:
    // 0x3ea474: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3ea474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ea478:
    // 0x3ea478: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3ea478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3ea47c:
    // 0x3ea47c: 0x3e00008  jr          $ra
label_3ea480:
    if (ctx->pc == 0x3EA480u) {
        ctx->pc = 0x3EA480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA47Cu;
        // 0x3ea480: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA484u;
        goto label_3ea484;
    }
    ctx->pc = 0x3EA47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA47Cu;
        // 0x3ea480: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EA484u;
label_3ea484:
    // 0x3ea484: 0x0  nop
    ctx->pc = 0x3ea484u;
    // NOP
    ctx->pc = 0x3ea488u;
}
