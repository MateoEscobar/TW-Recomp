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

// Function: sub_00416BE0
// Address: 0x416be0 - 0x416c60
void sub_00416BE0_0x416be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416BE0_0x416be0");
#endif

    switch (ctx->pc) {
        case 0x416c18u: goto label_416c18;
        case 0x416c40u: goto label_416c40;
        case 0x416c4cu: goto label_416c4c;
        default: break;
    }

    ctx->pc = 0x416be0u;

    // 0x416be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x416be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x416be4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x416be4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x416be8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x416be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x416bec: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x416becu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x416bf0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x416bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x416bf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x416bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x416bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x416bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x416bfc: 0x8e06489c  lw          $a2, 0x489C($s0)
    ctx->pc = 0x416bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x51489Cu));
    // 0x416c00: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x416c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x416c04: 0x84c203ec  lh          $v0, 0x3EC($a2)
    ctx->pc = 0x416c04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 1004)));
    // 0x416c08: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x416C08u;
    {
        const bool branch_taken_0x416c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x416C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416C08u;
        // 0x416c0c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416c08) {
            ctx->pc = 0x416C4Cu;
            goto label_416c4c;
        }
    }
    ctx->pc = 0x416C10u;
    // 0x416c10: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x416C10u;
    SET_GPR_U32(ctx, 31, 0x416C18u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x416C10u, 0x416C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416C18u;
label_416c18:
    // 0x416c18: 0x8446002c  lh          $a2, 0x2C($v0)
    ctx->pc = 0x416c18u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x416c1c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x416c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x416c20: 0x8e05489c  lw          $a1, 0x489C($s0)
    ctx->pc = 0x416c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x416c24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x416c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x416c28: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x416c28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x416c2c: 0x24849668  addiu       $a0, $a0, -0x6998
    ctx->pc = 0x416c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940264));
    // 0x416c30: 0xa4a603ec  sh          $a2, 0x3EC($a1)
    ctx->pc = 0x416c30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1004), (uint16_t)GPR_U32(ctx, 6));
    // 0x416c34: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x416c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x416c38: 0xc105712  jal         func_415C48
    ctx->pc = 0x416C38u;
    SET_GPR_U32(ctx, 31, 0x416C40u);
    ctx->pc = 0x416C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416C38u;
    // 0x416c3c: 0xaca203f0  sw          $v0, 0x3F0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x416C38u, 0x416C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416C40u;
label_416c40:
    // 0x416c40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x416c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x416c44: 0xc105ada  jal         func_416B68
    ctx->pc = 0x416C44u;
    SET_GPR_U32(ctx, 31, 0x416C4Cu);
    ctx->pc = 0x416C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416C44u;
    // 0x416c48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416B68u, 0x416C44u, 0x416C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416C4Cu;
label_416c4c:
    // 0x416c4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x416c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x416c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x416c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x416c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x416c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x416c58: 0x3e00008  jr          $ra
    ctx->pc = 0x416C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416C58u;
        // 0x416c5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x416C60u;
}
