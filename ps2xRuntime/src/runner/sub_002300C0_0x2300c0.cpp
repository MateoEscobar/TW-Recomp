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

// Function: sub_002300C0
// Address: 0x2300c0 - 0x230140
void sub_002300C0_0x2300c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002300C0_0x2300c0");
#endif

    switch (ctx->pc) {
        case 0x2300d8u: goto label_2300d8;
        case 0x2300e8u: goto label_2300e8;
        case 0x2300f8u: goto label_2300f8;
        case 0x230108u: goto label_230108;
        default: break;
    }

    ctx->pc = 0x2300c0u;

    // 0x2300c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2300c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2300c4: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x2300c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x2300c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2300c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2300cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2300ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2300d0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2300D0u;
    SET_GPR_U32(ctx, 31, 0x2300D8u);
    ctx->pc = 0x2300D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2300D0u;
    // 0x2300d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2300D0u, 0x2300D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2300D8u;
label_2300d8:
    // 0x2300d8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2300D8u;
    {
        const bool branch_taken_0x2300d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2300d8) {
            ctx->pc = 0x2300DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2300D8u;
            // 0x2300dc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230130u;
            goto label_230130;
        }
    }
    ctx->pc = 0x2300E0u;
    // 0x2300e0: 0xc088e98  jal         func_223A60
    ctx->pc = 0x2300E0u;
    SET_GPR_U32(ctx, 31, 0x2300E8u);
    ctx->pc = 0x2300E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2300E0u;
    // 0x2300e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x2300E0u, 0x2300E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2300E8u;
label_2300e8:
    // 0x2300e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2300E8u;
    {
        const bool branch_taken_0x2300e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2300e8) {
            ctx->pc = 0x230100u;
            goto label_230100;
        }
    }
    ctx->pc = 0x2300F0u;
    // 0x2300f0: 0xc089b98  jal         func_226E60
    ctx->pc = 0x2300F0u;
    SET_GPR_U32(ctx, 31, 0x2300F8u);
    ctx->pc = 0x2300F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2300F0u;
    // 0x2300f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x2300F0u, 0x2300F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2300F8u;
label_2300f8:
    // 0x2300f8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2300F8u;
    {
        const bool branch_taken_0x2300f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2300f8) {
            ctx->pc = 0x2300FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2300F8u;
            // 0x2300fc: 0x8e0500d4  lw          $a1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230110u;
            goto label_230110;
        }
    }
    ctx->pc = 0x230100u;
label_230100:
    // 0x230100: 0xc08c050  jal         func_230140
    ctx->pc = 0x230100u;
    SET_GPR_U32(ctx, 31, 0x230108u);
    ctx->pc = 0x230104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230100u;
    // 0x230104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230140u, 0x230100u, 0x230108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230108u;
label_230108:
    // 0x230108: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x230108u;
    {
        const bool branch_taken_0x230108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230108u;
        // 0x23010c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230108) {
            ctx->pc = 0x230130u;
            goto label_230130;
        }
    }
    ctx->pc = 0x230110u;
label_230110:
    // 0x230110: 0x8ca20114  lw          $v0, 0x114($a1)
    ctx->pc = 0x230110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 276)));
    // 0x230114: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x230114u;
    {
        const bool branch_taken_0x230114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230114u;
        // 0x230118: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230114) {
            ctx->pc = 0x230130u;
            goto label_230130;
        }
    }
    ctx->pc = 0x23011Cu;
    // 0x23011c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23011cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x230120: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x230120u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x230124: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x230124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x230128: 0x24630fa0  addiu       $v1, $v1, 0xFA0
    ctx->pc = 0x230128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x23012c: 0xaca30114  sw          $v1, 0x114($a1)
    ctx->pc = 0x23012cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 3));
label_230130:
    // 0x230130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230134: 0x3e00008  jr          $ra
    ctx->pc = 0x230134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230134u;
        // 0x230138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23013Cu;
    // 0x23013c: 0x0  nop
    ctx->pc = 0x23013cu;
    // NOP
    ctx->pc = 0x230140u;
}
