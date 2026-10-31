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

// Function: sub_004AE318
// Address: 0x4ae318 - 0x4ae430
void sub_004AE318_0x4ae318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE318_0x4ae318");
#endif

    switch (ctx->pc) {
        case 0x4ae404u: goto label_4ae404;
        case 0x4ae418u: goto label_4ae418;
        default: break;
    }

    ctx->pc = 0x4ae318u;

    // 0x4ae318: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ae318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ae31c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4ae31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4ae320: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x4ae320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x4ae324: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4ae324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4ae328: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ae328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae32c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ae32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4ae330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ae330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae334: 0x24440480  addiu       $a0, $v0, 0x480
    ctx->pc = 0x4ae334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x4ae338: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4ae338u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae33c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x4ae33cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae340: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x4AE340u;
    {
        const bool branch_taken_0x4ae340 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE340u;
        // 0x4ae344: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae340) {
            ctx->pc = 0x4AE374u;
            goto label_4ae374;
        }
    }
    ctx->pc = 0x4AE348u;
    // 0x4ae348: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x4ae348u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4ae34c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4ae34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4ae350: 0xdc460480  ld          $a2, 0x480($v0)
    ctx->pc = 0x4ae350u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 1152)));
    // 0x4ae354: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x4ae354u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4ae358: 0x24e2fff0  addiu       $v0, $a3, -0x10
    ctx->pc = 0x4ae358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x4ae35c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x4ae35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4ae360: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x4ae360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x4ae364: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x4ae364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x4ae368: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ae368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ae36c: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x4ae36cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x4ae370: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x4ae370u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_4ae374:
    // 0x4ae374: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4ae374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4ae378: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x4ae378u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
    // 0x4ae37c: 0x250304a0  addiu       $v1, $t0, 0x4A0
    ctx->pc = 0x4ae37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1184));
    // 0x4ae380: 0x3c090059  lui         $t1, 0x59
    ctx->pc = 0x4ae380u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)89 << 16));
    // 0x4ae384: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x4ae384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x4ae388: 0x25250490  addiu       $a1, $t1, 0x490
    ctx->pc = 0x4ae388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 1168));
    // 0x4ae38c: 0x94660008  lhu         $a2, 0x8($v1)
    ctx->pc = 0x4ae38cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x5904A8u));
    // 0x4ae390: 0x2041023  subu        $v0, $s0, $a0
    ctx->pc = 0x4ae390u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x4ae394: 0xdd0704a0  ld          $a3, 0x4A0($t0)
    ctx->pc = 0x4ae394u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 1184)));
    // 0x4ae398: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4ae398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4ae39c: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x4ae39cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4ae3a0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4ae3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4ae3a4: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x4ae3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x4ae3a8: 0x2543fff8  addiu       $v1, $t2, -0x8
    ctx->pc = 0x4ae3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
    // 0x4ae3ac: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x4ae3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x4ae3b0: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x4ae3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4ae3b4: 0xac9d0028  sw          $sp, 0x28($a0)
    ctx->pc = 0x4ae3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 29));
    // 0x4ae3b8: 0x32280002  andi        $t0, $s1, 0x2
    ctx->pc = 0x4ae3b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x4ae3bc: 0xad450028  sw          $a1, 0x28($t2)
    ctx->pc = 0x4ae3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 5));
    // 0x4ae3c0: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x4ae3c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4ae3c4: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x4ae3c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4ae3c8: 0xa7a60008  sh          $a2, 0x8($sp)
    ctx->pc = 0x4ae3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x4ae3cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ae3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ae3d0: 0xdd270490  ld          $a3, 0x490($t1)
    ctx->pc = 0x4ae3d0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 1168)));
    // 0x4ae3d4: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x4ae3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x4ae3d8: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x4ae3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x4ae3dc: 0xa7a20008  sh          $v0, 0x8($sp)
    ctx->pc = 0x4ae3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ae3e0: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AE3E0u;
    {
        const bool branch_taken_0x4ae3e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE3E0u;
        // 0x4ae3e4: 0xad5d0028  sw          $sp, 0x28($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae3e0) {
            ctx->pc = 0x4AE404u;
            goto label_4ae404;
        }
    }
    ctx->pc = 0x4AE3E8u;
    // 0x4ae3e8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4ae3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4ae3ec: 0x8d440020  lw          $a0, 0x20($t2)
    ctx->pc = 0x4ae3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x4ae3f0: 0x24420668  addiu       $v0, $v0, 0x668
    ctx->pc = 0x4ae3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1640));
    // 0x4ae3f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AE3F4u;
    {
        const bool branch_taken_0x4ae3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE3F4u;
        // 0x4ae3f8: 0xad420028  sw          $v0, 0x28($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae3f4) {
            ctx->pc = 0x4AE404u;
            goto label_4ae404;
        }
    }
    ctx->pc = 0x4AE3FCu;
    // 0x4ae3fc: 0xc136792  jal         func_4D9E48
    ctx->pc = 0x4AE3FCu;
    SET_GPR_U32(ctx, 31, 0x4AE404u);
    ctx->pc = 0x4D9E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D9E48u, 0x4AE3FCu, 0x4AE404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE404u;
label_4ae404:
    // 0x4ae404: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x4ae404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4ae408: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AE408u;
    {
        const bool branch_taken_0x4ae408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE408u;
        // 0x4ae40c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae408) {
            ctx->pc = 0x4AE41Cu;
            goto label_4ae41c;
        }
    }
    ctx->pc = 0x4AE410u;
    // 0x4ae410: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4AE410u;
    SET_GPR_U32(ctx, 31, 0x4AE418u);
    ctx->pc = 0x4AE414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE410u;
    // 0x4ae414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4AE410u, 0x4AE418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE418u;
label_4ae418:
    // 0x4ae418: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ae418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ae41c:
    // 0x4ae41c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x4ae41cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ae420: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4ae420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ae424: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE424u;
        // 0x4ae428: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE42Cu;
    // 0x4ae42c: 0x0  nop
    ctx->pc = 0x4ae42cu;
    // NOP
    ctx->pc = 0x4ae430u;
}
