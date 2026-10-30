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

// Function: sub_0016B678
// Address: 0x16b678 - 0x16b728
void sub_0016B678_0x16b678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B678_0x16b678");
#endif

    switch (ctx->pc) {
        case 0x16b6c0u: goto label_16b6c0;
        case 0x16b6e8u: goto label_16b6e8;
        case 0x16b6f0u: goto label_16b6f0;
        case 0x16b6f8u: goto label_16b6f8;
        case 0x16b708u: goto label_16b708;
        case 0x16b714u: goto label_16b714;
        default: break;
    }

    ctx->pc = 0x16b678u;

    // 0x16b678: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16b678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16b67c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16b67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16b680: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x16b680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16b684: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16b684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16b688: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16b688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16b68c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x16b68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b690: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16b690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16b694: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16b694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b698: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x16b698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16b69c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x16b69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b6a0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x16b6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b6a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16b6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6a8: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x16b6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x16b6ac: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x16b6acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16b6b0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x16b6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16b6b4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x16b6b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x16b6b8: 0xc05b2de  jal         func_16CB78
    ctx->pc = 0x16B6B8u;
    SET_GPR_U32(ctx, 31, 0x16B6C0u);
    ctx->pc = 0x16B6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B6B8u;
    // 0x16b6bc: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB78u, 0x16B6B8u, 0x16B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B6C0u;
label_16b6c0:
    // 0x16b6c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b6c4: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16B6C4u;
    {
        const bool branch_taken_0x16b6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16b6c4) {
            ctx->pc = 0x16B6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B6C4u;
            // 0x16b6c8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B718u;
            goto label_16b718;
        }
    }
    ctx->pc = 0x16B6CCu;
    // 0x16b6cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x16b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x16b6d0: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x16b6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b6d4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x16b6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x16b6d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6e0: 0xc05b83c  jal         func_16E0F0
    ctx->pc = 0x16B6E0u;
    SET_GPR_U32(ctx, 31, 0x16B6E8u);
    ctx->pc = 0x16B6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B6E0u;
    // 0x16b6e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E0F0u, 0x16B6E0u, 0x16B6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B6E8u;
label_16b6e8:
    // 0x16b6e8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x16B6E8u;
    SET_GPR_U32(ctx, 31, 0x16B6F0u);
    ctx->pc = 0x16B6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B6E8u;
    // 0x16b6ec: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x16B6E8u, 0x16B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B6F0u;
label_16b6f0:
    // 0x16b6f0: 0xc08a61a  jal         func_229868
    ctx->pc = 0x16B6F0u;
    SET_GPR_U32(ctx, 31, 0x16B6F8u);
    ctx->pc = 0x16B6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B6F0u;
    // 0x16b6f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x16B6F0u, 0x16B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B6F8u;
label_16b6f8:
    // 0x16b6f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16B6F8u;
    {
        const bool branch_taken_0x16b6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6F8u;
        // 0x16b6fc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6f8) {
            ctx->pc = 0x16B718u;
            goto label_16b718;
        }
    }
    ctx->pc = 0x16B700u;
    // 0x16b700: 0xc087502  jal         func_21D408
    ctx->pc = 0x16B700u;
    SET_GPR_U32(ctx, 31, 0x16B708u);
    ctx->pc = 0x16B704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B700u;
    // 0x16b704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16B700u, 0x16B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B708u;
label_16b708:
    // 0x16b708: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x16b708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16b70c: 0xc05a632  jal         func_1698C8
    ctx->pc = 0x16B70Cu;
    SET_GPR_U32(ctx, 31, 0x16B714u);
    ctx->pc = 0x16B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B70Cu;
    // 0x16b710: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698C8u, 0x16B70Cu, 0x16B714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B714u;
label_16b714:
    // 0x16b714: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16b714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16b718:
    // 0x16b718: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16b718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b71c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16b71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b720: 0x3e00008  jr          $ra
    ctx->pc = 0x16B720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B720u;
        // 0x16b724: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B728u;
}
