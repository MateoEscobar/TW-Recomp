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

// Function: sub_0030AF30
// Address: 0x30af30 - 0x30afa8
void sub_0030AF30_0x30af30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AF30_0x30af30");
#endif

    switch (ctx->pc) {
        case 0x30af78u: goto label_30af78;
        default: break;
    }

    ctx->pc = 0x30af30u;

    // 0x30af30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30af30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30af34: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x30af34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x30af38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30af38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30af3c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x30af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x30af40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30af40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30af44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30af44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30af48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30af48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30af4c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x30af4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30af50: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x30af50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x30af54: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x30af54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x30af58: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x30af58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30af5c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x30af5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x30af60: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x30af60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x30af64: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x30af64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x30af68: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x30af68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x30af6c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x30af6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x30af70: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x30AF70u;
    SET_GPR_U32(ctx, 31, 0x30AF78u);
    ctx->pc = 0x30AF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AF70u;
    // 0x30af74: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x30AF70u, 0x30AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF78u;
label_30af78:
    // 0x30af78: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x30af78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x30af7c: 0xa2110020  sb          $s1, 0x20($s0)
    ctx->pc = 0x30af7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 17));
    // 0x30af80: 0x24633500  addiu       $v1, $v1, 0x3500
    ctx->pc = 0x30af80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13568));
    // 0x30af84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30af84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30af88: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x30af88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x30af8c: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x30af8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x30af90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30af90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30af94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30af94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30af98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30af98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30af9c: 0x3e00008  jr          $ra
    ctx->pc = 0x30AF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AF9Cu;
        // 0x30afa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AFA4u;
    // 0x30afa4: 0x0  nop
    ctx->pc = 0x30afa4u;
    // NOP
    ctx->pc = 0x30afa8u;
}
