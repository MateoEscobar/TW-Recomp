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

// Function: sub_0042C168
// Address: 0x42c168 - 0x42c280
void sub_0042C168_0x42c168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C168_0x42c168");
#endif

    switch (ctx->pc) {
        case 0x42c1b0u: goto label_42c1b0;
        case 0x42c220u: goto label_42c220;
        case 0x42c24cu: goto label_42c24c;
        default: break;
    }

    ctx->pc = 0x42c168u;

    // 0x42c168: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x42c168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42c16c: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x42c16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x42c170: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42C170u;
    {
        const bool branch_taken_0x42c170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42c170) {
            ctx->pc = 0x42C188u;
            goto label_42c188;
        }
    }
    ctx->pc = 0x42C178u;
    // 0x42c178: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x42c178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x42c17c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x42c17cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x42c180: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42C180u;
    {
        const bool branch_taken_0x42c180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C180u;
        // 0x42c184: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c180) {
            ctx->pc = 0x42C190u;
            goto label_42c190;
        }
    }
    ctx->pc = 0x42C188u;
label_42c188:
    // 0x42c188: 0x3e00008  jr          $ra
    ctx->pc = 0x42C188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C188u;
        // 0x42c18c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C190u;
label_42c190:
    // 0x42c190: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x42C190u;
    {
        const bool branch_taken_0x42c190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C190u;
        // 0x42c194: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c190) {
            ctx->pc = 0x42C1C0u;
            goto label_42c1c0;
        }
    }
    ctx->pc = 0x42C198u;
    // 0x42c198: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x42C198u;
    {
        const bool branch_taken_0x42c198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42c198) {
            ctx->pc = 0x42C19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C198u;
            // 0x42c19c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C1B0u;
            goto label_42c1b0;
        }
    }
    ctx->pc = 0x42C1A0u;
    // 0x42c1a0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x42c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x42c1a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x42c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x42c1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x42C1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C1A8u;
        // 0x42c1ac: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C1B0u;
label_42c1b0:
    // 0x42c1b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42c1b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42c1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x42C1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C1B8u;
        // 0x42c1bc: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C1C0u;
label_42c1c0:
    // 0x42c1c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x42C1C0u;
    {
        const bool branch_taken_0x42c1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42c1c0) {
            ctx->pc = 0x42C1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C1C0u;
            // 0x42c1c4: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C1DCu;
            goto label_42c1dc;
        }
    }
    ctx->pc = 0x42C1C8u;
    // 0x42c1c8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x42c1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x42c1cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x42c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42c1d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42c1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x42C1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C1D4u;
        // 0x42c1d8: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C1DCu;
label_42c1dc:
    // 0x42c1dc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42C1DCu;
    {
        const bool branch_taken_0x42c1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C1DCu;
        // 0x42c1e0: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c1dc) {
            ctx->pc = 0x42C204u;
            goto label_42c204;
        }
    }
    ctx->pc = 0x42C1E4u;
    // 0x42c1e4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x42C1E4u;
    {
        const bool branch_taken_0x42c1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42c1e4) {
            ctx->pc = 0x42C1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C1E4u;
            // 0x42c1e8: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C1F4u;
            goto label_42c1f4;
        }
    }
    ctx->pc = 0x42C1ECu;
    // 0x42c1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x42C1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C1ECu;
        // 0x42c1f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C1F4u;
label_42c1f4:
    // 0x42c1f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42c1f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42c1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x42C1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C1FCu;
        // 0x42c200: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C204u;
label_42c204:
    // 0x42c204: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x42C204u;
    {
        const bool branch_taken_0x42c204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c204) {
            ctx->pc = 0x42C208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C204u;
            // 0x42c208: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42c1b0;
        }
    }
    ctx->pc = 0x42C20Cu;
    // 0x42c20c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x42c20cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x42c210: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x42c210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x42c214: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42C214u;
    {
        const bool branch_taken_0x42c214 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x42c214) {
            ctx->pc = 0x42C218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C214u;
            // 0x42c218: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C22Cu;
            goto label_42c22c;
        }
    }
    ctx->pc = 0x42C21Cu;
    // 0x42c21c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42c220:
    // 0x42c220: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42c220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42c224: 0x3e00008  jr          $ra
    ctx->pc = 0x42C224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C224u;
        // 0x42c228: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C22Cu;
label_42c22c:
    // 0x42c22c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x42c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x42c230: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x42c230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x42c234: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x42C234u;
    {
        const bool branch_taken_0x42c234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42c234) {
            ctx->pc = 0x42C238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C234u;
            // 0x42c238: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42c220;
        }
    }
    ctx->pc = 0x42C23Cu;
    // 0x42c23c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x42c23cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x42c240: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x42C240u;
    {
        const bool branch_taken_0x42c240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c240) {
            ctx->pc = 0x42C244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C240u;
            // 0x42c244: 0xdc830010  ld          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C258u;
            goto label_42c258;
        }
    }
    ctx->pc = 0x42C248u;
    // 0x42c248: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x42c248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_42c24c:
    // 0x42c24c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42c250: 0x3e00008  jr          $ra
    ctx->pc = 0x42C250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C250u;
        // 0x42c254: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C258u;
label_42c258:
    // 0x42c258: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x42c258u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x42c25c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x42c25cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x42c260: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x42C260u;
    {
        const bool branch_taken_0x42c260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42c260) {
            ctx->pc = 0x42C264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C260u;
            // 0x42c264: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42c220;
        }
    }
    ctx->pc = 0x42C268u;
    // 0x42c268: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x42c268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x42c26c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x42C26Cu;
    {
        const bool branch_taken_0x42c26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C26Cu;
        // 0x42c270: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c26c) {
            ctx->pc = 0x42C24Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42c24c;
        }
    }
    ctx->pc = 0x42C274u;
    // 0x42c274: 0x3e00008  jr          $ra
    ctx->pc = 0x42C274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C274u;
        // 0x42c278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C27Cu;
    // 0x42c27c: 0x0  nop
    ctx->pc = 0x42c27cu;
    // NOP
    ctx->pc = 0x42c280u;
}
