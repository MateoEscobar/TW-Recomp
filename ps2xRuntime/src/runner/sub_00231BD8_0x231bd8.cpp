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

// Function: sub_00231BD8
// Address: 0x231bd8 - 0x231c20
void sub_00231BD8_0x231bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231BD8_0x231bd8");
#endif

    switch (ctx->pc) {
        case 0x231bf4u: goto label_231bf4;
        case 0x231c10u: goto label_231c10;
        default: break;
    }

    ctx->pc = 0x231bd8u;

    // 0x231bd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x231bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x231bdc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x231bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x231be0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x231be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x231be4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x231be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x231be8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231bec: 0xc089998  jal         func_226660
    ctx->pc = 0x231BECu;
    SET_GPR_U32(ctx, 31, 0x231BF4u);
    ctx->pc = 0x231BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231BECu;
    // 0x231bf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x231BECu, 0x231BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BF4u;
label_231bf4:
    // 0x231bf4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x231BF4u;
    {
        const bool branch_taken_0x231bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231bf4) {
            ctx->pc = 0x231BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231BF4u;
            // 0x231bf8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231C14u;
            goto label_231c14;
        }
    }
    ctx->pc = 0x231BFCu;
    // 0x231bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c00: 0x2405029e  addiu       $a1, $zero, 0x29E
    ctx->pc = 0x231c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
    // 0x231c04: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x231c04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x231c08: 0xc096b7a  jal         func_25ADE8
    ctx->pc = 0x231C08u;
    SET_GPR_U32(ctx, 31, 0x231C10u);
    ctx->pc = 0x231C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C08u;
    // 0x231c0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ADE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ADE8u, 0x231C08u, 0x231C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C10u;
label_231c10:
    // 0x231c10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x231c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_231c14:
    // 0x231c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231c18: 0x3e00008  jr          $ra
    ctx->pc = 0x231C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C18u;
        // 0x231c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231C20u;
}
