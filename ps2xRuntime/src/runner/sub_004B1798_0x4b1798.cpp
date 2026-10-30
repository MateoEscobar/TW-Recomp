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

// Function: sub_004B1798
// Address: 0x4b1798 - 0x4b1820
void sub_004B1798_0x4b1798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1798_0x4b1798");
#endif

    switch (ctx->pc) {
        case 0x4b17d8u: goto label_4b17d8;
        case 0x4b17f8u: goto label_4b17f8;
        default: break;
    }

    ctx->pc = 0x4b1798u;

    // 0x4b1798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b1798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b179c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b179cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b17a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b17a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b17a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b17a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b17a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b17a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b17ac: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x4b17acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4b17b0: 0x16040016  bne         $s0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4B17B0u;
    {
        const bool branch_taken_0x4b17b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x4B17B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B17B0u;
        // 0x4b17b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b17b0) {
            ctx->pc = 0x4B180Cu;
            goto label_4b180c;
        }
    }
    ctx->pc = 0x4B17B8u;
    // 0x4b17b8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4b17b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4b17bc: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B17BCu;
    {
        const bool branch_taken_0x4b17bc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B17C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B17BCu;
        // 0x4b17c0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b17bc) {
            ctx->pc = 0x4B17E4u;
            goto label_4b17e4;
        }
    }
    ctx->pc = 0x4B17C4u;
    // 0x4b17c4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4b17c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4b17c8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4B17C8u;
    {
        const bool branch_taken_0x4b17c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b17c8) {
            ctx->pc = 0x4B17CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B17C8u;
            // 0x4b17cc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1800u;
            goto label_4b1800;
        }
    }
    ctx->pc = 0x4B17D0u;
    // 0x4b17d0: 0xc12c258  jal         func_4B0960
    ctx->pc = 0x4B17D0u;
    SET_GPR_U32(ctx, 31, 0x4B17D8u);
    ctx->pc = 0x4B17D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B17D0u;
    // 0x4b17d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0960u, 0x4B17D0u, 0x4B17D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B17D8u;
label_4b17d8:
    // 0x4b17d8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4b17d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4b17dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B17DCu;
    {
        const bool branch_taken_0x4b17dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B17DCu;
        // 0x4b17e0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b17dc) {
            ctx->pc = 0x4B1800u;
            goto label_4b1800;
        }
    }
    ctx->pc = 0x4B17E4u;
label_4b17e4:
    // 0x4b17e4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4b17e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4b17e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B17E8u;
    {
        const bool branch_taken_0x4b17e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b17e8) {
            ctx->pc = 0x4B17ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B17E8u;
            // 0x4b17ec: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1800u;
            goto label_4b1800;
        }
    }
    ctx->pc = 0x4B17F0u;
    // 0x4b17f0: 0xc12c266  jal         func_4B0998
    ctx->pc = 0x4B17F0u;
    SET_GPR_U32(ctx, 31, 0x4B17F8u);
    ctx->pc = 0x4B17F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B17F0u;
    // 0x4b17f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0998u, 0x4B17F0u, 0x4B17F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B17F8u;
label_4b17f8:
    // 0x4b17f8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4b17f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4b17fc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4b17fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4b1800:
    // 0x4b1800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b1800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b1804: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4b1804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4b1808: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b1808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b180c:
    // 0x4b180c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b180cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b1810: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b1810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b1814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b1814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1818: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1818u;
        // 0x4b181c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1820u;
}
