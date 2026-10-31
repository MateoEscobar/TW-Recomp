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

// Function: sub_001CF3A8
// Address: 0x1cf3a8 - 0x1cf468
void sub_001CF3A8_0x1cf3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF3A8_0x1cf3a8");
#endif

    switch (ctx->pc) {
        case 0x1cf3f4u: goto label_1cf3f4;
        case 0x1cf400u: goto label_1cf400;
        case 0x1cf448u: goto label_1cf448;
        default: break;
    }

    ctx->pc = 0x1cf3a8u;

    // 0x1cf3a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf3ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cf3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cf3b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf3b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf3b8: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1cf3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1cf3bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF3BCu;
    {
        const bool branch_taken_0x1cf3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3BCu;
        // 0x1cf3c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3bc) {
            ctx->pc = 0x1CF3CCu;
            goto label_1cf3cc;
        }
    }
    ctx->pc = 0x1CF3C4u;
    // 0x1cf3c4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1CF3C4u;
    {
        const bool branch_taken_0x1cf3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3C4u;
        // 0x1cf3c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3c4) {
            ctx->pc = 0x1CF454u;
            goto label_1cf454;
        }
    }
    ctx->pc = 0x1CF3CCu;
label_1cf3cc:
    // 0x1cf3cc: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF3CCu;
    {
        const bool branch_taken_0x1cf3cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CF3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3CCu;
        // 0x1cf3d0: 0x28a20005  slti        $v0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3cc) {
            ctx->pc = 0x1CF3E4u;
            goto label_1cf3e4;
        }
    }
    ctx->pc = 0x1CF3D4u;
    // 0x1cf3d4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CF3D4u;
    {
        const bool branch_taken_0x1cf3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf3d4) {
            ctx->pc = 0x1CF3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF3D4u;
            // 0x1cf3d8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF450u;
            goto label_1cf450;
        }
    }
    ctx->pc = 0x1CF3DCu;
    // 0x1cf3dc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1CF3DCu;
    {
        const bool branch_taken_0x1cf3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3DCu;
        // 0x1cf3e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3dc) {
            ctx->pc = 0x1CF454u;
            goto label_1cf454;
        }
    }
    ctx->pc = 0x1CF3E4u;
label_1cf3e4:
    // 0x1cf3e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cf3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1cf3e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1cf3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cf3ec: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1CF3ECu;
    SET_GPR_U32(ctx, 31, 0x1CF3F4u);
    ctx->pc = 0x1CF3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF3ECu;
    // 0x1cf3f0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1CF3ECu, 0x1CF3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF3F4u;
label_1cf3f4:
    // 0x1cf3f4: 0xae02078c  sw          $v0, 0x78C($s0)
    ctx->pc = 0x1cf3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1932), GPR_U32(ctx, 2));
    // 0x1cf3f8: 0xc0750fa  jal         func_1D43E8
    ctx->pc = 0x1CF3F8u;
    SET_GPR_U32(ctx, 31, 0x1CF400u);
    ctx->pc = 0x1CF3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF3F8u;
    // 0x1cf3fc: 0x26040360  addiu       $a0, $s0, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1CF3F8u, 0x1CF400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF400u;
label_1cf400:
    // 0x1cf400: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cf400u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf404: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF404u;
    {
        const bool branch_taken_0x1cf404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF404u;
        // 0x1cf408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf404) {
            ctx->pc = 0x1CF41Cu;
            goto label_1cf41c;
        }
    }
    ctx->pc = 0x1CF40Cu;
    // 0x1cf40c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF40Cu;
    {
        const bool branch_taken_0x1cf40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CF410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF40Cu;
        // 0x1cf410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf40c) {
            ctx->pc = 0x1CF430u;
            goto label_1cf430;
        }
    }
    ctx->pc = 0x1CF414u;
    // 0x1cf414: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CF414u;
    {
        const bool branch_taken_0x1cf414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF414u;
        // 0x1cf418: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf414) {
            ctx->pc = 0x1CF458u;
            goto label_1cf458;
        }
    }
    ctx->pc = 0x1CF41Cu;
label_1cf41c:
    // 0x1cf41c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1cf41cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1cf420: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1cf420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1cf424: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x1cf424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x1cf428: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF428u;
    {
        const bool branch_taken_0x1cf428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF428u;
        // 0x1cf42c: 0xae0207a4  sw          $v0, 0x7A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1956), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf428) {
            ctx->pc = 0x1CF440u;
            goto label_1cf440;
        }
    }
    ctx->pc = 0x1CF430u;
label_1cf430:
    // 0x1cf430: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1cf430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1cf434: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1cf434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x1cf438: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x1cf438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x1cf43c: 0xae0307a8  sw          $v1, 0x7A8($s0)
    ctx->pc = 0x1cf43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1960), GPR_U32(ctx, 3));
label_1cf440:
    // 0x1cf440: 0xc108a70  jal         func_4229C0
    ctx->pc = 0x1CF440u;
    SET_GPR_U32(ctx, 31, 0x1CF448u);
    ctx->pc = 0x4229C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4229C0u, 0x1CF440u, 0x1CF448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF448u;
label_1cf448:
    // 0x1cf448: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF448u;
    {
        const bool branch_taken_0x1cf448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF448u;
        // 0x1cf44c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf448) {
            ctx->pc = 0x1CF454u;
            goto label_1cf454;
        }
    }
    ctx->pc = 0x1CF450u;
label_1cf450:
    // 0x1cf450: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf454:
    // 0x1cf454: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cf454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cf458:
    // 0x1cf458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf45c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF45Cu;
        // 0x1cf460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF464u;
    // 0x1cf464: 0x0  nop
    ctx->pc = 0x1cf464u;
    // NOP
    ctx->pc = 0x1cf468u;
}
