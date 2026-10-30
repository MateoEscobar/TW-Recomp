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

// Function: sub_00149720
// Address: 0x149720 - 0x149770
void sub_00149720_0x149720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149720_0x149720");
#endif

    switch (ctx->pc) {
        case 0x14973cu: goto label_14973c;
        case 0x149748u: goto label_149748;
        default: break;
    }

    ctx->pc = 0x149720u;

    // 0x149720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149724: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x149724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x149728: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14972c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14972cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149734: 0xc10d6dc  jal         func_435B70
    ctx->pc = 0x149734u;
    SET_GPR_U32(ctx, 31, 0x14973Cu);
    ctx->pc = 0x149738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149734u;
    // 0x149738: 0x26040122  addiu       $a0, $s0, 0x122 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 290));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435B70u, 0x149734u, 0x14973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14973Cu;
label_14973c:
    // 0x14973c: 0x26040116  addiu       $a0, $s0, 0x116
    ctx->pc = 0x14973cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 278));
    // 0x149740: 0xc10d6dc  jal         func_435B70
    ctx->pc = 0x149740u;
    SET_GPR_U32(ctx, 31, 0x149748u);
    ctx->pc = 0x149744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149740u;
    // 0x149744: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435B70u, 0x149740u, 0x149748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149748u;
label_149748:
    // 0x149748: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x149748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14974c: 0xa6000114  sh          $zero, 0x114($s0)
    ctx->pc = 0x14974cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 276), (uint16_t)GPR_U32(ctx, 0));
    // 0x149750: 0xa2020113  sb          $v0, 0x113($s0)
    ctx->pc = 0x149750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 275), (uint8_t)GPR_U32(ctx, 2));
    // 0x149754: 0xa2020110  sb          $v0, 0x110($s0)
    ctx->pc = 0x149754u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 272), (uint8_t)GPR_U32(ctx, 2));
    // 0x149758: 0xa2020111  sb          $v0, 0x111($s0)
    ctx->pc = 0x149758u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 273), (uint8_t)GPR_U32(ctx, 2));
    // 0x14975c: 0xa2020112  sb          $v0, 0x112($s0)
    ctx->pc = 0x14975cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 274), (uint8_t)GPR_U32(ctx, 2));
    // 0x149760: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x149760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149768: 0x3e00008  jr          $ra
    ctx->pc = 0x149768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149768u;
        // 0x14976c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149770u;
}
