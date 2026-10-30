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

// Function: sub_0041F340
// Address: 0x41f340 - 0x41f3e8
void sub_0041F340_0x41f340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F340_0x41f340");
#endif

    ctx->pc = 0x41f340u;

    // 0x41f340: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x41f340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x41f344: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x41f344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41f348: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x41f348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x41f34c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x41f34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x41f350: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x41f350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x41f354: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x41f354u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x41f358: 0x9084007c  lbu         $a0, 0x7C($a0)
    ctx->pc = 0x41f358u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x41f35c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x41F35Cu;
    {
        const bool branch_taken_0x41f35c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x41F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F35Cu;
        // 0x41f360: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f35c) {
            ctx->pc = 0x41F3A4u;
            goto label_41f3a4;
        }
    }
    ctx->pc = 0x41F364u;
    // 0x41f364: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41F364u;
    {
        const bool branch_taken_0x41f364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F364u;
        // 0x41f368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f364) {
            ctx->pc = 0x41F37Cu;
            goto label_41f37c;
        }
    }
    ctx->pc = 0x41F36Cu;
    // 0x41f36c: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x41F36Cu;
    {
        const bool branch_taken_0x41f36c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x41F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F36Cu;
        // 0x41f370: 0x240200ba  addiu       $v0, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f36c) {
            ctx->pc = 0x41F398u;
            goto label_41f398;
        }
    }
    ctx->pc = 0x41F374u;
    // 0x41f374: 0x3e00008  jr          $ra
    ctx->pc = 0x41F374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F37Cu;
label_41f37c:
    // 0x41f37c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x41f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x41f380: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x41F380u;
    {
        const bool branch_taken_0x41f380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x41F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F380u;
        // 0x41f384: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f380) {
            ctx->pc = 0x41F3B4u;
            goto label_41f3b4;
        }
    }
    ctx->pc = 0x41F388u;
    // 0x41f388: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x41F388u;
    {
        const bool branch_taken_0x41f388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x41F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F388u;
        // 0x41f38c: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f388) {
            ctx->pc = 0x41F3C4u;
            goto label_41f3c4;
        }
    }
    ctx->pc = 0x41F390u;
    // 0x41f390: 0x3e00008  jr          $ra
    ctx->pc = 0x41F390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F398u;
label_41f398:
    // 0x41f398: 0x2404008b  addiu       $a0, $zero, 0x8B
    ctx->pc = 0x41f398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x41f39c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x41F39Cu;
    {
        const bool branch_taken_0x41f39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F39Cu;
        // 0x41f3a0: 0x24030035  addiu       $v1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f39c) {
            ctx->pc = 0x41F3CCu;
            goto label_41f3cc;
        }
    }
    ctx->pc = 0x41F3A4u;
label_41f3a4:
    // 0x41f3a4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x41f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x41f3a8: 0x24040089  addiu       $a0, $zero, 0x89
    ctx->pc = 0x41f3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x41f3ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x41F3ACu;
    {
        const bool branch_taken_0x41f3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F3ACu;
        // 0x41f3b0: 0x24030051  addiu       $v1, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f3ac) {
            ctx->pc = 0x41F3CCu;
            goto label_41f3cc;
        }
    }
    ctx->pc = 0x41F3B4u;
label_41f3b4:
    // 0x41f3b4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x41f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x41f3b8: 0x2404005f  addiu       $a0, $zero, 0x5F
    ctx->pc = 0x41f3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x41f3bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x41F3BCu;
    {
        const bool branch_taken_0x41f3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F3BCu;
        // 0x41f3c0: 0x2403008e  addiu       $v1, $zero, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f3bc) {
            ctx->pc = 0x41F3CCu;
            goto label_41f3cc;
        }
    }
    ctx->pc = 0x41F3C4u;
label_41f3c4:
    // 0x41f3c4: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x41f3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x41f3c8: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x41f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_41f3cc:
    // 0x41f3cc: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x41f3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x41f3d0: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x41f3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x41f3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x41F3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F3D4u;
        // 0x41f3d8: 0xa0c40001  sb          $a0, 0x1($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F3DCu;
    // 0x41f3dc: 0x0  nop
    ctx->pc = 0x41f3dcu;
    // NOP
    // 0x41f3e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x41f3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x41f3e4: 0x0  nop
    ctx->pc = 0x41f3e4u;
    // NOP
    ctx->pc = 0x41f3e8u;
}
