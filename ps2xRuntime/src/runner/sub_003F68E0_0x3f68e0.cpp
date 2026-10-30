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

// Function: sub_003F68E0
// Address: 0x3f68e0 - 0x3f6930
void sub_003F68E0_0x3f68e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F68E0_0x3f68e0");
#endif

    switch (ctx->pc) {
        case 0x3f68f8u: goto label_3f68f8;
        default: break;
    }

    ctx->pc = 0x3f68e0u;

    // 0x3f68e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f68e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f68e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f68e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3f68e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f68e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f68ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f68ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f68f0: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3F68F0u;
    SET_GPR_U32(ctx, 31, 0x3F68F8u);
    ctx->pc = 0x3F68F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F68F0u;
    // 0x3f68f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F68F0u, 0x3F68F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F68F8u;
label_3f68f8:
    // 0x3f68f8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F68F8u;
    {
        const bool branch_taken_0x3f68f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f68f8) {
            ctx->pc = 0x3F68FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F68F8u;
            // 0x3f68fc: 0x92020020  lbu         $v0, 0x20($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F6908u;
            goto label_3f6908;
        }
    }
    ctx->pc = 0x3F6900u;
    // 0x3f6900: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F6900u;
    {
        const bool branch_taken_0x3f6900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6900u;
        // 0x3f6904: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6900) {
            ctx->pc = 0x3F6920u;
            goto label_3f6920;
        }
    }
    ctx->pc = 0x3F6908u;
label_3f6908:
    // 0x3f6908: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3f6908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f690c: 0x96030028  lhu         $v1, 0x28($s0)
    ctx->pc = 0x3f690cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3f6910: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3f6910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3f6914: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x3f6914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x3f6918: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f6918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f691c: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x3f691cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_3f6920:
    // 0x3f6920: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f6920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f6924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f6924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f6928: 0x3e00008  jr          $ra
    ctx->pc = 0x3F6928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6928u;
        // 0x3f692c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F6930u;
}
