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

// Function: sub_0032E358
// Address: 0x32e358 - 0x32e4b0
void sub_0032E358_0x32e358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E358_0x32e358");
#endif

    ctx->pc = 0x32e358u;

    // 0x32e358: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x32e358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x32e35c: 0x1082003e  beq         $a0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x32E35Cu;
    {
        const bool branch_taken_0x32e35c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E35Cu;
        // 0x32e360: 0x2882005f  slti        $v0, $a0, 0x5F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)95) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e35c) {
            ctx->pc = 0x32E458u;
            goto label_32e458;
        }
    }
    ctx->pc = 0x32E364u;
    // 0x32e364: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x32E364u;
    {
        const bool branch_taken_0x32e364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E364u;
        // 0x32e368: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e364) {
            ctx->pc = 0x32E3CCu;
            goto label_32e3cc;
        }
    }
    ctx->pc = 0x32E36Cu;
    // 0x32e36c: 0x10820034  beq         $a0, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x32E36Cu;
    {
        const bool branch_taken_0x32e36c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E36Cu;
        // 0x32e370: 0x2882002e  slti        $v0, $a0, 0x2E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)46) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e36c) {
            ctx->pc = 0x32E440u;
            goto label_32e440;
        }
    }
    ctx->pc = 0x32E374u;
    // 0x32e374: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32E374u;
    {
        const bool branch_taken_0x32e374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E374u;
        // 0x32e378: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e374) {
            ctx->pc = 0x32E394u;
            goto label_32e394;
        }
    }
    ctx->pc = 0x32E37Cu;
    // 0x32e37c: 0x10820032  beq         $a0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x32E37Cu;
    {
        const bool branch_taken_0x32e37c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E37Cu;
        // 0x32e380: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e37c) {
            ctx->pc = 0x32E448u;
            goto label_32e448;
        }
    }
    ctx->pc = 0x32E384u;
    // 0x32e384: 0x1082002c  beq         $a0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x32E384u;
    {
        const bool branch_taken_0x32e384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E384u;
        // 0x32e388: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e384) {
            ctx->pc = 0x32E438u;
            goto label_32e438;
        }
    }
    ctx->pc = 0x32E38Cu;
    // 0x32e38c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x32E38Cu;
    {
        const bool branch_taken_0x32e38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e38c) {
            ctx->pc = 0x32E4A8u;
            goto label_32e4a8;
        }
    }
    ctx->pc = 0x32E394u;
label_32e394:
    // 0x32e394: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x32e394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x32e398: 0x10820037  beq         $a0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x32E398u;
    {
        const bool branch_taken_0x32e398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E398u;
        // 0x32e39c: 0x2882003d  slti        $v0, $a0, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e398) {
            ctx->pc = 0x32E478u;
            goto label_32e478;
        }
    }
    ctx->pc = 0x32E3A0u;
    // 0x32e3a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32E3A0u;
    {
        const bool branch_taken_0x32e3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E3A0u;
        // 0x32e3a4: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e3a0) {
            ctx->pc = 0x32E3B8u;
            goto label_32e3b8;
        }
    }
    ctx->pc = 0x32E3A8u;
    // 0x32e3a8: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x32E3A8u;
    {
        const bool branch_taken_0x32e3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E3A8u;
        // 0x32e3ac: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e3a8) {
            ctx->pc = 0x32E450u;
            goto label_32e450;
        }
    }
    ctx->pc = 0x32E3B0u;
    // 0x32e3b0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x32E3B0u;
    {
        const bool branch_taken_0x32e3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e3b0) {
            ctx->pc = 0x32E4A8u;
            goto label_32e4a8;
        }
    }
    ctx->pc = 0x32E3B8u;
label_32e3b8:
    // 0x32e3b8: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x32e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x32e3bc: 0x10820032  beq         $a0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x32E3BCu;
    {
        const bool branch_taken_0x32e3bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E3BCu;
        // 0x32e3c0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e3bc) {
            ctx->pc = 0x32E488u;
            goto label_32e488;
        }
    }
    ctx->pc = 0x32E3C4u;
    // 0x32e3c4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x32E3C4u;
    {
        const bool branch_taken_0x32e3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e3c4) {
            ctx->pc = 0x32E4A8u;
            goto label_32e4a8;
        }
    }
    ctx->pc = 0x32E3CCu;
