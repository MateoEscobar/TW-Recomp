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

// Function: sub_0043E7B0
// Address: 0x43e7b0 - 0x43e840
void sub_0043E7B0_0x43e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043E7B0_0x43e7b0");
#endif

    ctx->pc = 0x43e7b0u;

    // 0x43e7b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x43e7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e7b4: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x43e7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x43e7b8: 0x2357e  dsrl32      $a2, $v0, 21
    ctx->pc = 0x43e7b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x43e7bc: 0x64c6fbcd  daddiu      $a2, $a2, -0x433
    ctx->pc = 0x43e7bcu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294966221);
    // 0x43e7c0: 0x28c2ffcb  slti        $v0, $a2, -0x35
    ctx->pc = 0x43e7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x43e7c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43E7C4u;
    {
        const bool branch_taken_0x43e7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E7C4u;
        // 0x43e7c8: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e7c4) {
            ctx->pc = 0x43E7D4u;
            goto label_43e7d4;
        }
    }
    ctx->pc = 0x43E7CCu;
    // 0x43e7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x43E7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E7CCu;
        // 0x43e7d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43E7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43E7D4u;
label_43e7d4:
    // 0x43e7d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43E7D4u;
    {
        const bool branch_taken_0x43e7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E7D4u;
        // 0x43e7d8: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e7d4) {
            ctx->pc = 0x43E7E4u;
            goto label_43e7e4;
        }
    }
    ctx->pc = 0x43E7DCu;
    // 0x43e7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x43E7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E7DCu;
        // 0x43e7e0: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43E7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43E7E4u;
label_43e7e4:
    // 0x43e7e4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x43e7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x43e7e8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x43e7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x43e7ec: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x43e7ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x43e7f0: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x43E7F0u;
    {
        const bool branch_taken_0x43e7f0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x43E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E7F0u;
        // 0x43e7f4: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e7f0) {
            ctx->pc = 0x43E828u;
            goto label_43e828;
        }
    }
    ctx->pc = 0x43E7F8u;
    // 0x43e7f8: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x43e7f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x43e7fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x43e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x43e800: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x43e800u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
    // 0x43e804: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43e804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43e808: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x43e808u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x43e80c: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x43e80cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x43e810: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x43e810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x43e814: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x43E814u;
    {
        const bool branch_taken_0x43e814 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x43e814) {
            ctx->pc = 0x43E818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43E814u;
            // 0x43e818: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x43E834u;
            goto label_43e834;
        }
    }
    ctx->pc = 0x43E81Cu;
    // 0x43e81c: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x43e81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x43e820: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x43E820u;
    {
        const bool branch_taken_0x43e820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E820u;
        // 0x43e824: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e820) {
            ctx->pc = 0x43E834u;
            goto label_43e834;
        }
    }
    ctx->pc = 0x43E828u;
label_43e828:
    // 0x43e828: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x43e828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x43e82c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x43e82cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x43e830: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x43e830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_43e834:
    // 0x43e834: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x43e834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x43e838: 0x3e00008  jr          $ra
    ctx->pc = 0x43E838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E838u;
        // 0x43e83c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43E838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43E840u;
}
