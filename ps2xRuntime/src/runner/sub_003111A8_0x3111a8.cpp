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

// Function: sub_003111A8
// Address: 0x3111a8 - 0x311230
void sub_003111A8_0x3111a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003111A8_0x3111a8");
#endif

    switch (ctx->pc) {
        case 0x3111c0u: goto label_3111c0;
        case 0x3111c8u: goto label_3111c8;
        case 0x3111d0u: goto label_3111d0;
        case 0x311214u: goto label_311214;
        default: break;
    }

    ctx->pc = 0x3111a8u;

    // 0x3111a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3111a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3111ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3111acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3111b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3111b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3111b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3111b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3111b8: 0xc0c43ce  jal         func_310F38
    ctx->pc = 0x3111B8u;
    SET_GPR_U32(ctx, 31, 0x3111C0u);
    ctx->pc = 0x3111BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3111B8u;
    // 0x3111bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310F38u, 0x3111B8u, 0x3111C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3111C0u;
label_3111c0:
    // 0x3111c0: 0xc05a51a  jal         func_169468
    ctx->pc = 0x3111C0u;
    SET_GPR_U32(ctx, 31, 0x3111C8u);
    ctx->pc = 0x3111C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3111C0u;
    // 0x3111c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169468u, 0x3111C0u, 0x3111C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3111C8u;
label_3111c8:
    // 0x3111c8: 0xc05959e  jal         func_165678
    ctx->pc = 0x3111C8u;
    SET_GPR_U32(ctx, 31, 0x3111D0u);
    ctx->pc = 0x3111CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3111C8u;
    // 0x3111cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x3111C8u, 0x3111D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3111D0u;
label_3111d0:
    // 0x3111d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3111d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3111d4: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3111D4u;
    {
        const bool branch_taken_0x3111d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3111d4) {
            ctx->pc = 0x3111D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3111D4u;
            // 0x3111d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311224u;
            goto label_311224;
        }
    }
    ctx->pc = 0x3111DCu;
    // 0x3111dc: 0x808501b0  lb          $a1, 0x1B0($a0)
    ctx->pc = 0x3111dcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x3111e0: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x3111e0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x3111e4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3111E4u;
    {
        const bool branch_taken_0x3111e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3111E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3111E4u;
        // 0x3111e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3111e4) {
            ctx->pc = 0x31121Cu;
            goto label_31121c;
        }
    }
    ctx->pc = 0x3111ECu;
    // 0x3111ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3111ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3111f0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3111f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x3111f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3111f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3111f8: 0x90620416  lbu         $v0, 0x416($v1)
    ctx->pc = 0x3111f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1046)));
    // 0x3111fc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3111FCu;
    {
        const bool branch_taken_0x3111fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3111fc) {
            ctx->pc = 0x311200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3111FCu;
            // 0x311200: 0xa2060030  sb          $a2, 0x30($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311220u;
            goto label_311220;
        }
    }
    ctx->pc = 0x311204u;
    // 0x311204: 0x8c820178  lw          $v0, 0x178($a0)
    ctx->pc = 0x311204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x311208: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x311208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31120c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x31120Cu;
    SET_GPR_U32(ctx, 31, 0x311214u);
    ctx->pc = 0x311210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31120Cu;
    // 0x311210: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x31120Cu, 0x311214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311214u;
label_311214:
    // 0x311214: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x311214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x311218: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x311218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31121c:
    // 0x31121c: 0xa2060030  sb          $a2, 0x30($s0)
    ctx->pc = 0x31121cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 6));
label_311220:
    // 0x311220: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x311220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_311224:
    // 0x311224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x311224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311228: 0x3e00008  jr          $ra
    ctx->pc = 0x311228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311228u;
        // 0x31122c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311230u;
}
