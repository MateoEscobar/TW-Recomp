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

// Function: sub_003DA940
// Address: 0x3da940 - 0x3da9e0
void sub_003DA940_0x3da940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA940_0x3da940");
#endif

    switch (ctx->pc) {
        case 0x3da940u: goto label_3da940;
        case 0x3da944u: goto label_3da944;
        case 0x3da948u: goto label_3da948;
        case 0x3da94cu: goto label_3da94c;
        case 0x3da950u: goto label_3da950;
        case 0x3da954u: goto label_3da954;
        case 0x3da958u: goto label_3da958;
        case 0x3da95cu: goto label_3da95c;
        case 0x3da960u: goto label_3da960;
        case 0x3da964u: goto label_3da964;
        case 0x3da968u: goto label_3da968;
        case 0x3da96cu: goto label_3da96c;
        case 0x3da970u: goto label_3da970;
        case 0x3da974u: goto label_3da974;
        case 0x3da978u: goto label_3da978;
        case 0x3da97cu: goto label_3da97c;
        case 0x3da980u: goto label_3da980;
        case 0x3da984u: goto label_3da984;
        case 0x3da988u: goto label_3da988;
        case 0x3da98cu: goto label_3da98c;
        case 0x3da990u: goto label_3da990;
        case 0x3da994u: goto label_3da994;
        case 0x3da998u: goto label_3da998;
        case 0x3da99cu: goto label_3da99c;
        case 0x3da9a0u: goto label_3da9a0;
        case 0x3da9a4u: goto label_3da9a4;
        case 0x3da9a8u: goto label_3da9a8;
        case 0x3da9acu: goto label_3da9ac;
        case 0x3da9b0u: goto label_3da9b0;
        case 0x3da9b4u: goto label_3da9b4;
        case 0x3da9b8u: goto label_3da9b8;
        case 0x3da9bcu: goto label_3da9bc;
        case 0x3da9c0u: goto label_3da9c0;
        case 0x3da9c4u: goto label_3da9c4;
        case 0x3da9c8u: goto label_3da9c8;
        case 0x3da9ccu: goto label_3da9cc;
        case 0x3da9d0u: goto label_3da9d0;
        case 0x3da9d4u: goto label_3da9d4;
        case 0x3da9d8u: goto label_3da9d8;
        case 0x3da9dcu: goto label_3da9dc;
        default: break;
    }

    ctx->pc = 0x3da940u;

label_3da940:
    // 0x3da940: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3da940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3da944:
    // 0x3da944: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3da944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3da948:
    // 0x3da948: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3da948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3da94c:
    // 0x3da94c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3da94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3da950:
    // 0x3da950: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3da950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3da954:
    // 0x3da954: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3da954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3da958:
    // 0x3da958: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3da958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3da95c:
    // 0x3da95c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3da95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3da960:
    // 0x3da960: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3da960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3da964:
    // 0x3da964: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3da964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3da968:
    // 0x3da968: 0x40f809  jalr        $v0
label_3da96c:
    if (ctx->pc == 0x3DA96Cu) {
        ctx->pc = 0x3DA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA968u;
        // 0x3da96c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA970u;
        goto label_3da970;
    }
    ctx->pc = 0x3DA968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DA970u);
        ctx->pc = 0x3DA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA968u;
        // 0x3da96c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA968u, 0x3DA970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DA970u;
label_3da970:
    // 0x3da970: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3da970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3da974:
    // 0x3da974: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3da974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3da978:
    // 0x3da978: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3da978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3da97c:
    // 0x3da97c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3da97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3da980:
    // 0x3da980: 0xc0e858c  jal         func_3A1630
label_3da984:
    if (ctx->pc == 0x3DA984u) {
        ctx->pc = 0x3DA984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA980u;
        // 0x3da984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA988u;
        goto label_3da988;
    }
    ctx->pc = 0x3DA980u;
    SET_GPR_U32(ctx, 31, 0x3DA988u);
    ctx->pc = 0x3DA984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA980u;
    // 0x3da984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DA980u, 0x3DA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA988u;
label_3da988:
    // 0x3da988: 0xc0ea14c  jal         func_3A8530
label_3da98c:
    if (ctx->pc == 0x3DA98Cu) {
        ctx->pc = 0x3DA98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA988u;
        // 0x3da98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA990u;
        goto label_3da990;
    }
    ctx->pc = 0x3DA988u;
    SET_GPR_U32(ctx, 31, 0x3DA990u);
    ctx->pc = 0x3DA98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA988u;
    // 0x3da98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DA988u, 0x3DA990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA990u;
label_3da990:
    // 0x3da990: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3da990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3da994:
    // 0x3da994: 0xc0ea12a  jal         func_3A84A8
label_3da998:
    if (ctx->pc == 0x3DA998u) {
        ctx->pc = 0x3DA998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA994u;
        // 0x3da998: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA99Cu;
        goto label_3da99c;
    }
    ctx->pc = 0x3DA994u;
    SET_GPR_U32(ctx, 31, 0x3DA99Cu);
    ctx->pc = 0x3DA998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA994u;
    // 0x3da998: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DA994u, 0x3DA99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA99Cu;
label_3da99c:
    // 0x3da99c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3da99cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da9a0:
    // 0x3da9a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3da9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3da9a4:
    // 0x3da9a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3da9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3da9a8:
    // 0x3da9a8: 0xc0ea12a  jal         func_3A84A8
label_3da9ac:
    if (ctx->pc == 0x3DA9ACu) {
        ctx->pc = 0x3DA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA9A8u;
        // 0x3da9ac: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA9B0u;
        goto label_3da9b0;
    }
    ctx->pc = 0x3DA9A8u;
    SET_GPR_U32(ctx, 31, 0x3DA9B0u);
    ctx->pc = 0x3DA9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA9A8u;
    // 0x3da9ac: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DA9A8u, 0x3DA9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA9B0u;
label_3da9b0:
    // 0x3da9b0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3da9b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da9b4:
    // 0x3da9b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3da9b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3da9b8:
    // 0x3da9b8: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3da9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3da9bc:
    // 0x3da9bc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3da9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3da9c0:
    // 0x3da9c0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3da9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_3da9c4:
    // 0x3da9c4: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x3da9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_3da9c8:
    // 0x3da9c8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3da9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3da9cc:
    // 0x3da9cc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3da9ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3da9d0:
    // 0x3da9d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3da9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3da9d4:
    // 0x3da9d4: 0x3e00008  jr          $ra
label_3da9d8:
    if (ctx->pc == 0x3DA9D8u) {
        ctx->pc = 0x3DA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA9D4u;
        // 0x3da9d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA9DCu;
        goto label_3da9dc;
    }
    ctx->pc = 0x3DA9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA9D4u;
        // 0x3da9d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA9DCu;
label_3da9dc:
    // 0x3da9dc: 0x0  nop
    ctx->pc = 0x3da9dcu;
    // NOP
    ctx->pc = 0x3da9e0u;
}
