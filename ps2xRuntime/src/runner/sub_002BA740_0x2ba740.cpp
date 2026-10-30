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

// Function: sub_002BA740
// Address: 0x2ba740 - 0x2ba790
void sub_002BA740_0x2ba740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA740_0x2ba740");
#endif

    switch (ctx->pc) {
        case 0x2ba784u: goto label_2ba784;
        default: break;
    }

    ctx->pc = 0x2ba740u;

    // 0x2ba740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ba740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ba744: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2ba744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2ba748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ba74c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ba74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba750: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2ba750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
    // 0x2ba754: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2ba754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
    // 0x2ba758: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ba758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba75c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2ba75cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ba760: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x2ba760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x2ba764: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x2ba764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x2ba768: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ba768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ba76c: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x2ba76cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
    // 0x2ba770: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ba770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ba774: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2ba774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    // 0x2ba778: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ba778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ba77c: 0xc087612  jal         func_21D848
    ctx->pc = 0x2BA77Cu;
    SET_GPR_U32(ctx, 31, 0x2BA784u);
    ctx->pc = 0x2BA780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA77Cu;
    // 0x2ba780: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2BA77Cu, 0x2BA784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA784u;
label_2ba784:
    // 0x2ba784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba788: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA788u;
        // 0x2ba78c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA790u;
}
