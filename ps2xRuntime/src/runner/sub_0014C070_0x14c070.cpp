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

// Function: sub_0014C070
// Address: 0x14c070 - 0x14c118
void sub_0014C070_0x14c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C070_0x14c070");
#endif

    switch (ctx->pc) {
        case 0x14c0b0u: goto label_14c0b0;
        case 0x14c0c4u: goto label_14c0c4;
        case 0x14c0f4u: goto label_14c0f4;
        default: break;
    }

    ctx->pc = 0x14c070u;

    // 0x14c070: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14c070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14c074: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14c074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14c078: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x14c078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14c07c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c07cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c080: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14c080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14c084: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14c084u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c088: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x14c088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x14c08c: 0x138900  sll         $s1, $s3, 4
    ctx->pc = 0x14c08cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x14c090: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14c090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14c094: 0x26140888  addiu       $s4, $s0, 0x888
    ctx->pc = 0x14c094u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 2184));
    // 0x14c098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c09c: 0x291a021  addu        $s4, $s4, $s1
    ctx->pc = 0x14c09cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x14c0a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14c0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c0a4: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x14c0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14c0a8: 0xc053a8a  jal         func_14EA28
    ctx->pc = 0x14C0A8u;
    SET_GPR_U32(ctx, 31, 0x14C0B0u);
    ctx->pc = 0x14C0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C0A8u;
    // 0x14c0ac: 0x8e050840  lw          $a1, 0x840($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EA28u, 0x14C0A8u, 0x14C0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0B0u;
label_14c0b0:
    // 0x14c0b0: 0x2118821  addu        $s1, $s0, $s1
    ctx->pc = 0x14c0b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x14c0b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14c0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c0b8: 0x8e320890  lw          $s2, 0x890($s1)
    ctx->pc = 0x14c0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2192)));
    // 0x14c0bc: 0xc053b1a  jal         func_14EC68
    ctx->pc = 0x14C0BCu;
    SET_GPR_U32(ctx, 31, 0x14C0C4u);
    ctx->pc = 0x14C0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C0BCu;
    // 0x14c0c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC68u, 0x14C0BCu, 0x14C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0C4u;
label_14c0c4:
    // 0x14c0c4: 0x8e050840  lw          $a1, 0x840($s0)
    ctx->pc = 0x14c0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2112)));
    // 0x14c0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c0cc: 0x8e030830  lw          $v1, 0x830($s0)
    ctx->pc = 0x14c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2096)));
    // 0x14c0d0: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x14c0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x14c0d4: 0x8e06082c  lw          $a2, 0x82C($s0)
    ctx->pc = 0x14c0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x14c0d8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x14c0dc: 0xae050840  sw          $a1, 0x840($s0)
    ctx->pc = 0x14c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 5));
    // 0x14c0e0: 0xae030830  sw          $v1, 0x830($s0)
    ctx->pc = 0x14c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2096), GPR_U32(ctx, 3));
    // 0x14c0e4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x14c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14c0e8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x14c0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14c0ec: 0xc053008  jal         func_14C020
    ctx->pc = 0x14C0ECu;
    SET_GPR_U32(ctx, 31, 0x14C0F4u);
    ctx->pc = 0x14C0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C0ECu;
    // 0x14c0f0: 0xae06082c  sw          $a2, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C020u, 0x14C0ECu, 0x14C0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0F4u;
label_14c0f4:
    // 0x14c0f4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14c0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14c0f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14c0f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14c0fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14c0fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14c100: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14c100u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c104: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x14c104u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c10c: 0x3e00008  jr          $ra
    ctx->pc = 0x14C10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C10Cu;
        // 0x14c110: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C114u;
    // 0x14c114: 0x0  nop
    ctx->pc = 0x14c114u;
    // NOP
    ctx->pc = 0x14c118u;
}
