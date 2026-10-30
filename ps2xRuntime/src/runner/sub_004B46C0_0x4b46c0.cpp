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

// Function: sub_004B46C0
// Address: 0x4b46c0 - 0x4b4758
void sub_004B46C0_0x4b46c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B46C0_0x4b46c0");
#endif

    ctx->pc = 0x4b46c0u;

    // 0x4b46c0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4b46c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x4b46c4: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x4b46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x4b46c8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b46c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b46cc: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x4b46ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x4b46d0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4b46d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4b46d4: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B46D4u;
    {
        const bool branch_taken_0x4b46d4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x4B46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B46D4u;
        // 0x4b46d8: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b46d4) {
            ctx->pc = 0x4B46E4u;
            goto label_4b46e4;
        }
    }
    ctx->pc = 0x4B46DCu;
    // 0x4b46dc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4B46DCu;
    {
        const bool branch_taken_0x4b46dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B46E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B46DCu;
        // 0x4b46e0: 0x4103c  dsll32      $v0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b46dc) {
            ctx->pc = 0x4B474Cu;
            goto label_4b474c;
        }
    }
    ctx->pc = 0x4B46E4u;
label_4b46e4:
    // 0x4b46e4: 0x41023  negu        $v0, $a0
    ctx->pc = 0x4b46e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x4b46e8: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x4b46e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x4b46ec: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x4b46ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x4b46f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B46F0u;
    {
        const bool branch_taken_0x4b46f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B46F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B46F0u;
        // 0x4b46f4: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b46f0) {
            ctx->pc = 0x4B4704u;
            goto label_4b4704;
        }
    }
    ctx->pc = 0x4B46F8u;
    // 0x4b46f8: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x4b46f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4b46fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4B46FCu;
    {
        const bool branch_taken_0x4b46fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B46FCu;
        // 0x4b4700: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b46fc) {
            ctx->pc = 0x4B474Cu;
            goto label_4b474c;
        }
    }
    ctx->pc = 0x4B4704u;
label_4b4704:
    // 0x4b4704: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x4b4704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x4b4708: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b4708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b470c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4b470cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4b4710: 0x2883001f  slti        $v1, $a0, 0x1F
    ctx->pc = 0x4b4710u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x4b4714: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B4714u;
    {
        const bool branch_taken_0x4b4714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4714u;
        // 0x4b4718: 0xa22824  and         $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4714) {
            ctx->pc = 0x4B4730u;
            goto label_4b4730;
        }
    }
    ctx->pc = 0x4B471Cu;
    // 0x4b471c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x4b471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4b4720: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b4720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4724: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4b4724u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b4728: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B4728u;
    {
        const bool branch_taken_0x4b4728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4728u;
        // 0x4b472c: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4728) {
            ctx->pc = 0x4B4734u;
            goto label_4b4734;
        }
    }
    ctx->pc = 0x4B4730u;
label_4b4730:
    // 0x4b4730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b4730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b4734:
    // 0x4b4734: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b4734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b4738: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b4738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b473c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4b473cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4b4740: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4b4740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4b4744: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4b4744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4b4748: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x4b4748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_4b474c:
    // 0x4b474c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B474Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B474Cu;
        // 0x4b4750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B474Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4754u;
    // 0x4b4754: 0x0  nop
    ctx->pc = 0x4b4754u;
    // NOP
    ctx->pc = 0x4b4758u;
}
