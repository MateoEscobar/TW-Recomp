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

// Function: sub_00192688
// Address: 0x192688 - 0x192740
void sub_00192688_0x192688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192688_0x192688");
#endif

    switch (ctx->pc) {
        case 0x1926b4u: goto label_1926b4;
        case 0x1926d4u: goto label_1926d4;
        case 0x1926f0u: goto label_1926f0;
        case 0x192704u: goto label_192704;
        case 0x192710u: goto label_192710;
        case 0x19271cu: goto label_19271c;
        default: break;
    }

    ctx->pc = 0x192688u;

    // 0x192688: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x192688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19268c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19268cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x192690: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x192690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192694: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x192694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x192698: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x192698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19269c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x19269cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926a0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1926a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1926a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1926a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1926a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1926a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1926ac: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x1926ACu;
    SET_GPR_U32(ctx, 31, 0x1926B4u);
    ctx->pc = 0x1926B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1926ACu;
    // 0x1926b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x1926ACu, 0x1926B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1926B4u;
label_1926b4:
    // 0x1926b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1926b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1926b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1926bc: 0x16220018  bne         $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1926BCu;
    {
        const bool branch_taken_0x1926bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1926C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926BCu;
        // 0x1926c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926bc) {
            ctx->pc = 0x192720u;
            goto label_192720;
        }
    }
    ctx->pc = 0x1926C4u;
    // 0x1926c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1926c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926c8: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1926c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1926cc: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x1926CCu;
    SET_GPR_U32(ctx, 31, 0x1926D4u);
    ctx->pc = 0x1926D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1926CCu;
    // 0x1926d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x1926CCu, 0x1926D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1926D4u;
label_1926d4:
    // 0x1926d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1926d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926d8: 0x16110011  bne         $s0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1926D8u;
    {
        const bool branch_taken_0x1926d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x1926DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926D8u;
        // 0x1926dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926d8) {
            ctx->pc = 0x192720u;
            goto label_192720;
        }
    }
    ctx->pc = 0x1926E0u;
    // 0x1926e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1926e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926e4: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x1926e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x1926e8: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x1926E8u;
    SET_GPR_U32(ctx, 31, 0x1926F0u);
    ctx->pc = 0x1926ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1926E8u;
    // 0x1926ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x1926E8u, 0x1926F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1926F0u;
label_1926f0:
    // 0x1926f0: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1926F0u;
    {
        const bool branch_taken_0x1926f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1926F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926F0u;
        // 0x1926f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926f0) {
            ctx->pc = 0x192720u;
            goto label_192720;
        }
    }
    ctx->pc = 0x1926F8u;
    // 0x1926f8: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1926f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1926fc: 0xc064a2a  jal         func_1928A8
    ctx->pc = 0x1926FCu;
    SET_GPR_U32(ctx, 31, 0x192704u);
    ctx->pc = 0x192700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1926FCu;
    // 0x192700: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928A8u, 0x1926FCu, 0x192704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192704u;
label_192704:
    // 0x192704: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x192704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x192708: 0xc064a36  jal         func_1928D8
    ctx->pc = 0x192708u;
    SET_GPR_U32(ctx, 31, 0x192710u);
    ctx->pc = 0x19270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192708u;
    // 0x19270c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928D8u, 0x192708u, 0x192710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192710u;
label_192710:
    // 0x192710: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x192710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192714: 0xc064a22  jal         func_192888
    ctx->pc = 0x192714u;
    SET_GPR_U32(ctx, 31, 0x19271Cu);
    ctx->pc = 0x192718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192714u;
    // 0x192718: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192888u, 0x192714u, 0x19271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19271Cu;
label_19271c:
    // 0x19271c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x19271cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_192720:
    // 0x192720: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x192720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192724: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x192724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192728: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x192728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19272c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x19272cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192734: 0x3e00008  jr          $ra
    ctx->pc = 0x192734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192734u;
        // 0x192738: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19273Cu;
    // 0x19273c: 0x0  nop
    ctx->pc = 0x19273cu;
    // NOP
    ctx->pc = 0x192740u;
}
