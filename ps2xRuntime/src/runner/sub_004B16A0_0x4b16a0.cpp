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

// Function: sub_004B16A0
// Address: 0x4b16a0 - 0x4b1718
void sub_004B16A0_0x4b16a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B16A0_0x4b16a0");
#endif

    switch (ctx->pc) {
        case 0x4b16d4u: goto label_4b16d4;
        default: break;
    }

    ctx->pc = 0x4b16a0u;

    // 0x4b16a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b16a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b16a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b16a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b16a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b16a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b16ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b16acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b16b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b16b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b16b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b16b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b16b8: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x4b16b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x4b16bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b16bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b16c0: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x4b16c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x4b16c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B16C4u;
    {
        const bool branch_taken_0x4b16c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B16C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B16C4u;
        // 0x4b16c8: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b16c4) {
            ctx->pc = 0x4B16DCu;
            goto label_4b16dc;
        }
    }
    ctx->pc = 0x4B16CCu;
    // 0x4b16cc: 0xc12c274  jal         func_4B09D0
    ctx->pc = 0x4B16CCu;
    SET_GPR_U32(ctx, 31, 0x4B16D4u);
    ctx->pc = 0x4B16D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B16CCu;
    // 0x4b16d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B09D0u, 0x4B16CCu, 0x4B16D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B16D4u;
label_4b16d4:
    // 0x4b16d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b16d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b16d8: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x4b16d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_4b16dc:
    // 0x4b16dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B16DCu;
    {
        const bool branch_taken_0x4b16dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B16DCu;
        // 0x4b16e0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b16dc) {
            ctx->pc = 0x4B16ECu;
            goto label_4b16ec;
        }
    }
    ctx->pc = 0x4B16E4u;
    // 0x4b16e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B16E4u;
    {
        const bool branch_taken_0x4b16e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B16E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B16E4u;
        // 0x4b16e8: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b16e4) {
            ctx->pc = 0x4B16F0u;
            goto label_4b16f0;
        }
    }
    ctx->pc = 0x4B16ECu;
label_4b16ec:
    // 0x4b16ec: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4b16ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4b16f0:
    // 0x4b16f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4b16f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b16f4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4b16f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x4b16f8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x4b16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4b16fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b16fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b1700: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b1700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4b1704: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x4b1704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
    // 0x4b1708: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b1708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b170c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b170cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1710: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1710u;
        // 0x4b1714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1718u;
}
