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

// Function: sub_0041F8B0
// Address: 0x41f8b0 - 0x41f960
void sub_0041F8B0_0x41f8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F8B0_0x41f8b0");
#endif

    switch (ctx->pc) {
        case 0x41f8ccu: goto label_41f8cc;
        case 0x41f8d8u: goto label_41f8d8;
        case 0x41f8ecu: goto label_41f8ec;
        case 0x41f924u: goto label_41f924;
        case 0x41f93cu: goto label_41f93c;
        case 0x41f94cu: goto label_41f94c;
        default: break;
    }

    ctx->pc = 0x41f8b0u;

    // 0x41f8b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41f8b4: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x41f8b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x41f8b8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x41f8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41f8bc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x41f8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x41f8c0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41f8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x41f8c4: 0xc1062f2  jal         func_418BC8
    ctx->pc = 0x41F8C4u;
    SET_GPR_U32(ctx, 31, 0x41F8CCu);
    ctx->pc = 0x41F8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F8C4u;
    // 0x41f8c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418BC8u, 0x41F8C4u, 0x41F8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F8CCu;
label_41f8cc:
    // 0x41f8cc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x41f8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x41f8d0: 0xc052862  jal         func_14A188
    ctx->pc = 0x41F8D0u;
    SET_GPR_U32(ctx, 31, 0x41F8D8u);
    ctx->pc = 0x41F8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F8D0u;
    // 0x41f8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A188u, 0x41F8D0u, 0x41F8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F8D8u;
label_41f8d8:
    // 0x41f8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41f8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f8dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41f8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f8e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41f8e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f8e4: 0xc052910  jal         func_14A440
    ctx->pc = 0x41F8E4u;
    SET_GPR_U32(ctx, 31, 0x41F8ECu);
    ctx->pc = 0x41F8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F8E4u;
    // 0x41f8e8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A440u, 0x41F8E4u, 0x41F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F8ECu;
label_41f8ec:
    // 0x41f8ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x41f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x41f8f0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x41F8F0u;
    {
        const bool branch_taken_0x41f8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F8F0u;
        // 0x41f8f4: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f8f0) {
            ctx->pc = 0x41F94Cu;
            goto label_41f94c;
        }
    }
    ctx->pc = 0x41F8F8u;
    // 0x41f8f8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x41F8F8u;
    {
        const bool branch_taken_0x41f8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F8F8u;
        // 0x41f8fc: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f8f8) {
            ctx->pc = 0x41F94Cu;
            goto label_41f94c;
        }
    }
    ctx->pc = 0x41F900u;
    // 0x41f900: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x41f900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x41f904: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x41F904u;
    {
        const bool branch_taken_0x41f904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41f904) {
            ctx->pc = 0x41F908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F904u;
            // 0x41f908: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41F950u;
            goto label_41f950;
        }
    }
    ctx->pc = 0x41F90Cu;
    // 0x41f90c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x41f90cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x41f910: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x41f910u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x41f914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41f914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f918: 0x24a5b4d8  addiu       $a1, $a1, -0x4B28
    ctx->pc = 0x41f918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948056));
    // 0x41f91c: 0xc05292e  jal         func_14A4B8
    ctx->pc = 0x41F91Cu;
    SET_GPR_U32(ctx, 31, 0x41F924u);
    ctx->pc = 0x41F920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F91Cu;
    // 0x41f920: 0x24c6b4f8  addiu       $a2, $a2, -0x4B08 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A4B8u, 0x41F91Cu, 0x41F924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F924u;
label_41f924:
    // 0x41f924: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41f924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f928: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x41F928u;
    {
        const bool branch_taken_0x41f928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F928u;
        // 0x41f92c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f928) {
            ctx->pc = 0x41F94Cu;
            goto label_41f94c;
        }
    }
    ctx->pc = 0x41F930u;
    // 0x41f930: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41f930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f934: 0xc052a9e  jal         func_14AA78
    ctx->pc = 0x41F934u;
    SET_GPR_U32(ctx, 31, 0x41F93Cu);
    ctx->pc = 0x41F938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F934u;
    // 0x41f938: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA78u, 0x41F934u, 0x41F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F93Cu;
label_41f93c:
    // 0x41f93c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x41F93Cu;
    {
        const bool branch_taken_0x41f93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f93c) {
            ctx->pc = 0x41F940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F93Cu;
            // 0x41f940: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41F950u;
            goto label_41f950;
        }
    }
    ctx->pc = 0x41F944u;
    // 0x41f944: 0xc0529fc  jal         func_14A7F0
    ctx->pc = 0x41F944u;
    SET_GPR_U32(ctx, 31, 0x41F94Cu);
    ctx->pc = 0x41F948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F944u;
    // 0x41f948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A7F0u, 0x41F944u, 0x41F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F94Cu;
label_41f94c:
    // 0x41f94c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x41f94cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41f950:
    // 0x41f950: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41f950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41f954: 0x3e00008  jr          $ra
    ctx->pc = 0x41F954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F954u;
        // 0x41f958: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F95Cu;
    // 0x41f95c: 0x0  nop
    ctx->pc = 0x41f95cu;
    // NOP
    ctx->pc = 0x41f960u;
}
