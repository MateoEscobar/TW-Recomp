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

// Function: sub_002FA0E0
// Address: 0x2fa0e0 - 0x2fa1e0
void sub_002FA0E0_0x2fa0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA0E0_0x2fa0e0");
#endif

    switch (ctx->pc) {
        case 0x2fa138u: goto label_2fa138;
        case 0x2fa178u: goto label_2fa178;
        case 0x2fa18cu: goto label_2fa18c;
        case 0x2fa1b8u: goto label_2fa1b8;
        default: break;
    }

    ctx->pc = 0x2fa0e0u;

    // 0x2fa0e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2fa0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2fa0e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa0e8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2fa0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2fa0ec: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2fa0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2fa0f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2fa0f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa0f4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2fa0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2fa0f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2fa0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2fa0fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fa0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2fa100: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2fa100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2fa104: 0x14a20029  bne         $a1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2FA104u;
    {
        const bool branch_taken_0x2fa104 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA104u;
        // 0x2fa108: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa104) {
            ctx->pc = 0x2FA1ACu;
            goto label_2fa1ac;
        }
    }
    ctx->pc = 0x2FA10Cu;
    // 0x2fa10c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2fa10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fa110: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fa110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fa114: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fa114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fa118: 0x54430025  bnel        $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2FA118u;
    {
        const bool branch_taken_0x2fa118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fa118) {
            ctx->pc = 0x2FA11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA118u;
            // 0x2fa11c: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA1B0u;
            goto label_2fa1b0;
        }
    }
    ctx->pc = 0x2FA120u;
    // 0x2fa120: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x2fa120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2fa124: 0x56050022  bnel        $s0, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2FA124u;
    {
        const bool branch_taken_0x2fa124 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x2fa124) {
            ctx->pc = 0x2FA128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA124u;
            // 0x2fa128: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA1B0u;
            goto label_2fa1b0;
        }
    }
    ctx->pc = 0x2FA12Cu;
    // 0x2fa12c: 0x8c91020c  lw          $s1, 0x20C($a0)
    ctx->pc = 0x2fa12cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x2fa130: 0xc05959e  jal         func_165678
    ctx->pc = 0x2FA130u;
    SET_GPR_U32(ctx, 31, 0x2FA138u);
    ctx->pc = 0x2FA134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA130u;
    // 0x2fa134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2FA130u, 0x2FA138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA138u;
label_2fa138:
    // 0x2fa138: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2fa138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa13c: 0x80e501b0  lb          $a1, 0x1B0($a3)
    ctx->pc = 0x2fa13cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 432)));
    // 0x2fa140: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x2fa140u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x2fa144: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x2fa144u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fa148: 0x54d00019  bnel        $a2, $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FA148u;
    {
        const bool branch_taken_0x2fa148 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 16));
        if (branch_taken_0x2fa148) {
            ctx->pc = 0x2FA14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA148u;
            // 0x2fa14c: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA1B0u;
            goto label_2fa1b0;
        }
    }
    ctx->pc = 0x2FA150u;
    // 0x2fa150: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2fa150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2fa154: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x2fa154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2fa158: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2fa158u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2fa15c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2fa15cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa160: 0x4902b  sltu        $s2, $zero, $a0
    ctx->pc = 0x2fa160u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2fa164: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2fa164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2fa168: 0x1646000e  bne         $s2, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2FA168u;
    {
        const bool branch_taken_0x2fa168 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 6));
        ctx->pc = 0x2FA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA168u;
        // 0x2fa16c: 0x9070041a  lbu         $s0, 0x41A($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1050)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa168) {
            ctx->pc = 0x2FA1A4u;
            goto label_2fa1a4;
        }
    }
    ctx->pc = 0x2FA170u;
    // 0x2fa170: 0xc088e88  jal         func_223A20
    ctx->pc = 0x2FA170u;
    SET_GPR_U32(ctx, 31, 0x2FA178u);
    ctx->pc = 0x2FA174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA170u;
    // 0x2fa174: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2FA170u, 0x2FA178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA178u;
label_2fa178:
    // 0x2fa178: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2fa178u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa17c: 0x16720009  bne         $s3, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA17Cu;
    {
        const bool branch_taken_0x2fa17c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        if (branch_taken_0x2fa17c) {
            ctx->pc = 0x2FA1A4u;
            goto label_2fa1a4;
        }
    }
    ctx->pc = 0x2FA184u;
    // 0x2fa184: 0xc05a596  jal         func_169658
    ctx->pc = 0x2FA184u;
    SET_GPR_U32(ctx, 31, 0x2FA18Cu);
    ctx->pc = 0x2FA188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA184u;
    // 0x2fa188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169658u, 0x2FA184u, 0x2FA18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA18Cu;
label_2fa18c:
    // 0x2fa18c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA18Cu;
    {
        const bool branch_taken_0x2fa18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA18Cu;
        // 0x2fa190: 0x3a020005  xori        $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa18c) {
            ctx->pc = 0x2FA1A4u;
            goto label_2fa1a4;
        }
    }
    ctx->pc = 0x2FA194u;
    // 0x2fa194: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA194u;
    {
        const bool branch_taken_0x2fa194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA194u;
        // 0x2fa198: 0x3a020004  xori        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa194) {
            ctx->pc = 0x2FA1A4u;
            goto label_2fa1a4;
        }
    }
    ctx->pc = 0x2FA19Cu;
    // 0x2fa19c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA19Cu;
    {
        const bool branch_taken_0x2fa19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa19c) {
            ctx->pc = 0x2FA1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA19Cu;
            // 0x2fa1a0: 0x270a80b  movn        $s5, $s3, $s0 (Delay Slot)
            if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA1A4u;
            goto label_2fa1a4;
        }
    }
    ctx->pc = 0x2FA1A4u;
label_2fa1a4:
    // 0x2fa1a4: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA1A4u;
    {
        const bool branch_taken_0x2fa1a4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1A4u;
        // 0x2fa1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa1a4) {
            ctx->pc = 0x2FA1BCu;
            goto label_2fa1bc;
        }
    }
    ctx->pc = 0x2FA1ACu;
label_2fa1ac:
    // 0x2fa1ac: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2fa1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2fa1b0:
    // 0x2fa1b0: 0xc08c6d8  jal         func_231B60
    ctx->pc = 0x2FA1B0u;
    SET_GPR_U32(ctx, 31, 0x2FA1B8u);
    ctx->pc = 0x2FA1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA1B0u;
    // 0x2fa1b4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B60u, 0x2FA1B0u, 0x2FA1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA1B8u;
label_2fa1b8:
    // 0x2fa1b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa1bc:
    // 0x2fa1bc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2fa1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fa1c0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2fa1c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fa1c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2fa1c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fa1c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fa1c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fa1cc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2fa1ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa1d0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2fa1d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa1d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1D8u;
        // 0x2fa1dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA1E0u;
}
