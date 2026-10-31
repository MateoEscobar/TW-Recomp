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

// Function: sub_00293640
// Address: 0x293640 - 0x2936a8
void sub_00293640_0x293640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293640_0x293640");
#endif

    switch (ctx->pc) {
        case 0x29369cu: goto label_29369c;
        default: break;
    }

    ctx->pc = 0x293640u;

    // 0x293640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x293640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x293644: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x293644u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293648: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x293648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29364c: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x29364cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293650: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x293650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x293654: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x293654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x293658: 0x85220092  lh          $v0, 0x92($t1)
    ctx->pc = 0x293658u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 146)));
    // 0x29365c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x29365cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293660: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x293660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x293664: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x293664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x293668: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x293668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x29366c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29366cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x293670: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x293670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x293674: 0x3c080029  lui         $t0, 0x29
    ctx->pc = 0x293674u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41 << 16));
    // 0x293678: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x293678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29367c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x29367cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293680: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x293680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x293684: 0x250835d8  addiu       $t0, $t0, 0x35D8
    ctx->pc = 0x293684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13784));
    // 0x293688: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x293688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29368c: 0xa3ab000c  sb          $t3, 0xC($sp)
    ctx->pc = 0x29368cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 11));
    // 0x293690: 0xafa90024  sw          $t1, 0x24($sp)
    ctx->pc = 0x293690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    // 0x293694: 0xc0a4dda  jal         func_293768
    ctx->pc = 0x293694u;
    SET_GPR_U32(ctx, 31, 0x29369Cu);
    ctx->pc = 0x293698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293694u;
    // 0x293698: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293768u, 0x293694u, 0x29369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29369Cu;
label_29369c:
    // 0x29369c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29369cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2936a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2936A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2936A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2936A0u;
        // 0x2936a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2936A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2936A8u;
}
