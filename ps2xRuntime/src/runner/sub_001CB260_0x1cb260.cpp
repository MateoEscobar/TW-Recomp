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

// Function: sub_001CB260
// Address: 0x1cb260 - 0x1cb2a8
void sub_001CB260_0x1cb260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB260_0x1cb260");
#endif

    switch (ctx->pc) {
        case 0x1cb28cu: goto label_1cb28c;
        default: break;
    }

    ctx->pc = 0x1cb260u;

    // 0x1cb260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb264: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cb264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cb268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb26c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb270: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1cb270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb274: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB274u;
    {
        const bool branch_taken_0x1cb274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb274) {
            ctx->pc = 0x1CB278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB274u;
            // 0x1cb278: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB298u;
            goto label_1cb298;
        }
    }
    ctx->pc = 0x1CB27Cu;
    // 0x1cb27c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cb27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb280: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cb280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb284: 0xc062c5a  jal         func_18B168
    ctx->pc = 0x1CB284u;
    SET_GPR_U32(ctx, 31, 0x1CB28Cu);
    ctx->pc = 0x1CB288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB284u;
    // 0x1cb288: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B168u, 0x1CB284u, 0x1CB28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB28Cu;
label_1cb28c:
    // 0x1cb28c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1cb28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1cb290: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1cb290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1cb294: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cb294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb298:
    // 0x1cb298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb29c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB29Cu;
        // 0x1cb2a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB2A4u;
    // 0x1cb2a4: 0x0  nop
    ctx->pc = 0x1cb2a4u;
    // NOP
    ctx->pc = 0x1cb2a8u;
}
