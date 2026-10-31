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

// Function: sub_0019F4C8
// Address: 0x19f4c8 - 0x19f528
void sub_0019F4C8_0x19f4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F4C8_0x19f4c8");
#endif

    ctx->pc = 0x19f4c8u;

    // 0x19f4c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x19f4cc: 0x8c44cdb4  lw          $a0, -0x324C($v0)
    ctx->pc = 0x19f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x19f4d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19f4d4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x19f4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x19f4d8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19F4D8u;
    {
        const bool branch_taken_0x19f4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4D8u;
        // 0x19f4dc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4d8) {
            ctx->pc = 0x19F4FCu;
            goto label_19f4fc;
        }
    }
    ctx->pc = 0x19F4E0u;
    // 0x19f4e0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x19f4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x19f4e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19f4e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19f4e8: 0x3c013f3d  lui         $at, 0x3F3D
    ctx->pc = 0x19f4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16189 << 16));
    // 0x19f4ec: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x19f4ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x19f4f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f4f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19F4F4u;
    {
        const bool branch_taken_0x19f4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4F4u;
        // 0x19f4f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4f4) {
            ctx->pc = 0x19F518u;
            goto label_19f518;
        }
    }
    ctx->pc = 0x19F4FCu;
label_19f4fc:
    // 0x19f4fc: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x19f4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x19f500: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x19f500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x19f504: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19f504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19f508: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x19f508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
    // 0x19f50c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x19f50cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x19f510: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f514: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19f514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19f518:
    // 0x19f518: 0xe461cfcc  swc1        $f1, -0x3034($v1)
    ctx->pc = 0x19f518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954956), bits); }
    // 0x19f51c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F51Cu;
        // 0x19f520: 0xe440cfd0  swc1        $f0, -0x3030($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954960), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F524u;
    // 0x19f524: 0x0  nop
    ctx->pc = 0x19f524u;
    // NOP
    ctx->pc = 0x19f528u;
}
