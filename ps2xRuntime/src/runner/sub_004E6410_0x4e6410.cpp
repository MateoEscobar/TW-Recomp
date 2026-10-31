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

// Function: sub_004E6410
// Address: 0x4e6410 - 0x4e64d0
void sub_004E6410_0x4e6410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6410_0x4e6410");
#endif

    switch (ctx->pc) {
        case 0x4e6448u: goto label_4e6448;
        case 0x4e6470u: goto label_4e6470;
        case 0x4e6480u: goto label_4e6480;
        case 0x4e6488u: goto label_4e6488;
        case 0x4e6494u: goto label_4e6494;
        default: break;
    }

    ctx->pc = 0x4e6410u;

    // 0x4e6410: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4e6410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4e6414: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e6414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x4e6418: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4e6418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x4e641c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e641cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6420: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e6420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4e6424: 0x2672fffc  addiu       $s2, $s3, -0x4
    ctx->pc = 0x4e6424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x4e6428: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4e6428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x4e642c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4e642cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6430: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4e6430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x4e6434: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4e6434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x4e6438: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e6438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4e643c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4E643Cu;
    {
        const bool branch_taken_0x4e643c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E643Cu;
        // 0x4e6440: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e643c) {
            ctx->pc = 0x4E6454u;
            goto label_4e6454;
        }
    }
    ctx->pc = 0x4E6444u;
    // 0x4e6444: 0x0  nop
    ctx->pc = 0x4e6444u;
    // NOP
label_4e6448:
    // 0x4e6448: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4e6448u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4e644c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x4e644cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6450: 0x2672fffc  addiu       $s2, $s3, -0x4
    ctx->pc = 0x4e6450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_4e6454:
    // 0x4e6454: 0x8eb0489c  lw          $s0, 0x489C($s5)
    ctx->pc = 0x4e6454u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x4e6458: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4e6458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e645c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4e645cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e6460: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e6460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e6464: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x4e6464u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e6468: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E6468u;
    SET_GPR_U32(ctx, 31, 0x4E6470u);
    ctx->pc = 0x4E646Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6468u;
    // 0x4e646c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E6468u, 0x4E6470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6470u;
label_4e6470:
    // 0x4e6470: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e6470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e6474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6478: 0xc107d0a  jal         func_41F428
    ctx->pc = 0x4E6478u;
    SET_GPR_U32(ctx, 31, 0x4E6480u);
    ctx->pc = 0x4E647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6478u;
    // 0x4e647c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x4E6478u, 0x4E6480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6480u;
label_4e6480:
    // 0x4e6480: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E6480u;
    SET_GPR_U32(ctx, 31, 0x4E6488u);
    ctx->pc = 0x4E6484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6480u;
    // 0x4e6484: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E6480u, 0x4E6488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6488u;
label_4e6488:
    // 0x4e6488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e6488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e648c: 0xc10ce9a  jal         func_433A68
    ctx->pc = 0x4E648Cu;
    SET_GPR_U32(ctx, 31, 0x4E6494u);
    ctx->pc = 0x4E6490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E648Cu;
    // 0x4e6490: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x4E648Cu, 0x4E6494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6494u;
label_4e6494:
    // 0x4e6494: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4e6494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4e6498: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4e6498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4e649c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4e649cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4e64a0: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x4E64A0u;
    {
        const bool branch_taken_0x4e64a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e64a0) {
            ctx->pc = 0x4E64A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E64A0u;
            // 0x4e64a4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e6448;
        }
    }
    ctx->pc = 0x4E64A8u;
    // 0x4e64a8: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x4e64a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x4e64ac: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4e64acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4e64b0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4e64b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4e64b4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4e64b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e64b8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e64b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e64bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e64bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e64c0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4e64c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e64c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e64c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e64c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4E64C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E64C8u;
        // 0x4e64cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E64C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E64D0u;
}
