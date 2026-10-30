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

// Function: sub_00203968
// Address: 0x203968 - 0x2039c0
void sub_00203968_0x203968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203968_0x203968");
#endif

    switch (ctx->pc) {
        case 0x203968u: goto label_203968;
        case 0x20396cu: goto label_20396c;
        case 0x203970u: goto label_203970;
        case 0x203974u: goto label_203974;
        case 0x203978u: goto label_203978;
        case 0x20397cu: goto label_20397c;
        case 0x203980u: goto label_203980;
        case 0x203984u: goto label_203984;
        case 0x203988u: goto label_203988;
        case 0x20398cu: goto label_20398c;
        case 0x203990u: goto label_203990;
        case 0x203994u: goto label_203994;
        case 0x203998u: goto label_203998;
        case 0x20399cu: goto label_20399c;
        case 0x2039a0u: goto label_2039a0;
        case 0x2039a4u: goto label_2039a4;
        case 0x2039a8u: goto label_2039a8;
        case 0x2039acu: goto label_2039ac;
        case 0x2039b0u: goto label_2039b0;
        case 0x2039b4u: goto label_2039b4;
        case 0x2039b8u: goto label_2039b8;
        case 0x2039bcu: goto label_2039bc;
        default: break;
    }

    ctx->pc = 0x203968u;

label_203968:
    // 0x203968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20396c:
    // 0x20396c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20396cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_203970:
    // 0x203970: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x203970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_203974:
    // 0x203974: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x203974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_203978:
    // 0x203978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20397c:
    // 0x20397c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20397cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203980:
    // 0x203980: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x203980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_203984:
    // 0x203984: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x203984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_203988:
    // 0x203988: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x203988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_20398c:
    // 0x20398c: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x20398cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_203990:
    // 0x203990: 0xa0f809  jalr        $a1
label_203994:
    if (ctx->pc == 0x203994u) {
        ctx->pc = 0x203994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203990u;
        // 0x203994: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203998u;
        goto label_203998;
    }
    ctx->pc = 0x203990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x203998u);
        ctx->pc = 0x203994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203990u;
        // 0x203994: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203990u, 0x203998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203998u;
label_203998:
    // 0x203998: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x203998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20399c:
    // 0x20399c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20399cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2039a0:
    // 0x2039a0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2039a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2039a4:
    // 0x2039a4: 0x60f809  jalr        $v1
label_2039a8:
    if (ctx->pc == 0x2039A8u) {
        ctx->pc = 0x2039A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039A4u;
        // 0x2039a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039ACu;
        goto label_2039ac;
    }
    ctx->pc = 0x2039A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2039ACu);
        ctx->pc = 0x2039A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039A4u;
        // 0x2039a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2039A4u, 0x2039ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2039ACu;
label_2039ac:
    // 0x2039ac: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2039acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_2039b0:
    // 0x2039b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2039b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2039b4:
    // 0x2039b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2039b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2039b8:
    // 0x2039b8: 0x3e00008  jr          $ra
label_2039bc:
    if (ctx->pc == 0x2039BCu) {
        ctx->pc = 0x2039BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039B8u;
        // 0x2039bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039C0u;
        goto label_fallthrough_0x2039b8;
    }
    ctx->pc = 0x2039B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2039BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039B8u;
        // 0x2039bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2039B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2039b8:
    ctx->pc = 0x2039C0u;
}
