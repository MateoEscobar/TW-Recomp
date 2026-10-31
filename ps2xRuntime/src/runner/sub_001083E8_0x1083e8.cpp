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

// Function: sub_001083E8
// Address: 0x1083e8 - 0x108450
void sub_001083E8_0x1083e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001083E8_0x1083e8");
#endif

    switch (ctx->pc) {
        case 0x108424u: goto label_108424;
        case 0x108438u: goto label_108438;
        default: break;
    }

    ctx->pc = 0x1083e8u;

    // 0x1083e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1083e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1083ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1083ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1083f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1083f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1083f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1083f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1083f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1083fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1083fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108400: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x108400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x108404: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x108404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x108408: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x108408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x10840c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10840Cu;
    {
        const bool branch_taken_0x10840c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10840Cu;
        // 0x108410: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10840c) {
            ctx->pc = 0x108438u;
            goto label_108438;
        }
    }
    ctx->pc = 0x108414u;
    // 0x108414: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108414u;
    {
        const bool branch_taken_0x108414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108414u;
        // 0x108418: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108414) {
            ctx->pc = 0x108428u;
            goto label_108428;
        }
    }
    ctx->pc = 0x10841Cu;
    // 0x10841c: 0xc041120  jal         func_104480
    ctx->pc = 0x10841Cu;
    SET_GPR_U32(ctx, 31, 0x108424u);
    ctx->pc = 0x108420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10841Cu;
    // 0x108420: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104480u, 0x10841Cu, 0x108424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108424u;
label_108424:
    // 0x108424: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x108424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_108428:
    // 0x108428: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108428u;
    {
        const bool branch_taken_0x108428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108428u;
        // 0x10842c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108428) {
            ctx->pc = 0x10843Cu;
            goto label_10843c;
        }
    }
    ctx->pc = 0x108430u;
    // 0x108430: 0xc041124  jal         func_104490
    ctx->pc = 0x108430u;
    SET_GPR_U32(ctx, 31, 0x108438u);
    ctx->pc = 0x108434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108430u;
    // 0x108434: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104490u, 0x108430u, 0x108438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108438u;
label_108438:
    // 0x108438: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x108438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10843c:
    // 0x10843c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10843cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108444: 0x3e00008  jr          $ra
    ctx->pc = 0x108444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108444u;
        // 0x108448: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10844Cu;
    // 0x10844c: 0x0  nop
    ctx->pc = 0x10844cu;
    // NOP
    ctx->pc = 0x108450u;
}
