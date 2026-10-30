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

// Function: sub_00257CE8
// Address: 0x257ce8 - 0x257d70
void sub_00257CE8_0x257ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257CE8_0x257ce8");
#endif

    switch (ctx->pc) {
        case 0x257cfcu: goto label_257cfc;
        case 0x257d04u: goto label_257d04;
        case 0x257d14u: goto label_257d14;
        case 0x257d38u: goto label_257d38;
        case 0x257d4cu: goto label_257d4c;
        case 0x257d60u: goto label_257d60;
        default: break;
    }

    ctx->pc = 0x257ce8u;

    // 0x257ce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x257ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x257cec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x257cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x257cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257cf4: 0xc08cade  jal         func_232B78
    ctx->pc = 0x257CF4u;
    SET_GPR_U32(ctx, 31, 0x257CFCu);
    ctx->pc = 0x257CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257CF4u;
    // 0x257cf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232B78u, 0x257CF4u, 0x257CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257CFCu;
label_257cfc:
    // 0x257cfc: 0xc089000  jal         func_224000
    ctx->pc = 0x257CFCu;
    SET_GPR_U32(ctx, 31, 0x257D04u);
    ctx->pc = 0x257D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257CFCu;
    // 0x257d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x257CFCu, 0x257D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257D04u;
label_257d04:
    // 0x257d04: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x257D04u;
    {
        const bool branch_taken_0x257d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257d04) {
            ctx->pc = 0x257D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257D04u;
            // 0x257d08: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257D18u;
            goto label_257d18;
        }
    }
    ctx->pc = 0x257D0Cu;
    // 0x257d0c: 0xc095fce  jal         func_257F38
    ctx->pc = 0x257D0Cu;
    SET_GPR_U32(ctx, 31, 0x257D14u);
    ctx->pc = 0x257D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D0Cu;
    // 0x257d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x257D0Cu, 0x257D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257D14u;
label_257d14:
    // 0x257d14: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x257d14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_257d18:
    // 0x257d18: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x257d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x257d1c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x257d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x257d20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x257d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x257d24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x257d24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x257d28: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x257D28u;
    {
        const bool branch_taken_0x257d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257d28) {
            ctx->pc = 0x257D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257D28u;
            // 0x257d2c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257D64u;
            goto label_257d64;
        }
    }
    ctx->pc = 0x257D30u;
    // 0x257d30: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x257D30u;
    SET_GPR_U32(ctx, 31, 0x257D38u);
    ctx->pc = 0x257D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D30u;
    // 0x257d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x257D30u, 0x257D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257D38u;
label_257d38:
    // 0x257d38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x257d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257d3c: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x257D3Cu;
    {
        const bool branch_taken_0x257d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x257d3c) {
            ctx->pc = 0x257D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257D3Cu;
            // 0x257d40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257D64u;
            goto label_257d64;
        }
    }
    ctx->pc = 0x257D44u;
    // 0x257d44: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x257D44u;
    SET_GPR_U32(ctx, 31, 0x257D4Cu);
    ctx->pc = 0x257D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D44u;
    // 0x257d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x257D44u, 0x257D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257D4Cu;
label_257d4c:
    // 0x257d4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x257d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257d50: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x257D50u;
    {
        const bool branch_taken_0x257d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x257d50) {
            ctx->pc = 0x257D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257D50u;
            // 0x257d54: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257D64u;
            goto label_257d64;
        }
    }
    ctx->pc = 0x257D58u;
    // 0x257d58: 0xc095fce  jal         func_257F38
    ctx->pc = 0x257D58u;
    SET_GPR_U32(ctx, 31, 0x257D60u);
    ctx->pc = 0x257D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D58u;
    // 0x257d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x257D58u, 0x257D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257D60u;
label_257d60:
    // 0x257d60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x257d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_257d64:
    // 0x257d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257d68: 0x3e00008  jr          $ra
    ctx->pc = 0x257D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D68u;
        // 0x257d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257D70u;
}
