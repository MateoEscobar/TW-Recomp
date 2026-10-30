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

// Function: sub_0043B730
// Address: 0x43b730 - 0x43b7f8
void sub_0043B730_0x43b730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043B730_0x43b730");
#endif

    ctx->pc = 0x43b730u;

    // 0x43b730: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x43b730u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x43b734: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x43b734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x43b738: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x43b738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x43b73c: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x43b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x43b740: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x43b740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x43b744: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x43B744u;
    {
        const bool branch_taken_0x43b744 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x43B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B744u;
        // 0x43b748: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b744) {
            ctx->pc = 0x43B770u;
            goto label_43b770;
        }
    }
    ctx->pc = 0x43B74Cu;
    // 0x43b74c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x43b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43b750: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x43b750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x43b754: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x43b754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x43b758: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x43b758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x43b75c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43b75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43b760: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43b760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43b764: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x43b764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x43b768: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x43B768u;
    {
        const bool branch_taken_0x43b768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B768u;
        // 0x43b76c: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b768) {
            ctx->pc = 0x43B7F0u;
            goto label_43b7f0;
        }
    }
    ctx->pc = 0x43B770u;
label_43b770:
    // 0x43b770: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x43b770u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x43b774: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x43b774u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x43b778: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x43B778u;
    {
        const bool branch_taken_0x43b778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B778u;
        // 0x43b77c: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b778) {
            ctx->pc = 0x43B7A8u;
            goto label_43b7a8;
        }
    }
    ctx->pc = 0x43B780u;
    // 0x43b780: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43b780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43b784: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43b784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x43b788: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x43b788u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x43b78c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x43b78cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x43b790: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43b790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43b794: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43b794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43b798: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43b798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43b79c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x43b79cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x43b7a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x43B7A0u;
    {
        const bool branch_taken_0x43b7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B7A0u;
        // 0x43b7a4: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b7a0) {
            ctx->pc = 0x43B7F0u;
            goto label_43b7f0;
        }
    }
    ctx->pc = 0x43B7A8u;
label_43b7a8:
    // 0x43b7a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43b7ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43b7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x43b7b0: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x43b7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x43b7b4: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x43b7b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x43b7b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43B7B8u;
    {
        const bool branch_taken_0x43b7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B7B8u;
        // 0x43b7bc: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b7b8) {
            ctx->pc = 0x43B7D4u;
            goto label_43b7d4;
        }
    }
    ctx->pc = 0x43B7C0u;
    // 0x43b7c0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x43b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x43b7c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43b7c8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x43b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x43b7cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43B7CCu;
    {
        const bool branch_taken_0x43b7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B7CCu;
        // 0x43b7d0: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b7cc) {
            ctx->pc = 0x43B7D8u;
            goto label_43b7d8;
        }
    }
    ctx->pc = 0x43B7D4u;
label_43b7d4:
    // 0x43b7d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43b7d8:
    // 0x43b7d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43b7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43b7dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43b7e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43b7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43b7e4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x43b7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x43b7e8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x43b7e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x43b7ec: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x43b7ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_43b7f0:
    // 0x43b7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x43B7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B7F0u;
        // 0x43b7f4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43B7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43B7F8u;
}
