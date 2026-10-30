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

// Function: sub_0036ECC8
// Address: 0x36ecc8 - 0x36ed48
void sub_0036ECC8_0x36ecc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036ECC8_0x36ecc8");
#endif

    switch (ctx->pc) {
        case 0x36ececu: goto label_36ecec;
        case 0x36ed00u: goto label_36ed00;
        case 0x36ed14u: goto label_36ed14;
        case 0x36ed1cu: goto label_36ed1c;
        case 0x36ed2cu: goto label_36ed2c;
        default: break;
    }

    ctx->pc = 0x36ecc8u;

    // 0x36ecc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36ecc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36eccc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ecccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ecd0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36ecd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36ecd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ecd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ecd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36ecd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36ecdc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36ecdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36ece0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ece4: 0xc102488  jal         func_409220
    ctx->pc = 0x36ECE4u;
    SET_GPR_U32(ctx, 31, 0x36ECECu);
    ctx->pc = 0x36ECE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ECE4u;
    // 0x36ece8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36ECE4u, 0x36ECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ECECu;
label_36ecec:
    // 0x36ecec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36ececu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ecf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ecf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ecf4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36ecf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ecf8: 0xc102488  jal         func_409220
    ctx->pc = 0x36ECF8u;
    SET_GPR_U32(ctx, 31, 0x36ED00u);
    ctx->pc = 0x36ECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ECF8u;
    // 0x36ecfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36ECF8u, 0x36ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ED00u;
label_36ed00:
    // 0x36ed00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36ed00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ed04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed08: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36ed08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36ed0c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36ED0Cu;
    SET_GPR_U32(ctx, 31, 0x36ED14u);
    ctx->pc = 0x36ED10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ED0Cu;
    // 0x36ed10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36ED0Cu, 0x36ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ED14u;
label_36ed14:
    // 0x36ed14: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36ED14u;
    SET_GPR_U32(ctx, 31, 0x36ED1Cu);
    ctx->pc = 0x36ED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ED14u;
    // 0x36ed18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36ED14u, 0x36ED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ED1Cu;
label_36ed1c:
    // 0x36ed1c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x36ed1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36ed20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36ed20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed24: 0xc05548a  jal         func_155228
    ctx->pc = 0x36ED24u;
    SET_GPR_U32(ctx, 31, 0x36ED2Cu);
    ctx->pc = 0x36ED28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ED24u;
    // 0x36ed28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155228u, 0x36ED24u, 0x36ED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ED2Cu;
label_36ed2c:
    // 0x36ed2c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36ed2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36ed30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36ed30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36ed34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36ed38: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36ed38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ed3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ed3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ed40: 0x3e00008  jr          $ra
    ctx->pc = 0x36ED40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ED40u;
        // 0x36ed44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ED40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ED48u;
}
