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

// Function: sub_002544B8
// Address: 0x2544b8 - 0x254508
void sub_002544B8_0x2544b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002544B8_0x2544b8");
#endif

    switch (ctx->pc) {
        case 0x2544d8u: goto label_2544d8;
        case 0x2544e0u: goto label_2544e0;
        default: break;
    }

    ctx->pc = 0x2544b8u;

    // 0x2544b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2544b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2544bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2544bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2544c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2544c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2544c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2544c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2544c8: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x2544c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2544cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2544ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2544d0: 0xc0899b6  jal         func_2266D8
    ctx->pc = 0x2544D0u;
    SET_GPR_U32(ctx, 31, 0x2544D8u);
    ctx->pc = 0x2544D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2544D0u;
    // 0x2544d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266D8u, 0x2544D0u, 0x2544D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2544D8u;
label_2544d8:
    // 0x2544d8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2544D8u;
    SET_GPR_U32(ctx, 31, 0x2544E0u);
    ctx->pc = 0x2544DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2544D8u;
    // 0x2544dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2544D8u, 0x2544E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2544E0u;
label_2544e0:
    // 0x2544e0: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x2544e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x2544e4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2544e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2544e8: 0x8c640160  lw          $a0, 0x160($v1)
    ctx->pc = 0x2544e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x2544ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2544ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2544f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2544f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2544f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2544f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2544f8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2544f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2544fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2544FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544FCu;
        // 0x254500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2544FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254504u;
    // 0x254504: 0x0  nop
    ctx->pc = 0x254504u;
    // NOP
    ctx->pc = 0x254508u;
}
