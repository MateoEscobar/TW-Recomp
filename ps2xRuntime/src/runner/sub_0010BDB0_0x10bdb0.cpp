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

// Function: sub_0010BDB0
// Address: 0x10bdb0 - 0x10be40
void sub_0010BDB0_0x10bdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BDB0_0x10bdb0");
#endif

    switch (ctx->pc) {
        case 0x10bdd8u: goto label_10bdd8;
        case 0x10bdf8u: goto label_10bdf8;
        default: break;
    }

    ctx->pc = 0x10bdb0u;

    // 0x10bdb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10bdb4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x10bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x10bdb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10bdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10bdbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10bdbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10bdc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10bdc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bdc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10bdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10bdc8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x10bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x10bdcc: 0x240401ff  addiu       $a0, $zero, 0x1FF
    ctx->pc = 0x10bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x10bdd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10bdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10bdd4: 0x0  nop
    ctx->pc = 0x10bdd4u;
    // NOP
label_10bdd8:
    // 0x10bdd8: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x10bdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x10bddc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x10bddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x10bde0: 0x0  nop
    ctx->pc = 0x10bde0u;
    // NOP
    // 0x10bde4: 0x0  nop
    ctx->pc = 0x10bde4u;
    // NOP
    // 0x10bde8: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10BDE8u;
    {
        const bool branch_taken_0x10bde8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x10BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BDE8u;
        // 0x10bdec: 0x244200d0  addiu       $v0, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bde8) {
            ctx->pc = 0x10BDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bdd8;
        }
    }
    ctx->pc = 0x10BDF0u;
    // 0x10bdf0: 0xc0434be  jal         func_10D2F8
    ctx->pc = 0x10BDF0u;
    SET_GPR_U32(ctx, 31, 0x10BDF8u);
    ctx->pc = 0x10BDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BDF0u;
    // 0x10bdf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D2F8u, 0x10BDF0u, 0x10BDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BDF8u;
label_10bdf8:
    // 0x10bdf8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x10bdfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10bdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10be00: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x10be00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x10be04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10be04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be08: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x10be08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x10be0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10be0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10be10: 0xac602010  sw          $zero, 0x2010($v1)
    ctx->pc = 0x10be10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8208), GPR_U32(ctx, 0));
    // 0x10be14: 0xac603784  sw          $zero, 0x3784($v1)
    ctx->pc = 0x10be14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14212), GPR_U32(ctx, 0));
    // 0x10be18: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10be18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10be1c: 0xac603794  sw          $zero, 0x3794($v1)
    ctx->pc = 0x10be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14228), GPR_U32(ctx, 0));
    // 0x10be20: 0xac603788  sw          $zero, 0x3788($v1)
    ctx->pc = 0x10be20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14216), GPR_U32(ctx, 0));
    // 0x10be24: 0xac60378c  sw          $zero, 0x378C($v1)
    ctx->pc = 0x10be24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14220), GPR_U32(ctx, 0));
    // 0x10be28: 0xac603790  sw          $zero, 0x3790($v1)
    ctx->pc = 0x10be28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14224), GPR_U32(ctx, 0));
    // 0x10be2c: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x10be2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x10be30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10be30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10be34: 0x3e00008  jr          $ra
    ctx->pc = 0x10BE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE34u;
        // 0x10be38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BE3Cu;
    // 0x10be3c: 0x0  nop
    ctx->pc = 0x10be3cu;
    // NOP
    ctx->pc = 0x10be40u;
}
