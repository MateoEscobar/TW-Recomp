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

// Function: sub_001812D0
// Address: 0x1812d0 - 0x181400
void sub_001812D0_0x1812d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001812D0_0x1812d0");
#endif

    switch (ctx->pc) {
        case 0x18131cu: goto label_18131c;
        case 0x18136cu: goto label_18136c;
        case 0x181378u: goto label_181378;
        case 0x181398u: goto label_181398;
        case 0x1813a8u: goto label_1813a8;
        case 0x1813b8u: goto label_1813b8;
        default: break;
    }

    ctx->pc = 0x1812d0u;

    // 0x1812d0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1812d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1812d4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1812d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1812d8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1812d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1812dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1812dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1812e0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1812e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1812e4: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x1812e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1812e8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1812e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1812ec: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x1812ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1812f0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1812f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1812f4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1812f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1812f8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1812f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1812fc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1812fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181300: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x181300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x181304: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x181304u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181308: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x181308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x18130c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18130cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181310: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x181310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181314: 0xc137c70  jal         func_4DF1C0
    ctx->pc = 0x181314u;
    SET_GPR_U32(ctx, 31, 0x18131Cu);
    ctx->pc = 0x181318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181314u;
    // 0x181318: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF1C0u, 0x181314u, 0x18131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18131Cu;
label_18131c:
    // 0x18131c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x18131cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x181320: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x181320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181324: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x181324u;
    {
        const bool branch_taken_0x181324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x181328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181324u;
        // 0x181328: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181324) {
            ctx->pc = 0x181348u;
            goto label_181348;
        }
    }
    ctx->pc = 0x18132Cu;
    // 0x18132c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18132cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x181330: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x181330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x181334: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x181334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x181338: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x181338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x18133c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x18133cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181340: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x181340u;
    {
        const bool branch_taken_0x181340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181340u;
        // 0x181344: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181340) {
            ctx->pc = 0x1813D8u;
            goto label_1813d8;
        }
    }
    ctx->pc = 0x181348u;
label_181348:
    // 0x181348: 0x16000023  bnez        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x181348u;
    {
        const bool branch_taken_0x181348 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181348u;
        // 0x18134c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181348) {
            ctx->pc = 0x1813D8u;
            goto label_1813d8;
        }
    }
    ctx->pc = 0x181350u;
    // 0x181350: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x181350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x181354: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x181354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x181358: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x181358u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18135c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18135cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181360: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x181360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x181364: 0xc10ca04  jal         func_432810
    ctx->pc = 0x181364u;
    SET_GPR_U32(ctx, 31, 0x18136Cu);
    ctx->pc = 0x181368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181364u;
    // 0x181368: 0x24c62618  addiu       $a2, $a2, 0x2618 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x181364u, 0x18136Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18136Cu;
label_18136c:
    // 0x18136c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18136cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181370: 0xc061668  jal         func_1859A0
    ctx->pc = 0x181370u;
    SET_GPR_U32(ctx, 31, 0x181378u);
    ctx->pc = 0x181374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181370u;
    // 0x181374: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859A0u, 0x181370u, 0x181378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181378u;
label_181378:
    // 0x181378: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x181378u;
    {
        const bool branch_taken_0x181378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181378u;
        // 0x18137c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181378) {
            ctx->pc = 0x18139Cu;
            goto label_18139c;
        }
    }
    ctx->pc = 0x181380u;
    // 0x181380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181384: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x181384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181388: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x181388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18138c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x18138cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181390: 0xc061eaa  jal         func_187AA8
    ctx->pc = 0x181390u;
    SET_GPR_U32(ctx, 31, 0x181398u);
    ctx->pc = 0x181394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181390u;
    // 0x181394: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AA8u, 0x181390u, 0x181398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181398u;
label_181398:
    // 0x181398: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x181398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_18139c:
    // 0x18139c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18139cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1813a0: 0xc0552b8  jal         func_154AE0
    ctx->pc = 0x1813A0u;
    SET_GPR_U32(ctx, 31, 0x1813A8u);
    ctx->pc = 0x1813A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1813A0u;
    // 0x1813a4: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x1813A0u, 0x1813A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1813A8u;
label_1813a8:
    // 0x1813a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1813a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1813ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1813acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813b0: 0xc137c70  jal         func_4DF1C0
    ctx->pc = 0x1813B0u;
    SET_GPR_U32(ctx, 31, 0x1813B8u);
    ctx->pc = 0x1813B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1813B0u;
    // 0x1813b4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF1C0u, 0x1813B0u, 0x1813B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1813B8u;
label_1813b8:
    // 0x1813b8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1813b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1813bc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1813bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1813c0: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x1813c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1813c4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1813c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1813c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1813c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1813cc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1813ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1813d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1813d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1813d4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1813d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1813d8:
    // 0x1813d8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1813d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1813dc: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1813dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1813e0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1813e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1813e4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1813e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1813e8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1813e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1813ec: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1813ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1813f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1813f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1813f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1813F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1813F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813F4u;
        // 0x1813f8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1813F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1813FCu;
    // 0x1813fc: 0x0  nop
    ctx->pc = 0x1813fcu;
    // NOP
    ctx->pc = 0x181400u;
}
