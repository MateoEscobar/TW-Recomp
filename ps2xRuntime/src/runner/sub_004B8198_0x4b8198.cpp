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

// Function: sub_004B8198
// Address: 0x4b8198 - 0x4b81f0
void sub_004B8198_0x4b8198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8198_0x4b8198");
#endif

    switch (ctx->pc) {
        case 0x4b81bcu: goto label_4b81bc;
        case 0x4b81d8u: goto label_4b81d8;
        default: break;
    }

    ctx->pc = 0x4b8198u;

    // 0x4b8198: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b8198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b819c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4b819cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4b81a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b81a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b81a4: 0x8c625b20  lw          $v0, 0x5B20($v1)
    ctx->pc = 0x4b81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715B20u));
    // 0x4b81a8: 0x24705b20  addiu       $s0, $v1, 0x5B20
    ctx->pc = 0x4b81a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23328));
    // 0x4b81ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B81ACu;
    {
        const bool branch_taken_0x4b81ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B81ACu;
        // 0x4b81b0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b81ac) {
            ctx->pc = 0x4B81D8u;
            goto label_4b81d8;
        }
    }
    ctx->pc = 0x4B81B4u;
    // 0x4b81b4: 0xc12bbb0  jal         func_4AEEC0
    ctx->pc = 0x4B81B4u;
    SET_GPR_U32(ctx, 31, 0x4B81BCu);
    ctx->pc = 0x4AEEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEEC0u, 0x4B81B4u, 0x4B81BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B81BCu;
label_4b81bc:
    // 0x4b81bc: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4b81bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4b81c0: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4b81c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x4b81c4: 0x24a50e98  addiu       $a1, $a1, 0xE98
    ctx->pc = 0x4b81c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3736));
    // 0x4b81c8: 0x24c60ea8  addiu       $a2, $a2, 0xEA8
    ctx->pc = 0x4b81c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3752));
    // 0x4b81cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b81ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b81d0: 0xc10bbee  jal         func_42EFB8
    ctx->pc = 0x4B81D0u;
    SET_GPR_U32(ctx, 31, 0x4B81D8u);
    ctx->pc = 0x4B81D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B81D0u;
    // 0x4b81d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFB8u, 0x4B81D0u, 0x4B81D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B81D8u;
label_4b81d8:
    // 0x4b81d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b81d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b81dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b81dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b81e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b81e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b81e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B81E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B81E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B81E4u;
        // 0x4b81e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B81E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B81ECu;
    // 0x4b81ec: 0x0  nop
    ctx->pc = 0x4b81ecu;
    // NOP
    ctx->pc = 0x4b81f0u;
}
