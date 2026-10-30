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

// Function: sub_003EF980
// Address: 0x3ef980 - 0x3efa20
void sub_003EF980_0x3ef980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF980_0x3ef980");
#endif

    switch (ctx->pc) {
        case 0x3ef980u: goto label_3ef980;
        case 0x3ef984u: goto label_3ef984;
        case 0x3ef988u: goto label_3ef988;
        case 0x3ef98cu: goto label_3ef98c;
        case 0x3ef990u: goto label_3ef990;
        case 0x3ef994u: goto label_3ef994;
        case 0x3ef998u: goto label_3ef998;
        case 0x3ef99cu: goto label_3ef99c;
        case 0x3ef9a0u: goto label_3ef9a0;
        case 0x3ef9a4u: goto label_3ef9a4;
        case 0x3ef9a8u: goto label_3ef9a8;
        case 0x3ef9acu: goto label_3ef9ac;
        case 0x3ef9b0u: goto label_3ef9b0;
        case 0x3ef9b4u: goto label_3ef9b4;
        case 0x3ef9b8u: goto label_3ef9b8;
        case 0x3ef9bcu: goto label_3ef9bc;
        case 0x3ef9c0u: goto label_3ef9c0;
        case 0x3ef9c4u: goto label_3ef9c4;
        case 0x3ef9c8u: goto label_3ef9c8;
        case 0x3ef9ccu: goto label_3ef9cc;
        case 0x3ef9d0u: goto label_3ef9d0;
        case 0x3ef9d4u: goto label_3ef9d4;
        case 0x3ef9d8u: goto label_3ef9d8;
        case 0x3ef9dcu: goto label_3ef9dc;
        case 0x3ef9e0u: goto label_3ef9e0;
        case 0x3ef9e4u: goto label_3ef9e4;
        case 0x3ef9e8u: goto label_3ef9e8;
        case 0x3ef9ecu: goto label_3ef9ec;
        case 0x3ef9f0u: goto label_3ef9f0;
        case 0x3ef9f4u: goto label_3ef9f4;
        case 0x3ef9f8u: goto label_3ef9f8;
        case 0x3ef9fcu: goto label_3ef9fc;
        case 0x3efa00u: goto label_3efa00;
        case 0x3efa04u: goto label_3efa04;
        case 0x3efa08u: goto label_3efa08;
        case 0x3efa0cu: goto label_3efa0c;
        case 0x3efa10u: goto label_3efa10;
        case 0x3efa14u: goto label_3efa14;
        case 0x3efa18u: goto label_3efa18;
        case 0x3efa1cu: goto label_3efa1c;
        default: break;
    }

    ctx->pc = 0x3ef980u;

label_3ef980:
    // 0x3ef980: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ef980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3ef984:
    // 0x3ef984: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3ef984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3ef988:
    // 0x3ef988: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3ef988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3ef98c:
    // 0x3ef98c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ef98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ef990:
    // 0x3ef990: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3ef990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3ef994:
    // 0x3ef994: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ef994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ef998:
    // 0x3ef998: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ef998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ef99c:
    // 0x3ef99c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ef99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ef9a0:
    // 0x3ef9a0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ef9a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ef9a4:
    // 0x3ef9a4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ef9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ef9a8:
    // 0x3ef9a8: 0x40f809  jalr        $v0
label_3ef9ac:
    if (ctx->pc == 0x3EF9ACu) {
        ctx->pc = 0x3EF9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF9A8u;
        // 0x3ef9ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF9B0u;
        goto label_3ef9b0;
    }
    ctx->pc = 0x3EF9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EF9B0u);
        ctx->pc = 0x3EF9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF9A8u;
        // 0x3ef9ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF9A8u, 0x3EF9B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EF9B0u;
label_3ef9b0:
    // 0x3ef9b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ef9b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef9b4:
    // 0x3ef9b4: 0xc0ea14c  jal         func_3A8530
label_3ef9b8:
    if (ctx->pc == 0x3EF9B8u) {
        ctx->pc = 0x3EF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF9B4u;
        // 0x3ef9b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF9BCu;
        goto label_3ef9bc;
    }
    ctx->pc = 0x3EF9B4u;
    SET_GPR_U32(ctx, 31, 0x3EF9BCu);
    ctx->pc = 0x3EF9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF9B4u;
    // 0x3ef9b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EF9B4u, 0x3EF9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF9BCu;
label_3ef9bc:
    // 0x3ef9bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ef9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ef9c0:
    // 0x3ef9c0: 0xc0ea12a  jal         func_3A84A8
label_3ef9c4:
    if (ctx->pc == 0x3EF9C4u) {
        ctx->pc = 0x3EF9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF9C0u;
        // 0x3ef9c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF9C8u;
        goto label_3ef9c8;
    }
    ctx->pc = 0x3EF9C0u;
    SET_GPR_U32(ctx, 31, 0x3EF9C8u);
    ctx->pc = 0x3EF9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF9C0u;
    // 0x3ef9c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EF9C0u, 0x3EF9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF9C8u;
label_3ef9c8:
    // 0x3ef9c8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ef9c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ef9cc:
    // 0x3ef9cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ef9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ef9d0:
    // 0x3ef9d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ef9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ef9d4:
    // 0x3ef9d4: 0xc0ea12a  jal         func_3A84A8
label_3ef9d8:
    if (ctx->pc == 0x3EF9D8u) {
        ctx->pc = 0x3EF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF9D4u;
        // 0x3ef9d8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF9DCu;
        goto label_3ef9dc;
    }
    ctx->pc = 0x3EF9D4u;
    SET_GPR_U32(ctx, 31, 0x3EF9DCu);
    ctx->pc = 0x3EF9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF9D4u;
    // 0x3ef9d8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EF9D4u, 0x3EF9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF9DCu;
label_3ef9dc:
    // 0x3ef9dc: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3ef9dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ef9e0:
    // 0x3ef9e0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3ef9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3ef9e4:
    // 0x3ef9e4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ef9e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ef9e8:
    // 0x3ef9e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ef9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ef9ec:
    // 0x3ef9ec: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x3ef9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
label_3ef9f0:
    // 0x3ef9f0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3ef9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3ef9f4:
    // 0x3ef9f4: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x3ef9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_3ef9f8:
    // 0x3ef9f8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3ef9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3ef9fc:
    // 0x3ef9fc: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x3ef9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_3efa00:
    // 0x3efa00: 0xc0e90ee  jal         func_3A43B8
label_3efa04:
    if (ctx->pc == 0x3EFA04u) {
        ctx->pc = 0x3EFA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA00u;
        // 0x3efa04: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFA08u;
        goto label_3efa08;
    }
    ctx->pc = 0x3EFA00u;
    SET_GPR_U32(ctx, 31, 0x3EFA08u);
    ctx->pc = 0x3EFA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFA00u;
    // 0x3efa04: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A43B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A43B8u, 0x3EFA00u, 0x3EFA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFA08u;
label_3efa08:
    // 0x3efa08: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3efa08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3efa0c:
    // 0x3efa0c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3efa0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3efa10:
    // 0x3efa10: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3efa10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3efa14:
    // 0x3efa14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3efa14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3efa18:
    // 0x3efa18: 0x3e00008  jr          $ra
label_3efa1c:
    if (ctx->pc == 0x3EFA1Cu) {
        ctx->pc = 0x3EFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA18u;
        // 0x3efa1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFA20u;
        goto label_fallthrough_0x3efa18;
    }
    ctx->pc = 0x3EFA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA18u;
        // 0x3efa1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EFA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3efa18:
    ctx->pc = 0x3EFA20u;
}
