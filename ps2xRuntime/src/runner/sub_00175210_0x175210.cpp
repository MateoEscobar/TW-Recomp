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

// Function: sub_00175210
// Address: 0x175210 - 0x175258
void sub_00175210_0x175210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175210_0x175210");
#endif

    switch (ctx->pc) {
        case 0x175224u: goto label_175224;
        default: break;
    }

    ctx->pc = 0x175210u;

    // 0x175210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175214: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x175214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x175218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17521c: 0xc05d45e  jal         func_175178
    ctx->pc = 0x17521Cu;
    SET_GPR_U32(ctx, 31, 0x175224u);
    ctx->pc = 0x175220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17521Cu;
    // 0x175220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x17521Cu, 0x175224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175224u;
label_175224:
    // 0x175224: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x175224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x175228: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x175228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17522c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17522cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x175230: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x175230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x175234: 0x8c4402bc  lw          $a0, 0x2BC($v0)
    ctx->pc = 0x175234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 700)));
    // 0x175238: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x175238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17523c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17523Cu;
    {
        const bool branch_taken_0x17523c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x175240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17523Cu;
        // 0x175240: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17523c) {
            ctx->pc = 0x175248u;
            goto label_175248;
        }
    }
    ctx->pc = 0x175244u;
    // 0x175244: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x175244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
label_175248:
    // 0x175248: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x175248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17524c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17524cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175250: 0x3e00008  jr          $ra
    ctx->pc = 0x175250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175250u;
        // 0x175254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175258u;
}
