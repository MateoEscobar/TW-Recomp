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

// Function: sub_002C17C0
// Address: 0x2c17c0 - 0x2c1858
void sub_002C17C0_0x2c17c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C17C0_0x2c17c0");
#endif

    switch (ctx->pc) {
        case 0x2c17f0u: goto label_2c17f0;
        case 0x2c17f8u: goto label_2c17f8;
        case 0x2c1808u: goto label_2c1808;
        case 0x2c1840u: goto label_2c1840;
        default: break;
    }

    ctx->pc = 0x2c17c0u;

    // 0x2c17c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c17c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c17c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c17c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c17c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c17c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2c17cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c17ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c17d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2c17d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2c17d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c17d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c17d8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2c17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2c17dc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C17DCu;
    {
        const bool branch_taken_0x2c17dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17DCu;
        // 0x2c17e0: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c17dc) {
            ctx->pc = 0x2C1840u;
            goto label_2c1840;
        }
    }
    ctx->pc = 0x2C17E4u;
    // 0x2c17e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c17e8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C17E8u;
    SET_GPR_U32(ctx, 31, 0x2C17F0u);
    ctx->pc = 0x2C17ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C17E8u;
    // 0x2c17ec: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C17E8u, 0x2C17F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C17F0u;
label_2c17f0:
    // 0x2c17f0: 0xc087502  jal         func_21D408
    ctx->pc = 0x2C17F0u;
    SET_GPR_U32(ctx, 31, 0x2C17F8u);
    ctx->pc = 0x2C17F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C17F0u;
    // 0x2c17f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C17F0u, 0x2C17F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C17F8u;
label_2c17f8:
    // 0x2c17f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c17f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c17fc: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x2c17fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x2c1800: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x2C1800u;
    SET_GPR_U32(ctx, 31, 0x2C1808u);
    ctx->pc = 0x2C1804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1800u;
    // 0x2c1804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2C1800u, 0x2C1808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1808u;
label_2c1808:
    // 0x2c1808: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c1808u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c180c: 0x462000d  bltzl       $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C180Cu;
    {
        const bool branch_taken_0x2c180c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2c180c) {
            ctx->pc = 0x2C1810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C180Cu;
            // 0x2c1810: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1844u;
            goto label_2c1844;
        }
    }
    ctx->pc = 0x2C1814u;
    // 0x2c1814: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x2c1814u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2c1818: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2c1818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c181c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C181Cu;
    {
        const bool branch_taken_0x2c181c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c181c) {
            ctx->pc = 0x2C1820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C181Cu;
            // 0x2c1820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1830u;
            goto label_2c1830;
        }
    }
    ctx->pc = 0x2C1824u;
    // 0x2c1824: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c1824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c1828: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2c1828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c182c: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2c182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2c1830:
    // 0x2c1830: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2c1830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2c1834: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c1834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1838: 0xc0a689a  jal         func_29A268
    ctx->pc = 0x2C1838u;
    SET_GPR_U32(ctx, 31, 0x2C1840u);
    ctx->pc = 0x2C183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1838u;
    // 0x2c183c: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A268u, 0x2C1838u, 0x2C1840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1840u;
label_2c1840:
    // 0x2c1840: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c1840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c1844:
    // 0x2c1844: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c1844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1848: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2c1848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c184c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c184cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1850: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1850u;
        // 0x2c1854: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1858u;
}