label_32e3cc:
    // 0x32e3cc: 0x24020116  addiu       $v0, $zero, 0x116
    ctx->pc = 0x32e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x32e3d0: 0x10820027  beq         $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x32E3D0u;
    {
        const bool branch_taken_0x32e3d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E3D0u;
        // 0x32e3d4: 0x28820117  slti        $v0, $a0, 0x117 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)279) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e3d0) {
            ctx->pc = 0x32E470u;
            goto label_32e470;
        }
    }
    ctx->pc = 0x32E3D8u;
    // 0x32e3d8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32E3D8u;
    {
        const bool branch_taken_0x32e3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E3D8u;
        // 0x32e3dc: 0x2402010d  addiu       $v0, $zero, 0x10D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e3d8) {
            ctx->pc = 0x32E414u;
            goto label_32e414;
        }
    }
    ctx->pc = 0x32E3E0u;
    // 0x32e3e0: 0x1082002f  beq         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x32E3E0u;
    {
        const bool branch_taken_0x32e3e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E3E0u;
        // 0x32e3e4: 0x2882010e  slti        $v0, $a0, 0x10E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)270) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e3e0) {
            ctx->pc = 0x32E4A0u;
            goto label_32e4a0;
        }
    }
    ctx->pc = 0x32E3E8u;
    // 0x32e3e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32E3E8u;
    {
        const bool branch_taken_0x32e3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E3E8u;
        // 0x32e3ec: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e3e8) {
            ctx->pc = 0x32E400u;
            goto label_32e400;
        }
    }
    ctx->pc = 0x32E3F0u;
    // 0x32e3f0: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x32E3F0u;
    {
        const bool branch_taken_0x32e3f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E3F0u;
        // 0x32e3f4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e3f0) {
            ctx->pc = 0x32E498u;
            goto label_32e498;
        }
    }
    ctx->pc = 0x32E3F8u;
    // 0x32e3f8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x32E3F8u;
    {
        const bool branch_taken_0x32e3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e3f8) {
            ctx->pc = 0x32E4A8u;
            goto label_32e4a8;
        }
    }
    ctx->pc = 0x32E400u;
label_32e400:
    // 0x32e400: 0x24020114  addiu       $v0, $zero, 0x114
    ctx->pc = 0x32e400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x32e404: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32E404u;
    {
        const bool branch_taken_0x32e404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E404u;
        // 0x32e408: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e404) {
            ctx->pc = 0x32E460u;
            goto label_32e460;
        }
    }
    ctx->pc = 0x32E40Cu;
    // 0x32e40c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x32E40Cu;
    {
        const bool branch_taken_0x32e40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e40c) {
            ctx->pc = 0x32E4A8u;
            goto label_32e4a8;
        }
    }
    ctx->pc = 0x32E414u;
label_32e414:
    // 0x32e414: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x32e414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x32e418: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x32E418u;
    {
        const bool branch_taken_0x32e418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E418u;
        // 0x32e41c: 0x28820118  slti        $v0, $a0, 0x118 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)280) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e418) {
            ctx->pc = 0x32E480u;
            goto label_32e480;
        }
    }
    ctx->pc = 0x32E420u;
    // 0x32e420: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x32E420u;
    {
        const bool branch_taken_0x32e420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E420u;
        // 0x32e424: 0x24020119  addiu       $v0, $zero, 0x119 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e420) {
            ctx->pc = 0x32E490u;
            goto label_32e490;
        }
    }
    ctx->pc = 0x32E428u;
    // 0x32e428: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32E428u;
    {
        const bool branch_taken_0x32e428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E428u;
        // 0x32e42c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e428) {
            ctx->pc = 0x32E468u;
            goto label_32e468;
        }
    }
    ctx->pc = 0x32E430u;
    // 0x32e430: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x32E430u;
    {
        const bool branch_taken_0x32e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e430) {
            ctx->pc = 0x32E4A8u;
            goto label_32e4a8;
        }
    }
    ctx->pc = 0x32E438u;
label_32e438:
    // 0x32e438: 0x3e00008  jr          $ra
    ctx->pc = 0x32E438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E438u;
        // 0x32e43c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E440u;
label_32e440:
    // 0x32e440: 0x3e00008  jr          $ra
    ctx->pc = 0x32E440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E440u;
        // 0x32e444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E448u;
label_32e448:
    // 0x32e448: 0x3e00008  jr          $ra
    ctx->pc = 0x32E448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E448u;
        // 0x32e44c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E450u;
label_32e450:
    // 0x32e450: 0x3e00008  jr          $ra
    ctx->pc = 0x32E450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E450u;
        // 0x32e454: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E458u;
label_32e458:
    // 0x32e458: 0x3e00008  jr          $ra
    ctx->pc = 0x32E458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E458u;
        // 0x32e45c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E460u;
label_32e460:
    // 0x32e460: 0x3e00008  jr          $ra
    ctx->pc = 0x32E460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E460u;
        // 0x32e464: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E468u;
label_32e468:
    // 0x32e468: 0x3e00008  jr          $ra
    ctx->pc = 0x32E468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E468u;
        // 0x32e46c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E470u;
label_32e470:
    // 0x32e470: 0x3e00008  jr          $ra
    ctx->pc = 0x32E470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E470u;
        // 0x32e474: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E478u;
label_32e478:
    // 0x32e478: 0x3e00008  jr          $ra
    ctx->pc = 0x32E478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E478u;
        // 0x32e47c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E480u;
label_32e480:
    // 0x32e480: 0x3e00008  jr          $ra
    ctx->pc = 0x32E480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E480u;
        // 0x32e484: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E488u;
label_32e488:
    // 0x32e488: 0x3e00008  jr          $ra
    ctx->pc = 0x32E488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E488u;
        // 0x32e48c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E490u;
label_32e490:
    // 0x32e490: 0x3e00008  jr          $ra
    ctx->pc = 0x32E490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E490u;
        // 0x32e494: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E498u;
label_32e498:
    // 0x32e498: 0x3e00008  jr          $ra
    ctx->pc = 0x32E498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E498u;
        // 0x32e49c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E4A0u;
label_32e4a0:
    // 0x32e4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x32E4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4A0u;
        // 0x32e4a4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E4A8u;
label_32e4a8:
    // 0x32e4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x32E4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E4B0u;
}
