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

// Function: sub_0030C8F8
// Address: 0x30c8f8 - 0x30c970
void sub_0030C8F8_0x30c8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C8F8_0x30c8f8");
#endif

    ctx->pc = 0x30c8f8u;

    // 0x30c8f8: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x30c8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x30c8fc: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x30C8FCu;
    {
        const bool branch_taken_0x30c8fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8FCu;
        // 0x30c900: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8fc) {
            ctx->pc = 0x30C968u;
            goto label_30c968;
        }
    }
    ctx->pc = 0x30C904u;
    // 0x30c904: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x30c904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x30c908: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x30c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x30c90c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x30c90cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30c910: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x30C910u;
    {
        const bool branch_taken_0x30c910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c910) {
            ctx->pc = 0x30C968u;
            goto label_30c968;
        }
    }
    ctx->pc = 0x30C918u;
    // 0x30c918: 0x90820033  lbu         $v0, 0x33($a0)
    ctx->pc = 0x30c918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 51)));
    // 0x30c91c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30C91Cu;
    {
        const bool branch_taken_0x30c91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C91Cu;
        // 0x30c920: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c91c) {
            ctx->pc = 0x30C94Cu;
            goto label_30c94c;
        }
    }
    ctx->pc = 0x30C924u;
    // 0x30c924: 0x3c013c08  lui         $at, 0x3C08
    ctx->pc = 0x30c924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15368 << 16));
    // 0x30c928: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x30c928u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x30c92c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c92cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c930: 0x24630fa0  addiu       $v1, $v1, 0xFA0
    ctx->pc = 0x30c930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x30c934: 0xe44002cc  swc1        $f0, 0x2CC($v0)
    ctx->pc = 0x30c934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 716), bits); }
    // 0x30c938: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x30c938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x30c93c: 0x90820033  lbu         $v0, 0x33($a0)
    ctx->pc = 0x30c93cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 51)));
    // 0x30c940: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30c940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30c944: 0x3e00008  jr          $ra
    ctx->pc = 0x30C944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C944u;
        // 0x30c948: 0xa0820033  sb          $v0, 0x33($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 51), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C94Cu;
label_30c94c:
    // 0x30c94c: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x30c94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x30c950: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x30c950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x30c954: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c958: 0x0  nop
    ctx->pc = 0x30c958u;
    // NOP
    // 0x30c95c: 0xe44002cc  swc1        $f0, 0x2CC($v0)
    ctx->pc = 0x30c95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 716), bits); }
    // 0x30c960: 0xa0800033  sb          $zero, 0x33($a0)
    ctx->pc = 0x30c960u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 51), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c964: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x30c964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_30c968:
    // 0x30c968: 0x3e00008  jr          $ra
    ctx->pc = 0x30C968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C970u;
}
