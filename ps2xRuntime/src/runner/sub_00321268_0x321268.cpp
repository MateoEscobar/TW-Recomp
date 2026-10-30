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

// Function: sub_00321268
// Address: 0x321268 - 0x321328
void sub_00321268_0x321268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321268_0x321268");
#endif

    switch (ctx->pc) {
        case 0x321284u: goto label_321284;
        case 0x3212b8u: goto label_3212b8;
        case 0x3212e0u: goto label_3212e0;
        case 0x321310u: goto label_321310;
        default: break;
    }

    ctx->pc = 0x321268u;

    // 0x321268: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x321268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32126c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x321270: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x321270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x321274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x321274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32127c: 0xc05959e  jal         func_165678
    ctx->pc = 0x32127Cu;
    SET_GPR_U32(ctx, 31, 0x321284u);
    ctx->pc = 0x321280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32127Cu;
    // 0x321280: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x32127Cu, 0x321284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321284u;
label_321284:
    // 0x321284: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x321284u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321288: 0x9202002b  lbu         $v0, 0x2B($s0)
    ctx->pc = 0x321288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x32128c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x32128Cu;
    {
        const bool branch_taken_0x32128c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32128Cu;
        // 0x321290: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32128c) {
            ctx->pc = 0x3212ECu;
            goto label_3212ec;
        }
    }
    ctx->pc = 0x321294u;
    // 0x321294: 0x9211002a  lbu         $s1, 0x2A($s0)
    ctx->pc = 0x321294u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x321298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32129c: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x32129Cu;
    {
        const bool branch_taken_0x32129c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3212A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32129Cu;
        // 0x3212a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32129c) {
            ctx->pc = 0x3212E4u;
            goto label_3212e4;
        }
    }
    ctx->pc = 0x3212A4u;
    // 0x3212a4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3212A4u;
    {
        const bool branch_taken_0x3212a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3212A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3212A4u;
        // 0x3212a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3212a4) {
            ctx->pc = 0x3212C4u;
            goto label_3212c4;
        }
    }
    ctx->pc = 0x3212ACu;
    // 0x3212ac: 0x8c620178  lw          $v0, 0x178($v1)
    ctx->pc = 0x3212acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 376)));
    // 0x3212b0: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x3212B0u;
    SET_GPR_U32(ctx, 31, 0x3212B8u);
    ctx->pc = 0x3212B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3212B0u;
    // 0x3212b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3212B0u, 0x3212B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3212B8u;
label_3212b8:
    // 0x3212b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3212b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3212bc: 0x10510015  beq         $v0, $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3212BCu;
    {
        const bool branch_taken_0x3212bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3212C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3212BCu;
        // 0x3212c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3212bc) {
            ctx->pc = 0x321314u;
            goto label_321314;
        }
    }
    ctx->pc = 0x3212C4u;
label_3212c4:
    // 0x3212c4: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x3212c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3212c8: 0x2403008d  addiu       $v1, $zero, 0x8D
    ctx->pc = 0x3212c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x3212cc: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x3212ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x3212d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3212d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3212d4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3212d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3212d8: 0xc0c1a7c  jal         func_3069F0
    ctx->pc = 0x3212D8u;
    SET_GPR_U32(ctx, 31, 0x3212E0u);
    ctx->pc = 0x3212DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3212D8u;
    // 0x3212dc: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3069F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3069F0u, 0x3212D8u, 0x3212E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3212E0u;
label_3212e0:
    // 0x3212e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3212e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3212e4:
    // 0x3212e4: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x3212e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x3212e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3212e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3212ec:
    // 0x3212ec: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3212ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3212f0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x3212f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x3212f4: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x3212f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x3212f8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3212f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3212fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3212FCu;
    {
        const bool branch_taken_0x3212fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x321300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3212FCu;
        // 0x321300: 0x244207d0  addiu       $v0, $v0, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3212fc) {
            ctx->pc = 0x321310u;
            goto label_321310;
        }
    }
    ctx->pc = 0x321304u;
    // 0x321304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321308: 0xc0c840a  jal         func_321028
    ctx->pc = 0x321308u;
    SET_GPR_U32(ctx, 31, 0x321310u);
    ctx->pc = 0x32130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321308u;
    // 0x32130c: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321028u, 0x321308u, 0x321310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321310u;
label_321310:
    // 0x321310: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321314:
    // 0x321314: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x321314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321318: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x321318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32131c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32131cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321320: 0x3e00008  jr          $ra
    ctx->pc = 0x321320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321320u;
        // 0x321324: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321328u;
}
