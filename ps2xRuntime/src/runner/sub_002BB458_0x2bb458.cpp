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

// Function: sub_002BB458
// Address: 0x2bb458 - 0x2bb4c0
void sub_002BB458_0x2bb458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB458_0x2bb458");
#endif

    ctx->pc = 0x2bb458u;

    // 0x2bb458: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2bb458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2bb45c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bb45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bb460: 0x24630390  addiu       $v1, $v1, 0x390
    ctx->pc = 0x2bb460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 912));
    // 0x2bb464: 0xa0820014  sb          $v0, 0x14($a0)
    ctx->pc = 0x2bb464u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bb468: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2bb468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2bb46c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bb46cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb470: 0xa0800015  sb          $zero, 0x15($a0)
    ctx->pc = 0x2bb470u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb474: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x2bb474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x2bb478: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2bb478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2bb47c: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2bb47cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2bb480: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2bb480u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb484: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2bb484u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb488: 0xa0800016  sb          $zero, 0x16($a0)
    ctx->pc = 0x2bb488u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb48c: 0xa0800017  sb          $zero, 0x17($a0)
    ctx->pc = 0x2bb48cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb490: 0xa0800018  sb          $zero, 0x18($a0)
    ctx->pc = 0x2bb490u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb494: 0xa0800019  sb          $zero, 0x19($a0)
    ctx->pc = 0x2bb494u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb498: 0xa080001a  sb          $zero, 0x1A($a0)
    ctx->pc = 0x2bb498u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb49c: 0x8ca6021c  lw          $a2, 0x21C($a1)
    ctx->pc = 0x2bb49cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
    // 0x2bb4a0: 0xa0860014  sb          $a2, 0x14($a0)
    ctx->pc = 0x2bb4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 6));
    // 0x2bb4a4: 0x90a30265  lbu         $v1, 0x265($a1)
    ctx->pc = 0x2bb4a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 613)));
    // 0x2bb4a8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2bb4a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2bb4ac: 0xa0830015  sb          $v1, 0x15($a0)
    ctx->pc = 0x2bb4acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb4b0: 0xaca0021c  sw          $zero, 0x21C($a1)
    ctx->pc = 0x2bb4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 540), GPR_U32(ctx, 0));
    // 0x2bb4b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2bb4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB4B8u;
        // 0x2bb4bc: 0xa0600265  sb          $zero, 0x265($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 613), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB4C0u;
}
