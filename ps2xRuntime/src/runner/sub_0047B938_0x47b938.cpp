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

// Function: sub_0047B938
// Address: 0x47b938 - 0x47ba08
void sub_0047B938_0x47b938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B938_0x47b938");
#endif

    switch (ctx->pc) {
        case 0x47b99cu: goto label_47b99c;
        case 0x47b9e8u: goto label_47b9e8;
        default: break;
    }

    ctx->pc = 0x47b938u;

    // 0x47b938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x47b938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x47b93c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x47b93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47b940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47b944: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x47b944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x47b948: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x47b948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x47b94c: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x47B94Cu;
    {
        const bool branch_taken_0x47b94c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B94Cu;
        // 0x47b950: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b94c) {
            ctx->pc = 0x47B9F4u;
            goto label_47b9f4;
        }
    }
    ctx->pc = 0x47B954u;
    // 0x47b954: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x47b954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x47b958: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x47B958u;
    {
        const bool branch_taken_0x47b958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x47B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B958u;
        // 0x47b95c: 0x8f828914  lw          $v0, -0x76EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b958) {
            ctx->pc = 0x47B9B0u;
            goto label_47b9b0;
        }
    }
    ctx->pc = 0x47B960u;
    // 0x47b960: 0x8f828910  lw          $v0, -0x76F0($gp)
    ctx->pc = 0x47b960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
    // 0x47b964: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x47b964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b968: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x47b968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x47b96c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x47b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47b970: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47B970u;
    {
        const bool branch_taken_0x47b970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b970) {
            ctx->pc = 0x47B974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47B970u;
            // 0x47b974: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B990u;
            goto label_47b990;
        }
    }
    ctx->pc = 0x47B978u;
    // 0x47b978: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x47b978u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x47b97c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47b980: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47B980u;
    {
        const bool branch_taken_0x47b980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x47b980) {
            ctx->pc = 0x47B984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47B980u;
            // 0x47b984: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B990u;
            goto label_47b990;
        }
    }
    ctx->pc = 0x47B988u;
    // 0x47b988: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47B988u;
    {
        const bool branch_taken_0x47b988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B988u;
        // 0x47b98c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b988) {
            ctx->pc = 0x47B99Cu;
            goto label_47b99c;
        }
    }
    ctx->pc = 0x47B990u;
label_47b990:
    // 0x47b990: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x47b990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x47b994: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x47B994u;
    SET_GPR_U32(ctx, 31, 0x47B99Cu);
    ctx->pc = 0x47B998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B994u;
    // 0x47b998: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x47B994u, 0x47B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B99Cu;
label_47b99c:
    // 0x47b99c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47b9a0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x47B9A0u;
    {
        const bool branch_taken_0x47b9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B9A0u;
        // 0x47b9a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b9a0) {
            ctx->pc = 0x47B9F8u;
            goto label_47b9f8;
        }
    }
    ctx->pc = 0x47B9A8u;
    // 0x47b9a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x47B9A8u;
    {
        const bool branch_taken_0x47b9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B9A8u;
        // 0x47b9ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b9a8) {
            ctx->pc = 0x47B9F8u;
            goto label_47b9f8;
        }
    }
    ctx->pc = 0x47B9B0u;
label_47b9b0:
    // 0x47b9b0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x47b9b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47b9b4: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x47b9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x47b9b8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x47b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x47b9bc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x47B9BCu;
    {
        const bool branch_taken_0x47b9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47b9bc) {
            ctx->pc = 0x47B9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47B9BCu;
            // 0x47b9c0: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B9DCu;
            goto label_47b9dc;
        }
    }
    ctx->pc = 0x47B9C4u;
    // 0x47b9c4: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x47b9c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x47b9c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47b9cc: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47B9CCu;
    {
        const bool branch_taken_0x47b9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x47b9cc) {
            ctx->pc = 0x47B9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47B9CCu;
            // 0x47b9d0: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47B9DCu;
            goto label_47b9dc;
        }
    }
    ctx->pc = 0x47B9D4u;
    // 0x47b9d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47B9D4u;
    {
        const bool branch_taken_0x47b9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B9D4u;
        // 0x47b9d8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b9d4) {
            ctx->pc = 0x47B9E8u;
            goto label_47b9e8;
        }
    }
    ctx->pc = 0x47B9DCu;
label_47b9dc:
    // 0x47b9dc: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x47b9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x47b9e0: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x47B9E0u;
    SET_GPR_U32(ctx, 31, 0x47B9E8u);
    ctx->pc = 0x47B9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B9E0u;
    // 0x47b9e4: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x47B9E0u, 0x47B9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B9E8u;
label_47b9e8:
    // 0x47b9e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x47b9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47b9ec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x47B9ECu;
    {
        const bool branch_taken_0x47b9ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B9ECu;
        // 0x47b9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47b9ec) {
            ctx->pc = 0x47B9F8u;
            goto label_47b9f8;
        }
    }
    ctx->pc = 0x47B9F4u;
label_47b9f4:
    // 0x47b9f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47b9f8:
    // 0x47b9f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47b9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x47B9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B9FCu;
        // 0x47ba00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47BA04u;
    // 0x47ba04: 0x0  nop
    ctx->pc = 0x47ba04u;
    // NOP
    ctx->pc = 0x47ba08u;
}
