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

// Function: sub_001AA950
// Address: 0x1aa950 - 0x1aa9b0
void sub_001AA950_0x1aa950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA950_0x1aa950");
#endif

    switch (ctx->pc) {
        case 0x1aa980u: goto label_1aa980;
        case 0x1aa998u: goto label_1aa998;
        default: break;
    }

    ctx->pc = 0x1aa950u;

    // 0x1aa950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aa954: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aa954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1aa958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa95c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa960: 0x8e020a98  lw          $v0, 0xA98($s0)
    ctx->pc = 0x1aa960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2712)));
    // 0x1aa964: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AA964u;
    {
        const bool branch_taken_0x1aa964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA964u;
        // 0x1aa968: 0x26040450  addiu       $a0, $s0, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa964) {
            ctx->pc = 0x1AA99Cu;
            goto label_1aa99c;
        }
    }
    ctx->pc = 0x1AA96Cu;
    // 0x1aa96c: 0x8c820434  lw          $v0, 0x434($a0)
    ctx->pc = 0x1aa96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1076)));
    // 0x1aa970: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA970u;
    {
        const bool branch_taken_0x1aa970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa970) {
            ctx->pc = 0x1AA974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA970u;
            // 0x1aa974: 0x26040890  addiu       $a0, $s0, 0x890 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA984u;
            goto label_1aa984;
        }
    }
    ctx->pc = 0x1AA978u;
    // 0x1aa978: 0xc079cb0  jal         func_1E72C0
    ctx->pc = 0x1AA978u;
    SET_GPR_U32(ctx, 31, 0x1AA980u);
    ctx->pc = 0x1E72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E72C0u, 0x1AA978u, 0x1AA980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA980u;
label_1aa980:
    // 0x1aa980: 0x26040890  addiu       $a0, $s0, 0x890
    ctx->pc = 0x1aa980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_1aa984:
    // 0x1aa984: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1aa984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1aa988: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA988u;
    {
        const bool branch_taken_0x1aa988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa988) {
            ctx->pc = 0x1AA98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA988u;
            // 0x1aa98c: 0xae000a9c  sw          $zero, 0xA9C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA99Cu;
            goto label_1aa99c;
        }
    }
    ctx->pc = 0x1AA990u;
    // 0x1aa990: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x1AA990u;
    SET_GPR_U32(ctx, 31, 0x1AA998u);
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1AA990u, 0x1AA998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA998u;
label_1aa998:
    // 0x1aa998: 0xae000a9c  sw          $zero, 0xA9C($s0)
    ctx->pc = 0x1aa998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2716), GPR_U32(ctx, 0));
label_1aa99c:
    // 0x1aa99c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1aa99cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa9a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9A4u;
        // 0x1aa9a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA9ACu;
    // 0x1aa9ac: 0x0  nop
    ctx->pc = 0x1aa9acu;
    // NOP
    ctx->pc = 0x1aa9b0u;
}
