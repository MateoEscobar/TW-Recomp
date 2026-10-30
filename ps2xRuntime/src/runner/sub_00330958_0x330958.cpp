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

// Function: sub_00330958
// Address: 0x330958 - 0x3309f0
void sub_00330958_0x330958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330958_0x330958");
#endif

    switch (ctx->pc) {
        case 0x330988u: goto label_330988;
        case 0x33099cu: goto label_33099c;
        case 0x3309c0u: goto label_3309c0;
        default: break;
    }

    ctx->pc = 0x330958u;

    // 0x330958: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x330958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33095c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x33095cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x330960: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x330960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x330964: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x330964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330968: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x330968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x33096c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x33096cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330970: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x330970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x330974: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x330974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330978: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x330978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x33097c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33097cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330984: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x330984u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_330988:
    // 0x330988: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33098c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33098cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330990: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x330990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x330994: 0xc0cc2f0  jal         func_330BC0
    ctx->pc = 0x330994u;
    SET_GPR_U32(ctx, 31, 0x33099Cu);
    ctx->pc = 0x330998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330994u;
    // 0x330998: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330BC0u, 0x330994u, 0x33099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33099Cu;
label_33099c:
    // 0x33099c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x33099Cu;
    {
        const bool branch_taken_0x33099c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33099c) {
            ctx->pc = 0x3309A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33099Cu;
            // 0x3309a0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3309D0u;
            goto label_3309d0;
        }
    }
    ctx->pc = 0x3309A4u;
    // 0x3309a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3309a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3309a8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3309a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3309ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3309ACu;
    {
        const bool branch_taken_0x3309ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3309B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3309ACu;
        // 0x3309b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3309ac) {
            ctx->pc = 0x3309C8u;
            goto label_3309c8;
        }
    }
    ctx->pc = 0x3309B4u;
    // 0x3309b4: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x3309b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3309b8: 0xc0cc1d2  jal         func_330748
    ctx->pc = 0x3309B8u;
    SET_GPR_U32(ctx, 31, 0x3309C0u);
    ctx->pc = 0x3309BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3309B8u;
    // 0x3309bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330748u, 0x3309B8u, 0x3309C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3309C0u;
label_3309c0:
    // 0x3309c0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3309C0u;
    {
        const bool branch_taken_0x3309c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3309C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3309C0u;
        // 0x3309c4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3309c0) {
            ctx->pc = 0x330988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330988;
        }
    }
    ctx->pc = 0x3309C8u;
label_3309c8:
    // 0x3309c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3309c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3309cc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3309ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3309d0:
    // 0x3309d0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3309d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3309d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3309d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3309d8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3309d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3309dc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3309dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3309e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3309e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3309e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3309E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3309E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3309E4u;
        // 0x3309e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3309E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3309ECu;
    // 0x3309ec: 0x0  nop
    ctx->pc = 0x3309ecu;
    // NOP
    ctx->pc = 0x3309f0u;
}
