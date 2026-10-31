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

// Function: sub_003211A8
// Address: 0x3211a8 - 0x321240
void sub_003211A8_0x3211a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003211A8_0x3211a8");
#endif

    switch (ctx->pc) {
        case 0x3211bcu: goto label_3211bc;
        case 0x3211c4u: goto label_3211c4;
        case 0x3211ccu: goto label_3211cc;
        case 0x321210u: goto label_321210;
        default: break;
    }

    ctx->pc = 0x3211a8u;

    // 0x3211a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3211a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3211ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3211acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3211b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3211b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3211b4: 0xc0c834c  jal         func_320D30
    ctx->pc = 0x3211B4u;
    SET_GPR_U32(ctx, 31, 0x3211BCu);
    ctx->pc = 0x3211B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3211B4u;
    // 0x3211b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320D30u, 0x3211B4u, 0x3211BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3211BCu;
label_3211bc:
    // 0x3211bc: 0xc05a51a  jal         func_169468
    ctx->pc = 0x3211BCu;
    SET_GPR_U32(ctx, 31, 0x3211C4u);
    ctx->pc = 0x3211C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3211BCu;
    // 0x3211c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169468u, 0x3211BCu, 0x3211C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3211C4u;
label_3211c4:
    // 0x3211c4: 0xc05959e  jal         func_165678
    ctx->pc = 0x3211C4u;
    SET_GPR_U32(ctx, 31, 0x3211CCu);
    ctx->pc = 0x3211C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3211C4u;
    // 0x3211c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x3211C4u, 0x3211CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3211CCu;
label_3211cc:
    // 0x3211cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3211ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3211d0: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3211D0u;
    {
        const bool branch_taken_0x3211d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3211D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3211D0u;
        // 0x3211d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3211d0) {
            ctx->pc = 0x321220u;
            goto label_321220;
        }
    }
    ctx->pc = 0x3211D8u;
    // 0x3211d8: 0x808501b0  lb          $a1, 0x1B0($a0)
    ctx->pc = 0x3211d8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x3211dc: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x3211dcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x3211e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3211E0u;
    {
        const bool branch_taken_0x3211e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3211E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3211E0u;
        // 0x3211e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3211e0) {
            ctx->pc = 0x321218u;
            goto label_321218;
        }
    }
    ctx->pc = 0x3211E8u;
    // 0x3211e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3211e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3211ec: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3211ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x3211f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3211f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3211f4: 0x90620416  lbu         $v0, 0x416($v1)
    ctx->pc = 0x3211f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1046)));
    // 0x3211f8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3211F8u;
    {
        const bool branch_taken_0x3211f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3211f8) {
            ctx->pc = 0x3211FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3211F8u;
            // 0x3211fc: 0xa206002a  sb          $a2, 0x2A($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32121Cu;
            goto label_32121c;
        }
    }
    ctx->pc = 0x321200u;
    // 0x321200: 0x8c820178  lw          $v0, 0x178($a0)
    ctx->pc = 0x321200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x321204: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x321204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321208: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x321208u;
    SET_GPR_U32(ctx, 31, 0x321210u);
    ctx->pc = 0x32120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321208u;
    // 0x32120c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x321208u, 0x321210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321210u;
label_321210:
    // 0x321210: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x321210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x321214: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x321214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321218:
    // 0x321218: 0xa206002a  sb          $a2, 0x2A($s0)
    ctx->pc = 0x321218u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 6));
label_32121c:
    // 0x32121c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x32121cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_321220:
    // 0x321220: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x321220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321224: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x321224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x321228: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x321228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x32122c: 0x246307d0  addiu       $v1, $v1, 0x7D0
    ctx->pc = 0x32122cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
    // 0x321230: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x321230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x321234: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x321234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321238: 0x3e00008  jr          $ra
    ctx->pc = 0x321238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321238u;
        // 0x32123c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321240u;
}
