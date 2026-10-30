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

// Function: sub_00313958
// Address: 0x313958 - 0x3139e0
void sub_00313958_0x313958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313958_0x313958");
#endif

    switch (ctx->pc) {
        case 0x31396cu: goto label_31396c;
        case 0x313974u: goto label_313974;
        case 0x31397cu: goto label_31397c;
        case 0x3139c0u: goto label_3139c0;
        default: break;
    }

    ctx->pc = 0x313958u;

    // 0x313958: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x313958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31395c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31395cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x313960: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x313960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x313964: 0xc0c4d42  jal         func_313508
    ctx->pc = 0x313964u;
    SET_GPR_U32(ctx, 31, 0x31396Cu);
    ctx->pc = 0x313968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313964u;
    // 0x313968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313508u, 0x313964u, 0x31396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31396Cu;
label_31396c:
    // 0x31396c: 0xc05a51a  jal         func_169468
    ctx->pc = 0x31396Cu;
    SET_GPR_U32(ctx, 31, 0x313974u);
    ctx->pc = 0x313970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31396Cu;
    // 0x313970: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169468u, 0x31396Cu, 0x313974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313974u;
label_313974:
    // 0x313974: 0xc05959e  jal         func_165678
    ctx->pc = 0x313974u;
    SET_GPR_U32(ctx, 31, 0x31397Cu);
    ctx->pc = 0x313978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313974u;
    // 0x313978: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x313974u, 0x31397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31397Cu;
label_31397c:
    // 0x31397c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31397cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313980: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x313980u;
    {
        const bool branch_taken_0x313980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x313980) {
            ctx->pc = 0x313984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313980u;
            // 0x313984: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3139D0u;
            goto label_3139d0;
        }
    }
    ctx->pc = 0x313988u;
    // 0x313988: 0x808501b0  lb          $a1, 0x1B0($a0)
    ctx->pc = 0x313988u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x31398c: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x31398cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x313990: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x313990u;
    {
        const bool branch_taken_0x313990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313990u;
        // 0x313994: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313990) {
            ctx->pc = 0x3139C8u;
            goto label_3139c8;
        }
    }
    ctx->pc = 0x313998u;
    // 0x313998: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x313998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x31399c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x31399cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x3139a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3139a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3139a4: 0x90620416  lbu         $v0, 0x416($v1)
    ctx->pc = 0x3139a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1046)));
    // 0x3139a8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3139A8u;
    {
        const bool branch_taken_0x3139a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3139a8) {
            ctx->pc = 0x3139ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3139A8u;
            // 0x3139ac: 0xa2060024  sb          $a2, 0x24($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3139CCu;
            goto label_3139cc;
        }
    }
    ctx->pc = 0x3139B0u;
    // 0x3139b0: 0x8c820178  lw          $v0, 0x178($a0)
    ctx->pc = 0x3139b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x3139b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3139b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3139b8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x3139B8u;
    SET_GPR_U32(ctx, 31, 0x3139C0u);
    ctx->pc = 0x3139BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3139B8u;
    // 0x3139bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3139B8u, 0x3139C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3139C0u;
label_3139c0:
    // 0x3139c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3139c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3139c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3139c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3139c8:
    // 0x3139c8: 0xa2060024  sb          $a2, 0x24($s0)
    ctx->pc = 0x3139c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 6));
label_3139cc:
    // 0x3139cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3139ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3139d0:
    // 0x3139d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3139d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3139d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3139D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3139D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139D4u;
        // 0x3139d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3139D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3139DCu;
    // 0x3139dc: 0x0  nop
    ctx->pc = 0x3139dcu;
    // NOP
    ctx->pc = 0x3139e0u;
}
