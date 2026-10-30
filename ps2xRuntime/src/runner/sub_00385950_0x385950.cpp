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

// Function: sub_00385950
// Address: 0x385950 - 0x3859a0
void sub_00385950_0x385950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385950_0x385950");
#endif

    switch (ctx->pc) {
        case 0x385950u: goto label_385950;
        case 0x385954u: goto label_385954;
        case 0x385958u: goto label_385958;
        case 0x38595cu: goto label_38595c;
        case 0x385960u: goto label_385960;
        case 0x385964u: goto label_385964;
        case 0x385968u: goto label_385968;
        case 0x38596cu: goto label_38596c;
        case 0x385970u: goto label_385970;
        case 0x385974u: goto label_385974;
        case 0x385978u: goto label_385978;
        case 0x38597cu: goto label_38597c;
        case 0x385980u: goto label_385980;
        case 0x385984u: goto label_385984;
        case 0x385988u: goto label_385988;
        case 0x38598cu: goto label_38598c;
        case 0x385990u: goto label_385990;
        case 0x385994u: goto label_385994;
        case 0x385998u: goto label_385998;
        case 0x38599cu: goto label_38599c;
        default: break;
    }

    ctx->pc = 0x385950u;

label_385950:
    // 0x385950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x385950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_385954:
    // 0x385954: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x385954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_385958:
    // 0x385958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x385958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38595c:
    // 0x38595c: 0xc0e4060  jal         func_390180
label_385960:
    if (ctx->pc == 0x385960u) {
        ctx->pc = 0x385960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38595Cu;
        // 0x385960: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385964u;
        goto label_385964;
    }
    ctx->pc = 0x38595Cu;
    SET_GPR_U32(ctx, 31, 0x385964u);
    ctx->pc = 0x385960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38595Cu;
    // 0x385960: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38595Cu, 0x385964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385964u;
label_385964:
    // 0x385964: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x385964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385968:
    // 0x385968: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_38596c:
    if (ctx->pc == 0x38596Cu) {
        ctx->pc = 0x38596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385968u;
        // 0x38596c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385970u;
        goto label_385970;
    }
    ctx->pc = 0x385968u;
    {
        const bool branch_taken_0x385968 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x385968) {
            ctx->pc = 0x38596Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385968u;
            // 0x38596c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385978u;
            goto label_385978;
        }
    }
    ctx->pc = 0x385970u;
label_385970:
    // 0x385970: 0x10000008  b           . + 4 + (0x8 << 2)
label_385974:
    if (ctx->pc == 0x385974u) {
        ctx->pc = 0x385974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385970u;
        // 0x385974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385978u;
        goto label_385978;
    }
    ctx->pc = 0x385970u;
    {
        const bool branch_taken_0x385970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385970u;
        // 0x385974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385970) {
            ctx->pc = 0x385994u;
            goto label_385994;
        }
    }
    ctx->pc = 0x385978u;
label_385978:
    // 0x385978: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x385978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_38597c:
    // 0x38597c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x38597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_385980:
    // 0x385980: 0x40f809  jalr        $v0
label_385984:
    if (ctx->pc == 0x385984u) {
        ctx->pc = 0x385984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385980u;
        // 0x385984: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385988u;
        goto label_385988;
    }
    ctx->pc = 0x385980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385988u);
        ctx->pc = 0x385984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385980u;
        // 0x385984: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385980u, 0x385988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385988u;
label_385988:
    // 0x385988: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x385988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_38598c:
    // 0x38598c: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x38598cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
label_385990:
    // 0x385990: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x385990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_385994:
    // 0x385994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x385994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_385998:
    // 0x385998: 0x3e00008  jr          $ra
label_38599c:
    if (ctx->pc == 0x38599Cu) {
        ctx->pc = 0x38599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385998u;
        // 0x38599c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3859A0u;
        goto label_fallthrough_0x385998;
    }
    ctx->pc = 0x385998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385998u;
        // 0x38599c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x385998:
    ctx->pc = 0x3859A0u;
}
