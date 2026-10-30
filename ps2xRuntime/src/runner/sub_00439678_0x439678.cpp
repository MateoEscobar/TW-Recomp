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

// Function: sub_00439678
// Address: 0x439678 - 0x4397e8
void sub_00439678_0x439678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00439678_0x439678");
#endif

    switch (ctx->pc) {
        case 0x4396a0u: goto label_4396a0;
        case 0x4396dcu: goto label_4396dc;
        case 0x4396e8u: goto label_4396e8;
        case 0x439700u: goto label_439700;
        case 0x439728u: goto label_439728;
        case 0x439744u: goto label_439744;
        case 0x439788u: goto label_439788;
        case 0x4397c0u: goto label_4397c0;
        default: break;
    }

    ctx->pc = 0x439678u;

    // 0x439678: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x439678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x43967c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x43967cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x439680: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x439680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x439684: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x439684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439688: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x439688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x43968c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x43968cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x439690: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x439690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x439694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x439694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x439698: 0xc10cfce  jal         func_433F38
    ctx->pc = 0x439698u;
    SET_GPR_U32(ctx, 31, 0x4396A0u);
    ctx->pc = 0x43969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439698u;
    // 0x43969c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F38u, 0x439698u, 0x4396A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4396A0u;
label_4396a0:
    // 0x4396a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4396a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4396a4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4396a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4396a8: 0x24546d90  addiu       $s4, $v0, 0x6D90
    ctx->pc = 0x4396a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 28048));
    // 0x4396ac: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x4396acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x4396b0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x4396b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x516D98u));
    // 0x4396b4: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x4396b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x4396b8: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x4396b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x4396bc: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x4396bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x4396c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4396c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4396c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4396c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4396c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4396c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4396cc: 0x2883e  dsrl32      $s1, $v0, 0
    ctx->pc = 0x4396ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4396d0: 0x230802f  dsubu       $s0, $s1, $s0
    ctx->pc = 0x4396d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
    // 0x4396d4: 0xc10acae  jal         func_42B2B8
    ctx->pc = 0x4396D4u;
    SET_GPR_U32(ctx, 31, 0x4396DCu);
    ctx->pc = 0x4396D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4396D4u;
    // 0x4396d8: 0x66040fef  daddiu      $a0, $s0, 0xFEF (Delay Slot)
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4079);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x4396D4u, 0x4396DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4396DCu;
label_4396dc:
    // 0x4396dc: 0x6444ffff  daddiu      $a0, $v0, -0x1
    ctx->pc = 0x4396dcu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x4396e0: 0xc10b602  jal         func_42D808
    ctx->pc = 0x4396E0u;
    SET_GPR_U32(ctx, 31, 0x4396E8u);
    ctx->pc = 0x4396E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4396E0u;
    // 0x4396e4: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x4396E0u, 0x4396E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4396E8u;
label_4396e8:
    // 0x4396e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4396e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4396ec: 0x2a021000  slti        $v0, $s0, 0x1000
    ctx->pc = 0x4396ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x4396f0: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4396F0u;
    {
        const bool branch_taken_0x4396f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4396F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4396F0u;
        // 0x4396f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4396f0) {
            ctx->pc = 0x439780u;
            goto label_439780;
        }
    }
    ctx->pc = 0x4396F8u;
    // 0x4396f8: 0xc10eab4  jal         func_43AAD0
    ctx->pc = 0x4396F8u;
    SET_GPR_U32(ctx, 31, 0x439700u);
    ctx->pc = 0x4396FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4396F8u;
    // 0x4396fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AAD0u, 0x4396F8u, 0x439700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439700u;
