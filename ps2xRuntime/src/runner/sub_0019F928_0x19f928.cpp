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

// Function: sub_0019F928
// Address: 0x19f928 - 0x19f988
void sub_0019F928_0x19f928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F928_0x19f928");
#endif

    switch (ctx->pc) {
        case 0x19f970u: goto label_19f970;
        default: break;
    }

    ctx->pc = 0x19f928u;

    // 0x19f928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f92c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19f92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19f930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f938: 0x8e020580  lw          $v0, 0x580($s0)
    ctx->pc = 0x19f938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1408)));
    // 0x19f93c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19F93Cu;
    {
        const bool branch_taken_0x19f93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F93Cu;
        // 0x19f940: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f93c) {
            ctx->pc = 0x19F974u;
            goto label_19f974;
        }
    }
    ctx->pc = 0x19F944u;
    // 0x19f944: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x19f944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x19f948: 0x84830224  lh          $v1, 0x224($a0)
    ctx->pc = 0x19f948u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x19f94c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x19f94cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19f950: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x19f950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x19f954: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F954u;
    {
        const bool branch_taken_0x19f954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F954u;
        // 0x19f958: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f954) {
            ctx->pc = 0x19F968u;
            goto label_19f968;
        }
    }
    ctx->pc = 0x19F95Cu;
    // 0x19f95c: 0x8e030468  lw          $v1, 0x468($s0)
    ctx->pc = 0x19f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x19f960: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F960u;
    {
        const bool branch_taken_0x19f960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f960) {
            ctx->pc = 0x19F964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F960u;
            // 0x19f964: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F978u;
            goto label_19f978;
        }
    }
    ctx->pc = 0x19F968u;
label_19f968:
    // 0x19f968: 0xc079dd4  jal         func_1E7750
    ctx->pc = 0x19F968u;
    SET_GPR_U32(ctx, 31, 0x19F970u);
    ctx->pc = 0x19F96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F968u;
    // 0x19f96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7750u, 0x19F968u, 0x19F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F970u;
label_19f970:
    // 0x19f970: 0xae000580  sw          $zero, 0x580($s0)
    ctx->pc = 0x19f970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 0));
label_19f974:
    // 0x19f974: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19f974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19f978:
    // 0x19f978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f97c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F97Cu;
        // 0x19f980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F984u;
    // 0x19f984: 0x0  nop
    ctx->pc = 0x19f984u;
    // NOP
    ctx->pc = 0x19f988u;
}
