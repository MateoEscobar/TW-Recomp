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

// Function: sub_002286A0
// Address: 0x2286a0 - 0x22871c
void sub_002286A0_0x2286a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002286A0_0x2286a0");
#endif

    switch (ctx->pc) {
        case 0x2286b8u: goto label_2286b8;
        case 0x2286d4u: goto label_2286d4;
        case 0x2286e4u: goto label_2286e4;
        case 0x2286f4u: goto label_2286f4;
        default: break;
    }

    ctx->pc = 0x2286a0u;

    // 0x2286a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2286a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2286a4: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x2286a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x2286a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2286a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2286ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2286acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2286b0: 0xc089998  jal         func_226660
    ctx->pc = 0x2286B0u;
    SET_GPR_U32(ctx, 31, 0x2286B8u);
    ctx->pc = 0x2286B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2286B0u;
    // 0x2286b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2286B0u, 0x2286B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2286B8u;
label_2286b8:
    // 0x2286b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2286B8u;
    {
        const bool branch_taken_0x2286b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2286BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286B8u;
        // 0x2286bc: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286b8) {
            ctx->pc = 0x2286C8u;
            goto label_2286c8;
        }
    }
    ctx->pc = 0x2286C0u;
label_2286c0:
    // 0x2286c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2286C0u;
    {
        const bool branch_taken_0x2286c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2286C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286C0u;
        // 0x2286c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286c0) {
            ctx->pc = 0x228720u;
            return;
        }
    }
    ctx->pc = 0x2286C8u;
label_2286c8:
    // 0x2286c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2286c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2286cc: 0xc089998  jal         func_226660
    ctx->pc = 0x2286CCu;
    SET_GPR_U32(ctx, 31, 0x2286D4u);
    ctx->pc = 0x2286D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2286CCu;
    // 0x2286d0: 0x34a50010  ori         $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2286CCu, 0x2286D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2286D4u;
label_2286d4:
    // 0x2286d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2286D4u;
    {
        const bool branch_taken_0x2286d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2286D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286D4u;
        // 0x2286d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286d4) {
            ctx->pc = 0x228720u;
            return;
        }
    }
    ctx->pc = 0x2286DCu;
    // 0x2286dc: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x2286DCu;
    SET_GPR_U32(ctx, 31, 0x2286E4u);
    ctx->pc = 0x2286E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2286DCu;
    // 0x2286e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x2286DCu, 0x2286E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2286E4u;
label_2286e4:
    // 0x2286e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2286E4u;
    {
        const bool branch_taken_0x2286e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2286E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286E4u;
        // 0x2286e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286e4) {
            ctx->pc = 0x228720u;
            return;
        }
    }
    ctx->pc = 0x2286ECu;
    // 0x2286ec: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x2286ECu;
    SET_GPR_U32(ctx, 31, 0x2286F4u);
    ctx->pc = 0x2286F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2286ECu;
    // 0x2286f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2286ECu, 0x2286F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2286F4u;
label_2286f4:
    // 0x2286f4: 0x2443fe2d  addiu       $v1, $v0, -0x1D3
    ctx->pc = 0x2286f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966829));
    // 0x2286f8: 0x2c620057  sltiu       $v0, $v1, 0x57
    ctx->pc = 0x2286f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
    // 0x2286fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2286FCu;
    {
        const bool branch_taken_0x2286fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286FCu;
        // 0x228700: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286fc) {
            ctx->pc = 0x22871Cu;
            return;
        }
    }
    ctx->pc = 0x228704u;
    // 0x228704: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x228704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x228708: 0x2442b520  addiu       $v0, $v0, -0x4AE0
    ctx->pc = 0x228708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948128));
    // 0x22870c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22870cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228710: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x228710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228714: 0x800008  jr          $a0
    ctx->pc = 0x228714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2286C0u: goto label_2286c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228714u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22871Cu;
}
