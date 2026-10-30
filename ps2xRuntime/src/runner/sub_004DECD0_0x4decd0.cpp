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

// Function: sub_004DECD0
// Address: 0x4decd0 - 0x4ded78
void sub_004DECD0_0x4decd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DECD0_0x4decd0");
#endif

    switch (ctx->pc) {
        case 0x4decf4u: goto label_4decf4;
        default: break;
    }

    ctx->pc = 0x4decd0u;

    // 0x4decd0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4decd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4decd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4decd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4decd8: 0x24424298  addiu       $v0, $v0, 0x4298
    ctx->pc = 0x4decd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17048));
    // 0x4decdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4decdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dece0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4dece0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4dece4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DECE4u;
    {
        const bool branch_taken_0x4dece4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DECE4u;
        // 0x4dece8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dece4) {
            ctx->pc = 0x4DECF4u;
            goto label_4decf4;
        }
    }
    ctx->pc = 0x4DECECu;
    // 0x4decec: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4DECECu;
    SET_GPR_U32(ctx, 31, 0x4DECF4u);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4DECECu, 0x4DECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DECF4u;
label_4decf4:
    // 0x4decf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4decf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4decf8: 0x3e00008  jr          $ra
    ctx->pc = 0x4DECF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DECF8u;
        // 0x4decfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DECF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DED00u;
    // 0x4ded00: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4ded00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ded04: 0x0  nop
    ctx->pc = 0x4ded04u;
    // NOP
    // 0x4ded08: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4ded08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ded0c: 0x0  nop
    ctx->pc = 0x4ded0cu;
    // NOP
    // 0x4ded10: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4ded10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ded14: 0x0  nop
    ctx->pc = 0x4ded14u;
    // NOP
    // 0x4ded18: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4ded18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ded1c: 0x0  nop
    ctx->pc = 0x4ded1cu;
    // NOP
    // 0x4ded20: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4ded20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ded24: 0x0  nop
    ctx->pc = 0x4ded24u;
    // NOP
    // 0x4ded28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4ded28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ded2c: 0x0  nop
    ctx->pc = 0x4ded2cu;
    // NOP
    // 0x4ded30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4ded30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4ded34: 0x0  nop
    ctx->pc = 0x4ded34u;
    // NOP
    // 0x4ded38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4ded38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4ded3c: 0x0  nop
    ctx->pc = 0x4ded3cu;
    // NOP
    // 0x4ded40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4ded40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4ded44: 0x0  nop
    ctx->pc = 0x4ded44u;
    // NOP
    // 0x4ded48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4ded48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4ded4c: 0x0  nop
    ctx->pc = 0x4ded4cu;
    // NOP
    // 0x4ded50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4ded50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4ded54: 0x0  nop
    ctx->pc = 0x4ded54u;
    // NOP
    // 0x4ded58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4ded58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4ded5c: 0x0  nop
    ctx->pc = 0x4ded5cu;
    // NOP
    // 0x4ded60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4ded60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4ded64: 0x0  nop
    ctx->pc = 0x4ded64u;
    // NOP
    // 0x4ded68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4ded68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4ded6c: 0x0  nop
    ctx->pc = 0x4ded6cu;
    // NOP
    // 0x4ded70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4ded70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4ded74: 0x0  nop
    ctx->pc = 0x4ded74u;
    // NOP
    ctx->pc = 0x4ded78u;
}
