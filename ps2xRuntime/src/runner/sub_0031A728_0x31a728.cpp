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

// Function: sub_0031A728
// Address: 0x31a728 - 0x31a818
void sub_0031A728_0x31a728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A728_0x31a728");
#endif

    switch (ctx->pc) {
        case 0x31a758u: goto label_31a758;
        case 0x31a764u: goto label_31a764;
        case 0x31a76cu: goto label_31a76c;
        case 0x31a780u: goto label_31a780;
        case 0x31a7b0u: goto label_31a7b0;
        case 0x31a7bcu: goto label_31a7bc;
        case 0x31a7ccu: goto label_31a7cc;
        case 0x31a7f0u: goto label_31a7f0;
        case 0x31a7fcu: goto label_31a7fc;
        default: break;
    }

    ctx->pc = 0x31a728u;

    // 0x31a728: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31a728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31a72c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31a72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31a730: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31a730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31a734: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x31a734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a738: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x31a738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31a73c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a740: 0x80a201b0  lb          $v0, 0x1B0($a1)
    ctx->pc = 0x31a740u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x31a744: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31a744u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x31a748: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x31A748u;
    {
        const bool branch_taken_0x31a748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A748u;
        // 0x31a74c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a748) {
            ctx->pc = 0x31A7FCu;
            goto label_31a7fc;
        }
    }
    ctx->pc = 0x31A750u;
    // 0x31a750: 0xc087502  jal         func_21D408
    ctx->pc = 0x31A750u;
    SET_GPR_U32(ctx, 31, 0x31A758u);
    ctx->pc = 0x31A754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A750u;
    // 0x31a754: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31A750u, 0x31A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A758u;
label_31a758:
    // 0x31a758: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31a758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a75c: 0xc0a3630  jal         func_28D8C0
    ctx->pc = 0x31A75Cu;
    SET_GPR_U32(ctx, 31, 0x31A764u);
    ctx->pc = 0x31A760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A75Cu;
    // 0x31a760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x31A75Cu, 0x31A764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A764u;
label_31a764:
    // 0x31a764: 0xc0a3628  jal         func_28D8A0
    ctx->pc = 0x31A764u;
    SET_GPR_U32(ctx, 31, 0x31A76Cu);
    ctx->pc = 0x31A768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A764u;
    // 0x31a768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x31A764u, 0x31A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A76Cu;
label_31a76c:
    // 0x31a76c: 0x92230052  lbu         $v1, 0x52($s1)
    ctx->pc = 0x31a76cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x31a770: 0x14700014  bne         $v1, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x31A770u;
    {
        const bool branch_taken_0x31a770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x31a770) {
            ctx->pc = 0x31A7C4u;
            goto label_31a7c4;
        }
    }
    ctx->pc = 0x31A778u;
    // 0x31a778: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x31A778u;
    SET_GPR_U32(ctx, 31, 0x31A780u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x31A778u, 0x31A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A780u;
label_31a780:
    // 0x31a780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31a780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a784: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x31A784u;
    {
        const bool branch_taken_0x31a784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A784u;
        // 0x31a788: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a784) {
            ctx->pc = 0x31A7B0u;
            goto label_31a7b0;
        }
    }
    ctx->pc = 0x31A78Cu;
    // 0x31a78c: 0x92270053  lbu         $a3, 0x53($s1)
    ctx->pc = 0x31a78cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 83)));
    // 0x31a790: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x31a790u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x31a794: 0x92280054  lbu         $t0, 0x54($s1)
    ctx->pc = 0x31a794u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x31a798: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x31a798u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x31a79c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a7a0: 0x8402b  sltu        $t0, $zero, $t0
    ctx->pc = 0x31a7a0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x31a7a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31a7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a7a8: 0xc0b5e1e  jal         func_2D7878
    ctx->pc = 0x31A7A8u;
    SET_GPR_U32(ctx, 31, 0x31A7B0u);
    ctx->pc = 0x31A7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A7A8u;
    // 0x31a7ac: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7878u, 0x31A7A8u, 0x31A7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A7B0u;
label_31a7b0:
    // 0x31a7b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31a7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a7b4: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x31A7B4u;
    SET_GPR_U32(ctx, 31, 0x31A7BCu);
    ctx->pc = 0x31A7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A7B4u;
    // 0x31a7b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31A7B4u, 0x31A7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A7BCu;
label_31a7bc:
    // 0x31a7bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31A7BCu;
    {
        const bool branch_taken_0x31a7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A7BCu;
        // 0x31a7c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a7bc) {
            ctx->pc = 0x31A800u;
            goto label_31a800;
        }
    }
    ctx->pc = 0x31A7C4u;
label_31a7c4:
    // 0x31a7c4: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x31A7C4u;
    SET_GPR_U32(ctx, 31, 0x31A7CCu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x31A7C4u, 0x31A7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A7CCu;
label_31a7cc:
    // 0x31a7cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31a7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a7d0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31A7D0u;
    {
        const bool branch_taken_0x31a7d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A7D0u;
        // 0x31a7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a7d0) {
            ctx->pc = 0x31A7F0u;
            goto label_31a7f0;
        }
    }
    ctx->pc = 0x31A7D8u;
    // 0x31a7d8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x31a7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x31a7dc: 0xc62d0028  lwc1        $f13, 0x28($s1)
    ctx->pc = 0x31a7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31a7e0: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x31a7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31a7e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31a7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a7e8: 0xc0b5b28  jal         func_2D6CA0
    ctx->pc = 0x31A7E8u;
    SET_GPR_U32(ctx, 31, 0x31A7F0u);
    ctx->pc = 0x31A7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A7E8u;
    // 0x31a7ec: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6CA0u, 0x31A7E8u, 0x31A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A7F0u;
label_31a7f0:
    // 0x31a7f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31a7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a7f4: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x31A7F4u;
    SET_GPR_U32(ctx, 31, 0x31A7FCu);
    ctx->pc = 0x31A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A7F4u;
    // 0x31a7f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31A7F4u, 0x31A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A7FCu;
label_31a7fc:
    // 0x31a7fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31a7fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31a800:
    // 0x31a800: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31a800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a804: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x31a804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a80c: 0x3e00008  jr          $ra
    ctx->pc = 0x31A80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A80Cu;
        // 0x31a810: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A814u;
    // 0x31a814: 0x0  nop
    ctx->pc = 0x31a814u;
    // NOP
    ctx->pc = 0x31a818u;
}
