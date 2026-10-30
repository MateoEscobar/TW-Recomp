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

// Function: sub_00154950
// Address: 0x154950 - 0x1549a8
void sub_00154950_0x154950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154950_0x154950");
#endif

    switch (ctx->pc) {
        case 0x154950u: goto label_154950;
        case 0x154954u: goto label_154954;
        case 0x154958u: goto label_154958;
        case 0x15495cu: goto label_15495c;
        case 0x154960u: goto label_154960;
        case 0x154964u: goto label_154964;
        case 0x154968u: goto label_154968;
        case 0x15496cu: goto label_15496c;
        case 0x154970u: goto label_154970;
        case 0x154974u: goto label_154974;
        case 0x154978u: goto label_154978;
        case 0x15497cu: goto label_15497c;
        case 0x154980u: goto label_154980;
        case 0x154984u: goto label_154984;
        case 0x154988u: goto label_154988;
        case 0x15498cu: goto label_15498c;
        case 0x154990u: goto label_154990;
        case 0x154994u: goto label_154994;
        case 0x154998u: goto label_154998;
        case 0x15499cu: goto label_15499c;
        case 0x1549a0u: goto label_1549a0;
        case 0x1549a4u: goto label_1549a4;
        default: break;
    }

    ctx->pc = 0x154950u;

label_154950:
    // 0x154950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x154950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_154954:
    // 0x154954: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x154954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_154958:
    // 0x154958: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x154958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_15495c:
    // 0x15495c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x15495cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_154960:
    // 0x154960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_154964:
    // 0x154964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x154964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_154968:
    // 0x154968: 0x8c4327e4  lw          $v1, 0x27E4($v0)
    ctx->pc = 0x154968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_15496c:
    // 0x15496c: 0x24c6e5a8  addiu       $a2, $a2, -0x1A58
    ctx->pc = 0x15496cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960552));
label_154970:
    // 0x154970: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x154970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_154974:
    // 0x154974: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x154974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_154978:
    // 0x154978: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x154978u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_15497c:
    // 0x15497c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x15497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_154980:
    // 0x154980: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x154980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_154984:
    // 0x154984: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x154984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_154988:
    // 0x154988: 0x60f809  jalr        $v1
label_15498c:
    if (ctx->pc == 0x15498Cu) {
        ctx->pc = 0x15498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154988u;
        // 0x15498c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154990u;
        goto label_154990;
    }
    ctx->pc = 0x154988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154990u);
        ctx->pc = 0x15498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154988u;
        // 0x15498c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154988u, 0x154990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154990u;
label_154990:
    // 0x154990: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x154990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_154994:
    // 0x154994: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x154994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_154998:
    // 0x154998: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x154998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15499c:
    // 0x15499c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15499cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1549a0:
    // 0x1549a0: 0x3e00008  jr          $ra
label_1549a4:
    if (ctx->pc == 0x1549A4u) {
        ctx->pc = 0x1549A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549A0u;
        // 0x1549a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549A8u;
        goto label_fallthrough_0x1549a0;
    }
    ctx->pc = 0x1549A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1549A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549A0u;
        // 0x1549a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1549A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1549a0:
    ctx->pc = 0x1549A8u;
}