label_439700:
    // 0x439700: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x439700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x439704: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x439704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x439708: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x439708u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x43970c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x43970cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x439710: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x439710u;
    {
        const bool branch_taken_0x439710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x439714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439710u;
        // 0x439714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439710) {
            ctx->pc = 0x439780u;
            goto label_439780;
        }
    }
    ctx->pc = 0x439718u;
    // 0x439718: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x439718u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x43971c: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x43971cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x439720: 0xc10eab4  jal         func_43AAD0
    ctx->pc = 0x439720u;
    SET_GPR_U32(ctx, 31, 0x439728u);
    ctx->pc = 0x439724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439720u;
    // 0x439724: 0x132823  negu        $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AAD0u, 0x439720u, 0x439728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439728u;
label_439728:
    // 0x439728: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x439728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x43972c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x43972cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x439730: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x439730u;
    {
        const bool branch_taken_0x439730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x439734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439730u;
        // 0x439734: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439730) {
            ctx->pc = 0x439790u;
            goto label_439790;
        }
    }
    ctx->pc = 0x439738u;
    // 0x439738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x439738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43973c: 0xc10eab4  jal         func_43AAD0
    ctx->pc = 0x43973Cu;
    SET_GPR_U32(ctx, 31, 0x439744u);
    ctx->pc = 0x439740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43973Cu;
    // 0x439740: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AAD0u, 0x43973Cu, 0x439744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439744u;
label_439744:
    // 0x439744: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x439744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x439748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x439748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43974c: 0xa68823  subu        $s1, $a1, $a2
    ctx->pc = 0x43974cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x439750: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x439750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x439754: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x439754u;
    {
        const bool branch_taken_0x439754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x439758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439754u;
        // 0x439758: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439754) {
            ctx->pc = 0x439780u;
            goto label_439780;
        }
    }
    ctx->pc = 0x43975Cu;
    // 0x43975c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43975cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x439760: 0x8c8371a8  lw          $v1, 0x71A8($a0)
    ctx->pc = 0x439760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29096)));
    // 0x439764: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x439764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x439768: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x439768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x43976c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43976cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x439770: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x439770u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x439774: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x439774u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x439778: 0xac8371c0  sw          $v1, 0x71C0($a0)
    ctx->pc = 0x439778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29120), GPR_U32(ctx, 3));
    // 0x43977c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x43977cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_439780:
    // 0x439780: 0xc10cfe6  jal         func_433F98
    ctx->pc = 0x439780u;
    SET_GPR_U32(ctx, 31, 0x439788u);
    ctx->pc = 0x439784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439780u;
    // 0x439784: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F98u, 0x439780u, 0x439788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439788u;
label_439788:
    // 0x439788: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x439788u;
    {
        const bool branch_taken_0x439788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439788u;
        // 0x43978c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439788) {
            ctx->pc = 0x4397C4u;
            goto label_4397c4;
        }
    }
    ctx->pc = 0x439790u;
label_439790:
    // 0x439790: 0x230102f  dsubu       $v0, $s1, $s0
    ctx->pc = 0x439790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
    // 0x439794: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x439794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x439798: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x439798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43979c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4397a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4397a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4397a4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4397a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x4397a8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4397a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x4397ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4397acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4397b0: 0x8c6271c0  lw          $v0, 0x71C0($v1)
    ctx->pc = 0x4397b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5171C0u));
    // 0x4397b4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x4397b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4397b8: 0xc10cfe6  jal         func_433F98
    ctx->pc = 0x4397B8u;
    SET_GPR_U32(ctx, 31, 0x4397C0u);
    ctx->pc = 0x4397BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4397B8u;
    // 0x4397bc: 0xac6271c0  sw          $v0, 0x71C0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 29120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F98u, 0x4397B8u, 0x4397C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4397C0u;
label_4397c0:
    // 0x4397c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4397c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4397c4:
    // 0x4397c4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4397c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4397c8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4397c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4397cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4397ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4397d0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4397d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4397d4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4397d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4397d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4397d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4397dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4397DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4397E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4397DCu;
        // 0x4397e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4397DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4397E4u;
    // 0x4397e4: 0x0  nop
    ctx->pc = 0x4397e4u;
    // NOP
    ctx->pc = 0x4397e8u;
}
